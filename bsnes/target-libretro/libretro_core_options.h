#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include "libretro.h"
#include "libretro-common/include/retro_inline.h"

#ifndef HAVE_NO_LANGEXTRA
#include "libretro_core_options_intl.h"
#endif

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */


struct retro_core_option_v2_category option_cats_us[] = {
   {
      "video",
      "Video",
      "Change video output settings."
   },
   {
      "audio",
      "Audio",
      "Change audio output settings."
   },
   {
      "mode7",
      "HD Mode 7",
      "Change settings regarding Mode 7 graphics emulation."
   },
   {
      "hack",
      "Emulation Hacks and Enhancements",
      "Apply emulation hacks, enhancements and hotfixes."
   },
   {
      "overclock",
      "Over-/Downclocking",
      "Change the speed of the emulated hardware."
   },
   {
      "sgb",
      "Super Game Boy",
      "Change settings regarding the Super Game Boy emulation."
   },
   {
      "lightgun",
      "Light Gun",
      "Change (touchscreen) light gun settings."
   },

   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_us[] = {
   {
      "bsnes_aspect_ratio",
      "Preferred Aspect Ratio",
      NULL,
      "Choose the preferred content aspect ratio. This will only apply when RetroArch's aspect ratio is set to 'Core provided' in the Video settings.",
      NULL,
      "video",
      {
         { "Auto", NULL },
         { "8:7",  "Pixel Perfect" },
         { "4:3",  NULL },
         { "NTSC", NULL },
         { "PAL",  NULL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      "Crop Overscan",
      NULL,
      "Remove the borders at the top and bottom of the screen, typically unused by games and hidden by the bezel of a standard-definition television.",
      NULL,
      "video",
      {
         { "OFF", "8 Pixels" },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      "Blur Emulation",
      NULL,
      "Simulate the limited horizontal resolution of SDTVs by blurring together horizontally-adjacent pixels. Some games depend on this to emulate a transparency effect.",
      NULL,
      "video",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_video_filter",
      "Filter",
      "Filter",
      "Choose between no filtering and blargg's NTSC filter with options for RF, Composite, S-Video, or RGB",
      NULL,
      "video",
      {
         { "None", "None" },
         { "NTSC (RF)", "NTSC (RF)" },
         { "NTSC (Composite)", "NTSC (Composite)" },
         { "NTSC (S-Video)", "NTSC (S-Video)" },
         { "NTSC (RGB)", "NTSC (RGB)" },
         { NULL, NULL },
      },
      "None"
   },
   {
      "bsnes_ppu_fast",
      "PPU (Video) - Fast Mode",
      "PPU - Fast Mode",
      "Enable faster emulation of the PPU at the cost of a minor reduction of accuracy. It is recommended to leave this on. NOTE: this must be enabled for the 'Deinterlace', 'No Sprite Limit' and the 'HD Mode 7' options to work.",
      NULL,
      "video",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_ppu_deinterlace",
      "PPU (Video) - Deinterlace",
      "PPU - Deinterlace",
      "Deinterlace all games by rendering internally at 480p. Performance penalty is almost non-existent, so it is recommended to leave this on.",
      NULL,
      "video",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_ppu_no_sprite_limit",
      "PPU (Video) - No Sprite Limit",
      "PPU - No Sprite Limit",
      "Remove any limit to the number of sprites that can be drawn simultaneously on screen. May cause issues with some games.",
      NULL,
      "video",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_ppu_no_vram_blocking",
      "PPU (Video) - No VRAM Blocking",
      "PPU - No VRAM Blocking",
      "Emulate a bug in older releases of ZSNES and Snes9x, where VRAM blocking was not emulated. A few older ROM hacks relied on this behavior and will render graphics incorrectly if this is not enabled. This option is extremely inaccurate and hurts PPU speed, so it is recommended to leave it disabled unless you need to play a game that is otherwise incompatible with this core.",
      NULL,
      "video",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_dsp_fast",
      "DSP (Audio) - Fast Mode",
      "DSP - Fast Mode",
      "Enable faster emulation of the DSP at the cost of a minor reduction of accuracy. It is recommended to leave this on.",
      NULL,
      "audio",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_dsp_cubic",
      "DSP (Audio) - Cubic Interpolation",
      "DSP - Cubic Interpolation",
      "Apply cubic interpolation to the sound, preserving more of the high range.",
      NULL,
      "audio",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_dsp_echo_shadow",
      "DSP (Audio) - Echo Shadow RAM",
      "DSP - Echo Shadow RAM",
      "Emulate a bug in ZSNES where echo RAM was treated as separate from APU RAM. Many older ROM hacks for Super Mario World relied on this behavior and will crash without this. This option is extremely inaccurate and should not be enabled unless required.",
      NULL,
      "audio",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_mode7_scale",
      "HD Mode 7 - Scale",
      "Scale",
      "Increase the horizontal and vertical resolution of the Mode 7 graphics used in certain games.",
      NULL,
      "mode7",
      {
         { "1x", "240p (1x)"  },
         { "2x", "480p (2x)"  },
         { "3x", "720p (3x)"  },
         { "4x", "960p (4x)"  },
         { "5x", "1200p (5x)" },
         { "6x", "1440p (6x)" },
         { "7x", "1680p (7x)" },
         { "8x", "1920p (8x)" },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      "HD Mode 7 - Perspective Correction",
      "Perspective Correction",
      "Correct the perspective of the Mode 7 graphics used in certain games by working around some limitations of the integer math used by the SNES.",
      NULL,
      "mode7",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_mode7_supersample",
      "HD Mode 7 - Supersampling",
      "Supersampling",
      "Supersample the Mode 7 graphics used in certain games. Combined with higher Mode 7 scale factors, it produces an effect similar to anti-aliasing.",
      NULL,
      "mode7",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_mode7_mosaic",
      "HD Mode 7 - HD->SD Mosaic",
      "HD->SD Mosaic",
      "Show the mosaic effect of Mode 7 graphics even when upscaling them.",
      NULL,
      "mode7",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_run_ahead_frames",
      "Internal Run-Ahead",
      NULL,
      "Simulate the system ahead of time and roll back to reduce input latency. Has very high system requirements.",
      NULL,
      "hack",
      {
         { "OFF", "disabled" },
         { "1",   "1 frame"  },
         { "2",   "2 frames" },
         { "3",   "3 frames" },
         { "4",   "4 frames" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_coprocessor_delayed_sync",
      "Coprocessors - Fast Mode",
      NULL,
      "Enable faster emulation of the coprocessors at the cost of a minor reduction of accuracy. It is recommended to leave this on.",
      NULL,
      "hack",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      "Coprocessors - Prefer HLE",
      NULL,
      "When this option is enabled, less accurate HLE emulation will always be used when available. If disabled, HLE will only be used when LLE firmware is missing.",
      NULL,
      "hack",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_hotfixes",
      "Hotfixes",
      NULL,
      "Even commercially licensed and officially released software is sometimes shipped with bugs. This option will correct certain issues that occurred even on real hardware.",
      NULL,
      "hack",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_entropy",
      "Entropy (randomization)",
      NULL,
      "Choose the level of randomization of the memory and registers. If set to None, all memory and registers are initialized to constant values at startup. Low randomization provides the most accurate representation of a real system. High randomizes as much as possible.",
      NULL,
      "hack",
      {
         { "Low",  NULL },
         { "High", NULL },
         { "None", NULL },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_fastmath",
      "CPU Fast Math",
      NULL,
      "Provide computation results immediately. CPU multiplication and division take time to complete on a real SNES. Older emulators did not simulate these delays and thus some older ROM hacks do not wait for math operations to complete and need this hack.",
      NULL,
      "hack",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_cpu_overclock",
      "Overclocking - CPU",
      "CPU",
      "Overclock or downclock the CPU. Setting this value above 100% may reduce loading times and remove slowdown. Use with caution as it may also cause some games to crash or exhibit other issues.",
      NULL,
      "overclock",
      {
         { "10",  "10%"  },
         { "20",  "20%"  },
         { "30",  "30%"  },
         { "40",  "40%"  },
         { "50",  "50%"  },
         { "60",  "60%"  },
         { "70",  "70%"  },
         { "80",  "80%"  },
         { "90",  "90%"  },
         { "100", "100% (Default)" },
         { "110", "110%" },
         { "120", "120%" },
         { "130", "130%" },
         { "140", "140%" },
         { "150", "150%" },
         { "160", "160%" },
         { "170", "170%" },
         { "180", "180%" },
         { "190", "190%" },
         { "200", "200%" },
         { "210", "210%" },
         { "220", "220%" },
         { "230", "230%" },
         { "240", "240%" },
         { "250", "250%" },
         { "260", "260%" },
         { "270", "270%" },
         { "280", "280%" },
         { "290", "290%" },
         { "300", "300%" },
         { "310", "310%" },
         { "320", "320%" },
         { "330", "330%" },
         { "340", "340%" },
         { "350", "350%" },
         { "360", "360%" },
         { "370", "370%" },
         { "380", "380%" },
         { "390", "390%" },
         { "400", "400%" },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sa1_overclock",
      "Overclocking - SA-1 Coprocessor",
      "SA-1 Coprocessor",
      "Overclock or downclock the Super Accelerator 1 (SA-1) chip. Setting this value above 100% may improve performance in games that support the SA-1 chip. Use with caution, as it may also cause some games to crash or exhibit other issues.",
      NULL,
      "overclock",
      {
         { "10",  "10%"  },
         { "20",  "20%"  },
         { "30",  "30%"  },
         { "40",  "40%"  },
         { "50",  "50%"  },
         { "60",  "60%"  },
         { "70",  "70%"  },
         { "80",  "80%"  },
         { "90",  "90%"  },
         { "100", "100% (Default)" },
         { "110", "110%" },
         { "120", "120%" },
         { "130", "130%" },
         { "140", "140%" },
         { "150", "150%" },
         { "160", "160%" },
         { "170", "170%" },
         { "180", "180%" },
         { "190", "190%" },
         { "200", "200%" },
         { "210", "210%" },
         { "220", "220%" },
         { "230", "230%" },
         { "240", "240%" },
         { "250", "250%" },
         { "260", "260%" },
         { "270", "270%" },
         { "280", "280%" },
         { "290", "290%" },
         { "300", "300%" },
         { "310", "310%" },
         { "320", "320%" },
         { "330", "330%" },
         { "340", "340%" },
         { "350", "350%" },
         { "360", "360%" },
         { "370", "370%" },
         { "380", "380%" },
         { "390", "390%" },
         { "400", "400%" },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      "Overclocking - SuperFX Coprocessor",
      "SuperFX Coprocessor",
      "Overclock or downclock the SuperFX coprocessor. Setting this value above 100% may improve performance in games that support the SuperFX. Use with caution, as it may also cause some games to crash or exhibit other issues.",
      NULL,
      "overclock",
      {
         { "10",  "10%"  },
         { "20",  "20%"  },
         { "30",  "30%"  },
         { "40",  "40%"  },
         { "50",  "50%"  },
         { "60",  "60%"  },
         { "70",  "70%"  },
         { "80",  "80%"  },
         { "90",  "90%"  },
         { "100", "100% (Default)" },
         { "110", "110%" },
         { "120", "120%" },
         { "130", "130%" },
         { "140", "140%" },
         { "150", "150%" },
         { "160", "160%" },
         { "170", "170%" },
         { "180", "180%" },
         { "190", "190%" },
         { "200", "200%" },
         { "210", "210%" },
         { "220", "220%" },
         { "230", "230%" },
         { "240", "240%" },
         { "250", "250%" },
         { "260", "260%" },
         { "270", "270%" },
         { "280", "280%" },
         { "290", "290%" },
         { "300", "300%" },
         { "310", "310%" },
         { "320", "320%" },
         { "330", "330%" },
         { "340", "340%" },
         { "350", "350%" },
         { "360", "360%" },
         { "370", "370%" },
         { "380", "380%" },
         { "390", "390%" },
         { "400", "400%" },
         { "410", "410%" },
         { "420", "420%" },
         { "430", "430%" },
         { "440", "440%" },
         { "450", "450%" },
         { "460", "460%" },
         { "470", "470%" },
         { "480", "480%" },
         { "490", "490%" },
         { "500", "500%" },
         { "510", "510%" },
         { "520", "520%" },
         { "530", "530%" },
         { "540", "540%" },
         { "550", "550%" },
         { "560", "560%" },
         { "570", "570%" },
         { "580", "580%" },
         { "590", "590%" },
         { "600", "600%" },
         { "610", "610%" },
         { "620", "620%" },
         { "630", "630%" },
         { "640", "640%" },
         { "650", "650%" },
         { "660", "660%" },
         { "670", "670%" },
         { "680", "680%" },
         { "690", "690%" },
         { "700", "700%" },
         { "710", "710%" },
         { "720", "720%" },
         { "730", "730%" },
         { "740", "740%" },
         { "750", "750%" },
         { "760", "760%" },
         { "770", "770%" },
         { "780", "780%" },
         { "790", "790%" },
         { "800", "800%" },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_sgb_bios",
      "Preferred Super Game Boy BIOS (Restart Required)",
      NULL,
      "Choose the preferred Super Game Boy BIOS to be used with compatible titles.",
      NULL,
      "sgb",
      {
         { "SGB1.sfc", "Super Game Boy (SGB1.sfc)"   },
         { "SGB2.sfc", "Super Game Boy 2 (SGB2.sfc)" },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_hide_sgb_border",
      "Hide SGB Border",
      NULL,
      "Hide the border when playing Super Game Boy games. Only works when 'Crop Overscan' is enabled.",
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      "Touchscreen Light Gun",
      NULL,
      "Enable Super Scope input for touchscreen devices.",
      NULL,
      "lightgun",
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_touchscreen_lightgun_superscope_reverse",
      "Super Scope Reverse Trigger Buttons",
      NULL,
      "Reverse the Super Scope trigger and cursor buttons with the touchscreen lightgun.",
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};

struct retro_core_options_v2 options_us = {
   option_cats_us,
   option_defs_us
};

/*
 ********************************
 * Language Mapping
 ********************************
*/

#ifndef HAVE_NO_LANGEXTRA
struct retro_core_options_v2 *options_intl[RETRO_LANGUAGE_LAST] = {
   &options_us, /* RETRO_LANGUAGE_ENGLISH */
   &options_ja,      /* RETRO_LANGUAGE_JAPANESE */
   &options_fr,      /* RETRO_LANGUAGE_FRENCH */
   &options_es,      /* RETRO_LANGUAGE_SPANISH */
   &options_de,      /* RETRO_LANGUAGE_GERMAN */
   &options_it,      /* RETRO_LANGUAGE_ITALIAN */
   &options_nl,      /* RETRO_LANGUAGE_DUTCH */
   &options_pt_br,   /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   &options_pt_pt,   /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   &options_ru,      /* RETRO_LANGUAGE_RUSSIAN */
   &options_ko,      /* RETRO_LANGUAGE_KOREAN */
   &options_cht,     /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   &options_chs,     /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   &options_eo,      /* RETRO_LANGUAGE_ESPERANTO */
   &options_pl,      /* RETRO_LANGUAGE_POLISH */
   &options_vn,      /* RETRO_LANGUAGE_VIETNAMESE */
   &options_ar,      /* RETRO_LANGUAGE_ARABIC */
   &options_el,      /* RETRO_LANGUAGE_GREEK */
   &options_tr,      /* RETRO_LANGUAGE_TURKISH */
   &options_sk,      /* RETRO_LANGUAGE_SLOVAK */
   &options_fa,      /* RETRO_LANGUAGE_PERSIAN */
   &options_he,      /* RETRO_LANGUAGE_HEBREW */
   &options_ast,     /* RETRO_LANGUAGE_ASTURIAN */
   &options_fi,      /* RETRO_LANGUAGE_FINNISH */
   &options_id,      /* RETRO_LANGUAGE_INDONESIAN */
   &options_sv,      /* RETRO_LANGUAGE_SWEDISH */
   &options_uk,      /* RETRO_LANGUAGE_UKRAINIAN */
   &options_cs,      /* RETRO_LANGUAGE_CZECH */
   &options_val,     /* RETRO_LANGUAGE_CATALAN_VALENCIA */
   &options_ca,      /* RETRO_LANGUAGE_CATALAN */
   &options_en,      /* RETRO_LANGUAGE_BRITISH_ENGLISH */
   &options_hu,      /* RETRO_LANGUAGE_HUNGARIAN */
};
#endif

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should be called as early as possible - ideally inside
 * retro_set_environment(), and no later than retro_load_game()
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb,
      bool *categories_supported)
{
   unsigned version  = 0;
#ifndef HAVE_NO_LANGEXTRA
   unsigned language = 0;
#endif

   if (!environ_cb || !categories_supported)
      return;

   *categories_supported = false;

   if (!environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version))
      version = 0;

   if (version >= 2)
   {
#ifndef HAVE_NO_LANGEXTRA
      struct retro_core_options_v2_intl core_options_intl;

      core_options_intl.us    = &options_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = options_intl[language];

      *categories_supported = environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2_INTL,
            &core_options_intl);
#else
      *categories_supported = environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2,
            &options_us);
#endif
   }
   else
   {
      size_t i, j;
      size_t option_index              = 0;
      size_t num_options               = 0;
      struct retro_core_option_definition
            *option_v1_defs_us         = NULL;
#ifndef HAVE_NO_LANGEXTRA
      size_t num_options_intl          = 0;
      struct retro_core_option_v2_definition
            *option_defs_intl          = NULL;
      struct retro_core_option_definition
            *option_v1_defs_intl       = NULL;
      struct retro_core_options_intl
            core_options_v1_intl;
#endif
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine total number of options */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      if (version >= 1)
      {
         /* Allocate US array */
         option_v1_defs_us = (struct retro_core_option_definition *)
               calloc(num_options + 1, sizeof(struct retro_core_option_definition));

         /* Copy parameters from option_defs_us array */
         for (i = 0; i < num_options; i++)
         {
            struct retro_core_option_v2_definition *option_def_us = &option_defs_us[i];
            struct retro_core_option_value *option_values         = option_def_us->values;
            struct retro_core_option_definition *option_v1_def_us = &option_v1_defs_us[i];
            struct retro_core_option_value *option_v1_values      = option_v1_def_us->values;

            option_v1_def_us->key           = option_def_us->key;
            option_v1_def_us->desc          = option_def_us->desc;
            option_v1_def_us->info          = option_def_us->info;
            option_v1_def_us->default_value = option_def_us->default_value;

            /* Values must be copied individually... */
            while (option_values->value)
            {
               option_v1_values->value = option_values->value;
               option_v1_values->label = option_values->label;

               option_values++;
               option_v1_values++;
            }
         }

#ifndef HAVE_NO_LANGEXTRA
         if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
             (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH) &&
             options_intl[language])
            option_defs_intl = options_intl[language]->definitions;

         if (option_defs_intl)
         {
            /* Determine number of intl options */
            while (true)
            {
               if (option_defs_intl[num_options_intl].key)
                  num_options_intl++;
               else
                  break;
            }

            /* Allocate intl array */
            option_v1_defs_intl = (struct retro_core_option_definition *)
                  calloc(num_options_intl + 1, sizeof(struct retro_core_option_definition));

            /* Copy parameters from option_defs_intl array */
            for (i = 0; i < num_options_intl; i++)
            {
               struct retro_core_option_v2_definition *option_def_intl = &option_defs_intl[i];
               struct retro_core_option_value *option_values           = option_def_intl->values;
               struct retro_core_option_definition *option_v1_def_intl = &option_v1_defs_intl[i];
               struct retro_core_option_value *option_v1_values        = option_v1_def_intl->values;

               option_v1_def_intl->key           = option_def_intl->key;
               option_v1_def_intl->desc          = option_def_intl->desc;
               option_v1_def_intl->info          = option_def_intl->info;
               option_v1_def_intl->default_value = option_def_intl->default_value;

               /* Values must be copied individually... */
               while (option_values->value)
               {
                  option_v1_values->value = option_values->value;
                  option_v1_values->label = option_values->label;

                  option_values++;
                  option_v1_values++;
               }
            }
         }

         core_options_v1_intl.us    = option_v1_defs_us;
         core_options_v1_intl.local = option_v1_defs_intl;

         environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_v1_intl);
#else
         environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS, option_v1_defs_us);
#endif
      }
      else
      {
         /* Allocate arrays */
         variables  = (struct retro_variable *)calloc(num_options + 1,
               sizeof(struct retro_variable));
         values_buf = (char **)calloc(num_options, sizeof(char *));

         if (!variables || !values_buf)
            goto error;

         /* Copy parameters from option_defs_us array */
         for (i = 0; i < num_options; i++)
         {
            const char *key                        = option_defs_us[i].key;
            const char *desc                       = option_defs_us[i].desc;
            const char *default_value              = option_defs_us[i].default_value;
            struct retro_core_option_value *values = option_defs_us[i].values;
            size_t buf_len                         = 3;
            size_t default_index                   = 0;

            values_buf[i] = NULL;

            if (desc)
            {
               size_t num_values = 0;

               /* Determine number of values */
               while (true)
               {
                  if (values[num_values].value)
                  {
                     /* Check if this is the default value */
                     if (default_value)
                        if (strcmp(values[num_values].value, default_value) == 0)
                           default_index = num_values;

                     buf_len += strlen(values[num_values].value);
                     num_values++;
                  }
                  else
                     break;
               }

               /* Build values string */
               if (num_values > 0)
               {
                  buf_len += num_values - 1;
                  buf_len += strlen(desc);

                  values_buf[i] = (char *)calloc(buf_len, sizeof(char));
                  if (!values_buf[i])
                     goto error;

                  strcpy(values_buf[i], desc);
                  strcat(values_buf[i], "; ");

                  /* Default value goes first */
                  strcat(values_buf[i], values[default_index].value);

                  /* Add remaining values */
                  for (j = 0; j < num_values; j++)
                  {
                     if (j != default_index)
                     {
                        strcat(values_buf[i], "|");
                        strcat(values_buf[i], values[j].value);
                     }
                  }
               }
            }

            variables[option_index].key   = key;
            variables[option_index].value = values_buf[i];
            option_index++;
         }

         /* Set variables */
         environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);
      }

error:
      /* Clean up */

      if (option_v1_defs_us)
      {
         free(option_v1_defs_us);
         option_v1_defs_us = NULL;
      }

#ifndef HAVE_NO_LANGEXTRA
      if (option_v1_defs_intl)
      {
         free(option_v1_defs_intl);
         option_v1_defs_intl = NULL;
      }
#endif

      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
