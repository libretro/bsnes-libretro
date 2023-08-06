#include <cassert>
#include "libretro.h"
#include "libretro_core_options.h"
#include <emulator/emulator.hpp>
#include <sfc/interface/interface.hpp>
#include "program.h"

retro_environment_t environ_cb;
retro_video_refresh_t video_cb;
retro_audio_sample_t audio_cb;
retro_audio_sample_batch_t audio_batch_cb;
retro_input_poll_t input_poll;
retro_input_state_t input_state;
retro_log_printf_t libretro_print;

struct Program *program = nullptr;
bool sgb_border_disabled = false;
bool retro_pointer_enabled = false;
bool retro_pointer_superscope_reverse_buttons = false;

#define SAMPLERATE 48000
#define AUDIOBUFSIZE (SAMPLERATE/50) * 2
static int16_t audio_buffer[AUDIOBUFSIZE];
static uint16_t audio_buffer_index = 0;
static uint16_t audio_buffer_max = AUDIOBUFSIZE;

static int run_ahead_frames = 0;

void audio_queue(int16_t left, int16_t right)
{
	audio_buffer[audio_buffer_index++] = left;
	audio_buffer[audio_buffer_index++] = right;

	if (audio_buffer_index == audio_buffer_max)
	{
		audio_batch_cb(audio_buffer, audio_buffer_max/2);
		audio_buffer_index = 0;
	}
}

static unique_pointer<Emulator::Interface> emulator;

static string sgb_bios;
static vector<string> cheatList;
static int aspect_ratio_mode = 0;

static bool ppu_fast_options = true;

#define RETRO_DEVICE_JOYPAD_MULTITAP       RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_JOYPAD, 0)
#define RETRO_DEVICE_LIGHTGUN_SUPER_SCOPE  RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_LIGHTGUN, 0)
#define RETRO_DEVICE_LIGHTGUN_JUSTIFIER    RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_LIGHTGUN, 1)
#define RETRO_DEVICE_LIGHTGUN_JUSTIFIERS   RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_LIGHTGUN, 2)

#define RETRO_GAME_TYPE_SGB             0x101 | 0x1000
#define RETRO_GAME_TYPE_BSX             0x110 | 0x1000
#define RETRO_MEMORY_SGB_SRAM ((1 << 8) | RETRO_MEMORY_SAVE_RAM)
#define RETRO_MEMORY_GB_SRAM ((2 << 8) | RETRO_MEMORY_SAVE_RAM)
#define RETRO_MEMORY_BSX_SRAM ((3 << 8) | RETRO_MEMORY_SAVE_RAM)

static double get_aspect_ratio()
{
	double ratio;

	if (aspect_ratio_mode == 0 && program->gameBoy.program && sgb_border_disabled == true && program->overscan == false)
		ratio = 10.0/9.0;
	else if (aspect_ratio_mode == 0 && program->superFamicom.region == "NTSC")
		ratio = 1.306122;
	else if (aspect_ratio_mode == 0 && program->superFamicom.region == "PAL")
		ratio = 1.584216;
	else if (aspect_ratio_mode == 1) // 8:7 or 10:9 depending on whenever the SGB border is shown
		if (program->gameBoy.program && sgb_border_disabled == true && program->overscan == false)
			ratio = 10.0/9.0;
		else
			ratio = 8.0/7.0;
	else if (aspect_ratio_mode == 2) // 4:3
		return 4.0/3.0;
	else if (aspect_ratio_mode == 3) // NTSC
		ratio = 1.306122;
	else if (aspect_ratio_mode == 4) // PAL
		ratio = 1.584216;
	else
		ratio = 8.0/7.0; // Default

	if (program->overscan)
		return (ratio / 240) * 224;
	else
		return ratio;
}

static bool update_option_visibility(void)
{
	struct retro_core_option_display option_display;
	struct retro_variable var;
	bool updated = false;

	// Show/hide core options that only work if 'PPU - Fast Mode' is enabled
	bool ppu_fast_options_prev = ppu_fast_options;

	ppu_fast_options = true;
	var.key = "bsnes_ppu_fast";
	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value && !strcmp(var.value, "OFF"))
		ppu_fast_options = false;

	if (ppu_fast_options != ppu_fast_options_prev)
	{
		option_display.visible = ppu_fast_options;

		option_display.key = "bsnes_ppu_deinterlace";
		environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &option_display);

		option_display.key = "bsnes_ppu_no_sprite_limit";
		environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &option_display);

		option_display.key = "bsnes_mode7_scale";
		environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &option_display);

		option_display.key = "bsnes_mode7_perspective";
		environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &option_display);

		option_display.key = "bsnes_mode7_supersample";
		environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &option_display);

		option_display.key = "bsnes_mode7_mosaic";
		environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &option_display);

		updated = true;
	}

	return updated;
}

static void update_variables(void)
{
	char key[256];
	struct retro_variable var;

	var.key = "bsnes_aspect_ratio";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "8:7") == 0)
			aspect_ratio_mode = 1;
		else if (strcmp(var.value, "4:3") == 0)
			aspect_ratio_mode = 2;
		else if (strcmp(var.value, "NTSC") == 0)
			aspect_ratio_mode = 3;
		else if (strcmp(var.value, "PAL") == 0)
			aspect_ratio_mode = 4;
		else
			aspect_ratio_mode = 0;
	}

	var.key = "bsnes_ppu_show_overscan";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			program->overscan = true;
		else if (strcmp(var.value, "OFF") == 0)
			program->overscan = false;
	}

	var.key = "bsnes_blur_emulation";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Video/BlurEmulation", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Video/BlurEmulation", false);
	}

	var.key = "bsnes_hotfixes";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/Hotfixes", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/Hotfixes", false);
	}

	var.key = "bsnes_entropy";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "None") == 0)
			emulator->configure("Hacks/Entropy", "None");
		else if (strcmp(var.value, "Low") == 0)
			emulator->configure("Hacks/Entropy", "Low");
		else if (strcmp(var.value, "High") == 0)
			emulator->configure("Hacks/Entropy", "High");
	}

	var.key = "bsnes_cpu_overclock";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		int val = atoi(var.value);
		emulator->configure("Hacks/CPU/Overclock", val);
	}

	var.key = "bsnes_cpu_fastmath";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/CPU/FastMath", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/CPU/FastMath", false);
	}

	var.key = "bsnes_cpu_sa1_overclock";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		int val = atoi(var.value);
		emulator->configure("Hacks/SA1/Overclock", val);
	}

	var.key = "bsnes_cpu_sfx_overclock";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		int val = atoi(var.value);
		emulator->configure("Hacks/SuperFX/Overclock", val);
	}

	var.key = "bsnes_ppu_fast";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/PPU/Fast", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/PPU/Fast", false);
	}

	var.key = "bsnes_ppu_deinterlace";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/PPU/Deinterlace", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/PPU/Deinterlace", false);
	}

	var.key = "bsnes_ppu_no_sprite_limit";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/PPU/NoSpriteLimit", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/PPU/NoSpriteLimit", false);
	}

	var.key = "bsnes_ppu_no_vram_blocking";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/PPU/NoVRAMBlocking", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/PPU/NoVRAMBlocking", false);
	}

	var.key = "bsnes_mode7_scale";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		int val = var.value[0] - '0';

		if (val >= 1 && val <= 8)
			emulator->configure("Hacks/PPU/Mode7/Scale", val);
	}

	var.key = "bsnes_mode7_perspective";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/PPU/Mode7/Perspective", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/PPU/Mode7/Perspective", false);
	}

	var.key = "bsnes_mode7_supersample";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/PPU/Mode7/Supersample", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/PPU/Mode7/Supersample", false);
	}

	var.key = "bsnes_mode7_mosaic";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/PPU/Mode7/Mosaic", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/PPU/Mode7/Mosaic", false);
	}

	var.key = "bsnes_dsp_fast";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/DSP/Fast", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/DSP/Fast", false);
	}

	var.key = "bsnes_dsp_cubic";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/DSP/Cubic", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/DSP/Cubic", false);
	}

	var.key = "bsnes_dsp_echo_shadow";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/DSP/EchoShadow", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/DSP/EchoShadow", false);
	}

	var.key = "bsnes_coprocessor_delayed_sync";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/Coprocessor/DelayedSync", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/Coprocessor/DelayedSync", false);
	}

	var.key = "bsnes_coprocessor_prefer_hle";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			emulator->configure("Hacks/Coprocessor/PreferHLE", true);
		else if (strcmp(var.value, "OFF") == 0)
			emulator->configure("Hacks/Coprocessor/PreferHLE", false);
	}

	var.key = "bsnes_sgb_bios";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		sgb_bios = var.value;
	}

	var.key = "bsnes_run_ahead_frames";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "OFF") == 0)
			run_ahead_frames = 0;
		else
			run_ahead_frames = atoi(var.value);
	}

	var.key = "bsnes_touchscreen_lightgun";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
		{
			emulator->configure("Input/Pointer/Relative", false);
			retro_pointer_enabled = true;
		}
		else if (strcmp(var.value, "OFF") == 0)
		{
			emulator->configure("Input/Pointer/Relative", true);
			retro_pointer_enabled = false;
		}
	}

	var.key = "bsnes_touchscreen_lightgun_superscope_reverse";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			retro_pointer_superscope_reverse_buttons = true;
		else if (strcmp(var.value, "OFF") == 0)
			retro_pointer_superscope_reverse_buttons = false;

	}

	var.key = "bsnes_hide_sgb_border";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "ON") == 0)
			sgb_border_disabled = true;
		else if (strcmp(var.value, "OFF") == 0)
			sgb_border_disabled = false;

	}

	var.key = "bsnes_video_filter";
	var.value = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
	{
		if (strcmp(var.value, "None") == 0) {
			program->filterRender = &Filter::None::render;
			program->filterSize = &Filter::None::size;
		}
		else if (strcmp(var.value, "NTSC (RF)") == 0) {
			program->filterRender = &Filter::NTSC_RF::render;
			program->filterSize = &Filter::NTSC_RF::size;
		}
		else if (strcmp(var.value, "NTSC (Composite)") == 0) {
			program->filterRender = &Filter::NTSC_Composite::render;
			program->filterSize = &Filter::NTSC_Composite::size;
		}
		else if (strcmp(var.value, "NTSC (S-Video)") == 0) {
			program->filterRender = &Filter::NTSC_SVideo::render;
			program->filterSize = &Filter::NTSC_SVideo::size;
		}
		else if (strcmp(var.value, "NTSC (RGB)") == 0) {
			program->filterRender = &Filter::NTSC_RGB::render;
			program->filterSize = &Filter::NTSC_RGB::size;
		}
	}

	update_option_visibility();
}

void update_geometry(void)
{
	struct retro_system_av_info avinfo;
	retro_get_system_av_info(&avinfo);
	avinfo.geometry.aspect_ratio = get_aspect_ratio();
	environ_cb(RETRO_ENVIRONMENT_SET_GEOMETRY, &avinfo);
}

static uint retro_device_to_snes(unsigned device)
{
	switch (device)
	{
		default:
		case RETRO_DEVICE_NONE:
			return SuperFamicom::ID::Device::None;
		case RETRO_DEVICE_JOYPAD:
			return SuperFamicom::ID::Device::Gamepad;
		case RETRO_DEVICE_ANALOG:
			return SuperFamicom::ID::Device::Gamepad;
		case RETRO_DEVICE_JOYPAD_MULTITAP:
			return SuperFamicom::ID::Device::SuperMultitap;
		case RETRO_DEVICE_MOUSE:
			return SuperFamicom::ID::Device::Mouse;
		case RETRO_DEVICE_LIGHTGUN_SUPER_SCOPE:
			return SuperFamicom::ID::Device::SuperScope;
		case RETRO_DEVICE_LIGHTGUN_JUSTIFIER:
			return SuperFamicom::ID::Device::Justifier;
		case RETRO_DEVICE_LIGHTGUN_JUSTIFIERS:
			return SuperFamicom::ID::Device::Justifiers;
	}
}

static void set_controller_ports(unsigned port, unsigned device)
{
	if (port < 2)
		emulator->connect(port, retro_device_to_snes(device));
}

static void set_environment_info(retro_environment_t cb)
{

	static const struct retro_subsystem_memory_info sgb_memory[] = {
		{ "srm", RETRO_MEMORY_SGB_SRAM },
	};

	static const struct retro_subsystem_memory_info gb_memory[] = {
		{ "srm", RETRO_MEMORY_GB_SRAM },
	};

	static const struct retro_subsystem_memory_info bsx_memory[] = {
		{ "srm", RETRO_MEMORY_BSX_SRAM },
	};

	static const struct retro_subsystem_rom_info sgb_roms[] = {
		{ "Game Boy ROM", "gb|gbc", true, false, true, gb_memory, 1 },
		{ "Super Game Boy ROM", "smc|sfc|swc|fig", true, false, true, sgb_memory, 1 },
	};

	static const struct retro_subsystem_rom_info bsx_roms[] = {
		{ "BS-X ROM", "bs", true, false, true, bsx_memory, 1 },
		{ "BS-X BIOS ROM", "smc|sfc|swc|fig", true, false, true, bsx_memory, 1 },
	};

	static const struct retro_subsystem_info subsystems[] = {
		{ "Super Game Boy", "sgb", sgb_roms, 2, RETRO_GAME_TYPE_SGB },
		{ "BS-X Satellaview", "bsx", bsx_roms, 2, RETRO_GAME_TYPE_BSX },
		{}
	};

	cb(RETRO_ENVIRONMENT_SET_SUBSYSTEM_INFO,  (void*)subsystems);

	static const retro_controller_description port_1[] = {
		{ "SNES Joypad", RETRO_DEVICE_JOYPAD },
		{ "SNES Mouse", RETRO_DEVICE_MOUSE },
	};

	static const retro_controller_description port_2[] = {
		{ "SNES Joypad", RETRO_DEVICE_JOYPAD },
		{ "SNES Mouse", RETRO_DEVICE_MOUSE },
		{ "Multitap", RETRO_DEVICE_JOYPAD_MULTITAP },
		{ "SuperScope", RETRO_DEVICE_LIGHTGUN_SUPER_SCOPE },
		{ "Justifier", RETRO_DEVICE_LIGHTGUN_JUSTIFIER },
		{ "Justifiers", RETRO_DEVICE_LIGHTGUN_JUSTIFIERS },
	};

	static const retro_controller_info ports[] = {
		{ port_1, 2 },
		{ port_2, 6 },
		{ 0 },
	};

	cb(RETRO_ENVIRONMENT_SET_CONTROLLER_INFO, const_cast<retro_controller_info *>(ports));

	static const retro_input_descriptor desc[] = {
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "D-Pad Left" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "D-Pad Up" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "D-Pad Down" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "B" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "A" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "X" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "Y" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "L" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "R" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "Select" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Start" },

		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "D-Pad Left" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "D-Pad Up" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "D-Pad Down" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "B" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "A" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "X" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "Y" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "L" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "R" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "Select" },
		{ 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Start" },

		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "D-Pad Left" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "D-Pad Up" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "D-Pad Down" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "B" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "A" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "X" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "Y" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "L" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "R" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "Select" },
		{ 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Start" },

		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "D-Pad Left" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "D-Pad Up" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "D-Pad Down" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "B" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "A" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "X" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "Y" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "L" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "R" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "Select" },
		{ 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Start" },

		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "D-Pad Left" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "D-Pad Up" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "D-Pad Down" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "B" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "A" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "X" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "Y" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "L" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "R" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "Select" },
		{ 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Start" },

		{ 0 },
	};

	cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, const_cast<retro_input_descriptor *>(desc));

}

void retro_set_environment(retro_environment_t cb)
{
	static bool categories_supported = false;

	environ_cb = cb;

	libretro_set_core_options(environ_cb,
							  &categories_supported);

	struct retro_core_options_update_display_callback update_display_cb;
	update_display_cb.callback = update_option_visibility;
	environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_UPDATE_DISPLAY_CALLBACK, &update_display_cb);

	retro_log_callback log = {};
	if (environ_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log) && log.log)
		libretro_print = log.log;

	set_environment_info(cb);
}

void retro_set_video_refresh(retro_video_refresh_t cb)
{
	video_cb = cb;
}

void retro_set_audio_sample(retro_audio_sample_t cb)
{
	audio_cb = cb;
}

void retro_set_audio_sample_batch(retro_audio_sample_batch_t cb)
{
	audio_batch_cb = cb;
}

void retro_set_input_poll(retro_input_poll_t cb)
{
	input_poll = cb;
}

void retro_set_input_state(retro_input_state_t cb)
{
	input_state = cb;
}

void retro_init()
{
	emulator = new SuperFamicom::Interface;
	program = new Program(emulator.data());
}

void retro_deinit()
{
	delete program;
	emulator.reset();
}

unsigned retro_api_version()
{
	return RETRO_API_VERSION;
}

void retro_get_system_info(retro_system_info *info)
{
	info->library_name     = "bsnes";
#ifndef GIT_VERSION
#define GIT_VERSION ""
#endif
	static string version(Emulator::Version, GIT_VERSION);
	info->library_version  = version;
	info->need_fullpath    = true;
	info->valid_extensions = "smc|sfc|gb|gbc|bs";
	info->block_extract = false;
}

void retro_get_system_av_info(struct retro_system_av_info *info)
{
	info->geometry.base_width  = 512;   // accurate ppu
	info->geometry.base_height = program->overscan ? 480 : 448; // accurate ppu
	info->geometry.max_width   = 2048;  // 8x 256 for hd mode 7
	info->geometry.max_height  = 1920;  // 8x 240
	info->geometry.aspect_ratio = get_aspect_ratio();
	info->timing.sample_rate   = SAMPLERATE;

	if (retro_get_region() == RETRO_REGION_NTSC) {
		info->timing.fps = 21477272.0 / 357366.0;
		audio_buffer_max = (SAMPLERATE/60) * 2;
	}
	else
	{
		info->timing.fps = 21281370.0 / 425568.0;
	}
}

void retro_set_controller_port_device(unsigned port, unsigned device)
{
	set_controller_ports(port, device);
}

void retro_reset()
{
	emulator->reset();
}

static void run_with_runahead(const int frames)
{
	assert(frames > 0);

	emulator->setRunAhead(true);
	emulator->run();
	auto state = emulator->serialize(0);
	for (int i = 0; i < frames - 1; ++i) {
		emulator->run();
	}
	emulator->setRunAhead(false);
	emulator->run();
	state.setMode(serializer::Mode::Load);
	emulator->unserialize(state);
}

void retro_run()
{
	input_poll();

	bool updated = false;
	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
	{
		update_variables();
		update_geometry();
	}

	bool is_fast_forwarding = false;
	environ_cb(RETRO_ENVIRONMENT_GET_FASTFORWARDING, &is_fast_forwarding);
	if (is_fast_forwarding || run_ahead_frames == 0)
		emulator->run();
	else
		run_with_runahead(run_ahead_frames);
}

size_t retro_serialize_size()
{
	return emulator->serialize().size();
}

bool retro_serialize(void *data, size_t size)
{
	memcpy(data, emulator->serialize().data(), size);
	return true;
}

bool retro_unserialize(const void *data, size_t size)
{
	serializer s(static_cast<const uint8_t *>(data), size);
	return emulator->unserialize(s);
}

void retro_cheat_reset()
{
	cheatList.reset();
	emulator->cheats(cheatList);
}

void retro_cheat_set(unsigned index, bool enabled, const char *code)
{
	string cheat = string(code);
	int chl = 0;

	if (program->gameBoy.program)
	{
		return;
	}
	else
	{
		if(code[4u] == '-') {
			for(;;) {
				string code1 = {cheat.slice((0 + chl), 4), cheat.slice((5 + chl), 4)};
				code1.transform("DF4709156BC8A23E", "df4709156bc8a23e");
				code1.transform("df4709156bc8a23e", "0123456789abcdef");
				uint32_t r = toHex(code1);
				uint address =
				(!!(r & 0x002000) << 23) | (!!(r & 0x001000) << 22)
				| (!!(r & 0x000800) << 21) | (!!(r & 0x000400) << 20)
				| (!!(r & 0x000020) << 19) | (!!(r & 0x000010) << 18)
				| (!!(r & 0x000008) << 17) | (!!(r & 0x000004) << 16)
				| (!!(r & 0x800000) << 15) | (!!(r & 0x400000) << 14)
				| (!!(r & 0x200000) << 13) | (!!(r & 0x100000) << 12)
				| (!!(r & 0x000002) << 11) | (!!(r & 0x000001) << 10)
				| (!!(r & 0x008000) <<  9) | (!!(r & 0x004000) <<  8)
				| (!!(r & 0x080000) <<  7) | (!!(r & 0x040000) <<  6)
				| (!!(r & 0x020000) <<  5) | (!!(r & 0x010000) <<  4)
				| (!!(r & 0x000200) <<  3) | (!!(r & 0x000100) <<  2)
				| (!!(r & 0x000080) <<  1) | (!!(r & 0x000040) <<  0);
				uint data = r >> 24;
				code1 = {hex(address, 6L), "=", hex(data, 2L)};
				cheatList.append(code1);
				emulator->cheats(cheatList);
				if(code[(9 + chl)] != '+') {
					return;
				}
				chl = (chl + 10);
			}
		}
		else if(code[8u] == '+') {
			for(;;) {
				string code1 = {cheat.slice((0 + chl), 8)};
				uint32_t r = toHex(code1);
				uint address = r >> 8;
				uint data = r & 0xff;
				code1 = {hex(address, 6L), "=", hex(data, 2L)};
				cheatList.append(code1);
				emulator->cheats(cheatList);
				if(code[(8 + chl)] != '+') {
					return;
				}
				chl = (chl + 9);
			}
		}
		else {
			string code1 = {cheat.slice((0 + chl), 8)};
			uint32_t r = toHex(code1);
			uint address = r >> 8;
			uint data = r & 0xff;
			code1 = {hex(address, 6L), "=", hex(data, 2L)};
			cheatList.append(code1);
			emulator->cheats(cheatList);
		}
	}
}

bool retro_load_game(const retro_game_info *game)
{
	retro_pixel_format fmt = RETRO_PIXEL_FORMAT_XRGB8888;
	if (!environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &fmt))
		return false;

	emulator->configure("Audio/Frequency", SAMPLERATE);
	program->filterRender = &Filter::None::render;
	program->filterSize = &Filter::None::size;
	program->updateVideoPalette();

	update_variables();

	if (string(game->path).endsWith(".gb") || string(game->path).endsWith(".gbc"))
	{
		const char *system_dir;
		environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &system_dir);
		string sgb_full_path = string(game->path).transform("\\", "/");
		string sgb_full_path2 = string(sgb_full_path).replace(".gbc", ".sfc").replace(".gb", ".sfc");
		if (!file::exists(sgb_full_path2)) {
			string sgb_full_path = string(system_dir, "/", sgb_bios).transform("\\", "/");
			program->superFamicom.location = sgb_full_path;
		}
		else {
			program->superFamicom.location = sgb_full_path2;
		}
		program->gameBoy.location = string(game->path);
		if (!file::exists(program->superFamicom.location)) {
			return false;
		}
	}
	else if (string(game->path).endsWith(".bs"))
	{
		const char *system_dir;
		environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &system_dir);
		string bs_full_path = string(system_dir, "/", "BS-X.bin").transform("\\", "/");
		if (!file::exists(bs_full_path)) {
			return false;
		}

		program->superFamicom.location = bs_full_path;
		program->bsMemory.location = string(game->path);
	}
	else
	{
		program->superFamicom.location = string(game->path);
	}
	program->base_name = string(game->path);

	program->load();

	emulator->connect(SuperFamicom::ID::Port::Controller1, SuperFamicom::ID::Device::Gamepad);
	emulator->connect(SuperFamicom::ID::Port::Controller2, SuperFamicom::ID::Device::Gamepad);
	return true;
}

bool retro_load_game_special(unsigned game_type,
		const struct retro_game_info *info, size_t num_info)
{
	emulator->configure("Audio/Frequency", SAMPLERATE);

	update_variables();

	switch(game_type)
	{
		case RETRO_GAME_TYPE_SGB:
		{
			libretro_print(RETRO_LOG_INFO, "GB ROM: %s\n", info[0].path);
			libretro_print(RETRO_LOG_INFO, "SGB ROM: %s\n", info[1].path);
			program->gameBoy.location = info[0].path;
			program->superFamicom.location = info[1].path;
			program->base_name = info[0].path;
		}
		break;
		case RETRO_GAME_TYPE_BSX:
		{
			libretro_print(RETRO_LOG_INFO, "BS-X ROM: %s\n", info[0].path);
			libretro_print(RETRO_LOG_INFO, "BS-X BIOS ROM: %s\n", info[1].path);
			program->bsMemory.location = info[0].path;
			program->superFamicom.location = info[1].path;
			program->base_name = info[0].path;
		}
		break;
		default:
			return false;
	}

	program->load();

	emulator->connect(SuperFamicom::ID::Port::Controller1, SuperFamicom::ID::Device::Gamepad);
	emulator->connect(SuperFamicom::ID::Port::Controller2, SuperFamicom::ID::Device::Gamepad);
	return true;
}

void retro_unload_game()
{
	program->save();
	emulator->unload();
}

unsigned retro_get_region()
{
	return program->superFamicom.region == "NTSC" ? RETRO_REGION_NTSC : RETRO_REGION_PAL;
}

// Currently, there is no safe/sensible way to use the memory interface without severe hackery.
// Rely on higan to load and save SRAM until there is really compelling reason not to.
void *retro_get_memory_data(unsigned id)
{
	return nullptr;
}

size_t retro_get_memory_size(unsigned id)
{
	return 0;
}
