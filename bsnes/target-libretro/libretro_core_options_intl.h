#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include "libretro.h"

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
/* RETRO_LANGUAGE_AR */

#define CATEGORY_VIDEO_LABEL_AR "فيديو"
#define CATEGORY_VIDEO_INFO_0_AR "تغيير إعدادات إخراج الفيديو."
#define CATEGORY_AUDIO_LABEL_AR "نظام تشغيل الصوت"
#define CATEGORY_AUDIO_INFO_0_AR "تغيير إعدادات إخراج الصوت."
#define CATEGORY_MODE7_LABEL_AR NULL
#define CATEGORY_MODE7_INFO_0_AR NULL
#define CATEGORY_SGB_LABEL_AR NULL
#define CATEGORY_SGB_INFO_0_AR NULL
#define CATEGORY_LIGHTGUN_LABEL_AR NULL
#define CATEGORY_LIGHTGUN_INFO_0_AR NULL
#define CATEGORY_OVERCLOCK_LABEL_AR NULL
#define CATEGORY_OVERCLOCK_INFO_0_AR NULL
#define CATEGORY_HACK_LABEL_AR NULL
#define CATEGORY_HACK_INFO_0_AR NULL
#define BSNES_ASPECT_RATIO_LABEL_AR NULL
#define BSNES_ASPECT_RATIO_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR "تلقائي"
#define OPTION_VAL_8_7_AR NULL
#define OPTION_VAL_4_3_AR NULL
#define OPTION_VAL_NTSC_AR NULL
#define OPTION_VAL_PAL_AR NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_AR NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_AR NULL
#define OPTION_VAL_OFF_AR NULL
#define BSNES_BLUR_EMULATION_LABEL_AR NULL
#define BSNES_BLUR_EMULATION_INFO_0_AR NULL
#define BSNES_HOTFIXES_LABEL_AR NULL
#define BSNES_HOTFIXES_INFO_0_AR NULL
#define BSNES_ENTROPY_LABEL_AR NULL
#define BSNES_ENTROPY_INFO_0_AR NULL
#define OPTION_VAL_LOW_AR NULL
#define OPTION_VAL_HIGH_AR NULL
#define OPTION_VAL_NONE_AR "لاشيء"
#define BSNES_CPU_OVERCLOCK_LABEL_AR NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_AR NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_AR NULL
#define OPTION_VAL_10_AR NULL
#define OPTION_VAL_20_AR NULL
#define OPTION_VAL_30_AR NULL
#define OPTION_VAL_40_AR NULL
#define OPTION_VAL_50_AR NULL
#define OPTION_VAL_60_AR NULL
#define OPTION_VAL_70_AR NULL
#define OPTION_VAL_80_AR NULL
#define OPTION_VAL_90_AR NULL
#define OPTION_VAL_100_AR NULL
#define OPTION_VAL_110_AR NULL
#define OPTION_VAL_120_AR NULL
#define OPTION_VAL_130_AR NULL
#define OPTION_VAL_140_AR NULL
#define OPTION_VAL_150_AR NULL
#define OPTION_VAL_160_AR NULL
#define OPTION_VAL_170_AR NULL
#define OPTION_VAL_180_AR NULL
#define OPTION_VAL_190_AR NULL
#define OPTION_VAL_200_AR NULL
#define OPTION_VAL_210_AR NULL
#define OPTION_VAL_220_AR NULL
#define OPTION_VAL_230_AR NULL
#define OPTION_VAL_240_AR NULL
#define OPTION_VAL_250_AR NULL
#define OPTION_VAL_260_AR NULL
#define OPTION_VAL_270_AR NULL
#define OPTION_VAL_280_AR NULL
#define OPTION_VAL_290_AR NULL
#define OPTION_VAL_300_AR NULL
#define OPTION_VAL_310_AR NULL
#define OPTION_VAL_320_AR NULL
#define OPTION_VAL_330_AR NULL
#define OPTION_VAL_340_AR NULL
#define OPTION_VAL_350_AR NULL
#define OPTION_VAL_360_AR NULL
#define OPTION_VAL_370_AR NULL
#define OPTION_VAL_380_AR NULL
#define OPTION_VAL_390_AR NULL
#define OPTION_VAL_400_AR NULL
#define BSNES_CPU_FASTMATH_LABEL_AR NULL
#define BSNES_CPU_FASTMATH_INFO_0_AR NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_AR NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_AR NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_AR NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_AR NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_AR NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_AR NULL
#define OPTION_VAL_410_AR NULL
#define OPTION_VAL_420_AR NULL
#define OPTION_VAL_430_AR NULL
#define OPTION_VAL_440_AR NULL
#define OPTION_VAL_450_AR NULL
#define OPTION_VAL_460_AR NULL
#define OPTION_VAL_470_AR NULL
#define OPTION_VAL_480_AR NULL
#define OPTION_VAL_490_AR NULL
#define OPTION_VAL_500_AR NULL
#define OPTION_VAL_510_AR NULL
#define OPTION_VAL_520_AR NULL
#define OPTION_VAL_530_AR NULL
#define OPTION_VAL_540_AR NULL
#define OPTION_VAL_550_AR NULL
#define OPTION_VAL_560_AR NULL
#define OPTION_VAL_570_AR NULL
#define OPTION_VAL_580_AR NULL
#define OPTION_VAL_590_AR NULL
#define OPTION_VAL_600_AR NULL
#define OPTION_VAL_610_AR NULL
#define OPTION_VAL_620_AR NULL
#define OPTION_VAL_630_AR NULL
#define OPTION_VAL_640_AR NULL
#define OPTION_VAL_650_AR NULL
#define OPTION_VAL_660_AR NULL
#define OPTION_VAL_670_AR NULL
#define OPTION_VAL_680_AR NULL
#define OPTION_VAL_690_AR NULL
#define OPTION_VAL_700_AR NULL
#define OPTION_VAL_710_AR NULL
#define OPTION_VAL_720_AR NULL
#define OPTION_VAL_730_AR NULL
#define OPTION_VAL_740_AR NULL
#define OPTION_VAL_750_AR NULL
#define OPTION_VAL_760_AR NULL
#define OPTION_VAL_770_AR NULL
#define OPTION_VAL_780_AR NULL
#define OPTION_VAL_790_AR NULL
#define OPTION_VAL_800_AR NULL
#define BSNES_PPU_FAST_LABEL_AR NULL
#define BSNES_PPU_FAST_LABEL_CAT_AR NULL
#define BSNES_PPU_FAST_INFO_0_AR NULL
#define BSNES_PPU_DEINTERLACE_LABEL_AR NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_AR NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_AR NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_AR NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_AR NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_AR NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_AR NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_AR NULL
#define BSNES_MODE7_SCALE_LABEL_AR NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_AR "مقياس"
#define BSNES_MODE7_SCALE_INFO_0_AR NULL
#define OPTION_VAL_1X_AR NULL
#define OPTION_VAL_2X_AR NULL
#define OPTION_VAL_3X_AR NULL
#define OPTION_VAL_4X_AR NULL
#define OPTION_VAL_5X_AR NULL
#define OPTION_VAL_6X_AR NULL
#define OPTION_VAL_7X_AR NULL
#define OPTION_VAL_8X_AR NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_AR NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_AR NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_AR NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_AR NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_AR NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_AR NULL
#define BSNES_MODE7_MOSAIC_LABEL_AR NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_AR NULL
#define BSNES_MODE7_MOSAIC_INFO_0_AR NULL
#define BSNES_DSP_FAST_LABEL_AR NULL
#define BSNES_DSP_FAST_LABEL_CAT_AR NULL
#define BSNES_DSP_FAST_INFO_0_AR NULL
#define BSNES_DSP_CUBIC_LABEL_AR NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_AR NULL
#define BSNES_DSP_CUBIC_INFO_0_AR NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_AR NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_AR NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_AR NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_AR NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_AR NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_AR NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_AR NULL
#define BSNES_SGB_BIOS_LABEL_AR NULL
#define BSNES_SGB_BIOS_INFO_0_AR NULL
#define OPTION_VAL_SGB1_SFC_AR NULL
#define OPTION_VAL_SGB2_SFC_AR NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_AR NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_AR NULL
#define OPTION_VAL_1_AR NULL
#define OPTION_VAL_2_AR NULL
#define OPTION_VAL_3_AR NULL
#define OPTION_VAL_4_AR NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_AR NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_AR NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_AR NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_AR NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_AR NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AR,
      CATEGORY_VIDEO_INFO_0_AR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_AR,
      CATEGORY_AUDIO_INFO_0_AR
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_AR,
      CATEGORY_MODE7_INFO_0_AR
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_AR,
      CATEGORY_SGB_INFO_0_AR
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_AR,
      CATEGORY_LIGHTGUN_INFO_0_AR
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_AR,
      CATEGORY_OVERCLOCK_INFO_0_AR
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_AR,
      CATEGORY_HACK_INFO_0_AR
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_AR,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_AR,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_AR },
         { "8:7",  OPTION_VAL_8_7_AR },
         { "4:3",  OPTION_VAL_4_3_AR },
         { "NTSC", OPTION_VAL_NTSC_AR },
         { "PAL",  OPTION_VAL_PAL_AR },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_AR,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_AR,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_AR },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_AR,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_AR,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_AR,
      NULL,
      BSNES_HOTFIXES_INFO_0_AR,
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
      BSNES_ENTROPY_LABEL_AR,
      NULL,
      BSNES_ENTROPY_INFO_0_AR,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_AR },
         { "High", OPTION_VAL_HIGH_AR },
         { "None", OPTION_VAL_NONE_AR },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_AR,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_AR,
      BSNES_CPU_OVERCLOCK_INFO_0_AR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_AR  },
         { "20",  OPTION_VAL_20_AR  },
         { "30",  OPTION_VAL_30_AR  },
         { "40",  OPTION_VAL_40_AR  },
         { "50",  OPTION_VAL_50_AR  },
         { "60",  OPTION_VAL_60_AR  },
         { "70",  OPTION_VAL_70_AR  },
         { "80",  OPTION_VAL_80_AR  },
         { "90",  OPTION_VAL_90_AR  },
         { "100", OPTION_VAL_100_AR },
         { "110", OPTION_VAL_110_AR },
         { "120", OPTION_VAL_120_AR },
         { "130", OPTION_VAL_130_AR },
         { "140", OPTION_VAL_140_AR },
         { "150", OPTION_VAL_150_AR },
         { "160", OPTION_VAL_160_AR },
         { "170", OPTION_VAL_170_AR },
         { "180", OPTION_VAL_180_AR },
         { "190", OPTION_VAL_190_AR },
         { "200", OPTION_VAL_200_AR },
         { "210", OPTION_VAL_210_AR },
         { "220", OPTION_VAL_220_AR },
         { "230", OPTION_VAL_230_AR },
         { "240", OPTION_VAL_240_AR },
         { "250", OPTION_VAL_250_AR },
         { "260", OPTION_VAL_260_AR },
         { "270", OPTION_VAL_270_AR },
         { "280", OPTION_VAL_280_AR },
         { "290", OPTION_VAL_290_AR },
         { "300", OPTION_VAL_300_AR },
         { "310", OPTION_VAL_310_AR },
         { "320", OPTION_VAL_320_AR },
         { "330", OPTION_VAL_330_AR },
         { "340", OPTION_VAL_340_AR },
         { "350", OPTION_VAL_350_AR },
         { "360", OPTION_VAL_360_AR },
         { "370", OPTION_VAL_370_AR },
         { "380", OPTION_VAL_380_AR },
         { "390", OPTION_VAL_390_AR },
         { "400", OPTION_VAL_400_AR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_AR,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_AR,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_AR,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_AR,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_AR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_AR  },
         { "20",  OPTION_VAL_20_AR  },
         { "30",  OPTION_VAL_30_AR  },
         { "40",  OPTION_VAL_40_AR  },
         { "50",  OPTION_VAL_50_AR  },
         { "60",  OPTION_VAL_60_AR  },
         { "70",  OPTION_VAL_70_AR  },
         { "80",  OPTION_VAL_80_AR  },
         { "90",  OPTION_VAL_90_AR  },
         { "100", OPTION_VAL_100_AR },
         { "110", OPTION_VAL_110_AR },
         { "120", OPTION_VAL_120_AR },
         { "130", OPTION_VAL_130_AR },
         { "140", OPTION_VAL_140_AR },
         { "150", OPTION_VAL_150_AR },
         { "160", OPTION_VAL_160_AR },
         { "170", OPTION_VAL_170_AR },
         { "180", OPTION_VAL_180_AR },
         { "190", OPTION_VAL_190_AR },
         { "200", OPTION_VAL_200_AR },
         { "210", OPTION_VAL_210_AR },
         { "220", OPTION_VAL_220_AR },
         { "230", OPTION_VAL_230_AR },
         { "240", OPTION_VAL_240_AR },
         { "250", OPTION_VAL_250_AR },
         { "260", OPTION_VAL_260_AR },
         { "270", OPTION_VAL_270_AR },
         { "280", OPTION_VAL_280_AR },
         { "290", OPTION_VAL_290_AR },
         { "300", OPTION_VAL_300_AR },
         { "310", OPTION_VAL_310_AR },
         { "320", OPTION_VAL_320_AR },
         { "330", OPTION_VAL_330_AR },
         { "340", OPTION_VAL_340_AR },
         { "350", OPTION_VAL_350_AR },
         { "360", OPTION_VAL_360_AR },
         { "370", OPTION_VAL_370_AR },
         { "380", OPTION_VAL_380_AR },
         { "390", OPTION_VAL_390_AR },
         { "400", OPTION_VAL_400_AR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_AR,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_AR,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_AR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_AR  },
         { "20",  OPTION_VAL_20_AR  },
         { "30",  OPTION_VAL_30_AR  },
         { "40",  OPTION_VAL_40_AR  },
         { "50",  OPTION_VAL_50_AR  },
         { "60",  OPTION_VAL_60_AR  },
         { "70",  OPTION_VAL_70_AR  },
         { "80",  OPTION_VAL_80_AR  },
         { "90",  OPTION_VAL_90_AR  },
         { "100", OPTION_VAL_100_AR },
         { "110", OPTION_VAL_110_AR },
         { "120", OPTION_VAL_120_AR },
         { "130", OPTION_VAL_130_AR },
         { "140", OPTION_VAL_140_AR },
         { "150", OPTION_VAL_150_AR },
         { "160", OPTION_VAL_160_AR },
         { "170", OPTION_VAL_170_AR },
         { "180", OPTION_VAL_180_AR },
         { "190", OPTION_VAL_190_AR },
         { "200", OPTION_VAL_200_AR },
         { "210", OPTION_VAL_210_AR },
         { "220", OPTION_VAL_220_AR },
         { "230", OPTION_VAL_230_AR },
         { "240", OPTION_VAL_240_AR },
         { "250", OPTION_VAL_250_AR },
         { "260", OPTION_VAL_260_AR },
         { "270", OPTION_VAL_270_AR },
         { "280", OPTION_VAL_280_AR },
         { "290", OPTION_VAL_290_AR },
         { "300", OPTION_VAL_300_AR },
         { "310", OPTION_VAL_310_AR },
         { "320", OPTION_VAL_320_AR },
         { "330", OPTION_VAL_330_AR },
         { "340", OPTION_VAL_340_AR },
         { "350", OPTION_VAL_350_AR },
         { "360", OPTION_VAL_360_AR },
         { "370", OPTION_VAL_370_AR },
         { "380", OPTION_VAL_380_AR },
         { "390", OPTION_VAL_390_AR },
         { "400", OPTION_VAL_400_AR },
         { "410", OPTION_VAL_410_AR },
         { "420", OPTION_VAL_420_AR },
         { "430", OPTION_VAL_430_AR },
         { "440", OPTION_VAL_440_AR },
         { "450", OPTION_VAL_450_AR },
         { "460", OPTION_VAL_460_AR },
         { "470", OPTION_VAL_470_AR },
         { "480", OPTION_VAL_480_AR },
         { "490", OPTION_VAL_490_AR },
         { "500", OPTION_VAL_500_AR },
         { "510", OPTION_VAL_510_AR },
         { "520", OPTION_VAL_520_AR },
         { "530", OPTION_VAL_530_AR },
         { "540", OPTION_VAL_540_AR },
         { "550", OPTION_VAL_550_AR },
         { "560", OPTION_VAL_560_AR },
         { "570", OPTION_VAL_570_AR },
         { "580", OPTION_VAL_580_AR },
         { "590", OPTION_VAL_590_AR },
         { "600", OPTION_VAL_600_AR },
         { "610", OPTION_VAL_610_AR },
         { "620", OPTION_VAL_620_AR },
         { "630", OPTION_VAL_630_AR },
         { "640", OPTION_VAL_640_AR },
         { "650", OPTION_VAL_650_AR },
         { "660", OPTION_VAL_660_AR },
         { "670", OPTION_VAL_670_AR },
         { "680", OPTION_VAL_680_AR },
         { "690", OPTION_VAL_690_AR },
         { "700", OPTION_VAL_700_AR },
         { "710", OPTION_VAL_710_AR },
         { "720", OPTION_VAL_720_AR },
         { "730", OPTION_VAL_730_AR },
         { "740", OPTION_VAL_740_AR },
         { "750", OPTION_VAL_750_AR },
         { "760", OPTION_VAL_760_AR },
         { "770", OPTION_VAL_770_AR },
         { "780", OPTION_VAL_780_AR },
         { "790", OPTION_VAL_790_AR },
         { "800", OPTION_VAL_800_AR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_AR,
      BSNES_PPU_FAST_LABEL_CAT_AR,
      BSNES_PPU_FAST_INFO_0_AR,
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
      BSNES_PPU_DEINTERLACE_LABEL_AR,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_AR,
      BSNES_PPU_DEINTERLACE_INFO_0_AR,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_AR,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_AR,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_AR,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_AR,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_AR,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_AR,
      BSNES_MODE7_SCALE_LABEL_CAT_AR,
      BSNES_MODE7_SCALE_INFO_0_AR,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_AR  },
         { "2x", OPTION_VAL_2X_AR  },
         { "3x", OPTION_VAL_3X_AR  },
         { "4x", OPTION_VAL_4X_AR  },
         { "5x", OPTION_VAL_5X_AR },
         { "6x", OPTION_VAL_6X_AR },
         { "7x", OPTION_VAL_7X_AR },
         { "8x", OPTION_VAL_8X_AR },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_AR,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_AR,
      BSNES_MODE7_PERSPECTIVE_INFO_0_AR,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_AR,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_AR,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_AR,
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
      BSNES_MODE7_MOSAIC_LABEL_AR,
      BSNES_MODE7_MOSAIC_LABEL_CAT_AR,
      BSNES_MODE7_MOSAIC_INFO_0_AR,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_AR,
      BSNES_DSP_FAST_LABEL_CAT_AR,
      BSNES_DSP_FAST_INFO_0_AR,
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
      BSNES_DSP_CUBIC_LABEL_AR,
      BSNES_DSP_CUBIC_LABEL_CAT_AR,
      BSNES_DSP_CUBIC_INFO_0_AR,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_AR,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_AR,
      BSNES_DSP_ECHO_SHADOW_INFO_0_AR,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_AR,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_AR,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_AR,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_AR,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_AR,
      NULL,
      BSNES_SGB_BIOS_INFO_0_AR,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_AR   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_AR },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_AR,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_AR,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_AR  },
         { "2",   OPTION_VAL_2_AR },
         { "3",   OPTION_VAL_3_AR },
         { "4",   OPTION_VAL_4_AR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_AR,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_AR,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_AR,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_AR,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_AR,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_AR,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define CATEGORY_VIDEO_LABEL_AST "Videu"
#define CATEGORY_VIDEO_INFO_0_AST "Camuda los axustes de la salida del videu."
#define CATEGORY_AUDIO_LABEL_AST "Audiu"
#define CATEGORY_AUDIO_INFO_0_AST "Camuda los axustes de la salida del audiu."
#define CATEGORY_MODE7_LABEL_AST NULL
#define CATEGORY_MODE7_INFO_0_AST NULL
#define CATEGORY_SGB_LABEL_AST NULL
#define CATEGORY_SGB_INFO_0_AST NULL
#define CATEGORY_LIGHTGUN_LABEL_AST NULL
#define CATEGORY_LIGHTGUN_INFO_0_AST NULL
#define CATEGORY_OVERCLOCK_LABEL_AST NULL
#define CATEGORY_OVERCLOCK_INFO_0_AST NULL
#define CATEGORY_HACK_LABEL_AST NULL
#define CATEGORY_HACK_INFO_0_AST NULL
#define BSNES_ASPECT_RATIO_LABEL_AST NULL
#define BSNES_ASPECT_RATIO_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_8_7_AST NULL
#define OPTION_VAL_4_3_AST NULL
#define OPTION_VAL_NTSC_AST NULL
#define OPTION_VAL_PAL_AST NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_AST NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_AST NULL
#define OPTION_VAL_OFF_AST NULL
#define BSNES_BLUR_EMULATION_LABEL_AST NULL
#define BSNES_BLUR_EMULATION_INFO_0_AST NULL
#define BSNES_HOTFIXES_LABEL_AST NULL
#define BSNES_HOTFIXES_INFO_0_AST NULL
#define BSNES_ENTROPY_LABEL_AST NULL
#define BSNES_ENTROPY_INFO_0_AST NULL
#define OPTION_VAL_LOW_AST NULL
#define OPTION_VAL_HIGH_AST NULL
#define OPTION_VAL_NONE_AST NULL
#define BSNES_CPU_OVERCLOCK_LABEL_AST NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_AST NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_AST NULL
#define OPTION_VAL_10_AST NULL
#define OPTION_VAL_20_AST NULL
#define OPTION_VAL_30_AST NULL
#define OPTION_VAL_40_AST NULL
#define OPTION_VAL_50_AST NULL
#define OPTION_VAL_60_AST NULL
#define OPTION_VAL_70_AST NULL
#define OPTION_VAL_80_AST NULL
#define OPTION_VAL_90_AST NULL
#define OPTION_VAL_100_AST "100% (Por defeutu)"
#define OPTION_VAL_110_AST NULL
#define OPTION_VAL_120_AST NULL
#define OPTION_VAL_130_AST NULL
#define OPTION_VAL_140_AST NULL
#define OPTION_VAL_150_AST NULL
#define OPTION_VAL_160_AST NULL
#define OPTION_VAL_170_AST NULL
#define OPTION_VAL_180_AST NULL
#define OPTION_VAL_190_AST NULL
#define OPTION_VAL_200_AST NULL
#define OPTION_VAL_210_AST NULL
#define OPTION_VAL_220_AST NULL
#define OPTION_VAL_230_AST NULL
#define OPTION_VAL_240_AST NULL
#define OPTION_VAL_250_AST NULL
#define OPTION_VAL_260_AST NULL
#define OPTION_VAL_270_AST NULL
#define OPTION_VAL_280_AST NULL
#define OPTION_VAL_290_AST NULL
#define OPTION_VAL_300_AST NULL
#define OPTION_VAL_310_AST NULL
#define OPTION_VAL_320_AST NULL
#define OPTION_VAL_330_AST NULL
#define OPTION_VAL_340_AST NULL
#define OPTION_VAL_350_AST NULL
#define OPTION_VAL_360_AST NULL
#define OPTION_VAL_370_AST NULL
#define OPTION_VAL_380_AST NULL
#define OPTION_VAL_390_AST NULL
#define OPTION_VAL_400_AST NULL
#define BSNES_CPU_FASTMATH_LABEL_AST NULL
#define BSNES_CPU_FASTMATH_INFO_0_AST NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_AST NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_AST NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_AST NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_AST NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_AST NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_AST NULL
#define OPTION_VAL_410_AST NULL
#define OPTION_VAL_420_AST NULL
#define OPTION_VAL_430_AST NULL
#define OPTION_VAL_440_AST NULL
#define OPTION_VAL_450_AST NULL
#define OPTION_VAL_460_AST NULL
#define OPTION_VAL_470_AST NULL
#define OPTION_VAL_480_AST NULL
#define OPTION_VAL_490_AST NULL
#define OPTION_VAL_500_AST NULL
#define OPTION_VAL_510_AST NULL
#define OPTION_VAL_520_AST NULL
#define OPTION_VAL_530_AST NULL
#define OPTION_VAL_540_AST NULL
#define OPTION_VAL_550_AST NULL
#define OPTION_VAL_560_AST NULL
#define OPTION_VAL_570_AST NULL
#define OPTION_VAL_580_AST NULL
#define OPTION_VAL_590_AST NULL
#define OPTION_VAL_600_AST NULL
#define OPTION_VAL_610_AST NULL
#define OPTION_VAL_620_AST NULL
#define OPTION_VAL_630_AST NULL
#define OPTION_VAL_640_AST NULL
#define OPTION_VAL_650_AST NULL
#define OPTION_VAL_660_AST NULL
#define OPTION_VAL_670_AST NULL
#define OPTION_VAL_680_AST NULL
#define OPTION_VAL_690_AST NULL
#define OPTION_VAL_700_AST NULL
#define OPTION_VAL_710_AST NULL
#define OPTION_VAL_720_AST NULL
#define OPTION_VAL_730_AST NULL
#define OPTION_VAL_740_AST NULL
#define OPTION_VAL_750_AST NULL
#define OPTION_VAL_760_AST NULL
#define OPTION_VAL_770_AST NULL
#define OPTION_VAL_780_AST NULL
#define OPTION_VAL_790_AST NULL
#define OPTION_VAL_800_AST NULL
#define BSNES_PPU_FAST_LABEL_AST NULL
#define BSNES_PPU_FAST_LABEL_CAT_AST NULL
#define BSNES_PPU_FAST_INFO_0_AST NULL
#define BSNES_PPU_DEINTERLACE_LABEL_AST NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_AST NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_AST NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_AST NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_AST NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_AST NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_AST NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_AST NULL
#define BSNES_MODE7_SCALE_LABEL_AST NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_AST NULL
#define BSNES_MODE7_SCALE_INFO_0_AST NULL
#define OPTION_VAL_1X_AST "240p (x1)"
#define OPTION_VAL_2X_AST "480p (x2)"
#define OPTION_VAL_3X_AST "720p (x3)"
#define OPTION_VAL_4X_AST "960p (x4)"
#define OPTION_VAL_5X_AST "1200p (x5)"
#define OPTION_VAL_6X_AST "1440p (x6)"
#define OPTION_VAL_7X_AST "1680p (x7)"
#define OPTION_VAL_8X_AST "1920p (x8)"
#define BSNES_MODE7_PERSPECTIVE_LABEL_AST NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_AST "Correición de la perspeutiva"
#define BSNES_MODE7_PERSPECTIVE_INFO_0_AST NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_AST NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_AST NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_AST NULL
#define BSNES_MODE7_MOSAIC_LABEL_AST NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_AST NULL
#define BSNES_MODE7_MOSAIC_INFO_0_AST NULL
#define BSNES_DSP_FAST_LABEL_AST NULL
#define BSNES_DSP_FAST_LABEL_CAT_AST NULL
#define BSNES_DSP_FAST_INFO_0_AST NULL
#define BSNES_DSP_CUBIC_LABEL_AST NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_AST NULL
#define BSNES_DSP_CUBIC_INFO_0_AST NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_AST NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_AST NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_AST NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_AST NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_AST NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_AST NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_AST NULL
#define BSNES_SGB_BIOS_LABEL_AST NULL
#define BSNES_SGB_BIOS_INFO_0_AST NULL
#define OPTION_VAL_SGB1_SFC_AST NULL
#define OPTION_VAL_SGB2_SFC_AST NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_AST NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_AST NULL
#define OPTION_VAL_1_AST NULL
#define OPTION_VAL_2_AST NULL
#define OPTION_VAL_3_AST NULL
#define OPTION_VAL_4_AST NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_AST NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_AST NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_AST NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_AST NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_AST NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AST,
      CATEGORY_VIDEO_INFO_0_AST
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_AST,
      CATEGORY_AUDIO_INFO_0_AST
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_AST,
      CATEGORY_MODE7_INFO_0_AST
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_AST,
      CATEGORY_SGB_INFO_0_AST
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_AST,
      CATEGORY_LIGHTGUN_INFO_0_AST
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_AST,
      CATEGORY_OVERCLOCK_INFO_0_AST
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_AST,
      CATEGORY_HACK_INFO_0_AST
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_AST,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_AST,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_AST },
         { "8:7",  OPTION_VAL_8_7_AST },
         { "4:3",  OPTION_VAL_4_3_AST },
         { "NTSC", OPTION_VAL_NTSC_AST },
         { "PAL",  OPTION_VAL_PAL_AST },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_AST,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_AST,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_AST },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_AST,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_AST,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_AST,
      NULL,
      BSNES_HOTFIXES_INFO_0_AST,
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
      BSNES_ENTROPY_LABEL_AST,
      NULL,
      BSNES_ENTROPY_INFO_0_AST,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_AST },
         { "High", OPTION_VAL_HIGH_AST },
         { "None", OPTION_VAL_NONE_AST },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_AST,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_AST,
      BSNES_CPU_OVERCLOCK_INFO_0_AST,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_AST  },
         { "20",  OPTION_VAL_20_AST  },
         { "30",  OPTION_VAL_30_AST  },
         { "40",  OPTION_VAL_40_AST  },
         { "50",  OPTION_VAL_50_AST  },
         { "60",  OPTION_VAL_60_AST  },
         { "70",  OPTION_VAL_70_AST  },
         { "80",  OPTION_VAL_80_AST  },
         { "90",  OPTION_VAL_90_AST  },
         { "100", OPTION_VAL_100_AST },
         { "110", OPTION_VAL_110_AST },
         { "120", OPTION_VAL_120_AST },
         { "130", OPTION_VAL_130_AST },
         { "140", OPTION_VAL_140_AST },
         { "150", OPTION_VAL_150_AST },
         { "160", OPTION_VAL_160_AST },
         { "170", OPTION_VAL_170_AST },
         { "180", OPTION_VAL_180_AST },
         { "190", OPTION_VAL_190_AST },
         { "200", OPTION_VAL_200_AST },
         { "210", OPTION_VAL_210_AST },
         { "220", OPTION_VAL_220_AST },
         { "230", OPTION_VAL_230_AST },
         { "240", OPTION_VAL_240_AST },
         { "250", OPTION_VAL_250_AST },
         { "260", OPTION_VAL_260_AST },
         { "270", OPTION_VAL_270_AST },
         { "280", OPTION_VAL_280_AST },
         { "290", OPTION_VAL_290_AST },
         { "300", OPTION_VAL_300_AST },
         { "310", OPTION_VAL_310_AST },
         { "320", OPTION_VAL_320_AST },
         { "330", OPTION_VAL_330_AST },
         { "340", OPTION_VAL_340_AST },
         { "350", OPTION_VAL_350_AST },
         { "360", OPTION_VAL_360_AST },
         { "370", OPTION_VAL_370_AST },
         { "380", OPTION_VAL_380_AST },
         { "390", OPTION_VAL_390_AST },
         { "400", OPTION_VAL_400_AST },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_AST,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_AST,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_AST,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_AST,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_AST,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_AST  },
         { "20",  OPTION_VAL_20_AST  },
         { "30",  OPTION_VAL_30_AST  },
         { "40",  OPTION_VAL_40_AST  },
         { "50",  OPTION_VAL_50_AST  },
         { "60",  OPTION_VAL_60_AST  },
         { "70",  OPTION_VAL_70_AST  },
         { "80",  OPTION_VAL_80_AST  },
         { "90",  OPTION_VAL_90_AST  },
         { "100", OPTION_VAL_100_AST },
         { "110", OPTION_VAL_110_AST },
         { "120", OPTION_VAL_120_AST },
         { "130", OPTION_VAL_130_AST },
         { "140", OPTION_VAL_140_AST },
         { "150", OPTION_VAL_150_AST },
         { "160", OPTION_VAL_160_AST },
         { "170", OPTION_VAL_170_AST },
         { "180", OPTION_VAL_180_AST },
         { "190", OPTION_VAL_190_AST },
         { "200", OPTION_VAL_200_AST },
         { "210", OPTION_VAL_210_AST },
         { "220", OPTION_VAL_220_AST },
         { "230", OPTION_VAL_230_AST },
         { "240", OPTION_VAL_240_AST },
         { "250", OPTION_VAL_250_AST },
         { "260", OPTION_VAL_260_AST },
         { "270", OPTION_VAL_270_AST },
         { "280", OPTION_VAL_280_AST },
         { "290", OPTION_VAL_290_AST },
         { "300", OPTION_VAL_300_AST },
         { "310", OPTION_VAL_310_AST },
         { "320", OPTION_VAL_320_AST },
         { "330", OPTION_VAL_330_AST },
         { "340", OPTION_VAL_340_AST },
         { "350", OPTION_VAL_350_AST },
         { "360", OPTION_VAL_360_AST },
         { "370", OPTION_VAL_370_AST },
         { "380", OPTION_VAL_380_AST },
         { "390", OPTION_VAL_390_AST },
         { "400", OPTION_VAL_400_AST },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_AST,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_AST,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_AST,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_AST  },
         { "20",  OPTION_VAL_20_AST  },
         { "30",  OPTION_VAL_30_AST  },
         { "40",  OPTION_VAL_40_AST  },
         { "50",  OPTION_VAL_50_AST  },
         { "60",  OPTION_VAL_60_AST  },
         { "70",  OPTION_VAL_70_AST  },
         { "80",  OPTION_VAL_80_AST  },
         { "90",  OPTION_VAL_90_AST  },
         { "100", OPTION_VAL_100_AST },
         { "110", OPTION_VAL_110_AST },
         { "120", OPTION_VAL_120_AST },
         { "130", OPTION_VAL_130_AST },
         { "140", OPTION_VAL_140_AST },
         { "150", OPTION_VAL_150_AST },
         { "160", OPTION_VAL_160_AST },
         { "170", OPTION_VAL_170_AST },
         { "180", OPTION_VAL_180_AST },
         { "190", OPTION_VAL_190_AST },
         { "200", OPTION_VAL_200_AST },
         { "210", OPTION_VAL_210_AST },
         { "220", OPTION_VAL_220_AST },
         { "230", OPTION_VAL_230_AST },
         { "240", OPTION_VAL_240_AST },
         { "250", OPTION_VAL_250_AST },
         { "260", OPTION_VAL_260_AST },
         { "270", OPTION_VAL_270_AST },
         { "280", OPTION_VAL_280_AST },
         { "290", OPTION_VAL_290_AST },
         { "300", OPTION_VAL_300_AST },
         { "310", OPTION_VAL_310_AST },
         { "320", OPTION_VAL_320_AST },
         { "330", OPTION_VAL_330_AST },
         { "340", OPTION_VAL_340_AST },
         { "350", OPTION_VAL_350_AST },
         { "360", OPTION_VAL_360_AST },
         { "370", OPTION_VAL_370_AST },
         { "380", OPTION_VAL_380_AST },
         { "390", OPTION_VAL_390_AST },
         { "400", OPTION_VAL_400_AST },
         { "410", OPTION_VAL_410_AST },
         { "420", OPTION_VAL_420_AST },
         { "430", OPTION_VAL_430_AST },
         { "440", OPTION_VAL_440_AST },
         { "450", OPTION_VAL_450_AST },
         { "460", OPTION_VAL_460_AST },
         { "470", OPTION_VAL_470_AST },
         { "480", OPTION_VAL_480_AST },
         { "490", OPTION_VAL_490_AST },
         { "500", OPTION_VAL_500_AST },
         { "510", OPTION_VAL_510_AST },
         { "520", OPTION_VAL_520_AST },
         { "530", OPTION_VAL_530_AST },
         { "540", OPTION_VAL_540_AST },
         { "550", OPTION_VAL_550_AST },
         { "560", OPTION_VAL_560_AST },
         { "570", OPTION_VAL_570_AST },
         { "580", OPTION_VAL_580_AST },
         { "590", OPTION_VAL_590_AST },
         { "600", OPTION_VAL_600_AST },
         { "610", OPTION_VAL_610_AST },
         { "620", OPTION_VAL_620_AST },
         { "630", OPTION_VAL_630_AST },
         { "640", OPTION_VAL_640_AST },
         { "650", OPTION_VAL_650_AST },
         { "660", OPTION_VAL_660_AST },
         { "670", OPTION_VAL_670_AST },
         { "680", OPTION_VAL_680_AST },
         { "690", OPTION_VAL_690_AST },
         { "700", OPTION_VAL_700_AST },
         { "710", OPTION_VAL_710_AST },
         { "720", OPTION_VAL_720_AST },
         { "730", OPTION_VAL_730_AST },
         { "740", OPTION_VAL_740_AST },
         { "750", OPTION_VAL_750_AST },
         { "760", OPTION_VAL_760_AST },
         { "770", OPTION_VAL_770_AST },
         { "780", OPTION_VAL_780_AST },
         { "790", OPTION_VAL_790_AST },
         { "800", OPTION_VAL_800_AST },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_AST,
      BSNES_PPU_FAST_LABEL_CAT_AST,
      BSNES_PPU_FAST_INFO_0_AST,
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
      BSNES_PPU_DEINTERLACE_LABEL_AST,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_AST,
      BSNES_PPU_DEINTERLACE_INFO_0_AST,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_AST,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_AST,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_AST,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_AST,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_AST,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_AST,
      BSNES_MODE7_SCALE_LABEL_CAT_AST,
      BSNES_MODE7_SCALE_INFO_0_AST,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_AST  },
         { "2x", OPTION_VAL_2X_AST  },
         { "3x", OPTION_VAL_3X_AST  },
         { "4x", OPTION_VAL_4X_AST  },
         { "5x", OPTION_VAL_5X_AST },
         { "6x", OPTION_VAL_6X_AST },
         { "7x", OPTION_VAL_7X_AST },
         { "8x", OPTION_VAL_8X_AST },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_AST,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_AST,
      BSNES_MODE7_PERSPECTIVE_INFO_0_AST,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_AST,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_AST,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_AST,
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
      BSNES_MODE7_MOSAIC_LABEL_AST,
      BSNES_MODE7_MOSAIC_LABEL_CAT_AST,
      BSNES_MODE7_MOSAIC_INFO_0_AST,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_AST,
      BSNES_DSP_FAST_LABEL_CAT_AST,
      BSNES_DSP_FAST_INFO_0_AST,
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
      BSNES_DSP_CUBIC_LABEL_AST,
      BSNES_DSP_CUBIC_LABEL_CAT_AST,
      BSNES_DSP_CUBIC_INFO_0_AST,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_AST,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_AST,
      BSNES_DSP_ECHO_SHADOW_INFO_0_AST,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_AST,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_AST,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_AST,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_AST,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_AST,
      NULL,
      BSNES_SGB_BIOS_INFO_0_AST,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_AST   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_AST },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_AST,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_AST,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_AST  },
         { "2",   OPTION_VAL_2_AST },
         { "3",   OPTION_VAL_3_AST },
         { "4",   OPTION_VAL_4_AST },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_AST,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_AST,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_AST,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_AST,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_AST,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_AST,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_CA */

#define CATEGORY_VIDEO_LABEL_CA "Vídeo"
#define CATEGORY_VIDEO_INFO_0_CA "Canviar configuracions de sortida de vídeo."
#define CATEGORY_AUDIO_LABEL_CA "Àudio"
#define CATEGORY_AUDIO_INFO_0_CA "Canviar les configuracions de sortida de l'àudio."
#define CATEGORY_MODE7_LABEL_CA NULL
#define CATEGORY_MODE7_INFO_0_CA NULL
#define CATEGORY_SGB_LABEL_CA NULL
#define CATEGORY_SGB_INFO_0_CA NULL
#define CATEGORY_LIGHTGUN_LABEL_CA NULL
#define CATEGORY_LIGHTGUN_INFO_0_CA NULL
#define CATEGORY_OVERCLOCK_LABEL_CA NULL
#define CATEGORY_OVERCLOCK_INFO_0_CA NULL
#define CATEGORY_HACK_LABEL_CA NULL
#define CATEGORY_HACK_INFO_0_CA NULL
#define BSNES_ASPECT_RATIO_LABEL_CA NULL
#define BSNES_ASPECT_RATIO_INFO_0_CA NULL
#define OPTION_VAL_AUTO_CA NULL
#define OPTION_VAL_8_7_CA NULL
#define OPTION_VAL_4_3_CA NULL
#define OPTION_VAL_NTSC_CA NULL
#define OPTION_VAL_PAL_CA NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_CA NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_CA NULL
#define OPTION_VAL_OFF_CA NULL
#define BSNES_BLUR_EMULATION_LABEL_CA NULL
#define BSNES_BLUR_EMULATION_INFO_0_CA NULL
#define BSNES_HOTFIXES_LABEL_CA NULL
#define BSNES_HOTFIXES_INFO_0_CA NULL
#define BSNES_ENTROPY_LABEL_CA NULL
#define BSNES_ENTROPY_INFO_0_CA NULL
#define OPTION_VAL_LOW_CA NULL
#define OPTION_VAL_HIGH_CA NULL
#define OPTION_VAL_NONE_CA NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CA NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_CA NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_CA NULL
#define OPTION_VAL_10_CA NULL
#define OPTION_VAL_20_CA NULL
#define OPTION_VAL_30_CA NULL
#define OPTION_VAL_40_CA NULL
#define OPTION_VAL_50_CA NULL
#define OPTION_VAL_60_CA NULL
#define OPTION_VAL_70_CA NULL
#define OPTION_VAL_80_CA NULL
#define OPTION_VAL_90_CA NULL
#define OPTION_VAL_100_CA NULL
#define OPTION_VAL_110_CA NULL
#define OPTION_VAL_120_CA NULL
#define OPTION_VAL_130_CA NULL
#define OPTION_VAL_140_CA NULL
#define OPTION_VAL_150_CA NULL
#define OPTION_VAL_160_CA NULL
#define OPTION_VAL_170_CA NULL
#define OPTION_VAL_180_CA NULL
#define OPTION_VAL_190_CA NULL
#define OPTION_VAL_200_CA NULL
#define OPTION_VAL_210_CA NULL
#define OPTION_VAL_220_CA NULL
#define OPTION_VAL_230_CA NULL
#define OPTION_VAL_240_CA NULL
#define OPTION_VAL_250_CA NULL
#define OPTION_VAL_260_CA NULL
#define OPTION_VAL_270_CA NULL
#define OPTION_VAL_280_CA NULL
#define OPTION_VAL_290_CA NULL
#define OPTION_VAL_300_CA NULL
#define OPTION_VAL_310_CA NULL
#define OPTION_VAL_320_CA NULL
#define OPTION_VAL_330_CA NULL
#define OPTION_VAL_340_CA NULL
#define OPTION_VAL_350_CA NULL
#define OPTION_VAL_360_CA NULL
#define OPTION_VAL_370_CA NULL
#define OPTION_VAL_380_CA NULL
#define OPTION_VAL_390_CA NULL
#define OPTION_VAL_400_CA NULL
#define BSNES_CPU_FASTMATH_LABEL_CA NULL
#define BSNES_CPU_FASTMATH_INFO_0_CA NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CA NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_CA NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_CA NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CA NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_CA NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_CA NULL
#define OPTION_VAL_410_CA NULL
#define OPTION_VAL_420_CA NULL
#define OPTION_VAL_430_CA NULL
#define OPTION_VAL_440_CA NULL
#define OPTION_VAL_450_CA NULL
#define OPTION_VAL_460_CA NULL
#define OPTION_VAL_470_CA NULL
#define OPTION_VAL_480_CA NULL
#define OPTION_VAL_490_CA NULL
#define OPTION_VAL_500_CA NULL
#define OPTION_VAL_510_CA NULL
#define OPTION_VAL_520_CA NULL
#define OPTION_VAL_530_CA NULL
#define OPTION_VAL_540_CA NULL
#define OPTION_VAL_550_CA NULL
#define OPTION_VAL_560_CA NULL
#define OPTION_VAL_570_CA NULL
#define OPTION_VAL_580_CA NULL
#define OPTION_VAL_590_CA NULL
#define OPTION_VAL_600_CA NULL
#define OPTION_VAL_610_CA NULL
#define OPTION_VAL_620_CA NULL
#define OPTION_VAL_630_CA NULL
#define OPTION_VAL_640_CA NULL
#define OPTION_VAL_650_CA NULL
#define OPTION_VAL_660_CA NULL
#define OPTION_VAL_670_CA NULL
#define OPTION_VAL_680_CA NULL
#define OPTION_VAL_690_CA NULL
#define OPTION_VAL_700_CA NULL
#define OPTION_VAL_710_CA NULL
#define OPTION_VAL_720_CA NULL
#define OPTION_VAL_730_CA NULL
#define OPTION_VAL_740_CA NULL
#define OPTION_VAL_750_CA NULL
#define OPTION_VAL_760_CA NULL
#define OPTION_VAL_770_CA NULL
#define OPTION_VAL_780_CA NULL
#define OPTION_VAL_790_CA NULL
#define OPTION_VAL_800_CA NULL
#define BSNES_PPU_FAST_LABEL_CA NULL
#define BSNES_PPU_FAST_LABEL_CAT_CA NULL
#define BSNES_PPU_FAST_INFO_0_CA NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CA NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_CA NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_CA NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CA NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_CA NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_CA NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_CA NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_CA NULL
#define BSNES_MODE7_SCALE_LABEL_CA NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_CA NULL
#define BSNES_MODE7_SCALE_INFO_0_CA NULL
#define OPTION_VAL_1X_CA NULL
#define OPTION_VAL_2X_CA NULL
#define OPTION_VAL_3X_CA NULL
#define OPTION_VAL_4X_CA NULL
#define OPTION_VAL_5X_CA NULL
#define OPTION_VAL_6X_CA NULL
#define OPTION_VAL_7X_CA NULL
#define OPTION_VAL_8X_CA NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CA NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_CA NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_CA NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CA NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_CA NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_CA NULL
#define BSNES_MODE7_MOSAIC_LABEL_CA NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_CA NULL
#define BSNES_MODE7_MOSAIC_INFO_0_CA NULL
#define BSNES_DSP_FAST_LABEL_CA NULL
#define BSNES_DSP_FAST_LABEL_CAT_CA NULL
#define BSNES_DSP_FAST_INFO_0_CA NULL
#define BSNES_DSP_CUBIC_LABEL_CA NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_CA NULL
#define BSNES_DSP_CUBIC_INFO_0_CA NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CA NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_CA NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_CA NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_CA NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_CA NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_CA NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_CA NULL
#define BSNES_SGB_BIOS_LABEL_CA NULL
#define BSNES_SGB_BIOS_INFO_0_CA NULL
#define OPTION_VAL_SGB1_SFC_CA NULL
#define OPTION_VAL_SGB2_SFC_CA NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_CA NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_CA NULL
#define OPTION_VAL_1_CA NULL
#define OPTION_VAL_2_CA NULL
#define OPTION_VAL_3_CA NULL
#define OPTION_VAL_4_CA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_CA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_CA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_CA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_CA NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_CA NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CA,
      CATEGORY_VIDEO_INFO_0_CA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CA,
      CATEGORY_AUDIO_INFO_0_CA
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_CA,
      CATEGORY_MODE7_INFO_0_CA
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_CA,
      CATEGORY_SGB_INFO_0_CA
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_CA,
      CATEGORY_LIGHTGUN_INFO_0_CA
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_CA,
      CATEGORY_OVERCLOCK_INFO_0_CA
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_CA,
      CATEGORY_HACK_INFO_0_CA
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_CA,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_CA,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_CA },
         { "8:7",  OPTION_VAL_8_7_CA },
         { "4:3",  OPTION_VAL_4_3_CA },
         { "NTSC", OPTION_VAL_NTSC_CA },
         { "PAL",  OPTION_VAL_PAL_CA },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_CA,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_CA,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_CA },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_CA,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_CA,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_CA,
      NULL,
      BSNES_HOTFIXES_INFO_0_CA,
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
      BSNES_ENTROPY_LABEL_CA,
      NULL,
      BSNES_ENTROPY_INFO_0_CA,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_CA },
         { "High", OPTION_VAL_HIGH_CA },
         { "None", OPTION_VAL_NONE_CA },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_CA,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_CA,
      BSNES_CPU_OVERCLOCK_INFO_0_CA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CA  },
         { "20",  OPTION_VAL_20_CA  },
         { "30",  OPTION_VAL_30_CA  },
         { "40",  OPTION_VAL_40_CA  },
         { "50",  OPTION_VAL_50_CA  },
         { "60",  OPTION_VAL_60_CA  },
         { "70",  OPTION_VAL_70_CA  },
         { "80",  OPTION_VAL_80_CA  },
         { "90",  OPTION_VAL_90_CA  },
         { "100", OPTION_VAL_100_CA },
         { "110", OPTION_VAL_110_CA },
         { "120", OPTION_VAL_120_CA },
         { "130", OPTION_VAL_130_CA },
         { "140", OPTION_VAL_140_CA },
         { "150", OPTION_VAL_150_CA },
         { "160", OPTION_VAL_160_CA },
         { "170", OPTION_VAL_170_CA },
         { "180", OPTION_VAL_180_CA },
         { "190", OPTION_VAL_190_CA },
         { "200", OPTION_VAL_200_CA },
         { "210", OPTION_VAL_210_CA },
         { "220", OPTION_VAL_220_CA },
         { "230", OPTION_VAL_230_CA },
         { "240", OPTION_VAL_240_CA },
         { "250", OPTION_VAL_250_CA },
         { "260", OPTION_VAL_260_CA },
         { "270", OPTION_VAL_270_CA },
         { "280", OPTION_VAL_280_CA },
         { "290", OPTION_VAL_290_CA },
         { "300", OPTION_VAL_300_CA },
         { "310", OPTION_VAL_310_CA },
         { "320", OPTION_VAL_320_CA },
         { "330", OPTION_VAL_330_CA },
         { "340", OPTION_VAL_340_CA },
         { "350", OPTION_VAL_350_CA },
         { "360", OPTION_VAL_360_CA },
         { "370", OPTION_VAL_370_CA },
         { "380", OPTION_VAL_380_CA },
         { "390", OPTION_VAL_390_CA },
         { "400", OPTION_VAL_400_CA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_CA,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_CA,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CA,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_CA,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_CA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CA  },
         { "20",  OPTION_VAL_20_CA  },
         { "30",  OPTION_VAL_30_CA  },
         { "40",  OPTION_VAL_40_CA  },
         { "50",  OPTION_VAL_50_CA  },
         { "60",  OPTION_VAL_60_CA  },
         { "70",  OPTION_VAL_70_CA  },
         { "80",  OPTION_VAL_80_CA  },
         { "90",  OPTION_VAL_90_CA  },
         { "100", OPTION_VAL_100_CA },
         { "110", OPTION_VAL_110_CA },
         { "120", OPTION_VAL_120_CA },
         { "130", OPTION_VAL_130_CA },
         { "140", OPTION_VAL_140_CA },
         { "150", OPTION_VAL_150_CA },
         { "160", OPTION_VAL_160_CA },
         { "170", OPTION_VAL_170_CA },
         { "180", OPTION_VAL_180_CA },
         { "190", OPTION_VAL_190_CA },
         { "200", OPTION_VAL_200_CA },
         { "210", OPTION_VAL_210_CA },
         { "220", OPTION_VAL_220_CA },
         { "230", OPTION_VAL_230_CA },
         { "240", OPTION_VAL_240_CA },
         { "250", OPTION_VAL_250_CA },
         { "260", OPTION_VAL_260_CA },
         { "270", OPTION_VAL_270_CA },
         { "280", OPTION_VAL_280_CA },
         { "290", OPTION_VAL_290_CA },
         { "300", OPTION_VAL_300_CA },
         { "310", OPTION_VAL_310_CA },
         { "320", OPTION_VAL_320_CA },
         { "330", OPTION_VAL_330_CA },
         { "340", OPTION_VAL_340_CA },
         { "350", OPTION_VAL_350_CA },
         { "360", OPTION_VAL_360_CA },
         { "370", OPTION_VAL_370_CA },
         { "380", OPTION_VAL_380_CA },
         { "390", OPTION_VAL_390_CA },
         { "400", OPTION_VAL_400_CA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CA,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_CA,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_CA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CA  },
         { "20",  OPTION_VAL_20_CA  },
         { "30",  OPTION_VAL_30_CA  },
         { "40",  OPTION_VAL_40_CA  },
         { "50",  OPTION_VAL_50_CA  },
         { "60",  OPTION_VAL_60_CA  },
         { "70",  OPTION_VAL_70_CA  },
         { "80",  OPTION_VAL_80_CA  },
         { "90",  OPTION_VAL_90_CA  },
         { "100", OPTION_VAL_100_CA },
         { "110", OPTION_VAL_110_CA },
         { "120", OPTION_VAL_120_CA },
         { "130", OPTION_VAL_130_CA },
         { "140", OPTION_VAL_140_CA },
         { "150", OPTION_VAL_150_CA },
         { "160", OPTION_VAL_160_CA },
         { "170", OPTION_VAL_170_CA },
         { "180", OPTION_VAL_180_CA },
         { "190", OPTION_VAL_190_CA },
         { "200", OPTION_VAL_200_CA },
         { "210", OPTION_VAL_210_CA },
         { "220", OPTION_VAL_220_CA },
         { "230", OPTION_VAL_230_CA },
         { "240", OPTION_VAL_240_CA },
         { "250", OPTION_VAL_250_CA },
         { "260", OPTION_VAL_260_CA },
         { "270", OPTION_VAL_270_CA },
         { "280", OPTION_VAL_280_CA },
         { "290", OPTION_VAL_290_CA },
         { "300", OPTION_VAL_300_CA },
         { "310", OPTION_VAL_310_CA },
         { "320", OPTION_VAL_320_CA },
         { "330", OPTION_VAL_330_CA },
         { "340", OPTION_VAL_340_CA },
         { "350", OPTION_VAL_350_CA },
         { "360", OPTION_VAL_360_CA },
         { "370", OPTION_VAL_370_CA },
         { "380", OPTION_VAL_380_CA },
         { "390", OPTION_VAL_390_CA },
         { "400", OPTION_VAL_400_CA },
         { "410", OPTION_VAL_410_CA },
         { "420", OPTION_VAL_420_CA },
         { "430", OPTION_VAL_430_CA },
         { "440", OPTION_VAL_440_CA },
         { "450", OPTION_VAL_450_CA },
         { "460", OPTION_VAL_460_CA },
         { "470", OPTION_VAL_470_CA },
         { "480", OPTION_VAL_480_CA },
         { "490", OPTION_VAL_490_CA },
         { "500", OPTION_VAL_500_CA },
         { "510", OPTION_VAL_510_CA },
         { "520", OPTION_VAL_520_CA },
         { "530", OPTION_VAL_530_CA },
         { "540", OPTION_VAL_540_CA },
         { "550", OPTION_VAL_550_CA },
         { "560", OPTION_VAL_560_CA },
         { "570", OPTION_VAL_570_CA },
         { "580", OPTION_VAL_580_CA },
         { "590", OPTION_VAL_590_CA },
         { "600", OPTION_VAL_600_CA },
         { "610", OPTION_VAL_610_CA },
         { "620", OPTION_VAL_620_CA },
         { "630", OPTION_VAL_630_CA },
         { "640", OPTION_VAL_640_CA },
         { "650", OPTION_VAL_650_CA },
         { "660", OPTION_VAL_660_CA },
         { "670", OPTION_VAL_670_CA },
         { "680", OPTION_VAL_680_CA },
         { "690", OPTION_VAL_690_CA },
         { "700", OPTION_VAL_700_CA },
         { "710", OPTION_VAL_710_CA },
         { "720", OPTION_VAL_720_CA },
         { "730", OPTION_VAL_730_CA },
         { "740", OPTION_VAL_740_CA },
         { "750", OPTION_VAL_750_CA },
         { "760", OPTION_VAL_760_CA },
         { "770", OPTION_VAL_770_CA },
         { "780", OPTION_VAL_780_CA },
         { "790", OPTION_VAL_790_CA },
         { "800", OPTION_VAL_800_CA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_CA,
      BSNES_PPU_FAST_LABEL_CAT_CA,
      BSNES_PPU_FAST_INFO_0_CA,
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
      BSNES_PPU_DEINTERLACE_LABEL_CA,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_CA,
      BSNES_PPU_DEINTERLACE_INFO_0_CA,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CA,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_CA,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_CA,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_CA,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_CA,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_CA,
      BSNES_MODE7_SCALE_LABEL_CAT_CA,
      BSNES_MODE7_SCALE_INFO_0_CA,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_CA  },
         { "2x", OPTION_VAL_2X_CA  },
         { "3x", OPTION_VAL_3X_CA  },
         { "4x", OPTION_VAL_4X_CA  },
         { "5x", OPTION_VAL_5X_CA },
         { "6x", OPTION_VAL_6X_CA },
         { "7x", OPTION_VAL_7X_CA },
         { "8x", OPTION_VAL_8X_CA },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_CA,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_CA,
      BSNES_MODE7_PERSPECTIVE_INFO_0_CA,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_CA,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_CA,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_CA,
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
      BSNES_MODE7_MOSAIC_LABEL_CA,
      BSNES_MODE7_MOSAIC_LABEL_CAT_CA,
      BSNES_MODE7_MOSAIC_INFO_0_CA,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_CA,
      BSNES_DSP_FAST_LABEL_CAT_CA,
      BSNES_DSP_FAST_INFO_0_CA,
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
      BSNES_DSP_CUBIC_LABEL_CA,
      BSNES_DSP_CUBIC_LABEL_CAT_CA,
      BSNES_DSP_CUBIC_INFO_0_CA,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_CA,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_CA,
      BSNES_DSP_ECHO_SHADOW_INFO_0_CA,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_CA,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_CA,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_CA,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_CA,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_CA,
      NULL,
      BSNES_SGB_BIOS_INFO_0_CA,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_CA   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_CA },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_CA,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_CA,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_CA  },
         { "2",   OPTION_VAL_2_CA },
         { "3",   OPTION_VAL_3_CA },
         { "4",   OPTION_VAL_4_CA },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_CA,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_CA,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_CA,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_CA,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_CA,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_CA,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define CATEGORY_VIDEO_LABEL_CHS "视频"
#define CATEGORY_VIDEO_INFO_0_CHS "更改视频输出设置。"
#define CATEGORY_AUDIO_LABEL_CHS "音频"
#define CATEGORY_AUDIO_INFO_0_CHS "更改音频输出设置。"
#define CATEGORY_MODE7_LABEL_CHS NULL
#define CATEGORY_MODE7_INFO_0_CHS NULL
#define CATEGORY_SGB_LABEL_CHS NULL
#define CATEGORY_SGB_INFO_0_CHS NULL
#define CATEGORY_LIGHTGUN_LABEL_CHS NULL
#define CATEGORY_LIGHTGUN_INFO_0_CHS NULL
#define CATEGORY_OVERCLOCK_LABEL_CHS NULL
#define CATEGORY_OVERCLOCK_INFO_0_CHS NULL
#define CATEGORY_HACK_LABEL_CHS "模拟修改"
#define CATEGORY_HACK_INFO_0_CHS NULL
#define BSNES_ASPECT_RATIO_LABEL_CHS NULL
#define BSNES_ASPECT_RATIO_INFO_0_CHS "选择首选内容宽高比。这只适用于RetroArch的宽高比设置为视频设置中的“核心提供”。"
#define OPTION_VAL_AUTO_CHS "自动"
#define OPTION_VAL_8_7_CHS NULL
#define OPTION_VAL_4_3_CHS NULL
#define OPTION_VAL_NTSC_CHS NULL
#define OPTION_VAL_PAL_CHS NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_CHS NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_CHS NULL
#define OPTION_VAL_OFF_CHS NULL
#define BSNES_BLUR_EMULATION_LABEL_CHS NULL
#define BSNES_BLUR_EMULATION_INFO_0_CHS NULL
#define BSNES_HOTFIXES_LABEL_CHS NULL
#define BSNES_HOTFIXES_INFO_0_CHS NULL
#define BSNES_ENTROPY_LABEL_CHS NULL
#define BSNES_ENTROPY_INFO_0_CHS NULL
#define OPTION_VAL_LOW_CHS "低"
#define OPTION_VAL_HIGH_CHS "高"
#define OPTION_VAL_NONE_CHS "无"
#define BSNES_CPU_OVERCLOCK_LABEL_CHS NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_CHS "处理器"
#define BSNES_CPU_OVERCLOCK_INFO_0_CHS NULL
#define OPTION_VAL_10_CHS NULL
#define OPTION_VAL_20_CHS NULL
#define OPTION_VAL_30_CHS NULL
#define OPTION_VAL_40_CHS NULL
#define OPTION_VAL_50_CHS NULL
#define OPTION_VAL_60_CHS NULL
#define OPTION_VAL_70_CHS NULL
#define OPTION_VAL_80_CHS NULL
#define OPTION_VAL_90_CHS NULL
#define OPTION_VAL_100_CHS NULL
#define OPTION_VAL_110_CHS NULL
#define OPTION_VAL_120_CHS NULL
#define OPTION_VAL_130_CHS NULL
#define OPTION_VAL_140_CHS NULL
#define OPTION_VAL_150_CHS NULL
#define OPTION_VAL_160_CHS NULL
#define OPTION_VAL_170_CHS NULL
#define OPTION_VAL_180_CHS NULL
#define OPTION_VAL_190_CHS NULL
#define OPTION_VAL_200_CHS NULL
#define OPTION_VAL_210_CHS NULL
#define OPTION_VAL_220_CHS NULL
#define OPTION_VAL_230_CHS NULL
#define OPTION_VAL_240_CHS NULL
#define OPTION_VAL_250_CHS NULL
#define OPTION_VAL_260_CHS NULL
#define OPTION_VAL_270_CHS NULL
#define OPTION_VAL_280_CHS NULL
#define OPTION_VAL_290_CHS NULL
#define OPTION_VAL_300_CHS NULL
#define OPTION_VAL_310_CHS NULL
#define OPTION_VAL_320_CHS NULL
#define OPTION_VAL_330_CHS NULL
#define OPTION_VAL_340_CHS NULL
#define OPTION_VAL_350_CHS NULL
#define OPTION_VAL_360_CHS NULL
#define OPTION_VAL_370_CHS NULL
#define OPTION_VAL_380_CHS NULL
#define OPTION_VAL_390_CHS NULL
#define OPTION_VAL_400_CHS NULL
#define BSNES_CPU_FASTMATH_LABEL_CHS NULL
#define BSNES_CPU_FASTMATH_INFO_0_CHS NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CHS NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_CHS NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_CHS NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CHS NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_CHS NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_CHS NULL
#define OPTION_VAL_410_CHS NULL
#define OPTION_VAL_420_CHS NULL
#define OPTION_VAL_430_CHS NULL
#define OPTION_VAL_440_CHS NULL
#define OPTION_VAL_450_CHS NULL
#define OPTION_VAL_460_CHS NULL
#define OPTION_VAL_470_CHS NULL
#define OPTION_VAL_480_CHS NULL
#define OPTION_VAL_490_CHS NULL
#define OPTION_VAL_500_CHS NULL
#define OPTION_VAL_510_CHS NULL
#define OPTION_VAL_520_CHS NULL
#define OPTION_VAL_530_CHS NULL
#define OPTION_VAL_540_CHS NULL
#define OPTION_VAL_550_CHS NULL
#define OPTION_VAL_560_CHS NULL
#define OPTION_VAL_570_CHS NULL
#define OPTION_VAL_580_CHS NULL
#define OPTION_VAL_590_CHS NULL
#define OPTION_VAL_600_CHS NULL
#define OPTION_VAL_610_CHS NULL
#define OPTION_VAL_620_CHS NULL
#define OPTION_VAL_630_CHS NULL
#define OPTION_VAL_640_CHS NULL
#define OPTION_VAL_650_CHS NULL
#define OPTION_VAL_660_CHS NULL
#define OPTION_VAL_670_CHS NULL
#define OPTION_VAL_680_CHS NULL
#define OPTION_VAL_690_CHS NULL
#define OPTION_VAL_700_CHS NULL
#define OPTION_VAL_710_CHS NULL
#define OPTION_VAL_720_CHS NULL
#define OPTION_VAL_730_CHS NULL
#define OPTION_VAL_740_CHS NULL
#define OPTION_VAL_750_CHS NULL
#define OPTION_VAL_760_CHS NULL
#define OPTION_VAL_770_CHS NULL
#define OPTION_VAL_780_CHS NULL
#define OPTION_VAL_790_CHS NULL
#define OPTION_VAL_800_CHS NULL
#define BSNES_PPU_FAST_LABEL_CHS NULL
#define BSNES_PPU_FAST_LABEL_CAT_CHS NULL
#define BSNES_PPU_FAST_INFO_0_CHS NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CHS NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_CHS NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_CHS NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CHS NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_CHS NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_CHS NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_CHS NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_CHS NULL
#define BSNES_MODE7_SCALE_LABEL_CHS NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_CHS "比例"
#define BSNES_MODE7_SCALE_INFO_0_CHS NULL
#define OPTION_VAL_1X_CHS NULL
#define OPTION_VAL_2X_CHS NULL
#define OPTION_VAL_3X_CHS NULL
#define OPTION_VAL_4X_CHS NULL
#define OPTION_VAL_5X_CHS NULL
#define OPTION_VAL_6X_CHS NULL
#define OPTION_VAL_7X_CHS NULL
#define OPTION_VAL_8X_CHS NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CHS NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_CHS NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_CHS NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CHS NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_CHS NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_CHS NULL
#define BSNES_MODE7_MOSAIC_LABEL_CHS NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_CHS NULL
#define BSNES_MODE7_MOSAIC_INFO_0_CHS NULL
#define BSNES_DSP_FAST_LABEL_CHS NULL
#define BSNES_DSP_FAST_LABEL_CAT_CHS NULL
#define BSNES_DSP_FAST_INFO_0_CHS NULL
#define BSNES_DSP_CUBIC_LABEL_CHS NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_CHS NULL
#define BSNES_DSP_CUBIC_INFO_0_CHS NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CHS NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_CHS NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_CHS NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_CHS NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_CHS NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_CHS NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_CHS NULL
#define BSNES_SGB_BIOS_LABEL_CHS NULL
#define BSNES_SGB_BIOS_INFO_0_CHS NULL
#define OPTION_VAL_SGB1_SFC_CHS NULL
#define OPTION_VAL_SGB2_SFC_CHS NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_CHS NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_CHS NULL
#define OPTION_VAL_1_CHS NULL
#define OPTION_VAL_2_CHS NULL
#define OPTION_VAL_3_CHS NULL
#define OPTION_VAL_4_CHS NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_CHS NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_CHS NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_CHS NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_CHS NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_CHS NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_CHS NULL

struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHS,
      CATEGORY_VIDEO_INFO_0_CHS
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CHS,
      CATEGORY_AUDIO_INFO_0_CHS
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_CHS,
      CATEGORY_MODE7_INFO_0_CHS
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_CHS,
      CATEGORY_SGB_INFO_0_CHS
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_CHS,
      CATEGORY_LIGHTGUN_INFO_0_CHS
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_CHS,
      CATEGORY_OVERCLOCK_INFO_0_CHS
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_CHS,
      CATEGORY_HACK_INFO_0_CHS
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_CHS,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_CHS,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_CHS },
         { "8:7",  OPTION_VAL_8_7_CHS },
         { "4:3",  OPTION_VAL_4_3_CHS },
         { "NTSC", OPTION_VAL_NTSC_CHS },
         { "PAL",  OPTION_VAL_PAL_CHS },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_CHS,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_CHS,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_CHS },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_CHS,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_CHS,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_CHS,
      NULL,
      BSNES_HOTFIXES_INFO_0_CHS,
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
      BSNES_ENTROPY_LABEL_CHS,
      NULL,
      BSNES_ENTROPY_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_CHS },
         { "High", OPTION_VAL_HIGH_CHS },
         { "None", OPTION_VAL_NONE_CHS },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_CHS,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_CHS,
      BSNES_CPU_OVERCLOCK_INFO_0_CHS,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CHS  },
         { "20",  OPTION_VAL_20_CHS  },
         { "30",  OPTION_VAL_30_CHS  },
         { "40",  OPTION_VAL_40_CHS  },
         { "50",  OPTION_VAL_50_CHS  },
         { "60",  OPTION_VAL_60_CHS  },
         { "70",  OPTION_VAL_70_CHS  },
         { "80",  OPTION_VAL_80_CHS  },
         { "90",  OPTION_VAL_90_CHS  },
         { "100", OPTION_VAL_100_CHS },
         { "110", OPTION_VAL_110_CHS },
         { "120", OPTION_VAL_120_CHS },
         { "130", OPTION_VAL_130_CHS },
         { "140", OPTION_VAL_140_CHS },
         { "150", OPTION_VAL_150_CHS },
         { "160", OPTION_VAL_160_CHS },
         { "170", OPTION_VAL_170_CHS },
         { "180", OPTION_VAL_180_CHS },
         { "190", OPTION_VAL_190_CHS },
         { "200", OPTION_VAL_200_CHS },
         { "210", OPTION_VAL_210_CHS },
         { "220", OPTION_VAL_220_CHS },
         { "230", OPTION_VAL_230_CHS },
         { "240", OPTION_VAL_240_CHS },
         { "250", OPTION_VAL_250_CHS },
         { "260", OPTION_VAL_260_CHS },
         { "270", OPTION_VAL_270_CHS },
         { "280", OPTION_VAL_280_CHS },
         { "290", OPTION_VAL_290_CHS },
         { "300", OPTION_VAL_300_CHS },
         { "310", OPTION_VAL_310_CHS },
         { "320", OPTION_VAL_320_CHS },
         { "330", OPTION_VAL_330_CHS },
         { "340", OPTION_VAL_340_CHS },
         { "350", OPTION_VAL_350_CHS },
         { "360", OPTION_VAL_360_CHS },
         { "370", OPTION_VAL_370_CHS },
         { "380", OPTION_VAL_380_CHS },
         { "390", OPTION_VAL_390_CHS },
         { "400", OPTION_VAL_400_CHS },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_CHS,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_CHS,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CHS,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_CHS,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_CHS,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CHS  },
         { "20",  OPTION_VAL_20_CHS  },
         { "30",  OPTION_VAL_30_CHS  },
         { "40",  OPTION_VAL_40_CHS  },
         { "50",  OPTION_VAL_50_CHS  },
         { "60",  OPTION_VAL_60_CHS  },
         { "70",  OPTION_VAL_70_CHS  },
         { "80",  OPTION_VAL_80_CHS  },
         { "90",  OPTION_VAL_90_CHS  },
         { "100", OPTION_VAL_100_CHS },
         { "110", OPTION_VAL_110_CHS },
         { "120", OPTION_VAL_120_CHS },
         { "130", OPTION_VAL_130_CHS },
         { "140", OPTION_VAL_140_CHS },
         { "150", OPTION_VAL_150_CHS },
         { "160", OPTION_VAL_160_CHS },
         { "170", OPTION_VAL_170_CHS },
         { "180", OPTION_VAL_180_CHS },
         { "190", OPTION_VAL_190_CHS },
         { "200", OPTION_VAL_200_CHS },
         { "210", OPTION_VAL_210_CHS },
         { "220", OPTION_VAL_220_CHS },
         { "230", OPTION_VAL_230_CHS },
         { "240", OPTION_VAL_240_CHS },
         { "250", OPTION_VAL_250_CHS },
         { "260", OPTION_VAL_260_CHS },
         { "270", OPTION_VAL_270_CHS },
         { "280", OPTION_VAL_280_CHS },
         { "290", OPTION_VAL_290_CHS },
         { "300", OPTION_VAL_300_CHS },
         { "310", OPTION_VAL_310_CHS },
         { "320", OPTION_VAL_320_CHS },
         { "330", OPTION_VAL_330_CHS },
         { "340", OPTION_VAL_340_CHS },
         { "350", OPTION_VAL_350_CHS },
         { "360", OPTION_VAL_360_CHS },
         { "370", OPTION_VAL_370_CHS },
         { "380", OPTION_VAL_380_CHS },
         { "390", OPTION_VAL_390_CHS },
         { "400", OPTION_VAL_400_CHS },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CHS,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_CHS,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_CHS,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CHS  },
         { "20",  OPTION_VAL_20_CHS  },
         { "30",  OPTION_VAL_30_CHS  },
         { "40",  OPTION_VAL_40_CHS  },
         { "50",  OPTION_VAL_50_CHS  },
         { "60",  OPTION_VAL_60_CHS  },
         { "70",  OPTION_VAL_70_CHS  },
         { "80",  OPTION_VAL_80_CHS  },
         { "90",  OPTION_VAL_90_CHS  },
         { "100", OPTION_VAL_100_CHS },
         { "110", OPTION_VAL_110_CHS },
         { "120", OPTION_VAL_120_CHS },
         { "130", OPTION_VAL_130_CHS },
         { "140", OPTION_VAL_140_CHS },
         { "150", OPTION_VAL_150_CHS },
         { "160", OPTION_VAL_160_CHS },
         { "170", OPTION_VAL_170_CHS },
         { "180", OPTION_VAL_180_CHS },
         { "190", OPTION_VAL_190_CHS },
         { "200", OPTION_VAL_200_CHS },
         { "210", OPTION_VAL_210_CHS },
         { "220", OPTION_VAL_220_CHS },
         { "230", OPTION_VAL_230_CHS },
         { "240", OPTION_VAL_240_CHS },
         { "250", OPTION_VAL_250_CHS },
         { "260", OPTION_VAL_260_CHS },
         { "270", OPTION_VAL_270_CHS },
         { "280", OPTION_VAL_280_CHS },
         { "290", OPTION_VAL_290_CHS },
         { "300", OPTION_VAL_300_CHS },
         { "310", OPTION_VAL_310_CHS },
         { "320", OPTION_VAL_320_CHS },
         { "330", OPTION_VAL_330_CHS },
         { "340", OPTION_VAL_340_CHS },
         { "350", OPTION_VAL_350_CHS },
         { "360", OPTION_VAL_360_CHS },
         { "370", OPTION_VAL_370_CHS },
         { "380", OPTION_VAL_380_CHS },
         { "390", OPTION_VAL_390_CHS },
         { "400", OPTION_VAL_400_CHS },
         { "410", OPTION_VAL_410_CHS },
         { "420", OPTION_VAL_420_CHS },
         { "430", OPTION_VAL_430_CHS },
         { "440", OPTION_VAL_440_CHS },
         { "450", OPTION_VAL_450_CHS },
         { "460", OPTION_VAL_460_CHS },
         { "470", OPTION_VAL_470_CHS },
         { "480", OPTION_VAL_480_CHS },
         { "490", OPTION_VAL_490_CHS },
         { "500", OPTION_VAL_500_CHS },
         { "510", OPTION_VAL_510_CHS },
         { "520", OPTION_VAL_520_CHS },
         { "530", OPTION_VAL_530_CHS },
         { "540", OPTION_VAL_540_CHS },
         { "550", OPTION_VAL_550_CHS },
         { "560", OPTION_VAL_560_CHS },
         { "570", OPTION_VAL_570_CHS },
         { "580", OPTION_VAL_580_CHS },
         { "590", OPTION_VAL_590_CHS },
         { "600", OPTION_VAL_600_CHS },
         { "610", OPTION_VAL_610_CHS },
         { "620", OPTION_VAL_620_CHS },
         { "630", OPTION_VAL_630_CHS },
         { "640", OPTION_VAL_640_CHS },
         { "650", OPTION_VAL_650_CHS },
         { "660", OPTION_VAL_660_CHS },
         { "670", OPTION_VAL_670_CHS },
         { "680", OPTION_VAL_680_CHS },
         { "690", OPTION_VAL_690_CHS },
         { "700", OPTION_VAL_700_CHS },
         { "710", OPTION_VAL_710_CHS },
         { "720", OPTION_VAL_720_CHS },
         { "730", OPTION_VAL_730_CHS },
         { "740", OPTION_VAL_740_CHS },
         { "750", OPTION_VAL_750_CHS },
         { "760", OPTION_VAL_760_CHS },
         { "770", OPTION_VAL_770_CHS },
         { "780", OPTION_VAL_780_CHS },
         { "790", OPTION_VAL_790_CHS },
         { "800", OPTION_VAL_800_CHS },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_CHS,
      BSNES_PPU_FAST_LABEL_CAT_CHS,
      BSNES_PPU_FAST_INFO_0_CHS,
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
      BSNES_PPU_DEINTERLACE_LABEL_CHS,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_CHS,
      BSNES_PPU_DEINTERLACE_INFO_0_CHS,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CHS,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_CHS,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_CHS,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_CHS,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_CHS,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_CHS,
      BSNES_MODE7_SCALE_LABEL_CAT_CHS,
      BSNES_MODE7_SCALE_INFO_0_CHS,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_CHS  },
         { "2x", OPTION_VAL_2X_CHS  },
         { "3x", OPTION_VAL_3X_CHS  },
         { "4x", OPTION_VAL_4X_CHS  },
         { "5x", OPTION_VAL_5X_CHS },
         { "6x", OPTION_VAL_6X_CHS },
         { "7x", OPTION_VAL_7X_CHS },
         { "8x", OPTION_VAL_8X_CHS },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_CHS,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_CHS,
      BSNES_MODE7_PERSPECTIVE_INFO_0_CHS,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_CHS,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_CHS,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_CHS,
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
      BSNES_MODE7_MOSAIC_LABEL_CHS,
      BSNES_MODE7_MOSAIC_LABEL_CAT_CHS,
      BSNES_MODE7_MOSAIC_INFO_0_CHS,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_CHS,
      BSNES_DSP_FAST_LABEL_CAT_CHS,
      BSNES_DSP_FAST_INFO_0_CHS,
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
      BSNES_DSP_CUBIC_LABEL_CHS,
      BSNES_DSP_CUBIC_LABEL_CAT_CHS,
      BSNES_DSP_CUBIC_INFO_0_CHS,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_CHS,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_CHS,
      BSNES_DSP_ECHO_SHADOW_INFO_0_CHS,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_CHS,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_CHS,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_CHS,
      NULL,
      BSNES_SGB_BIOS_INFO_0_CHS,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_CHS   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_CHS },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_CHS,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_CHS  },
         { "2",   OPTION_VAL_2_CHS },
         { "3",   OPTION_VAL_3_CHS },
         { "4",   OPTION_VAL_4_CHS },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_CHS,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_CHS,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_CHS,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_CHS,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_CHS,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_CHS,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define CATEGORY_VIDEO_LABEL_CHT "視訊"
#define CATEGORY_VIDEO_INFO_0_CHT "更改影像輸出設定"
#define CATEGORY_AUDIO_LABEL_CHT "音訊"
#define CATEGORY_AUDIO_INFO_0_CHT "更改聲音輸出設定"
#define CATEGORY_MODE7_LABEL_CHT NULL
#define CATEGORY_MODE7_INFO_0_CHT NULL
#define CATEGORY_SGB_LABEL_CHT NULL
#define CATEGORY_SGB_INFO_0_CHT NULL
#define CATEGORY_LIGHTGUN_LABEL_CHT "光線槍"
#define CATEGORY_LIGHTGUN_INFO_0_CHT NULL
#define CATEGORY_OVERCLOCK_LABEL_CHT NULL
#define CATEGORY_OVERCLOCK_INFO_0_CHT NULL
#define CATEGORY_HACK_LABEL_CHT NULL
#define CATEGORY_HACK_INFO_0_CHT NULL
#define BSNES_ASPECT_RATIO_LABEL_CHT NULL
#define BSNES_ASPECT_RATIO_INFO_0_CHT NULL
#define OPTION_VAL_AUTO_CHT "自動"
#define OPTION_VAL_8_7_CHT NULL
#define OPTION_VAL_4_3_CHT NULL
#define OPTION_VAL_NTSC_CHT NULL
#define OPTION_VAL_PAL_CHT NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_CHT NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_CHT NULL
#define OPTION_VAL_OFF_CHT NULL
#define BSNES_BLUR_EMULATION_LABEL_CHT NULL
#define BSNES_BLUR_EMULATION_INFO_0_CHT NULL
#define BSNES_HOTFIXES_LABEL_CHT NULL
#define BSNES_HOTFIXES_INFO_0_CHT NULL
#define BSNES_ENTROPY_LABEL_CHT NULL
#define BSNES_ENTROPY_INFO_0_CHT NULL
#define OPTION_VAL_LOW_CHT NULL
#define OPTION_VAL_HIGH_CHT NULL
#define OPTION_VAL_NONE_CHT "無"
#define BSNES_CPU_OVERCLOCK_LABEL_CHT NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_CHT NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_CHT NULL
#define OPTION_VAL_10_CHT NULL
#define OPTION_VAL_20_CHT NULL
#define OPTION_VAL_30_CHT NULL
#define OPTION_VAL_40_CHT NULL
#define OPTION_VAL_50_CHT NULL
#define OPTION_VAL_60_CHT NULL
#define OPTION_VAL_70_CHT NULL
#define OPTION_VAL_80_CHT NULL
#define OPTION_VAL_90_CHT NULL
#define OPTION_VAL_100_CHT NULL
#define OPTION_VAL_110_CHT NULL
#define OPTION_VAL_120_CHT NULL
#define OPTION_VAL_130_CHT NULL
#define OPTION_VAL_140_CHT NULL
#define OPTION_VAL_150_CHT NULL
#define OPTION_VAL_160_CHT NULL
#define OPTION_VAL_170_CHT NULL
#define OPTION_VAL_180_CHT NULL
#define OPTION_VAL_190_CHT NULL
#define OPTION_VAL_200_CHT NULL
#define OPTION_VAL_210_CHT NULL
#define OPTION_VAL_220_CHT NULL
#define OPTION_VAL_230_CHT NULL
#define OPTION_VAL_240_CHT NULL
#define OPTION_VAL_250_CHT NULL
#define OPTION_VAL_260_CHT NULL
#define OPTION_VAL_270_CHT NULL
#define OPTION_VAL_280_CHT NULL
#define OPTION_VAL_290_CHT NULL
#define OPTION_VAL_300_CHT NULL
#define OPTION_VAL_310_CHT NULL
#define OPTION_VAL_320_CHT NULL
#define OPTION_VAL_330_CHT NULL
#define OPTION_VAL_340_CHT NULL
#define OPTION_VAL_350_CHT NULL
#define OPTION_VAL_360_CHT NULL
#define OPTION_VAL_370_CHT NULL
#define OPTION_VAL_380_CHT NULL
#define OPTION_VAL_390_CHT NULL
#define OPTION_VAL_400_CHT NULL
#define BSNES_CPU_FASTMATH_LABEL_CHT NULL
#define BSNES_CPU_FASTMATH_INFO_0_CHT NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CHT NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_CHT NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_CHT NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CHT NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_CHT NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_CHT NULL
#define OPTION_VAL_410_CHT NULL
#define OPTION_VAL_420_CHT NULL
#define OPTION_VAL_430_CHT NULL
#define OPTION_VAL_440_CHT NULL
#define OPTION_VAL_450_CHT NULL
#define OPTION_VAL_460_CHT NULL
#define OPTION_VAL_470_CHT NULL
#define OPTION_VAL_480_CHT NULL
#define OPTION_VAL_490_CHT NULL
#define OPTION_VAL_500_CHT NULL
#define OPTION_VAL_510_CHT NULL
#define OPTION_VAL_520_CHT NULL
#define OPTION_VAL_530_CHT NULL
#define OPTION_VAL_540_CHT NULL
#define OPTION_VAL_550_CHT NULL
#define OPTION_VAL_560_CHT NULL
#define OPTION_VAL_570_CHT NULL
#define OPTION_VAL_580_CHT NULL
#define OPTION_VAL_590_CHT NULL
#define OPTION_VAL_600_CHT NULL
#define OPTION_VAL_610_CHT NULL
#define OPTION_VAL_620_CHT NULL
#define OPTION_VAL_630_CHT NULL
#define OPTION_VAL_640_CHT NULL
#define OPTION_VAL_650_CHT NULL
#define OPTION_VAL_660_CHT NULL
#define OPTION_VAL_670_CHT NULL
#define OPTION_VAL_680_CHT NULL
#define OPTION_VAL_690_CHT NULL
#define OPTION_VAL_700_CHT NULL
#define OPTION_VAL_710_CHT NULL
#define OPTION_VAL_720_CHT NULL
#define OPTION_VAL_730_CHT NULL
#define OPTION_VAL_740_CHT NULL
#define OPTION_VAL_750_CHT NULL
#define OPTION_VAL_760_CHT NULL
#define OPTION_VAL_770_CHT NULL
#define OPTION_VAL_780_CHT NULL
#define OPTION_VAL_790_CHT NULL
#define OPTION_VAL_800_CHT NULL
#define BSNES_PPU_FAST_LABEL_CHT NULL
#define BSNES_PPU_FAST_LABEL_CAT_CHT NULL
#define BSNES_PPU_FAST_INFO_0_CHT NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CHT NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_CHT NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_CHT NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CHT NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_CHT NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_CHT NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_CHT NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_CHT NULL
#define BSNES_MODE7_SCALE_LABEL_CHT NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_CHT "刻度"
#define BSNES_MODE7_SCALE_INFO_0_CHT NULL
#define OPTION_VAL_1X_CHT NULL
#define OPTION_VAL_2X_CHT NULL
#define OPTION_VAL_3X_CHT NULL
#define OPTION_VAL_4X_CHT NULL
#define OPTION_VAL_5X_CHT NULL
#define OPTION_VAL_6X_CHT NULL
#define OPTION_VAL_7X_CHT NULL
#define OPTION_VAL_8X_CHT NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CHT NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_CHT NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_CHT NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CHT NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_CHT NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_CHT NULL
#define BSNES_MODE7_MOSAIC_LABEL_CHT NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_CHT NULL
#define BSNES_MODE7_MOSAIC_INFO_0_CHT NULL
#define BSNES_DSP_FAST_LABEL_CHT NULL
#define BSNES_DSP_FAST_LABEL_CAT_CHT NULL
#define BSNES_DSP_FAST_INFO_0_CHT NULL
#define BSNES_DSP_CUBIC_LABEL_CHT NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_CHT NULL
#define BSNES_DSP_CUBIC_INFO_0_CHT NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CHT NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_CHT NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_CHT NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_CHT NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_CHT NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_CHT NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_CHT NULL
#define BSNES_SGB_BIOS_LABEL_CHT NULL
#define BSNES_SGB_BIOS_INFO_0_CHT NULL
#define OPTION_VAL_SGB1_SFC_CHT NULL
#define OPTION_VAL_SGB2_SFC_CHT NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_CHT NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_CHT NULL
#define OPTION_VAL_1_CHT NULL
#define OPTION_VAL_2_CHT NULL
#define OPTION_VAL_3_CHT NULL
#define OPTION_VAL_4_CHT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_CHT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_CHT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_CHT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_CHT NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_CHT NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHT,
      CATEGORY_VIDEO_INFO_0_CHT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CHT,
      CATEGORY_AUDIO_INFO_0_CHT
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_CHT,
      CATEGORY_MODE7_INFO_0_CHT
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_CHT,
      CATEGORY_SGB_INFO_0_CHT
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_CHT,
      CATEGORY_LIGHTGUN_INFO_0_CHT
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_CHT,
      CATEGORY_OVERCLOCK_INFO_0_CHT
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_CHT,
      CATEGORY_HACK_INFO_0_CHT
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_CHT,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_CHT,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_CHT },
         { "8:7",  OPTION_VAL_8_7_CHT },
         { "4:3",  OPTION_VAL_4_3_CHT },
         { "NTSC", OPTION_VAL_NTSC_CHT },
         { "PAL",  OPTION_VAL_PAL_CHT },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_CHT,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_CHT,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_CHT },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_CHT,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_CHT,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_CHT,
      NULL,
      BSNES_HOTFIXES_INFO_0_CHT,
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
      BSNES_ENTROPY_LABEL_CHT,
      NULL,
      BSNES_ENTROPY_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_CHT },
         { "High", OPTION_VAL_HIGH_CHT },
         { "None", OPTION_VAL_NONE_CHT },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_CHT,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_CHT,
      BSNES_CPU_OVERCLOCK_INFO_0_CHT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CHT  },
         { "20",  OPTION_VAL_20_CHT  },
         { "30",  OPTION_VAL_30_CHT  },
         { "40",  OPTION_VAL_40_CHT  },
         { "50",  OPTION_VAL_50_CHT  },
         { "60",  OPTION_VAL_60_CHT  },
         { "70",  OPTION_VAL_70_CHT  },
         { "80",  OPTION_VAL_80_CHT  },
         { "90",  OPTION_VAL_90_CHT  },
         { "100", OPTION_VAL_100_CHT },
         { "110", OPTION_VAL_110_CHT },
         { "120", OPTION_VAL_120_CHT },
         { "130", OPTION_VAL_130_CHT },
         { "140", OPTION_VAL_140_CHT },
         { "150", OPTION_VAL_150_CHT },
         { "160", OPTION_VAL_160_CHT },
         { "170", OPTION_VAL_170_CHT },
         { "180", OPTION_VAL_180_CHT },
         { "190", OPTION_VAL_190_CHT },
         { "200", OPTION_VAL_200_CHT },
         { "210", OPTION_VAL_210_CHT },
         { "220", OPTION_VAL_220_CHT },
         { "230", OPTION_VAL_230_CHT },
         { "240", OPTION_VAL_240_CHT },
         { "250", OPTION_VAL_250_CHT },
         { "260", OPTION_VAL_260_CHT },
         { "270", OPTION_VAL_270_CHT },
         { "280", OPTION_VAL_280_CHT },
         { "290", OPTION_VAL_290_CHT },
         { "300", OPTION_VAL_300_CHT },
         { "310", OPTION_VAL_310_CHT },
         { "320", OPTION_VAL_320_CHT },
         { "330", OPTION_VAL_330_CHT },
         { "340", OPTION_VAL_340_CHT },
         { "350", OPTION_VAL_350_CHT },
         { "360", OPTION_VAL_360_CHT },
         { "370", OPTION_VAL_370_CHT },
         { "380", OPTION_VAL_380_CHT },
         { "390", OPTION_VAL_390_CHT },
         { "400", OPTION_VAL_400_CHT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_CHT,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_CHT,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CHT,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_CHT,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_CHT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CHT  },
         { "20",  OPTION_VAL_20_CHT  },
         { "30",  OPTION_VAL_30_CHT  },
         { "40",  OPTION_VAL_40_CHT  },
         { "50",  OPTION_VAL_50_CHT  },
         { "60",  OPTION_VAL_60_CHT  },
         { "70",  OPTION_VAL_70_CHT  },
         { "80",  OPTION_VAL_80_CHT  },
         { "90",  OPTION_VAL_90_CHT  },
         { "100", OPTION_VAL_100_CHT },
         { "110", OPTION_VAL_110_CHT },
         { "120", OPTION_VAL_120_CHT },
         { "130", OPTION_VAL_130_CHT },
         { "140", OPTION_VAL_140_CHT },
         { "150", OPTION_VAL_150_CHT },
         { "160", OPTION_VAL_160_CHT },
         { "170", OPTION_VAL_170_CHT },
         { "180", OPTION_VAL_180_CHT },
         { "190", OPTION_VAL_190_CHT },
         { "200", OPTION_VAL_200_CHT },
         { "210", OPTION_VAL_210_CHT },
         { "220", OPTION_VAL_220_CHT },
         { "230", OPTION_VAL_230_CHT },
         { "240", OPTION_VAL_240_CHT },
         { "250", OPTION_VAL_250_CHT },
         { "260", OPTION_VAL_260_CHT },
         { "270", OPTION_VAL_270_CHT },
         { "280", OPTION_VAL_280_CHT },
         { "290", OPTION_VAL_290_CHT },
         { "300", OPTION_VAL_300_CHT },
         { "310", OPTION_VAL_310_CHT },
         { "320", OPTION_VAL_320_CHT },
         { "330", OPTION_VAL_330_CHT },
         { "340", OPTION_VAL_340_CHT },
         { "350", OPTION_VAL_350_CHT },
         { "360", OPTION_VAL_360_CHT },
         { "370", OPTION_VAL_370_CHT },
         { "380", OPTION_VAL_380_CHT },
         { "390", OPTION_VAL_390_CHT },
         { "400", OPTION_VAL_400_CHT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CHT,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_CHT,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_CHT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CHT  },
         { "20",  OPTION_VAL_20_CHT  },
         { "30",  OPTION_VAL_30_CHT  },
         { "40",  OPTION_VAL_40_CHT  },
         { "50",  OPTION_VAL_50_CHT  },
         { "60",  OPTION_VAL_60_CHT  },
         { "70",  OPTION_VAL_70_CHT  },
         { "80",  OPTION_VAL_80_CHT  },
         { "90",  OPTION_VAL_90_CHT  },
         { "100", OPTION_VAL_100_CHT },
         { "110", OPTION_VAL_110_CHT },
         { "120", OPTION_VAL_120_CHT },
         { "130", OPTION_VAL_130_CHT },
         { "140", OPTION_VAL_140_CHT },
         { "150", OPTION_VAL_150_CHT },
         { "160", OPTION_VAL_160_CHT },
         { "170", OPTION_VAL_170_CHT },
         { "180", OPTION_VAL_180_CHT },
         { "190", OPTION_VAL_190_CHT },
         { "200", OPTION_VAL_200_CHT },
         { "210", OPTION_VAL_210_CHT },
         { "220", OPTION_VAL_220_CHT },
         { "230", OPTION_VAL_230_CHT },
         { "240", OPTION_VAL_240_CHT },
         { "250", OPTION_VAL_250_CHT },
         { "260", OPTION_VAL_260_CHT },
         { "270", OPTION_VAL_270_CHT },
         { "280", OPTION_VAL_280_CHT },
         { "290", OPTION_VAL_290_CHT },
         { "300", OPTION_VAL_300_CHT },
         { "310", OPTION_VAL_310_CHT },
         { "320", OPTION_VAL_320_CHT },
         { "330", OPTION_VAL_330_CHT },
         { "340", OPTION_VAL_340_CHT },
         { "350", OPTION_VAL_350_CHT },
         { "360", OPTION_VAL_360_CHT },
         { "370", OPTION_VAL_370_CHT },
         { "380", OPTION_VAL_380_CHT },
         { "390", OPTION_VAL_390_CHT },
         { "400", OPTION_VAL_400_CHT },
         { "410", OPTION_VAL_410_CHT },
         { "420", OPTION_VAL_420_CHT },
         { "430", OPTION_VAL_430_CHT },
         { "440", OPTION_VAL_440_CHT },
         { "450", OPTION_VAL_450_CHT },
         { "460", OPTION_VAL_460_CHT },
         { "470", OPTION_VAL_470_CHT },
         { "480", OPTION_VAL_480_CHT },
         { "490", OPTION_VAL_490_CHT },
         { "500", OPTION_VAL_500_CHT },
         { "510", OPTION_VAL_510_CHT },
         { "520", OPTION_VAL_520_CHT },
         { "530", OPTION_VAL_530_CHT },
         { "540", OPTION_VAL_540_CHT },
         { "550", OPTION_VAL_550_CHT },
         { "560", OPTION_VAL_560_CHT },
         { "570", OPTION_VAL_570_CHT },
         { "580", OPTION_VAL_580_CHT },
         { "590", OPTION_VAL_590_CHT },
         { "600", OPTION_VAL_600_CHT },
         { "610", OPTION_VAL_610_CHT },
         { "620", OPTION_VAL_620_CHT },
         { "630", OPTION_VAL_630_CHT },
         { "640", OPTION_VAL_640_CHT },
         { "650", OPTION_VAL_650_CHT },
         { "660", OPTION_VAL_660_CHT },
         { "670", OPTION_VAL_670_CHT },
         { "680", OPTION_VAL_680_CHT },
         { "690", OPTION_VAL_690_CHT },
         { "700", OPTION_VAL_700_CHT },
         { "710", OPTION_VAL_710_CHT },
         { "720", OPTION_VAL_720_CHT },
         { "730", OPTION_VAL_730_CHT },
         { "740", OPTION_VAL_740_CHT },
         { "750", OPTION_VAL_750_CHT },
         { "760", OPTION_VAL_760_CHT },
         { "770", OPTION_VAL_770_CHT },
         { "780", OPTION_VAL_780_CHT },
         { "790", OPTION_VAL_790_CHT },
         { "800", OPTION_VAL_800_CHT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_CHT,
      BSNES_PPU_FAST_LABEL_CAT_CHT,
      BSNES_PPU_FAST_INFO_0_CHT,
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
      BSNES_PPU_DEINTERLACE_LABEL_CHT,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_CHT,
      BSNES_PPU_DEINTERLACE_INFO_0_CHT,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CHT,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_CHT,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_CHT,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_CHT,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_CHT,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_CHT,
      BSNES_MODE7_SCALE_LABEL_CAT_CHT,
      BSNES_MODE7_SCALE_INFO_0_CHT,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_CHT  },
         { "2x", OPTION_VAL_2X_CHT  },
         { "3x", OPTION_VAL_3X_CHT  },
         { "4x", OPTION_VAL_4X_CHT  },
         { "5x", OPTION_VAL_5X_CHT },
         { "6x", OPTION_VAL_6X_CHT },
         { "7x", OPTION_VAL_7X_CHT },
         { "8x", OPTION_VAL_8X_CHT },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_CHT,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_CHT,
      BSNES_MODE7_PERSPECTIVE_INFO_0_CHT,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_CHT,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_CHT,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_CHT,
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
      BSNES_MODE7_MOSAIC_LABEL_CHT,
      BSNES_MODE7_MOSAIC_LABEL_CAT_CHT,
      BSNES_MODE7_MOSAIC_INFO_0_CHT,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_CHT,
      BSNES_DSP_FAST_LABEL_CAT_CHT,
      BSNES_DSP_FAST_INFO_0_CHT,
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
      BSNES_DSP_CUBIC_LABEL_CHT,
      BSNES_DSP_CUBIC_LABEL_CAT_CHT,
      BSNES_DSP_CUBIC_INFO_0_CHT,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_CHT,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_CHT,
      BSNES_DSP_ECHO_SHADOW_INFO_0_CHT,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_CHT,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_CHT,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_CHT,
      NULL,
      BSNES_SGB_BIOS_INFO_0_CHT,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_CHT   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_CHT },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_CHT,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_CHT  },
         { "2",   OPTION_VAL_2_CHT },
         { "3",   OPTION_VAL_3_CHT },
         { "4",   OPTION_VAL_4_CHT },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_CHT,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_CHT,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_CHT,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_CHT,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_CHT,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_CHT,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define CATEGORY_VIDEO_LABEL_CS NULL
#define CATEGORY_VIDEO_INFO_0_CS "Změnit nastavení video výstupu."
#define CATEGORY_AUDIO_LABEL_CS "Zvuk"
#define CATEGORY_AUDIO_INFO_0_CS "Změnit nastavení zvuku."
#define CATEGORY_MODE7_LABEL_CS NULL
#define CATEGORY_MODE7_INFO_0_CS NULL
#define CATEGORY_SGB_LABEL_CS NULL
#define CATEGORY_SGB_INFO_0_CS NULL
#define CATEGORY_LIGHTGUN_LABEL_CS NULL
#define CATEGORY_LIGHTGUN_INFO_0_CS NULL
#define CATEGORY_OVERCLOCK_LABEL_CS NULL
#define CATEGORY_OVERCLOCK_INFO_0_CS NULL
#define CATEGORY_HACK_LABEL_CS NULL
#define CATEGORY_HACK_INFO_0_CS NULL
#define BSNES_ASPECT_RATIO_LABEL_CS NULL
#define BSNES_ASPECT_RATIO_INFO_0_CS NULL
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_8_7_CS NULL
#define OPTION_VAL_4_3_CS NULL
#define OPTION_VAL_NTSC_CS NULL
#define OPTION_VAL_PAL_CS NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_CS NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_CS NULL
#define OPTION_VAL_OFF_CS NULL
#define BSNES_BLUR_EMULATION_LABEL_CS NULL
#define BSNES_BLUR_EMULATION_INFO_0_CS NULL
#define BSNES_HOTFIXES_LABEL_CS NULL
#define BSNES_HOTFIXES_INFO_0_CS NULL
#define BSNES_ENTROPY_LABEL_CS NULL
#define BSNES_ENTROPY_INFO_0_CS NULL
#define OPTION_VAL_LOW_CS NULL
#define OPTION_VAL_HIGH_CS NULL
#define OPTION_VAL_NONE_CS NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CS NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_CS NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_CS NULL
#define OPTION_VAL_10_CS NULL
#define OPTION_VAL_20_CS NULL
#define OPTION_VAL_30_CS NULL
#define OPTION_VAL_40_CS NULL
#define OPTION_VAL_50_CS NULL
#define OPTION_VAL_60_CS NULL
#define OPTION_VAL_70_CS NULL
#define OPTION_VAL_80_CS NULL
#define OPTION_VAL_90_CS NULL
#define OPTION_VAL_100_CS NULL
#define OPTION_VAL_110_CS NULL
#define OPTION_VAL_120_CS NULL
#define OPTION_VAL_130_CS NULL
#define OPTION_VAL_140_CS NULL
#define OPTION_VAL_150_CS NULL
#define OPTION_VAL_160_CS NULL
#define OPTION_VAL_170_CS NULL
#define OPTION_VAL_180_CS NULL
#define OPTION_VAL_190_CS NULL
#define OPTION_VAL_200_CS NULL
#define OPTION_VAL_210_CS NULL
#define OPTION_VAL_220_CS NULL
#define OPTION_VAL_230_CS NULL
#define OPTION_VAL_240_CS NULL
#define OPTION_VAL_250_CS NULL
#define OPTION_VAL_260_CS NULL
#define OPTION_VAL_270_CS NULL
#define OPTION_VAL_280_CS NULL
#define OPTION_VAL_290_CS NULL
#define OPTION_VAL_300_CS NULL
#define OPTION_VAL_310_CS NULL
#define OPTION_VAL_320_CS NULL
#define OPTION_VAL_330_CS NULL
#define OPTION_VAL_340_CS NULL
#define OPTION_VAL_350_CS NULL
#define OPTION_VAL_360_CS NULL
#define OPTION_VAL_370_CS NULL
#define OPTION_VAL_380_CS NULL
#define OPTION_VAL_390_CS NULL
#define OPTION_VAL_400_CS NULL
#define BSNES_CPU_FASTMATH_LABEL_CS NULL
#define BSNES_CPU_FASTMATH_INFO_0_CS NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CS NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_CS NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_CS NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CS NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_CS NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_CS NULL
#define OPTION_VAL_410_CS NULL
#define OPTION_VAL_420_CS NULL
#define OPTION_VAL_430_CS NULL
#define OPTION_VAL_440_CS NULL
#define OPTION_VAL_450_CS NULL
#define OPTION_VAL_460_CS NULL
#define OPTION_VAL_470_CS NULL
#define OPTION_VAL_480_CS NULL
#define OPTION_VAL_490_CS NULL
#define OPTION_VAL_500_CS NULL
#define OPTION_VAL_510_CS NULL
#define OPTION_VAL_520_CS NULL
#define OPTION_VAL_530_CS NULL
#define OPTION_VAL_540_CS NULL
#define OPTION_VAL_550_CS NULL
#define OPTION_VAL_560_CS NULL
#define OPTION_VAL_570_CS NULL
#define OPTION_VAL_580_CS NULL
#define OPTION_VAL_590_CS NULL
#define OPTION_VAL_600_CS NULL
#define OPTION_VAL_610_CS NULL
#define OPTION_VAL_620_CS NULL
#define OPTION_VAL_630_CS NULL
#define OPTION_VAL_640_CS NULL
#define OPTION_VAL_650_CS NULL
#define OPTION_VAL_660_CS NULL
#define OPTION_VAL_670_CS NULL
#define OPTION_VAL_680_CS NULL
#define OPTION_VAL_690_CS NULL
#define OPTION_VAL_700_CS NULL
#define OPTION_VAL_710_CS NULL
#define OPTION_VAL_720_CS NULL
#define OPTION_VAL_730_CS NULL
#define OPTION_VAL_740_CS NULL
#define OPTION_VAL_750_CS NULL
#define OPTION_VAL_760_CS NULL
#define OPTION_VAL_770_CS NULL
#define OPTION_VAL_780_CS NULL
#define OPTION_VAL_790_CS NULL
#define OPTION_VAL_800_CS NULL
#define BSNES_PPU_FAST_LABEL_CS NULL
#define BSNES_PPU_FAST_LABEL_CAT_CS NULL
#define BSNES_PPU_FAST_INFO_0_CS NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CS NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_CS NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_CS NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CS NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_CS NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_CS NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_CS NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_CS NULL
#define BSNES_MODE7_SCALE_LABEL_CS NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_CS NULL
#define BSNES_MODE7_SCALE_INFO_0_CS NULL
#define OPTION_VAL_1X_CS NULL
#define OPTION_VAL_2X_CS NULL
#define OPTION_VAL_3X_CS NULL
#define OPTION_VAL_4X_CS NULL
#define OPTION_VAL_5X_CS NULL
#define OPTION_VAL_6X_CS NULL
#define OPTION_VAL_7X_CS NULL
#define OPTION_VAL_8X_CS NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CS NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_CS NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_CS NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CS NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_CS NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_CS NULL
#define BSNES_MODE7_MOSAIC_LABEL_CS NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_CS NULL
#define BSNES_MODE7_MOSAIC_INFO_0_CS NULL
#define BSNES_DSP_FAST_LABEL_CS NULL
#define BSNES_DSP_FAST_LABEL_CAT_CS NULL
#define BSNES_DSP_FAST_INFO_0_CS NULL
#define BSNES_DSP_CUBIC_LABEL_CS NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_CS NULL
#define BSNES_DSP_CUBIC_INFO_0_CS NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CS NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_CS NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_CS NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_CS NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_CS NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_CS NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_CS NULL
#define BSNES_SGB_BIOS_LABEL_CS NULL
#define BSNES_SGB_BIOS_INFO_0_CS NULL
#define OPTION_VAL_SGB1_SFC_CS NULL
#define OPTION_VAL_SGB2_SFC_CS NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_CS NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_CS NULL
#define OPTION_VAL_1_CS NULL
#define OPTION_VAL_2_CS NULL
#define OPTION_VAL_3_CS NULL
#define OPTION_VAL_4_CS NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_CS NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_CS NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_CS NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_CS NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_CS NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_CS NULL

struct retro_core_option_v2_category option_cats_cs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CS,
      CATEGORY_VIDEO_INFO_0_CS
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CS,
      CATEGORY_AUDIO_INFO_0_CS
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_CS,
      CATEGORY_MODE7_INFO_0_CS
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_CS,
      CATEGORY_SGB_INFO_0_CS
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_CS,
      CATEGORY_LIGHTGUN_INFO_0_CS
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_CS,
      CATEGORY_OVERCLOCK_INFO_0_CS
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_CS,
      CATEGORY_HACK_INFO_0_CS
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_CS,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_CS,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_CS },
         { "8:7",  OPTION_VAL_8_7_CS },
         { "4:3",  OPTION_VAL_4_3_CS },
         { "NTSC", OPTION_VAL_NTSC_CS },
         { "PAL",  OPTION_VAL_PAL_CS },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_CS,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_CS,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_CS },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_CS,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_CS,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_CS,
      NULL,
      BSNES_HOTFIXES_INFO_0_CS,
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
      BSNES_ENTROPY_LABEL_CS,
      NULL,
      BSNES_ENTROPY_INFO_0_CS,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_CS },
         { "High", OPTION_VAL_HIGH_CS },
         { "None", OPTION_VAL_NONE_CS },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_CS,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_CS,
      BSNES_CPU_OVERCLOCK_INFO_0_CS,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CS  },
         { "20",  OPTION_VAL_20_CS  },
         { "30",  OPTION_VAL_30_CS  },
         { "40",  OPTION_VAL_40_CS  },
         { "50",  OPTION_VAL_50_CS  },
         { "60",  OPTION_VAL_60_CS  },
         { "70",  OPTION_VAL_70_CS  },
         { "80",  OPTION_VAL_80_CS  },
         { "90",  OPTION_VAL_90_CS  },
         { "100", OPTION_VAL_100_CS },
         { "110", OPTION_VAL_110_CS },
         { "120", OPTION_VAL_120_CS },
         { "130", OPTION_VAL_130_CS },
         { "140", OPTION_VAL_140_CS },
         { "150", OPTION_VAL_150_CS },
         { "160", OPTION_VAL_160_CS },
         { "170", OPTION_VAL_170_CS },
         { "180", OPTION_VAL_180_CS },
         { "190", OPTION_VAL_190_CS },
         { "200", OPTION_VAL_200_CS },
         { "210", OPTION_VAL_210_CS },
         { "220", OPTION_VAL_220_CS },
         { "230", OPTION_VAL_230_CS },
         { "240", OPTION_VAL_240_CS },
         { "250", OPTION_VAL_250_CS },
         { "260", OPTION_VAL_260_CS },
         { "270", OPTION_VAL_270_CS },
         { "280", OPTION_VAL_280_CS },
         { "290", OPTION_VAL_290_CS },
         { "300", OPTION_VAL_300_CS },
         { "310", OPTION_VAL_310_CS },
         { "320", OPTION_VAL_320_CS },
         { "330", OPTION_VAL_330_CS },
         { "340", OPTION_VAL_340_CS },
         { "350", OPTION_VAL_350_CS },
         { "360", OPTION_VAL_360_CS },
         { "370", OPTION_VAL_370_CS },
         { "380", OPTION_VAL_380_CS },
         { "390", OPTION_VAL_390_CS },
         { "400", OPTION_VAL_400_CS },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_CS,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_CS,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CS,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_CS,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_CS,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CS  },
         { "20",  OPTION_VAL_20_CS  },
         { "30",  OPTION_VAL_30_CS  },
         { "40",  OPTION_VAL_40_CS  },
         { "50",  OPTION_VAL_50_CS  },
         { "60",  OPTION_VAL_60_CS  },
         { "70",  OPTION_VAL_70_CS  },
         { "80",  OPTION_VAL_80_CS  },
         { "90",  OPTION_VAL_90_CS  },
         { "100", OPTION_VAL_100_CS },
         { "110", OPTION_VAL_110_CS },
         { "120", OPTION_VAL_120_CS },
         { "130", OPTION_VAL_130_CS },
         { "140", OPTION_VAL_140_CS },
         { "150", OPTION_VAL_150_CS },
         { "160", OPTION_VAL_160_CS },
         { "170", OPTION_VAL_170_CS },
         { "180", OPTION_VAL_180_CS },
         { "190", OPTION_VAL_190_CS },
         { "200", OPTION_VAL_200_CS },
         { "210", OPTION_VAL_210_CS },
         { "220", OPTION_VAL_220_CS },
         { "230", OPTION_VAL_230_CS },
         { "240", OPTION_VAL_240_CS },
         { "250", OPTION_VAL_250_CS },
         { "260", OPTION_VAL_260_CS },
         { "270", OPTION_VAL_270_CS },
         { "280", OPTION_VAL_280_CS },
         { "290", OPTION_VAL_290_CS },
         { "300", OPTION_VAL_300_CS },
         { "310", OPTION_VAL_310_CS },
         { "320", OPTION_VAL_320_CS },
         { "330", OPTION_VAL_330_CS },
         { "340", OPTION_VAL_340_CS },
         { "350", OPTION_VAL_350_CS },
         { "360", OPTION_VAL_360_CS },
         { "370", OPTION_VAL_370_CS },
         { "380", OPTION_VAL_380_CS },
         { "390", OPTION_VAL_390_CS },
         { "400", OPTION_VAL_400_CS },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CS,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_CS,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_CS,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CS  },
         { "20",  OPTION_VAL_20_CS  },
         { "30",  OPTION_VAL_30_CS  },
         { "40",  OPTION_VAL_40_CS  },
         { "50",  OPTION_VAL_50_CS  },
         { "60",  OPTION_VAL_60_CS  },
         { "70",  OPTION_VAL_70_CS  },
         { "80",  OPTION_VAL_80_CS  },
         { "90",  OPTION_VAL_90_CS  },
         { "100", OPTION_VAL_100_CS },
         { "110", OPTION_VAL_110_CS },
         { "120", OPTION_VAL_120_CS },
         { "130", OPTION_VAL_130_CS },
         { "140", OPTION_VAL_140_CS },
         { "150", OPTION_VAL_150_CS },
         { "160", OPTION_VAL_160_CS },
         { "170", OPTION_VAL_170_CS },
         { "180", OPTION_VAL_180_CS },
         { "190", OPTION_VAL_190_CS },
         { "200", OPTION_VAL_200_CS },
         { "210", OPTION_VAL_210_CS },
         { "220", OPTION_VAL_220_CS },
         { "230", OPTION_VAL_230_CS },
         { "240", OPTION_VAL_240_CS },
         { "250", OPTION_VAL_250_CS },
         { "260", OPTION_VAL_260_CS },
         { "270", OPTION_VAL_270_CS },
         { "280", OPTION_VAL_280_CS },
         { "290", OPTION_VAL_290_CS },
         { "300", OPTION_VAL_300_CS },
         { "310", OPTION_VAL_310_CS },
         { "320", OPTION_VAL_320_CS },
         { "330", OPTION_VAL_330_CS },
         { "340", OPTION_VAL_340_CS },
         { "350", OPTION_VAL_350_CS },
         { "360", OPTION_VAL_360_CS },
         { "370", OPTION_VAL_370_CS },
         { "380", OPTION_VAL_380_CS },
         { "390", OPTION_VAL_390_CS },
         { "400", OPTION_VAL_400_CS },
         { "410", OPTION_VAL_410_CS },
         { "420", OPTION_VAL_420_CS },
         { "430", OPTION_VAL_430_CS },
         { "440", OPTION_VAL_440_CS },
         { "450", OPTION_VAL_450_CS },
         { "460", OPTION_VAL_460_CS },
         { "470", OPTION_VAL_470_CS },
         { "480", OPTION_VAL_480_CS },
         { "490", OPTION_VAL_490_CS },
         { "500", OPTION_VAL_500_CS },
         { "510", OPTION_VAL_510_CS },
         { "520", OPTION_VAL_520_CS },
         { "530", OPTION_VAL_530_CS },
         { "540", OPTION_VAL_540_CS },
         { "550", OPTION_VAL_550_CS },
         { "560", OPTION_VAL_560_CS },
         { "570", OPTION_VAL_570_CS },
         { "580", OPTION_VAL_580_CS },
         { "590", OPTION_VAL_590_CS },
         { "600", OPTION_VAL_600_CS },
         { "610", OPTION_VAL_610_CS },
         { "620", OPTION_VAL_620_CS },
         { "630", OPTION_VAL_630_CS },
         { "640", OPTION_VAL_640_CS },
         { "650", OPTION_VAL_650_CS },
         { "660", OPTION_VAL_660_CS },
         { "670", OPTION_VAL_670_CS },
         { "680", OPTION_VAL_680_CS },
         { "690", OPTION_VAL_690_CS },
         { "700", OPTION_VAL_700_CS },
         { "710", OPTION_VAL_710_CS },
         { "720", OPTION_VAL_720_CS },
         { "730", OPTION_VAL_730_CS },
         { "740", OPTION_VAL_740_CS },
         { "750", OPTION_VAL_750_CS },
         { "760", OPTION_VAL_760_CS },
         { "770", OPTION_VAL_770_CS },
         { "780", OPTION_VAL_780_CS },
         { "790", OPTION_VAL_790_CS },
         { "800", OPTION_VAL_800_CS },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_CS,
      BSNES_PPU_FAST_LABEL_CAT_CS,
      BSNES_PPU_FAST_INFO_0_CS,
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
      BSNES_PPU_DEINTERLACE_LABEL_CS,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_CS,
      BSNES_PPU_DEINTERLACE_INFO_0_CS,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CS,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_CS,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_CS,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_CS,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_CS,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_CS,
      BSNES_MODE7_SCALE_LABEL_CAT_CS,
      BSNES_MODE7_SCALE_INFO_0_CS,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_CS  },
         { "2x", OPTION_VAL_2X_CS  },
         { "3x", OPTION_VAL_3X_CS  },
         { "4x", OPTION_VAL_4X_CS  },
         { "5x", OPTION_VAL_5X_CS },
         { "6x", OPTION_VAL_6X_CS },
         { "7x", OPTION_VAL_7X_CS },
         { "8x", OPTION_VAL_8X_CS },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_CS,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_CS,
      BSNES_MODE7_PERSPECTIVE_INFO_0_CS,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_CS,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_CS,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_CS,
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
      BSNES_MODE7_MOSAIC_LABEL_CS,
      BSNES_MODE7_MOSAIC_LABEL_CAT_CS,
      BSNES_MODE7_MOSAIC_INFO_0_CS,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_CS,
      BSNES_DSP_FAST_LABEL_CAT_CS,
      BSNES_DSP_FAST_INFO_0_CS,
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
      BSNES_DSP_CUBIC_LABEL_CS,
      BSNES_DSP_CUBIC_LABEL_CAT_CS,
      BSNES_DSP_CUBIC_INFO_0_CS,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_CS,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_CS,
      BSNES_DSP_ECHO_SHADOW_INFO_0_CS,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_CS,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_CS,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_CS,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_CS,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_CS,
      NULL,
      BSNES_SGB_BIOS_INFO_0_CS,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_CS   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_CS },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_CS,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_CS,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_CS  },
         { "2",   OPTION_VAL_2_CS },
         { "3",   OPTION_VAL_3_CS },
         { "4",   OPTION_VAL_4_CS },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_CS,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_CS,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_CS,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_CS,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_CS,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_CS,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define CATEGORY_VIDEO_LABEL_CY NULL
#define CATEGORY_VIDEO_INFO_0_CY NULL
#define CATEGORY_AUDIO_LABEL_CY NULL
#define CATEGORY_AUDIO_INFO_0_CY NULL
#define CATEGORY_MODE7_LABEL_CY NULL
#define CATEGORY_MODE7_INFO_0_CY NULL
#define CATEGORY_SGB_LABEL_CY NULL
#define CATEGORY_SGB_INFO_0_CY NULL
#define CATEGORY_LIGHTGUN_LABEL_CY NULL
#define CATEGORY_LIGHTGUN_INFO_0_CY NULL
#define CATEGORY_OVERCLOCK_LABEL_CY NULL
#define CATEGORY_OVERCLOCK_INFO_0_CY NULL
#define CATEGORY_HACK_LABEL_CY NULL
#define CATEGORY_HACK_INFO_0_CY NULL
#define BSNES_ASPECT_RATIO_LABEL_CY NULL
#define BSNES_ASPECT_RATIO_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define OPTION_VAL_8_7_CY NULL
#define OPTION_VAL_4_3_CY NULL
#define OPTION_VAL_NTSC_CY NULL
#define OPTION_VAL_PAL_CY NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_CY NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_CY NULL
#define OPTION_VAL_OFF_CY NULL
#define BSNES_BLUR_EMULATION_LABEL_CY NULL
#define BSNES_BLUR_EMULATION_INFO_0_CY NULL
#define BSNES_HOTFIXES_LABEL_CY NULL
#define BSNES_HOTFIXES_INFO_0_CY NULL
#define BSNES_ENTROPY_LABEL_CY NULL
#define BSNES_ENTROPY_INFO_0_CY NULL
#define OPTION_VAL_LOW_CY NULL
#define OPTION_VAL_HIGH_CY NULL
#define OPTION_VAL_NONE_CY "Dim"
#define BSNES_CPU_OVERCLOCK_LABEL_CY NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_CY NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_CY NULL
#define OPTION_VAL_10_CY NULL
#define OPTION_VAL_20_CY NULL
#define OPTION_VAL_30_CY NULL
#define OPTION_VAL_40_CY NULL
#define OPTION_VAL_50_CY NULL
#define OPTION_VAL_60_CY NULL
#define OPTION_VAL_70_CY NULL
#define OPTION_VAL_80_CY NULL
#define OPTION_VAL_90_CY NULL
#define OPTION_VAL_100_CY NULL
#define OPTION_VAL_110_CY NULL
#define OPTION_VAL_120_CY NULL
#define OPTION_VAL_130_CY NULL
#define OPTION_VAL_140_CY NULL
#define OPTION_VAL_150_CY NULL
#define OPTION_VAL_160_CY NULL
#define OPTION_VAL_170_CY NULL
#define OPTION_VAL_180_CY NULL
#define OPTION_VAL_190_CY NULL
#define OPTION_VAL_200_CY NULL
#define OPTION_VAL_210_CY NULL
#define OPTION_VAL_220_CY NULL
#define OPTION_VAL_230_CY NULL
#define OPTION_VAL_240_CY NULL
#define OPTION_VAL_250_CY NULL
#define OPTION_VAL_260_CY NULL
#define OPTION_VAL_270_CY NULL
#define OPTION_VAL_280_CY NULL
#define OPTION_VAL_290_CY NULL
#define OPTION_VAL_300_CY NULL
#define OPTION_VAL_310_CY NULL
#define OPTION_VAL_320_CY NULL
#define OPTION_VAL_330_CY NULL
#define OPTION_VAL_340_CY NULL
#define OPTION_VAL_350_CY NULL
#define OPTION_VAL_360_CY NULL
#define OPTION_VAL_370_CY NULL
#define OPTION_VAL_380_CY NULL
#define OPTION_VAL_390_CY NULL
#define OPTION_VAL_400_CY NULL
#define BSNES_CPU_FASTMATH_LABEL_CY NULL
#define BSNES_CPU_FASTMATH_INFO_0_CY NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CY NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_CY NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_CY NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CY NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_CY NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_CY NULL
#define OPTION_VAL_410_CY NULL
#define OPTION_VAL_420_CY NULL
#define OPTION_VAL_430_CY NULL
#define OPTION_VAL_440_CY NULL
#define OPTION_VAL_450_CY NULL
#define OPTION_VAL_460_CY NULL
#define OPTION_VAL_470_CY NULL
#define OPTION_VAL_480_CY NULL
#define OPTION_VAL_490_CY NULL
#define OPTION_VAL_500_CY NULL
#define OPTION_VAL_510_CY NULL
#define OPTION_VAL_520_CY NULL
#define OPTION_VAL_530_CY NULL
#define OPTION_VAL_540_CY NULL
#define OPTION_VAL_550_CY NULL
#define OPTION_VAL_560_CY NULL
#define OPTION_VAL_570_CY NULL
#define OPTION_VAL_580_CY NULL
#define OPTION_VAL_590_CY NULL
#define OPTION_VAL_600_CY NULL
#define OPTION_VAL_610_CY NULL
#define OPTION_VAL_620_CY NULL
#define OPTION_VAL_630_CY NULL
#define OPTION_VAL_640_CY NULL
#define OPTION_VAL_650_CY NULL
#define OPTION_VAL_660_CY NULL
#define OPTION_VAL_670_CY NULL
#define OPTION_VAL_680_CY NULL
#define OPTION_VAL_690_CY NULL
#define OPTION_VAL_700_CY NULL
#define OPTION_VAL_710_CY NULL
#define OPTION_VAL_720_CY NULL
#define OPTION_VAL_730_CY NULL
#define OPTION_VAL_740_CY NULL
#define OPTION_VAL_750_CY NULL
#define OPTION_VAL_760_CY NULL
#define OPTION_VAL_770_CY NULL
#define OPTION_VAL_780_CY NULL
#define OPTION_VAL_790_CY NULL
#define OPTION_VAL_800_CY NULL
#define BSNES_PPU_FAST_LABEL_CY NULL
#define BSNES_PPU_FAST_LABEL_CAT_CY NULL
#define BSNES_PPU_FAST_INFO_0_CY NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CY NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_CY NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_CY NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CY NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_CY NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_CY NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_CY NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_CY NULL
#define BSNES_MODE7_SCALE_LABEL_CY NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_CY NULL
#define BSNES_MODE7_SCALE_INFO_0_CY NULL
#define OPTION_VAL_1X_CY NULL
#define OPTION_VAL_2X_CY NULL
#define OPTION_VAL_3X_CY NULL
#define OPTION_VAL_4X_CY NULL
#define OPTION_VAL_5X_CY NULL
#define OPTION_VAL_6X_CY NULL
#define OPTION_VAL_7X_CY NULL
#define OPTION_VAL_8X_CY NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CY NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_CY NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_CY NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CY NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_CY NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_CY NULL
#define BSNES_MODE7_MOSAIC_LABEL_CY NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_CY NULL
#define BSNES_MODE7_MOSAIC_INFO_0_CY NULL
#define BSNES_DSP_FAST_LABEL_CY NULL
#define BSNES_DSP_FAST_LABEL_CAT_CY NULL
#define BSNES_DSP_FAST_INFO_0_CY NULL
#define BSNES_DSP_CUBIC_LABEL_CY NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_CY NULL
#define BSNES_DSP_CUBIC_INFO_0_CY NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CY NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_CY NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_CY NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_CY NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_CY NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_CY NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_CY NULL
#define BSNES_SGB_BIOS_LABEL_CY NULL
#define BSNES_SGB_BIOS_INFO_0_CY NULL
#define OPTION_VAL_SGB1_SFC_CY NULL
#define OPTION_VAL_SGB2_SFC_CY NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_CY NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_CY NULL
#define OPTION_VAL_1_CY NULL
#define OPTION_VAL_2_CY NULL
#define OPTION_VAL_3_CY NULL
#define OPTION_VAL_4_CY NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_CY NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_CY NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_CY NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_CY NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_CY NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CY,
      CATEGORY_VIDEO_INFO_0_CY
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CY,
      CATEGORY_AUDIO_INFO_0_CY
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_CY,
      CATEGORY_MODE7_INFO_0_CY
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_CY,
      CATEGORY_SGB_INFO_0_CY
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_CY,
      CATEGORY_LIGHTGUN_INFO_0_CY
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_CY,
      CATEGORY_OVERCLOCK_INFO_0_CY
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_CY,
      CATEGORY_HACK_INFO_0_CY
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_CY,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_CY,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_CY },
         { "8:7",  OPTION_VAL_8_7_CY },
         { "4:3",  OPTION_VAL_4_3_CY },
         { "NTSC", OPTION_VAL_NTSC_CY },
         { "PAL",  OPTION_VAL_PAL_CY },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_CY,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_CY,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_CY },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_CY,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_CY,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_CY,
      NULL,
      BSNES_HOTFIXES_INFO_0_CY,
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
      BSNES_ENTROPY_LABEL_CY,
      NULL,
      BSNES_ENTROPY_INFO_0_CY,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_CY },
         { "High", OPTION_VAL_HIGH_CY },
         { "None", OPTION_VAL_NONE_CY },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_CY,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_CY,
      BSNES_CPU_OVERCLOCK_INFO_0_CY,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CY  },
         { "20",  OPTION_VAL_20_CY  },
         { "30",  OPTION_VAL_30_CY  },
         { "40",  OPTION_VAL_40_CY  },
         { "50",  OPTION_VAL_50_CY  },
         { "60",  OPTION_VAL_60_CY  },
         { "70",  OPTION_VAL_70_CY  },
         { "80",  OPTION_VAL_80_CY  },
         { "90",  OPTION_VAL_90_CY  },
         { "100", OPTION_VAL_100_CY },
         { "110", OPTION_VAL_110_CY },
         { "120", OPTION_VAL_120_CY },
         { "130", OPTION_VAL_130_CY },
         { "140", OPTION_VAL_140_CY },
         { "150", OPTION_VAL_150_CY },
         { "160", OPTION_VAL_160_CY },
         { "170", OPTION_VAL_170_CY },
         { "180", OPTION_VAL_180_CY },
         { "190", OPTION_VAL_190_CY },
         { "200", OPTION_VAL_200_CY },
         { "210", OPTION_VAL_210_CY },
         { "220", OPTION_VAL_220_CY },
         { "230", OPTION_VAL_230_CY },
         { "240", OPTION_VAL_240_CY },
         { "250", OPTION_VAL_250_CY },
         { "260", OPTION_VAL_260_CY },
         { "270", OPTION_VAL_270_CY },
         { "280", OPTION_VAL_280_CY },
         { "290", OPTION_VAL_290_CY },
         { "300", OPTION_VAL_300_CY },
         { "310", OPTION_VAL_310_CY },
         { "320", OPTION_VAL_320_CY },
         { "330", OPTION_VAL_330_CY },
         { "340", OPTION_VAL_340_CY },
         { "350", OPTION_VAL_350_CY },
         { "360", OPTION_VAL_360_CY },
         { "370", OPTION_VAL_370_CY },
         { "380", OPTION_VAL_380_CY },
         { "390", OPTION_VAL_390_CY },
         { "400", OPTION_VAL_400_CY },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_CY,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_CY,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CY,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_CY,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_CY,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CY  },
         { "20",  OPTION_VAL_20_CY  },
         { "30",  OPTION_VAL_30_CY  },
         { "40",  OPTION_VAL_40_CY  },
         { "50",  OPTION_VAL_50_CY  },
         { "60",  OPTION_VAL_60_CY  },
         { "70",  OPTION_VAL_70_CY  },
         { "80",  OPTION_VAL_80_CY  },
         { "90",  OPTION_VAL_90_CY  },
         { "100", OPTION_VAL_100_CY },
         { "110", OPTION_VAL_110_CY },
         { "120", OPTION_VAL_120_CY },
         { "130", OPTION_VAL_130_CY },
         { "140", OPTION_VAL_140_CY },
         { "150", OPTION_VAL_150_CY },
         { "160", OPTION_VAL_160_CY },
         { "170", OPTION_VAL_170_CY },
         { "180", OPTION_VAL_180_CY },
         { "190", OPTION_VAL_190_CY },
         { "200", OPTION_VAL_200_CY },
         { "210", OPTION_VAL_210_CY },
         { "220", OPTION_VAL_220_CY },
         { "230", OPTION_VAL_230_CY },
         { "240", OPTION_VAL_240_CY },
         { "250", OPTION_VAL_250_CY },
         { "260", OPTION_VAL_260_CY },
         { "270", OPTION_VAL_270_CY },
         { "280", OPTION_VAL_280_CY },
         { "290", OPTION_VAL_290_CY },
         { "300", OPTION_VAL_300_CY },
         { "310", OPTION_VAL_310_CY },
         { "320", OPTION_VAL_320_CY },
         { "330", OPTION_VAL_330_CY },
         { "340", OPTION_VAL_340_CY },
         { "350", OPTION_VAL_350_CY },
         { "360", OPTION_VAL_360_CY },
         { "370", OPTION_VAL_370_CY },
         { "380", OPTION_VAL_380_CY },
         { "390", OPTION_VAL_390_CY },
         { "400", OPTION_VAL_400_CY },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CY,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_CY,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_CY,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_CY  },
         { "20",  OPTION_VAL_20_CY  },
         { "30",  OPTION_VAL_30_CY  },
         { "40",  OPTION_VAL_40_CY  },
         { "50",  OPTION_VAL_50_CY  },
         { "60",  OPTION_VAL_60_CY  },
         { "70",  OPTION_VAL_70_CY  },
         { "80",  OPTION_VAL_80_CY  },
         { "90",  OPTION_VAL_90_CY  },
         { "100", OPTION_VAL_100_CY },
         { "110", OPTION_VAL_110_CY },
         { "120", OPTION_VAL_120_CY },
         { "130", OPTION_VAL_130_CY },
         { "140", OPTION_VAL_140_CY },
         { "150", OPTION_VAL_150_CY },
         { "160", OPTION_VAL_160_CY },
         { "170", OPTION_VAL_170_CY },
         { "180", OPTION_VAL_180_CY },
         { "190", OPTION_VAL_190_CY },
         { "200", OPTION_VAL_200_CY },
         { "210", OPTION_VAL_210_CY },
         { "220", OPTION_VAL_220_CY },
         { "230", OPTION_VAL_230_CY },
         { "240", OPTION_VAL_240_CY },
         { "250", OPTION_VAL_250_CY },
         { "260", OPTION_VAL_260_CY },
         { "270", OPTION_VAL_270_CY },
         { "280", OPTION_VAL_280_CY },
         { "290", OPTION_VAL_290_CY },
         { "300", OPTION_VAL_300_CY },
         { "310", OPTION_VAL_310_CY },
         { "320", OPTION_VAL_320_CY },
         { "330", OPTION_VAL_330_CY },
         { "340", OPTION_VAL_340_CY },
         { "350", OPTION_VAL_350_CY },
         { "360", OPTION_VAL_360_CY },
         { "370", OPTION_VAL_370_CY },
         { "380", OPTION_VAL_380_CY },
         { "390", OPTION_VAL_390_CY },
         { "400", OPTION_VAL_400_CY },
         { "410", OPTION_VAL_410_CY },
         { "420", OPTION_VAL_420_CY },
         { "430", OPTION_VAL_430_CY },
         { "440", OPTION_VAL_440_CY },
         { "450", OPTION_VAL_450_CY },
         { "460", OPTION_VAL_460_CY },
         { "470", OPTION_VAL_470_CY },
         { "480", OPTION_VAL_480_CY },
         { "490", OPTION_VAL_490_CY },
         { "500", OPTION_VAL_500_CY },
         { "510", OPTION_VAL_510_CY },
         { "520", OPTION_VAL_520_CY },
         { "530", OPTION_VAL_530_CY },
         { "540", OPTION_VAL_540_CY },
         { "550", OPTION_VAL_550_CY },
         { "560", OPTION_VAL_560_CY },
         { "570", OPTION_VAL_570_CY },
         { "580", OPTION_VAL_580_CY },
         { "590", OPTION_VAL_590_CY },
         { "600", OPTION_VAL_600_CY },
         { "610", OPTION_VAL_610_CY },
         { "620", OPTION_VAL_620_CY },
         { "630", OPTION_VAL_630_CY },
         { "640", OPTION_VAL_640_CY },
         { "650", OPTION_VAL_650_CY },
         { "660", OPTION_VAL_660_CY },
         { "670", OPTION_VAL_670_CY },
         { "680", OPTION_VAL_680_CY },
         { "690", OPTION_VAL_690_CY },
         { "700", OPTION_VAL_700_CY },
         { "710", OPTION_VAL_710_CY },
         { "720", OPTION_VAL_720_CY },
         { "730", OPTION_VAL_730_CY },
         { "740", OPTION_VAL_740_CY },
         { "750", OPTION_VAL_750_CY },
         { "760", OPTION_VAL_760_CY },
         { "770", OPTION_VAL_770_CY },
         { "780", OPTION_VAL_780_CY },
         { "790", OPTION_VAL_790_CY },
         { "800", OPTION_VAL_800_CY },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_CY,
      BSNES_PPU_FAST_LABEL_CAT_CY,
      BSNES_PPU_FAST_INFO_0_CY,
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
      BSNES_PPU_DEINTERLACE_LABEL_CY,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_CY,
      BSNES_PPU_DEINTERLACE_INFO_0_CY,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CY,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_CY,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_CY,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_CY,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_CY,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_CY,
      BSNES_MODE7_SCALE_LABEL_CAT_CY,
      BSNES_MODE7_SCALE_INFO_0_CY,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_CY  },
         { "2x", OPTION_VAL_2X_CY  },
         { "3x", OPTION_VAL_3X_CY  },
         { "4x", OPTION_VAL_4X_CY  },
         { "5x", OPTION_VAL_5X_CY },
         { "6x", OPTION_VAL_6X_CY },
         { "7x", OPTION_VAL_7X_CY },
         { "8x", OPTION_VAL_8X_CY },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_CY,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_CY,
      BSNES_MODE7_PERSPECTIVE_INFO_0_CY,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_CY,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_CY,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_CY,
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
      BSNES_MODE7_MOSAIC_LABEL_CY,
      BSNES_MODE7_MOSAIC_LABEL_CAT_CY,
      BSNES_MODE7_MOSAIC_INFO_0_CY,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_CY,
      BSNES_DSP_FAST_LABEL_CAT_CY,
      BSNES_DSP_FAST_INFO_0_CY,
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
      BSNES_DSP_CUBIC_LABEL_CY,
      BSNES_DSP_CUBIC_LABEL_CAT_CY,
      BSNES_DSP_CUBIC_INFO_0_CY,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_CY,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_CY,
      BSNES_DSP_ECHO_SHADOW_INFO_0_CY,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_CY,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_CY,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_CY,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_CY,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_CY,
      NULL,
      BSNES_SGB_BIOS_INFO_0_CY,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_CY   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_CY },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_CY,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_CY,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_CY  },
         { "2",   OPTION_VAL_2_CY },
         { "3",   OPTION_VAL_3_CY },
         { "4",   OPTION_VAL_4_CY },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_CY,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_CY,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_CY,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_CY,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_CY,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_CY,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define CATEGORY_VIDEO_LABEL_DA NULL
#define CATEGORY_VIDEO_INFO_0_DA "Skift indstillinger for videooutput."
#define CATEGORY_AUDIO_LABEL_DA "Lyd"
#define CATEGORY_AUDIO_INFO_0_DA "Skift indstillinger for lydudgang."
#define CATEGORY_MODE7_LABEL_DA NULL
#define CATEGORY_MODE7_INFO_0_DA NULL
#define CATEGORY_SGB_LABEL_DA NULL
#define CATEGORY_SGB_INFO_0_DA NULL
#define CATEGORY_LIGHTGUN_LABEL_DA NULL
#define CATEGORY_LIGHTGUN_INFO_0_DA NULL
#define CATEGORY_OVERCLOCK_LABEL_DA NULL
#define CATEGORY_OVERCLOCK_INFO_0_DA NULL
#define CATEGORY_HACK_LABEL_DA NULL
#define CATEGORY_HACK_INFO_0_DA NULL
#define BSNES_ASPECT_RATIO_LABEL_DA NULL
#define BSNES_ASPECT_RATIO_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define OPTION_VAL_8_7_DA NULL
#define OPTION_VAL_4_3_DA NULL
#define OPTION_VAL_NTSC_DA NULL
#define OPTION_VAL_PAL_DA NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_DA NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_DA NULL
#define OPTION_VAL_OFF_DA NULL
#define BSNES_BLUR_EMULATION_LABEL_DA NULL
#define BSNES_BLUR_EMULATION_INFO_0_DA NULL
#define BSNES_HOTFIXES_LABEL_DA NULL
#define BSNES_HOTFIXES_INFO_0_DA NULL
#define BSNES_ENTROPY_LABEL_DA NULL
#define BSNES_ENTROPY_INFO_0_DA NULL
#define OPTION_VAL_LOW_DA NULL
#define OPTION_VAL_HIGH_DA NULL
#define OPTION_VAL_NONE_DA NULL
#define BSNES_CPU_OVERCLOCK_LABEL_DA NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_DA NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_DA NULL
#define OPTION_VAL_10_DA NULL
#define OPTION_VAL_20_DA NULL
#define OPTION_VAL_30_DA NULL
#define OPTION_VAL_40_DA NULL
#define OPTION_VAL_50_DA NULL
#define OPTION_VAL_60_DA NULL
#define OPTION_VAL_70_DA NULL
#define OPTION_VAL_80_DA NULL
#define OPTION_VAL_90_DA NULL
#define OPTION_VAL_100_DA NULL
#define OPTION_VAL_110_DA NULL
#define OPTION_VAL_120_DA NULL
#define OPTION_VAL_130_DA NULL
#define OPTION_VAL_140_DA NULL
#define OPTION_VAL_150_DA NULL
#define OPTION_VAL_160_DA NULL
#define OPTION_VAL_170_DA NULL
#define OPTION_VAL_180_DA NULL
#define OPTION_VAL_190_DA NULL
#define OPTION_VAL_200_DA NULL
#define OPTION_VAL_210_DA NULL
#define OPTION_VAL_220_DA NULL
#define OPTION_VAL_230_DA NULL
#define OPTION_VAL_240_DA NULL
#define OPTION_VAL_250_DA NULL
#define OPTION_VAL_260_DA NULL
#define OPTION_VAL_270_DA NULL
#define OPTION_VAL_280_DA NULL
#define OPTION_VAL_290_DA NULL
#define OPTION_VAL_300_DA NULL
#define OPTION_VAL_310_DA NULL
#define OPTION_VAL_320_DA NULL
#define OPTION_VAL_330_DA NULL
#define OPTION_VAL_340_DA NULL
#define OPTION_VAL_350_DA NULL
#define OPTION_VAL_360_DA NULL
#define OPTION_VAL_370_DA NULL
#define OPTION_VAL_380_DA NULL
#define OPTION_VAL_390_DA NULL
#define OPTION_VAL_400_DA NULL
#define BSNES_CPU_FASTMATH_LABEL_DA NULL
#define BSNES_CPU_FASTMATH_INFO_0_DA NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_DA NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_DA NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_DA NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_DA NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_DA NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_DA NULL
#define OPTION_VAL_410_DA NULL
#define OPTION_VAL_420_DA NULL
#define OPTION_VAL_430_DA NULL
#define OPTION_VAL_440_DA NULL
#define OPTION_VAL_450_DA NULL
#define OPTION_VAL_460_DA NULL
#define OPTION_VAL_470_DA NULL
#define OPTION_VAL_480_DA NULL
#define OPTION_VAL_490_DA NULL
#define OPTION_VAL_500_DA NULL
#define OPTION_VAL_510_DA NULL
#define OPTION_VAL_520_DA NULL
#define OPTION_VAL_530_DA NULL
#define OPTION_VAL_540_DA NULL
#define OPTION_VAL_550_DA NULL
#define OPTION_VAL_560_DA NULL
#define OPTION_VAL_570_DA NULL
#define OPTION_VAL_580_DA NULL
#define OPTION_VAL_590_DA NULL
#define OPTION_VAL_600_DA NULL
#define OPTION_VAL_610_DA NULL
#define OPTION_VAL_620_DA NULL
#define OPTION_VAL_630_DA NULL
#define OPTION_VAL_640_DA NULL
#define OPTION_VAL_650_DA NULL
#define OPTION_VAL_660_DA NULL
#define OPTION_VAL_670_DA NULL
#define OPTION_VAL_680_DA NULL
#define OPTION_VAL_690_DA NULL
#define OPTION_VAL_700_DA NULL
#define OPTION_VAL_710_DA NULL
#define OPTION_VAL_720_DA NULL
#define OPTION_VAL_730_DA NULL
#define OPTION_VAL_740_DA NULL
#define OPTION_VAL_750_DA NULL
#define OPTION_VAL_760_DA NULL
#define OPTION_VAL_770_DA NULL
#define OPTION_VAL_780_DA NULL
#define OPTION_VAL_790_DA NULL
#define OPTION_VAL_800_DA NULL
#define BSNES_PPU_FAST_LABEL_DA NULL
#define BSNES_PPU_FAST_LABEL_CAT_DA NULL
#define BSNES_PPU_FAST_INFO_0_DA NULL
#define BSNES_PPU_DEINTERLACE_LABEL_DA NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_DA NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_DA NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_DA NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_DA NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_DA NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_DA NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_DA NULL
#define BSNES_MODE7_SCALE_LABEL_DA NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_DA NULL
#define BSNES_MODE7_SCALE_INFO_0_DA NULL
#define OPTION_VAL_1X_DA NULL
#define OPTION_VAL_2X_DA NULL
#define OPTION_VAL_3X_DA NULL
#define OPTION_VAL_4X_DA NULL
#define OPTION_VAL_5X_DA NULL
#define OPTION_VAL_6X_DA NULL
#define OPTION_VAL_7X_DA NULL
#define OPTION_VAL_8X_DA NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_DA NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_DA NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_DA NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_DA NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_DA NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_DA NULL
#define BSNES_MODE7_MOSAIC_LABEL_DA NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_DA NULL
#define BSNES_MODE7_MOSAIC_INFO_0_DA NULL
#define BSNES_DSP_FAST_LABEL_DA NULL
#define BSNES_DSP_FAST_LABEL_CAT_DA NULL
#define BSNES_DSP_FAST_INFO_0_DA NULL
#define BSNES_DSP_CUBIC_LABEL_DA NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_DA NULL
#define BSNES_DSP_CUBIC_INFO_0_DA NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_DA NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_DA NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_DA NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_DA NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_DA NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_DA NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_DA NULL
#define BSNES_SGB_BIOS_LABEL_DA NULL
#define BSNES_SGB_BIOS_INFO_0_DA NULL
#define OPTION_VAL_SGB1_SFC_DA NULL
#define OPTION_VAL_SGB2_SFC_DA NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_DA NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_DA NULL
#define OPTION_VAL_1_DA NULL
#define OPTION_VAL_2_DA NULL
#define OPTION_VAL_3_DA NULL
#define OPTION_VAL_4_DA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_DA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_DA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_DA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_DA NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_DA NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DA,
      CATEGORY_VIDEO_INFO_0_DA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_DA,
      CATEGORY_AUDIO_INFO_0_DA
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_DA,
      CATEGORY_MODE7_INFO_0_DA
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_DA,
      CATEGORY_SGB_INFO_0_DA
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_DA,
      CATEGORY_LIGHTGUN_INFO_0_DA
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_DA,
      CATEGORY_OVERCLOCK_INFO_0_DA
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_DA,
      CATEGORY_HACK_INFO_0_DA
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_DA,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_DA,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_DA },
         { "8:7",  OPTION_VAL_8_7_DA },
         { "4:3",  OPTION_VAL_4_3_DA },
         { "NTSC", OPTION_VAL_NTSC_DA },
         { "PAL",  OPTION_VAL_PAL_DA },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_DA,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_DA,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_DA },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_DA,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_DA,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_DA,
      NULL,
      BSNES_HOTFIXES_INFO_0_DA,
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
      BSNES_ENTROPY_LABEL_DA,
      NULL,
      BSNES_ENTROPY_INFO_0_DA,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_DA },
         { "High", OPTION_VAL_HIGH_DA },
         { "None", OPTION_VAL_NONE_DA },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_DA,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_DA,
      BSNES_CPU_OVERCLOCK_INFO_0_DA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_DA  },
         { "20",  OPTION_VAL_20_DA  },
         { "30",  OPTION_VAL_30_DA  },
         { "40",  OPTION_VAL_40_DA  },
         { "50",  OPTION_VAL_50_DA  },
         { "60",  OPTION_VAL_60_DA  },
         { "70",  OPTION_VAL_70_DA  },
         { "80",  OPTION_VAL_80_DA  },
         { "90",  OPTION_VAL_90_DA  },
         { "100", OPTION_VAL_100_DA },
         { "110", OPTION_VAL_110_DA },
         { "120", OPTION_VAL_120_DA },
         { "130", OPTION_VAL_130_DA },
         { "140", OPTION_VAL_140_DA },
         { "150", OPTION_VAL_150_DA },
         { "160", OPTION_VAL_160_DA },
         { "170", OPTION_VAL_170_DA },
         { "180", OPTION_VAL_180_DA },
         { "190", OPTION_VAL_190_DA },
         { "200", OPTION_VAL_200_DA },
         { "210", OPTION_VAL_210_DA },
         { "220", OPTION_VAL_220_DA },
         { "230", OPTION_VAL_230_DA },
         { "240", OPTION_VAL_240_DA },
         { "250", OPTION_VAL_250_DA },
         { "260", OPTION_VAL_260_DA },
         { "270", OPTION_VAL_270_DA },
         { "280", OPTION_VAL_280_DA },
         { "290", OPTION_VAL_290_DA },
         { "300", OPTION_VAL_300_DA },
         { "310", OPTION_VAL_310_DA },
         { "320", OPTION_VAL_320_DA },
         { "330", OPTION_VAL_330_DA },
         { "340", OPTION_VAL_340_DA },
         { "350", OPTION_VAL_350_DA },
         { "360", OPTION_VAL_360_DA },
         { "370", OPTION_VAL_370_DA },
         { "380", OPTION_VAL_380_DA },
         { "390", OPTION_VAL_390_DA },
         { "400", OPTION_VAL_400_DA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_DA,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_DA,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_DA,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_DA,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_DA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_DA  },
         { "20",  OPTION_VAL_20_DA  },
         { "30",  OPTION_VAL_30_DA  },
         { "40",  OPTION_VAL_40_DA  },
         { "50",  OPTION_VAL_50_DA  },
         { "60",  OPTION_VAL_60_DA  },
         { "70",  OPTION_VAL_70_DA  },
         { "80",  OPTION_VAL_80_DA  },
         { "90",  OPTION_VAL_90_DA  },
         { "100", OPTION_VAL_100_DA },
         { "110", OPTION_VAL_110_DA },
         { "120", OPTION_VAL_120_DA },
         { "130", OPTION_VAL_130_DA },
         { "140", OPTION_VAL_140_DA },
         { "150", OPTION_VAL_150_DA },
         { "160", OPTION_VAL_160_DA },
         { "170", OPTION_VAL_170_DA },
         { "180", OPTION_VAL_180_DA },
         { "190", OPTION_VAL_190_DA },
         { "200", OPTION_VAL_200_DA },
         { "210", OPTION_VAL_210_DA },
         { "220", OPTION_VAL_220_DA },
         { "230", OPTION_VAL_230_DA },
         { "240", OPTION_VAL_240_DA },
         { "250", OPTION_VAL_250_DA },
         { "260", OPTION_VAL_260_DA },
         { "270", OPTION_VAL_270_DA },
         { "280", OPTION_VAL_280_DA },
         { "290", OPTION_VAL_290_DA },
         { "300", OPTION_VAL_300_DA },
         { "310", OPTION_VAL_310_DA },
         { "320", OPTION_VAL_320_DA },
         { "330", OPTION_VAL_330_DA },
         { "340", OPTION_VAL_340_DA },
         { "350", OPTION_VAL_350_DA },
         { "360", OPTION_VAL_360_DA },
         { "370", OPTION_VAL_370_DA },
         { "380", OPTION_VAL_380_DA },
         { "390", OPTION_VAL_390_DA },
         { "400", OPTION_VAL_400_DA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_DA,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_DA,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_DA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_DA  },
         { "20",  OPTION_VAL_20_DA  },
         { "30",  OPTION_VAL_30_DA  },
         { "40",  OPTION_VAL_40_DA  },
         { "50",  OPTION_VAL_50_DA  },
         { "60",  OPTION_VAL_60_DA  },
         { "70",  OPTION_VAL_70_DA  },
         { "80",  OPTION_VAL_80_DA  },
         { "90",  OPTION_VAL_90_DA  },
         { "100", OPTION_VAL_100_DA },
         { "110", OPTION_VAL_110_DA },
         { "120", OPTION_VAL_120_DA },
         { "130", OPTION_VAL_130_DA },
         { "140", OPTION_VAL_140_DA },
         { "150", OPTION_VAL_150_DA },
         { "160", OPTION_VAL_160_DA },
         { "170", OPTION_VAL_170_DA },
         { "180", OPTION_VAL_180_DA },
         { "190", OPTION_VAL_190_DA },
         { "200", OPTION_VAL_200_DA },
         { "210", OPTION_VAL_210_DA },
         { "220", OPTION_VAL_220_DA },
         { "230", OPTION_VAL_230_DA },
         { "240", OPTION_VAL_240_DA },
         { "250", OPTION_VAL_250_DA },
         { "260", OPTION_VAL_260_DA },
         { "270", OPTION_VAL_270_DA },
         { "280", OPTION_VAL_280_DA },
         { "290", OPTION_VAL_290_DA },
         { "300", OPTION_VAL_300_DA },
         { "310", OPTION_VAL_310_DA },
         { "320", OPTION_VAL_320_DA },
         { "330", OPTION_VAL_330_DA },
         { "340", OPTION_VAL_340_DA },
         { "350", OPTION_VAL_350_DA },
         { "360", OPTION_VAL_360_DA },
         { "370", OPTION_VAL_370_DA },
         { "380", OPTION_VAL_380_DA },
         { "390", OPTION_VAL_390_DA },
         { "400", OPTION_VAL_400_DA },
         { "410", OPTION_VAL_410_DA },
         { "420", OPTION_VAL_420_DA },
         { "430", OPTION_VAL_430_DA },
         { "440", OPTION_VAL_440_DA },
         { "450", OPTION_VAL_450_DA },
         { "460", OPTION_VAL_460_DA },
         { "470", OPTION_VAL_470_DA },
         { "480", OPTION_VAL_480_DA },
         { "490", OPTION_VAL_490_DA },
         { "500", OPTION_VAL_500_DA },
         { "510", OPTION_VAL_510_DA },
         { "520", OPTION_VAL_520_DA },
         { "530", OPTION_VAL_530_DA },
         { "540", OPTION_VAL_540_DA },
         { "550", OPTION_VAL_550_DA },
         { "560", OPTION_VAL_560_DA },
         { "570", OPTION_VAL_570_DA },
         { "580", OPTION_VAL_580_DA },
         { "590", OPTION_VAL_590_DA },
         { "600", OPTION_VAL_600_DA },
         { "610", OPTION_VAL_610_DA },
         { "620", OPTION_VAL_620_DA },
         { "630", OPTION_VAL_630_DA },
         { "640", OPTION_VAL_640_DA },
         { "650", OPTION_VAL_650_DA },
         { "660", OPTION_VAL_660_DA },
         { "670", OPTION_VAL_670_DA },
         { "680", OPTION_VAL_680_DA },
         { "690", OPTION_VAL_690_DA },
         { "700", OPTION_VAL_700_DA },
         { "710", OPTION_VAL_710_DA },
         { "720", OPTION_VAL_720_DA },
         { "730", OPTION_VAL_730_DA },
         { "740", OPTION_VAL_740_DA },
         { "750", OPTION_VAL_750_DA },
         { "760", OPTION_VAL_760_DA },
         { "770", OPTION_VAL_770_DA },
         { "780", OPTION_VAL_780_DA },
         { "790", OPTION_VAL_790_DA },
         { "800", OPTION_VAL_800_DA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_DA,
      BSNES_PPU_FAST_LABEL_CAT_DA,
      BSNES_PPU_FAST_INFO_0_DA,
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
      BSNES_PPU_DEINTERLACE_LABEL_DA,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_DA,
      BSNES_PPU_DEINTERLACE_INFO_0_DA,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_DA,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_DA,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_DA,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_DA,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_DA,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_DA,
      BSNES_MODE7_SCALE_LABEL_CAT_DA,
      BSNES_MODE7_SCALE_INFO_0_DA,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_DA  },
         { "2x", OPTION_VAL_2X_DA  },
         { "3x", OPTION_VAL_3X_DA  },
         { "4x", OPTION_VAL_4X_DA  },
         { "5x", OPTION_VAL_5X_DA },
         { "6x", OPTION_VAL_6X_DA },
         { "7x", OPTION_VAL_7X_DA },
         { "8x", OPTION_VAL_8X_DA },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_DA,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_DA,
      BSNES_MODE7_PERSPECTIVE_INFO_0_DA,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_DA,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_DA,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_DA,
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
      BSNES_MODE7_MOSAIC_LABEL_DA,
      BSNES_MODE7_MOSAIC_LABEL_CAT_DA,
      BSNES_MODE7_MOSAIC_INFO_0_DA,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_DA,
      BSNES_DSP_FAST_LABEL_CAT_DA,
      BSNES_DSP_FAST_INFO_0_DA,
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
      BSNES_DSP_CUBIC_LABEL_DA,
      BSNES_DSP_CUBIC_LABEL_CAT_DA,
      BSNES_DSP_CUBIC_INFO_0_DA,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_DA,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_DA,
      BSNES_DSP_ECHO_SHADOW_INFO_0_DA,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_DA,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_DA,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_DA,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_DA,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_DA,
      NULL,
      BSNES_SGB_BIOS_INFO_0_DA,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_DA   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_DA },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_DA,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_DA,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_DA  },
         { "2",   OPTION_VAL_2_DA },
         { "3",   OPTION_VAL_3_DA },
         { "4",   OPTION_VAL_4_DA },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_DA,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_DA,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_DA,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_DA,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_DA,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_DA,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define CATEGORY_VIDEO_LABEL_DE NULL
#define CATEGORY_VIDEO_INFO_0_DE "Videoausgabe-Einstellungen ändern."
#define CATEGORY_AUDIO_LABEL_DE NULL
#define CATEGORY_AUDIO_INFO_0_DE "Audioausgabe-Einstellungen ändern."
#define CATEGORY_MODE7_LABEL_DE NULL
#define CATEGORY_MODE7_INFO_0_DE NULL
#define CATEGORY_SGB_LABEL_DE NULL
#define CATEGORY_SGB_INFO_0_DE NULL
#define CATEGORY_LIGHTGUN_LABEL_DE NULL
#define CATEGORY_LIGHTGUN_INFO_0_DE NULL
#define CATEGORY_OVERCLOCK_LABEL_DE NULL
#define CATEGORY_OVERCLOCK_INFO_0_DE NULL
#define CATEGORY_HACK_LABEL_DE "Emulations-Hacks"
#define CATEGORY_HACK_INFO_0_DE NULL
#define BSNES_ASPECT_RATIO_LABEL_DE NULL
#define BSNES_ASPECT_RATIO_INFO_0_DE "Das bevorzugte Seitenverhältnis des Inhalts auswählen. Dies wird nur angewendet, wenn das Seitenverhältnis von RetroArch in den Videoeinstellungen auf \"Core-bestimmtes Seitenverhältnis\" eingestellt ist."
#define OPTION_VAL_AUTO_DE "Automatisch"
#define OPTION_VAL_8_7_DE "Pixelgenau"
#define OPTION_VAL_4_3_DE NULL
#define OPTION_VAL_NTSC_DE NULL
#define OPTION_VAL_PAL_DE NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_DE "Overscan zuschneiden"
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_DE NULL
#define OPTION_VAL_OFF_DE NULL
#define BSNES_BLUR_EMULATION_LABEL_DE NULL
#define BSNES_BLUR_EMULATION_INFO_0_DE NULL
#define BSNES_HOTFIXES_LABEL_DE NULL
#define BSNES_HOTFIXES_INFO_0_DE NULL
#define BSNES_ENTROPY_LABEL_DE NULL
#define BSNES_ENTROPY_INFO_0_DE NULL
#define OPTION_VAL_LOW_DE NULL
#define OPTION_VAL_HIGH_DE NULL
#define OPTION_VAL_NONE_DE "Keine"
#define BSNES_CPU_OVERCLOCK_LABEL_DE NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_DE NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_DE NULL
#define OPTION_VAL_10_DE "10 %"
#define OPTION_VAL_20_DE "20 %"
#define OPTION_VAL_30_DE "30 %"
#define OPTION_VAL_40_DE "40 %"
#define OPTION_VAL_50_DE "50 %"
#define OPTION_VAL_60_DE "60 %"
#define OPTION_VAL_70_DE "70 %"
#define OPTION_VAL_80_DE "80 %"
#define OPTION_VAL_90_DE "90 %"
#define OPTION_VAL_100_DE NULL
#define OPTION_VAL_110_DE "110 %"
#define OPTION_VAL_120_DE "120 %"
#define OPTION_VAL_130_DE "130 %"
#define OPTION_VAL_140_DE "140 %"
#define OPTION_VAL_150_DE "150 %"
#define OPTION_VAL_160_DE "160 %"
#define OPTION_VAL_170_DE "170 %"
#define OPTION_VAL_180_DE "180 %"
#define OPTION_VAL_190_DE "190 %"
#define OPTION_VAL_200_DE "200 %"
#define OPTION_VAL_210_DE "210 %"
#define OPTION_VAL_220_DE "220 %"
#define OPTION_VAL_230_DE "230 %"
#define OPTION_VAL_240_DE "240 %"
#define OPTION_VAL_250_DE "250 %"
#define OPTION_VAL_260_DE "260 %"
#define OPTION_VAL_270_DE "270 %"
#define OPTION_VAL_280_DE "280 %"
#define OPTION_VAL_290_DE "290 %"
#define OPTION_VAL_300_DE "300 %"
#define OPTION_VAL_310_DE "310 %"
#define OPTION_VAL_320_DE "320 %"
#define OPTION_VAL_330_DE "330 %"
#define OPTION_VAL_340_DE "340 %"
#define OPTION_VAL_350_DE "350 %"
#define OPTION_VAL_360_DE "360 %"
#define OPTION_VAL_370_DE "370 %"
#define OPTION_VAL_380_DE "380 %"
#define OPTION_VAL_390_DE "390 %"
#define OPTION_VAL_400_DE "400 %"
#define BSNES_CPU_FASTMATH_LABEL_DE NULL
#define BSNES_CPU_FASTMATH_INFO_0_DE NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_DE NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_DE NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_DE NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_DE NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_DE NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_DE NULL
#define OPTION_VAL_410_DE "410 %"
#define OPTION_VAL_420_DE "420 %"
#define OPTION_VAL_430_DE "430 %"
#define OPTION_VAL_440_DE "440 %"
#define OPTION_VAL_450_DE "450 %"
#define OPTION_VAL_460_DE "460 %"
#define OPTION_VAL_470_DE "470 %"
#define OPTION_VAL_480_DE "480 %"
#define OPTION_VAL_490_DE "490 %"
#define OPTION_VAL_500_DE "500 %"
#define OPTION_VAL_510_DE NULL
#define OPTION_VAL_520_DE NULL
#define OPTION_VAL_530_DE NULL
#define OPTION_VAL_540_DE NULL
#define OPTION_VAL_550_DE NULL
#define OPTION_VAL_560_DE NULL
#define OPTION_VAL_570_DE "570 %"
#define OPTION_VAL_580_DE "580 %"
#define OPTION_VAL_590_DE "590 %"
#define OPTION_VAL_600_DE "600 %"
#define OPTION_VAL_610_DE "610 %"
#define OPTION_VAL_620_DE "620 %"
#define OPTION_VAL_630_DE "630 %"
#define OPTION_VAL_640_DE "640 %"
#define OPTION_VAL_650_DE "650 %"
#define OPTION_VAL_660_DE "660 %"
#define OPTION_VAL_670_DE "670 %"
#define OPTION_VAL_680_DE "680 %"
#define OPTION_VAL_690_DE "690 %"
#define OPTION_VAL_700_DE "700 %"
#define OPTION_VAL_710_DE "710 %"
#define OPTION_VAL_720_DE "720 %"
#define OPTION_VAL_730_DE "730 %"
#define OPTION_VAL_740_DE "740 %"
#define OPTION_VAL_750_DE "750 %"
#define OPTION_VAL_760_DE NULL
#define OPTION_VAL_770_DE NULL
#define OPTION_VAL_780_DE NULL
#define OPTION_VAL_790_DE NULL
#define OPTION_VAL_800_DE NULL
#define BSNES_PPU_FAST_LABEL_DE NULL
#define BSNES_PPU_FAST_LABEL_CAT_DE NULL
#define BSNES_PPU_FAST_INFO_0_DE NULL
#define BSNES_PPU_DEINTERLACE_LABEL_DE NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_DE NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_DE NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_DE NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_DE NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_DE NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_DE NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_DE NULL
#define BSNES_MODE7_SCALE_LABEL_DE NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_DE "Skalierung"
#define BSNES_MODE7_SCALE_INFO_0_DE NULL
#define OPTION_VAL_1X_DE NULL
#define OPTION_VAL_2X_DE NULL
#define OPTION_VAL_3X_DE NULL
#define OPTION_VAL_4X_DE NULL
#define OPTION_VAL_5X_DE NULL
#define OPTION_VAL_6X_DE NULL
#define OPTION_VAL_7X_DE NULL
#define OPTION_VAL_8X_DE NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_DE NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_DE NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_DE NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_DE NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_DE NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_DE NULL
#define BSNES_MODE7_MOSAIC_LABEL_DE NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_DE NULL
#define BSNES_MODE7_MOSAIC_INFO_0_DE NULL
#define BSNES_DSP_FAST_LABEL_DE NULL
#define BSNES_DSP_FAST_LABEL_CAT_DE NULL
#define BSNES_DSP_FAST_INFO_0_DE NULL
#define BSNES_DSP_CUBIC_LABEL_DE NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_DE NULL
#define BSNES_DSP_CUBIC_INFO_0_DE NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_DE NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_DE NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_DE NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_DE NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_DE NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_DE NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_DE NULL
#define BSNES_SGB_BIOS_LABEL_DE NULL
#define BSNES_SGB_BIOS_INFO_0_DE NULL
#define OPTION_VAL_SGB1_SFC_DE NULL
#define OPTION_VAL_SGB2_SFC_DE NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_DE NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_DE NULL
#define OPTION_VAL_1_DE NULL
#define OPTION_VAL_2_DE NULL
#define OPTION_VAL_3_DE NULL
#define OPTION_VAL_4_DE NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_DE NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_DE NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_DE NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_DE NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_DE NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_DE NULL

struct retro_core_option_v2_category option_cats_de[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DE,
      CATEGORY_VIDEO_INFO_0_DE
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_DE,
      CATEGORY_AUDIO_INFO_0_DE
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_DE,
      CATEGORY_MODE7_INFO_0_DE
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_DE,
      CATEGORY_SGB_INFO_0_DE
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_DE,
      CATEGORY_LIGHTGUN_INFO_0_DE
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_DE,
      CATEGORY_OVERCLOCK_INFO_0_DE
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_DE,
      CATEGORY_HACK_INFO_0_DE
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_DE,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_DE,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_DE },
         { "8:7",  OPTION_VAL_8_7_DE },
         { "4:3",  OPTION_VAL_4_3_DE },
         { "NTSC", OPTION_VAL_NTSC_DE },
         { "PAL",  OPTION_VAL_PAL_DE },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_DE,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_DE,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_DE },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_DE,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_DE,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_DE,
      NULL,
      BSNES_HOTFIXES_INFO_0_DE,
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
      BSNES_ENTROPY_LABEL_DE,
      NULL,
      BSNES_ENTROPY_INFO_0_DE,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_DE },
         { "High", OPTION_VAL_HIGH_DE },
         { "None", OPTION_VAL_NONE_DE },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_DE,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_DE,
      BSNES_CPU_OVERCLOCK_INFO_0_DE,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_DE  },
         { "20",  OPTION_VAL_20_DE  },
         { "30",  OPTION_VAL_30_DE  },
         { "40",  OPTION_VAL_40_DE  },
         { "50",  OPTION_VAL_50_DE  },
         { "60",  OPTION_VAL_60_DE  },
         { "70",  OPTION_VAL_70_DE  },
         { "80",  OPTION_VAL_80_DE  },
         { "90",  OPTION_VAL_90_DE  },
         { "100", OPTION_VAL_100_DE },
         { "110", OPTION_VAL_110_DE },
         { "120", OPTION_VAL_120_DE },
         { "130", OPTION_VAL_130_DE },
         { "140", OPTION_VAL_140_DE },
         { "150", OPTION_VAL_150_DE },
         { "160", OPTION_VAL_160_DE },
         { "170", OPTION_VAL_170_DE },
         { "180", OPTION_VAL_180_DE },
         { "190", OPTION_VAL_190_DE },
         { "200", OPTION_VAL_200_DE },
         { "210", OPTION_VAL_210_DE },
         { "220", OPTION_VAL_220_DE },
         { "230", OPTION_VAL_230_DE },
         { "240", OPTION_VAL_240_DE },
         { "250", OPTION_VAL_250_DE },
         { "260", OPTION_VAL_260_DE },
         { "270", OPTION_VAL_270_DE },
         { "280", OPTION_VAL_280_DE },
         { "290", OPTION_VAL_290_DE },
         { "300", OPTION_VAL_300_DE },
         { "310", OPTION_VAL_310_DE },
         { "320", OPTION_VAL_320_DE },
         { "330", OPTION_VAL_330_DE },
         { "340", OPTION_VAL_340_DE },
         { "350", OPTION_VAL_350_DE },
         { "360", OPTION_VAL_360_DE },
         { "370", OPTION_VAL_370_DE },
         { "380", OPTION_VAL_380_DE },
         { "390", OPTION_VAL_390_DE },
         { "400", OPTION_VAL_400_DE },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_DE,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_DE,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_DE,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_DE,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_DE,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_DE  },
         { "20",  OPTION_VAL_20_DE  },
         { "30",  OPTION_VAL_30_DE  },
         { "40",  OPTION_VAL_40_DE  },
         { "50",  OPTION_VAL_50_DE  },
         { "60",  OPTION_VAL_60_DE  },
         { "70",  OPTION_VAL_70_DE  },
         { "80",  OPTION_VAL_80_DE  },
         { "90",  OPTION_VAL_90_DE  },
         { "100", OPTION_VAL_100_DE },
         { "110", OPTION_VAL_110_DE },
         { "120", OPTION_VAL_120_DE },
         { "130", OPTION_VAL_130_DE },
         { "140", OPTION_VAL_140_DE },
         { "150", OPTION_VAL_150_DE },
         { "160", OPTION_VAL_160_DE },
         { "170", OPTION_VAL_170_DE },
         { "180", OPTION_VAL_180_DE },
         { "190", OPTION_VAL_190_DE },
         { "200", OPTION_VAL_200_DE },
         { "210", OPTION_VAL_210_DE },
         { "220", OPTION_VAL_220_DE },
         { "230", OPTION_VAL_230_DE },
         { "240", OPTION_VAL_240_DE },
         { "250", OPTION_VAL_250_DE },
         { "260", OPTION_VAL_260_DE },
         { "270", OPTION_VAL_270_DE },
         { "280", OPTION_VAL_280_DE },
         { "290", OPTION_VAL_290_DE },
         { "300", OPTION_VAL_300_DE },
         { "310", OPTION_VAL_310_DE },
         { "320", OPTION_VAL_320_DE },
         { "330", OPTION_VAL_330_DE },
         { "340", OPTION_VAL_340_DE },
         { "350", OPTION_VAL_350_DE },
         { "360", OPTION_VAL_360_DE },
         { "370", OPTION_VAL_370_DE },
         { "380", OPTION_VAL_380_DE },
         { "390", OPTION_VAL_390_DE },
         { "400", OPTION_VAL_400_DE },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_DE,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_DE,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_DE,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_DE  },
         { "20",  OPTION_VAL_20_DE  },
         { "30",  OPTION_VAL_30_DE  },
         { "40",  OPTION_VAL_40_DE  },
         { "50",  OPTION_VAL_50_DE  },
         { "60",  OPTION_VAL_60_DE  },
         { "70",  OPTION_VAL_70_DE  },
         { "80",  OPTION_VAL_80_DE  },
         { "90",  OPTION_VAL_90_DE  },
         { "100", OPTION_VAL_100_DE },
         { "110", OPTION_VAL_110_DE },
         { "120", OPTION_VAL_120_DE },
         { "130", OPTION_VAL_130_DE },
         { "140", OPTION_VAL_140_DE },
         { "150", OPTION_VAL_150_DE },
         { "160", OPTION_VAL_160_DE },
         { "170", OPTION_VAL_170_DE },
         { "180", OPTION_VAL_180_DE },
         { "190", OPTION_VAL_190_DE },
         { "200", OPTION_VAL_200_DE },
         { "210", OPTION_VAL_210_DE },
         { "220", OPTION_VAL_220_DE },
         { "230", OPTION_VAL_230_DE },
         { "240", OPTION_VAL_240_DE },
         { "250", OPTION_VAL_250_DE },
         { "260", OPTION_VAL_260_DE },
         { "270", OPTION_VAL_270_DE },
         { "280", OPTION_VAL_280_DE },
         { "290", OPTION_VAL_290_DE },
         { "300", OPTION_VAL_300_DE },
         { "310", OPTION_VAL_310_DE },
         { "320", OPTION_VAL_320_DE },
         { "330", OPTION_VAL_330_DE },
         { "340", OPTION_VAL_340_DE },
         { "350", OPTION_VAL_350_DE },
         { "360", OPTION_VAL_360_DE },
         { "370", OPTION_VAL_370_DE },
         { "380", OPTION_VAL_380_DE },
         { "390", OPTION_VAL_390_DE },
         { "400", OPTION_VAL_400_DE },
         { "410", OPTION_VAL_410_DE },
         { "420", OPTION_VAL_420_DE },
         { "430", OPTION_VAL_430_DE },
         { "440", OPTION_VAL_440_DE },
         { "450", OPTION_VAL_450_DE },
         { "460", OPTION_VAL_460_DE },
         { "470", OPTION_VAL_470_DE },
         { "480", OPTION_VAL_480_DE },
         { "490", OPTION_VAL_490_DE },
         { "500", OPTION_VAL_500_DE },
         { "510", OPTION_VAL_510_DE },
         { "520", OPTION_VAL_520_DE },
         { "530", OPTION_VAL_530_DE },
         { "540", OPTION_VAL_540_DE },
         { "550", OPTION_VAL_550_DE },
         { "560", OPTION_VAL_560_DE },
         { "570", OPTION_VAL_570_DE },
         { "580", OPTION_VAL_580_DE },
         { "590", OPTION_VAL_590_DE },
         { "600", OPTION_VAL_600_DE },
         { "610", OPTION_VAL_610_DE },
         { "620", OPTION_VAL_620_DE },
         { "630", OPTION_VAL_630_DE },
         { "640", OPTION_VAL_640_DE },
         { "650", OPTION_VAL_650_DE },
         { "660", OPTION_VAL_660_DE },
         { "670", OPTION_VAL_670_DE },
         { "680", OPTION_VAL_680_DE },
         { "690", OPTION_VAL_690_DE },
         { "700", OPTION_VAL_700_DE },
         { "710", OPTION_VAL_710_DE },
         { "720", OPTION_VAL_720_DE },
         { "730", OPTION_VAL_730_DE },
         { "740", OPTION_VAL_740_DE },
         { "750", OPTION_VAL_750_DE },
         { "760", OPTION_VAL_760_DE },
         { "770", OPTION_VAL_770_DE },
         { "780", OPTION_VAL_780_DE },
         { "790", OPTION_VAL_790_DE },
         { "800", OPTION_VAL_800_DE },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_DE,
      BSNES_PPU_FAST_LABEL_CAT_DE,
      BSNES_PPU_FAST_INFO_0_DE,
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
      BSNES_PPU_DEINTERLACE_LABEL_DE,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_DE,
      BSNES_PPU_DEINTERLACE_INFO_0_DE,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_DE,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_DE,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_DE,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_DE,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_DE,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_DE,
      BSNES_MODE7_SCALE_LABEL_CAT_DE,
      BSNES_MODE7_SCALE_INFO_0_DE,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_DE  },
         { "2x", OPTION_VAL_2X_DE  },
         { "3x", OPTION_VAL_3X_DE  },
         { "4x", OPTION_VAL_4X_DE  },
         { "5x", OPTION_VAL_5X_DE },
         { "6x", OPTION_VAL_6X_DE },
         { "7x", OPTION_VAL_7X_DE },
         { "8x", OPTION_VAL_8X_DE },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_DE,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_DE,
      BSNES_MODE7_PERSPECTIVE_INFO_0_DE,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_DE,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_DE,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_DE,
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
      BSNES_MODE7_MOSAIC_LABEL_DE,
      BSNES_MODE7_MOSAIC_LABEL_CAT_DE,
      BSNES_MODE7_MOSAIC_INFO_0_DE,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_DE,
      BSNES_DSP_FAST_LABEL_CAT_DE,
      BSNES_DSP_FAST_INFO_0_DE,
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
      BSNES_DSP_CUBIC_LABEL_DE,
      BSNES_DSP_CUBIC_LABEL_CAT_DE,
      BSNES_DSP_CUBIC_INFO_0_DE,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_DE,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_DE,
      BSNES_DSP_ECHO_SHADOW_INFO_0_DE,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_DE,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_DE,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_DE,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_DE,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_DE,
      NULL,
      BSNES_SGB_BIOS_INFO_0_DE,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_DE   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_DE },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_DE,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_DE,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_DE  },
         { "2",   OPTION_VAL_2_DE },
         { "3",   OPTION_VAL_3_DE },
         { "4",   OPTION_VAL_4_DE },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_DE,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_DE,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_DE,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_DE,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_DE,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_DE,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define CATEGORY_VIDEO_LABEL_EL "Οδηγός Βίντεο"
#define CATEGORY_VIDEO_INFO_0_EL "Αλλαγή ρυθμίσεων εξόδου βίντεο."
#define CATEGORY_AUDIO_LABEL_EL "Οδηγός Ήχου"
#define CATEGORY_AUDIO_INFO_0_EL "Αλλαγή ρυθμίσεων εξόδου ήχου."
#define CATEGORY_MODE7_LABEL_EL NULL
#define CATEGORY_MODE7_INFO_0_EL NULL
#define CATEGORY_SGB_LABEL_EL NULL
#define CATEGORY_SGB_INFO_0_EL NULL
#define CATEGORY_LIGHTGUN_LABEL_EL NULL
#define CATEGORY_LIGHTGUN_INFO_0_EL NULL
#define CATEGORY_OVERCLOCK_LABEL_EL NULL
#define CATEGORY_OVERCLOCK_INFO_0_EL NULL
#define CATEGORY_HACK_LABEL_EL NULL
#define CATEGORY_HACK_INFO_0_EL NULL
#define BSNES_ASPECT_RATIO_LABEL_EL NULL
#define BSNES_ASPECT_RATIO_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL "Αυτόματο"
#define OPTION_VAL_8_7_EL NULL
#define OPTION_VAL_4_3_EL NULL
#define OPTION_VAL_NTSC_EL NULL
#define OPTION_VAL_PAL_EL NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_EL NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_EL NULL
#define OPTION_VAL_OFF_EL NULL
#define BSNES_BLUR_EMULATION_LABEL_EL NULL
#define BSNES_BLUR_EMULATION_INFO_0_EL NULL
#define BSNES_HOTFIXES_LABEL_EL NULL
#define BSNES_HOTFIXES_INFO_0_EL NULL
#define BSNES_ENTROPY_LABEL_EL NULL
#define BSNES_ENTROPY_INFO_0_EL NULL
#define OPTION_VAL_LOW_EL NULL
#define OPTION_VAL_HIGH_EL NULL
#define OPTION_VAL_NONE_EL "Κανείς"
#define BSNES_CPU_OVERCLOCK_LABEL_EL NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_EL NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_EL NULL
#define OPTION_VAL_10_EL NULL
#define OPTION_VAL_20_EL NULL
#define OPTION_VAL_30_EL NULL
#define OPTION_VAL_40_EL NULL
#define OPTION_VAL_50_EL NULL
#define OPTION_VAL_60_EL NULL
#define OPTION_VAL_70_EL NULL
#define OPTION_VAL_80_EL "το 80%"
#define OPTION_VAL_90_EL NULL
#define OPTION_VAL_100_EL NULL
#define OPTION_VAL_110_EL NULL
#define OPTION_VAL_120_EL NULL
#define OPTION_VAL_130_EL NULL
#define OPTION_VAL_140_EL NULL
#define OPTION_VAL_150_EL NULL
#define OPTION_VAL_160_EL NULL
#define OPTION_VAL_170_EL NULL
#define OPTION_VAL_180_EL NULL
#define OPTION_VAL_190_EL NULL
#define OPTION_VAL_200_EL NULL
#define OPTION_VAL_210_EL NULL
#define OPTION_VAL_220_EL NULL
#define OPTION_VAL_230_EL NULL
#define OPTION_VAL_240_EL NULL
#define OPTION_VAL_250_EL NULL
#define OPTION_VAL_260_EL NULL
#define OPTION_VAL_270_EL NULL
#define OPTION_VAL_280_EL NULL
#define OPTION_VAL_290_EL NULL
#define OPTION_VAL_300_EL NULL
#define OPTION_VAL_310_EL NULL
#define OPTION_VAL_320_EL NULL
#define OPTION_VAL_330_EL NULL
#define OPTION_VAL_340_EL NULL
#define OPTION_VAL_350_EL NULL
#define OPTION_VAL_360_EL NULL
#define OPTION_VAL_370_EL NULL
#define OPTION_VAL_380_EL NULL
#define OPTION_VAL_390_EL NULL
#define OPTION_VAL_400_EL NULL
#define BSNES_CPU_FASTMATH_LABEL_EL NULL
#define BSNES_CPU_FASTMATH_INFO_0_EL NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_EL NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_EL NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_EL NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_EL NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_EL NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_EL NULL
#define OPTION_VAL_410_EL NULL
#define OPTION_VAL_420_EL NULL
#define OPTION_VAL_430_EL NULL
#define OPTION_VAL_440_EL NULL
#define OPTION_VAL_450_EL NULL
#define OPTION_VAL_460_EL NULL
#define OPTION_VAL_470_EL NULL
#define OPTION_VAL_480_EL NULL
#define OPTION_VAL_490_EL NULL
#define OPTION_VAL_500_EL NULL
#define OPTION_VAL_510_EL NULL
#define OPTION_VAL_520_EL NULL
#define OPTION_VAL_530_EL NULL
#define OPTION_VAL_540_EL NULL
#define OPTION_VAL_550_EL NULL
#define OPTION_VAL_560_EL NULL
#define OPTION_VAL_570_EL NULL
#define OPTION_VAL_580_EL NULL
#define OPTION_VAL_590_EL NULL
#define OPTION_VAL_600_EL NULL
#define OPTION_VAL_610_EL NULL
#define OPTION_VAL_620_EL NULL
#define OPTION_VAL_630_EL NULL
#define OPTION_VAL_640_EL NULL
#define OPTION_VAL_650_EL NULL
#define OPTION_VAL_660_EL NULL
#define OPTION_VAL_670_EL NULL
#define OPTION_VAL_680_EL NULL
#define OPTION_VAL_690_EL NULL
#define OPTION_VAL_700_EL NULL
#define OPTION_VAL_710_EL NULL
#define OPTION_VAL_720_EL NULL
#define OPTION_VAL_730_EL NULL
#define OPTION_VAL_740_EL NULL
#define OPTION_VAL_750_EL NULL
#define OPTION_VAL_760_EL NULL
#define OPTION_VAL_770_EL NULL
#define OPTION_VAL_780_EL NULL
#define OPTION_VAL_790_EL NULL
#define OPTION_VAL_800_EL NULL
#define BSNES_PPU_FAST_LABEL_EL NULL
#define BSNES_PPU_FAST_LABEL_CAT_EL NULL
#define BSNES_PPU_FAST_INFO_0_EL NULL
#define BSNES_PPU_DEINTERLACE_LABEL_EL NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_EL NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_EL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_EL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_EL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_EL NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_EL NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_EL NULL
#define BSNES_MODE7_SCALE_LABEL_EL NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_EL "Κλίμακα"
#define BSNES_MODE7_SCALE_INFO_0_EL NULL
#define OPTION_VAL_1X_EL NULL
#define OPTION_VAL_2X_EL NULL
#define OPTION_VAL_3X_EL NULL
#define OPTION_VAL_4X_EL NULL
#define OPTION_VAL_5X_EL NULL
#define OPTION_VAL_6X_EL NULL
#define OPTION_VAL_7X_EL NULL
#define OPTION_VAL_8X_EL NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_EL NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_EL NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_EL NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_EL NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_EL NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_EL NULL
#define BSNES_MODE7_MOSAIC_LABEL_EL NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_EL NULL
#define BSNES_MODE7_MOSAIC_INFO_0_EL NULL
#define BSNES_DSP_FAST_LABEL_EL NULL
#define BSNES_DSP_FAST_LABEL_CAT_EL NULL
#define BSNES_DSP_FAST_INFO_0_EL NULL
#define BSNES_DSP_CUBIC_LABEL_EL NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_EL NULL
#define BSNES_DSP_CUBIC_INFO_0_EL NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_EL NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_EL NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_EL NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_EL NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_EL NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_EL NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_EL NULL
#define BSNES_SGB_BIOS_LABEL_EL NULL
#define BSNES_SGB_BIOS_INFO_0_EL NULL
#define OPTION_VAL_SGB1_SFC_EL NULL
#define OPTION_VAL_SGB2_SFC_EL NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_EL NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_EL NULL
#define OPTION_VAL_1_EL NULL
#define OPTION_VAL_2_EL NULL
#define OPTION_VAL_3_EL NULL
#define OPTION_VAL_4_EL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_EL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_EL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_EL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_EL NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_EL NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EL,
      CATEGORY_VIDEO_INFO_0_EL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EL,
      CATEGORY_AUDIO_INFO_0_EL
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_EL,
      CATEGORY_MODE7_INFO_0_EL
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_EL,
      CATEGORY_SGB_INFO_0_EL
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_EL,
      CATEGORY_LIGHTGUN_INFO_0_EL
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_EL,
      CATEGORY_OVERCLOCK_INFO_0_EL
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_EL,
      CATEGORY_HACK_INFO_0_EL
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_EL,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_EL,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_EL },
         { "8:7",  OPTION_VAL_8_7_EL },
         { "4:3",  OPTION_VAL_4_3_EL },
         { "NTSC", OPTION_VAL_NTSC_EL },
         { "PAL",  OPTION_VAL_PAL_EL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_EL,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_EL,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_EL },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_EL,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_EL,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_EL,
      NULL,
      BSNES_HOTFIXES_INFO_0_EL,
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
      BSNES_ENTROPY_LABEL_EL,
      NULL,
      BSNES_ENTROPY_INFO_0_EL,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_EL },
         { "High", OPTION_VAL_HIGH_EL },
         { "None", OPTION_VAL_NONE_EL },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_EL,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_EL,
      BSNES_CPU_OVERCLOCK_INFO_0_EL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_EL  },
         { "20",  OPTION_VAL_20_EL  },
         { "30",  OPTION_VAL_30_EL  },
         { "40",  OPTION_VAL_40_EL  },
         { "50",  OPTION_VAL_50_EL  },
         { "60",  OPTION_VAL_60_EL  },
         { "70",  OPTION_VAL_70_EL  },
         { "80",  OPTION_VAL_80_EL  },
         { "90",  OPTION_VAL_90_EL  },
         { "100", OPTION_VAL_100_EL },
         { "110", OPTION_VAL_110_EL },
         { "120", OPTION_VAL_120_EL },
         { "130", OPTION_VAL_130_EL },
         { "140", OPTION_VAL_140_EL },
         { "150", OPTION_VAL_150_EL },
         { "160", OPTION_VAL_160_EL },
         { "170", OPTION_VAL_170_EL },
         { "180", OPTION_VAL_180_EL },
         { "190", OPTION_VAL_190_EL },
         { "200", OPTION_VAL_200_EL },
         { "210", OPTION_VAL_210_EL },
         { "220", OPTION_VAL_220_EL },
         { "230", OPTION_VAL_230_EL },
         { "240", OPTION_VAL_240_EL },
         { "250", OPTION_VAL_250_EL },
         { "260", OPTION_VAL_260_EL },
         { "270", OPTION_VAL_270_EL },
         { "280", OPTION_VAL_280_EL },
         { "290", OPTION_VAL_290_EL },
         { "300", OPTION_VAL_300_EL },
         { "310", OPTION_VAL_310_EL },
         { "320", OPTION_VAL_320_EL },
         { "330", OPTION_VAL_330_EL },
         { "340", OPTION_VAL_340_EL },
         { "350", OPTION_VAL_350_EL },
         { "360", OPTION_VAL_360_EL },
         { "370", OPTION_VAL_370_EL },
         { "380", OPTION_VAL_380_EL },
         { "390", OPTION_VAL_390_EL },
         { "400", OPTION_VAL_400_EL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_EL,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_EL,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_EL,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_EL,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_EL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_EL  },
         { "20",  OPTION_VAL_20_EL  },
         { "30",  OPTION_VAL_30_EL  },
         { "40",  OPTION_VAL_40_EL  },
         { "50",  OPTION_VAL_50_EL  },
         { "60",  OPTION_VAL_60_EL  },
         { "70",  OPTION_VAL_70_EL  },
         { "80",  OPTION_VAL_80_EL  },
         { "90",  OPTION_VAL_90_EL  },
         { "100", OPTION_VAL_100_EL },
         { "110", OPTION_VAL_110_EL },
         { "120", OPTION_VAL_120_EL },
         { "130", OPTION_VAL_130_EL },
         { "140", OPTION_VAL_140_EL },
         { "150", OPTION_VAL_150_EL },
         { "160", OPTION_VAL_160_EL },
         { "170", OPTION_VAL_170_EL },
         { "180", OPTION_VAL_180_EL },
         { "190", OPTION_VAL_190_EL },
         { "200", OPTION_VAL_200_EL },
         { "210", OPTION_VAL_210_EL },
         { "220", OPTION_VAL_220_EL },
         { "230", OPTION_VAL_230_EL },
         { "240", OPTION_VAL_240_EL },
         { "250", OPTION_VAL_250_EL },
         { "260", OPTION_VAL_260_EL },
         { "270", OPTION_VAL_270_EL },
         { "280", OPTION_VAL_280_EL },
         { "290", OPTION_VAL_290_EL },
         { "300", OPTION_VAL_300_EL },
         { "310", OPTION_VAL_310_EL },
         { "320", OPTION_VAL_320_EL },
         { "330", OPTION_VAL_330_EL },
         { "340", OPTION_VAL_340_EL },
         { "350", OPTION_VAL_350_EL },
         { "360", OPTION_VAL_360_EL },
         { "370", OPTION_VAL_370_EL },
         { "380", OPTION_VAL_380_EL },
         { "390", OPTION_VAL_390_EL },
         { "400", OPTION_VAL_400_EL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_EL,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_EL,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_EL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_EL  },
         { "20",  OPTION_VAL_20_EL  },
         { "30",  OPTION_VAL_30_EL  },
         { "40",  OPTION_VAL_40_EL  },
         { "50",  OPTION_VAL_50_EL  },
         { "60",  OPTION_VAL_60_EL  },
         { "70",  OPTION_VAL_70_EL  },
         { "80",  OPTION_VAL_80_EL  },
         { "90",  OPTION_VAL_90_EL  },
         { "100", OPTION_VAL_100_EL },
         { "110", OPTION_VAL_110_EL },
         { "120", OPTION_VAL_120_EL },
         { "130", OPTION_VAL_130_EL },
         { "140", OPTION_VAL_140_EL },
         { "150", OPTION_VAL_150_EL },
         { "160", OPTION_VAL_160_EL },
         { "170", OPTION_VAL_170_EL },
         { "180", OPTION_VAL_180_EL },
         { "190", OPTION_VAL_190_EL },
         { "200", OPTION_VAL_200_EL },
         { "210", OPTION_VAL_210_EL },
         { "220", OPTION_VAL_220_EL },
         { "230", OPTION_VAL_230_EL },
         { "240", OPTION_VAL_240_EL },
         { "250", OPTION_VAL_250_EL },
         { "260", OPTION_VAL_260_EL },
         { "270", OPTION_VAL_270_EL },
         { "280", OPTION_VAL_280_EL },
         { "290", OPTION_VAL_290_EL },
         { "300", OPTION_VAL_300_EL },
         { "310", OPTION_VAL_310_EL },
         { "320", OPTION_VAL_320_EL },
         { "330", OPTION_VAL_330_EL },
         { "340", OPTION_VAL_340_EL },
         { "350", OPTION_VAL_350_EL },
         { "360", OPTION_VAL_360_EL },
         { "370", OPTION_VAL_370_EL },
         { "380", OPTION_VAL_380_EL },
         { "390", OPTION_VAL_390_EL },
         { "400", OPTION_VAL_400_EL },
         { "410", OPTION_VAL_410_EL },
         { "420", OPTION_VAL_420_EL },
         { "430", OPTION_VAL_430_EL },
         { "440", OPTION_VAL_440_EL },
         { "450", OPTION_VAL_450_EL },
         { "460", OPTION_VAL_460_EL },
         { "470", OPTION_VAL_470_EL },
         { "480", OPTION_VAL_480_EL },
         { "490", OPTION_VAL_490_EL },
         { "500", OPTION_VAL_500_EL },
         { "510", OPTION_VAL_510_EL },
         { "520", OPTION_VAL_520_EL },
         { "530", OPTION_VAL_530_EL },
         { "540", OPTION_VAL_540_EL },
         { "550", OPTION_VAL_550_EL },
         { "560", OPTION_VAL_560_EL },
         { "570", OPTION_VAL_570_EL },
         { "580", OPTION_VAL_580_EL },
         { "590", OPTION_VAL_590_EL },
         { "600", OPTION_VAL_600_EL },
         { "610", OPTION_VAL_610_EL },
         { "620", OPTION_VAL_620_EL },
         { "630", OPTION_VAL_630_EL },
         { "640", OPTION_VAL_640_EL },
         { "650", OPTION_VAL_650_EL },
         { "660", OPTION_VAL_660_EL },
         { "670", OPTION_VAL_670_EL },
         { "680", OPTION_VAL_680_EL },
         { "690", OPTION_VAL_690_EL },
         { "700", OPTION_VAL_700_EL },
         { "710", OPTION_VAL_710_EL },
         { "720", OPTION_VAL_720_EL },
         { "730", OPTION_VAL_730_EL },
         { "740", OPTION_VAL_740_EL },
         { "750", OPTION_VAL_750_EL },
         { "760", OPTION_VAL_760_EL },
         { "770", OPTION_VAL_770_EL },
         { "780", OPTION_VAL_780_EL },
         { "790", OPTION_VAL_790_EL },
         { "800", OPTION_VAL_800_EL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_EL,
      BSNES_PPU_FAST_LABEL_CAT_EL,
      BSNES_PPU_FAST_INFO_0_EL,
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
      BSNES_PPU_DEINTERLACE_LABEL_EL,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_EL,
      BSNES_PPU_DEINTERLACE_INFO_0_EL,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_EL,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_EL,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_EL,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_EL,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_EL,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_EL,
      BSNES_MODE7_SCALE_LABEL_CAT_EL,
      BSNES_MODE7_SCALE_INFO_0_EL,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_EL  },
         { "2x", OPTION_VAL_2X_EL  },
         { "3x", OPTION_VAL_3X_EL  },
         { "4x", OPTION_VAL_4X_EL  },
         { "5x", OPTION_VAL_5X_EL },
         { "6x", OPTION_VAL_6X_EL },
         { "7x", OPTION_VAL_7X_EL },
         { "8x", OPTION_VAL_8X_EL },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_EL,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_EL,
      BSNES_MODE7_PERSPECTIVE_INFO_0_EL,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_EL,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_EL,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_EL,
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
      BSNES_MODE7_MOSAIC_LABEL_EL,
      BSNES_MODE7_MOSAIC_LABEL_CAT_EL,
      BSNES_MODE7_MOSAIC_INFO_0_EL,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_EL,
      BSNES_DSP_FAST_LABEL_CAT_EL,
      BSNES_DSP_FAST_INFO_0_EL,
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
      BSNES_DSP_CUBIC_LABEL_EL,
      BSNES_DSP_CUBIC_LABEL_CAT_EL,
      BSNES_DSP_CUBIC_INFO_0_EL,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_EL,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_EL,
      BSNES_DSP_ECHO_SHADOW_INFO_0_EL,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_EL,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_EL,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_EL,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_EL,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_EL,
      NULL,
      BSNES_SGB_BIOS_INFO_0_EL,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_EL   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_EL },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_EL,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_EL,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_EL  },
         { "2",   OPTION_VAL_2_EL },
         { "3",   OPTION_VAL_3_EL },
         { "4",   OPTION_VAL_4_EL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_EL,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_EL,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_EL,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_EL,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_EL,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_EL,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EO */

#define CATEGORY_VIDEO_LABEL_EO "Video Driver"
#define CATEGORY_VIDEO_INFO_0_EO "Adjusts settings for video output."
#define CATEGORY_AUDIO_LABEL_EO "Audio Driver"
#define CATEGORY_AUDIO_INFO_0_EO "Adjusts settings for audio output."
#define CATEGORY_MODE7_LABEL_EO NULL
#define CATEGORY_MODE7_INFO_0_EO NULL
#define CATEGORY_SGB_LABEL_EO NULL
#define CATEGORY_SGB_INFO_0_EO NULL
#define CATEGORY_LIGHTGUN_LABEL_EO NULL
#define CATEGORY_LIGHTGUN_INFO_0_EO NULL
#define CATEGORY_OVERCLOCK_LABEL_EO NULL
#define CATEGORY_OVERCLOCK_INFO_0_EO NULL
#define CATEGORY_HACK_LABEL_EO NULL
#define CATEGORY_HACK_INFO_0_EO NULL
#define BSNES_ASPECT_RATIO_LABEL_EO NULL
#define BSNES_ASPECT_RATIO_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO NULL
#define OPTION_VAL_8_7_EO NULL
#define OPTION_VAL_4_3_EO NULL
#define OPTION_VAL_NTSC_EO NULL
#define OPTION_VAL_PAL_EO NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_EO NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_EO NULL
#define OPTION_VAL_OFF_EO NULL
#define BSNES_BLUR_EMULATION_LABEL_EO NULL
#define BSNES_BLUR_EMULATION_INFO_0_EO NULL
#define BSNES_HOTFIXES_LABEL_EO NULL
#define BSNES_HOTFIXES_INFO_0_EO NULL
#define BSNES_ENTROPY_LABEL_EO NULL
#define BSNES_ENTROPY_INFO_0_EO NULL
#define OPTION_VAL_LOW_EO NULL
#define OPTION_VAL_HIGH_EO NULL
#define OPTION_VAL_NONE_EO NULL
#define BSNES_CPU_OVERCLOCK_LABEL_EO NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_EO NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_EO NULL
#define OPTION_VAL_10_EO NULL
#define OPTION_VAL_20_EO NULL
#define OPTION_VAL_30_EO NULL
#define OPTION_VAL_40_EO NULL
#define OPTION_VAL_50_EO NULL
#define OPTION_VAL_60_EO NULL
#define OPTION_VAL_70_EO NULL
#define OPTION_VAL_80_EO NULL
#define OPTION_VAL_90_EO NULL
#define OPTION_VAL_100_EO NULL
#define OPTION_VAL_110_EO NULL
#define OPTION_VAL_120_EO NULL
#define OPTION_VAL_130_EO NULL
#define OPTION_VAL_140_EO NULL
#define OPTION_VAL_150_EO NULL
#define OPTION_VAL_160_EO NULL
#define OPTION_VAL_170_EO NULL
#define OPTION_VAL_180_EO NULL
#define OPTION_VAL_190_EO NULL
#define OPTION_VAL_200_EO NULL
#define OPTION_VAL_210_EO NULL
#define OPTION_VAL_220_EO NULL
#define OPTION_VAL_230_EO NULL
#define OPTION_VAL_240_EO NULL
#define OPTION_VAL_250_EO NULL
#define OPTION_VAL_260_EO NULL
#define OPTION_VAL_270_EO NULL
#define OPTION_VAL_280_EO NULL
#define OPTION_VAL_290_EO NULL
#define OPTION_VAL_300_EO NULL
#define OPTION_VAL_310_EO NULL
#define OPTION_VAL_320_EO NULL
#define OPTION_VAL_330_EO NULL
#define OPTION_VAL_340_EO NULL
#define OPTION_VAL_350_EO NULL
#define OPTION_VAL_360_EO NULL
#define OPTION_VAL_370_EO NULL
#define OPTION_VAL_380_EO NULL
#define OPTION_VAL_390_EO NULL
#define OPTION_VAL_400_EO NULL
#define BSNES_CPU_FASTMATH_LABEL_EO NULL
#define BSNES_CPU_FASTMATH_INFO_0_EO NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_EO NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_EO NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_EO NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_EO NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_EO NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_EO NULL
#define OPTION_VAL_410_EO NULL
#define OPTION_VAL_420_EO NULL
#define OPTION_VAL_430_EO NULL
#define OPTION_VAL_440_EO NULL
#define OPTION_VAL_450_EO NULL
#define OPTION_VAL_460_EO NULL
#define OPTION_VAL_470_EO NULL
#define OPTION_VAL_480_EO NULL
#define OPTION_VAL_490_EO NULL
#define OPTION_VAL_500_EO NULL
#define OPTION_VAL_510_EO NULL
#define OPTION_VAL_520_EO NULL
#define OPTION_VAL_530_EO NULL
#define OPTION_VAL_540_EO NULL
#define OPTION_VAL_550_EO NULL
#define OPTION_VAL_560_EO NULL
#define OPTION_VAL_570_EO NULL
#define OPTION_VAL_580_EO NULL
#define OPTION_VAL_590_EO NULL
#define OPTION_VAL_600_EO NULL
#define OPTION_VAL_610_EO NULL
#define OPTION_VAL_620_EO NULL
#define OPTION_VAL_630_EO NULL
#define OPTION_VAL_640_EO NULL
#define OPTION_VAL_650_EO NULL
#define OPTION_VAL_660_EO NULL
#define OPTION_VAL_670_EO NULL
#define OPTION_VAL_680_EO NULL
#define OPTION_VAL_690_EO NULL
#define OPTION_VAL_700_EO NULL
#define OPTION_VAL_710_EO NULL
#define OPTION_VAL_720_EO NULL
#define OPTION_VAL_730_EO NULL
#define OPTION_VAL_740_EO NULL
#define OPTION_VAL_750_EO NULL
#define OPTION_VAL_760_EO NULL
#define OPTION_VAL_770_EO NULL
#define OPTION_VAL_780_EO NULL
#define OPTION_VAL_790_EO NULL
#define OPTION_VAL_800_EO NULL
#define BSNES_PPU_FAST_LABEL_EO NULL
#define BSNES_PPU_FAST_LABEL_CAT_EO NULL
#define BSNES_PPU_FAST_INFO_0_EO NULL
#define BSNES_PPU_DEINTERLACE_LABEL_EO NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_EO NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_EO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_EO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_EO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_EO NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_EO NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_EO NULL
#define BSNES_MODE7_SCALE_LABEL_EO NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_EO NULL
#define BSNES_MODE7_SCALE_INFO_0_EO NULL
#define OPTION_VAL_1X_EO NULL
#define OPTION_VAL_2X_EO NULL
#define OPTION_VAL_3X_EO NULL
#define OPTION_VAL_4X_EO NULL
#define OPTION_VAL_5X_EO NULL
#define OPTION_VAL_6X_EO NULL
#define OPTION_VAL_7X_EO NULL
#define OPTION_VAL_8X_EO NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_EO NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_EO NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_EO NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_EO NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_EO NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_EO NULL
#define BSNES_MODE7_MOSAIC_LABEL_EO NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_EO NULL
#define BSNES_MODE7_MOSAIC_INFO_0_EO NULL
#define BSNES_DSP_FAST_LABEL_EO NULL
#define BSNES_DSP_FAST_LABEL_CAT_EO NULL
#define BSNES_DSP_FAST_INFO_0_EO NULL
#define BSNES_DSP_CUBIC_LABEL_EO NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_EO NULL
#define BSNES_DSP_CUBIC_INFO_0_EO NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_EO NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_EO NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_EO NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_EO NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_EO NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_EO NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_EO NULL
#define BSNES_SGB_BIOS_LABEL_EO NULL
#define BSNES_SGB_BIOS_INFO_0_EO NULL
#define OPTION_VAL_SGB1_SFC_EO NULL
#define OPTION_VAL_SGB2_SFC_EO NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_EO NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_EO NULL
#define OPTION_VAL_1_EO NULL
#define OPTION_VAL_2_EO NULL
#define OPTION_VAL_3_EO NULL
#define OPTION_VAL_4_EO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_EO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_EO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_EO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_EO NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_EO NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EO,
      CATEGORY_VIDEO_INFO_0_EO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EO,
      CATEGORY_AUDIO_INFO_0_EO
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_EO,
      CATEGORY_MODE7_INFO_0_EO
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_EO,
      CATEGORY_SGB_INFO_0_EO
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_EO,
      CATEGORY_LIGHTGUN_INFO_0_EO
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_EO,
      CATEGORY_OVERCLOCK_INFO_0_EO
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_EO,
      CATEGORY_HACK_INFO_0_EO
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_EO,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_EO,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_EO },
         { "8:7",  OPTION_VAL_8_7_EO },
         { "4:3",  OPTION_VAL_4_3_EO },
         { "NTSC", OPTION_VAL_NTSC_EO },
         { "PAL",  OPTION_VAL_PAL_EO },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_EO,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_EO,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_EO },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_EO,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_EO,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_EO,
      NULL,
      BSNES_HOTFIXES_INFO_0_EO,
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
      BSNES_ENTROPY_LABEL_EO,
      NULL,
      BSNES_ENTROPY_INFO_0_EO,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_EO },
         { "High", OPTION_VAL_HIGH_EO },
         { "None", OPTION_VAL_NONE_EO },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_EO,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_EO,
      BSNES_CPU_OVERCLOCK_INFO_0_EO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_EO  },
         { "20",  OPTION_VAL_20_EO  },
         { "30",  OPTION_VAL_30_EO  },
         { "40",  OPTION_VAL_40_EO  },
         { "50",  OPTION_VAL_50_EO  },
         { "60",  OPTION_VAL_60_EO  },
         { "70",  OPTION_VAL_70_EO  },
         { "80",  OPTION_VAL_80_EO  },
         { "90",  OPTION_VAL_90_EO  },
         { "100", OPTION_VAL_100_EO },
         { "110", OPTION_VAL_110_EO },
         { "120", OPTION_VAL_120_EO },
         { "130", OPTION_VAL_130_EO },
         { "140", OPTION_VAL_140_EO },
         { "150", OPTION_VAL_150_EO },
         { "160", OPTION_VAL_160_EO },
         { "170", OPTION_VAL_170_EO },
         { "180", OPTION_VAL_180_EO },
         { "190", OPTION_VAL_190_EO },
         { "200", OPTION_VAL_200_EO },
         { "210", OPTION_VAL_210_EO },
         { "220", OPTION_VAL_220_EO },
         { "230", OPTION_VAL_230_EO },
         { "240", OPTION_VAL_240_EO },
         { "250", OPTION_VAL_250_EO },
         { "260", OPTION_VAL_260_EO },
         { "270", OPTION_VAL_270_EO },
         { "280", OPTION_VAL_280_EO },
         { "290", OPTION_VAL_290_EO },
         { "300", OPTION_VAL_300_EO },
         { "310", OPTION_VAL_310_EO },
         { "320", OPTION_VAL_320_EO },
         { "330", OPTION_VAL_330_EO },
         { "340", OPTION_VAL_340_EO },
         { "350", OPTION_VAL_350_EO },
         { "360", OPTION_VAL_360_EO },
         { "370", OPTION_VAL_370_EO },
         { "380", OPTION_VAL_380_EO },
         { "390", OPTION_VAL_390_EO },
         { "400", OPTION_VAL_400_EO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_EO,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_EO,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_EO,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_EO,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_EO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_EO  },
         { "20",  OPTION_VAL_20_EO  },
         { "30",  OPTION_VAL_30_EO  },
         { "40",  OPTION_VAL_40_EO  },
         { "50",  OPTION_VAL_50_EO  },
         { "60",  OPTION_VAL_60_EO  },
         { "70",  OPTION_VAL_70_EO  },
         { "80",  OPTION_VAL_80_EO  },
         { "90",  OPTION_VAL_90_EO  },
         { "100", OPTION_VAL_100_EO },
         { "110", OPTION_VAL_110_EO },
         { "120", OPTION_VAL_120_EO },
         { "130", OPTION_VAL_130_EO },
         { "140", OPTION_VAL_140_EO },
         { "150", OPTION_VAL_150_EO },
         { "160", OPTION_VAL_160_EO },
         { "170", OPTION_VAL_170_EO },
         { "180", OPTION_VAL_180_EO },
         { "190", OPTION_VAL_190_EO },
         { "200", OPTION_VAL_200_EO },
         { "210", OPTION_VAL_210_EO },
         { "220", OPTION_VAL_220_EO },
         { "230", OPTION_VAL_230_EO },
         { "240", OPTION_VAL_240_EO },
         { "250", OPTION_VAL_250_EO },
         { "260", OPTION_VAL_260_EO },
         { "270", OPTION_VAL_270_EO },
         { "280", OPTION_VAL_280_EO },
         { "290", OPTION_VAL_290_EO },
         { "300", OPTION_VAL_300_EO },
         { "310", OPTION_VAL_310_EO },
         { "320", OPTION_VAL_320_EO },
         { "330", OPTION_VAL_330_EO },
         { "340", OPTION_VAL_340_EO },
         { "350", OPTION_VAL_350_EO },
         { "360", OPTION_VAL_360_EO },
         { "370", OPTION_VAL_370_EO },
         { "380", OPTION_VAL_380_EO },
         { "390", OPTION_VAL_390_EO },
         { "400", OPTION_VAL_400_EO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_EO,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_EO,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_EO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_EO  },
         { "20",  OPTION_VAL_20_EO  },
         { "30",  OPTION_VAL_30_EO  },
         { "40",  OPTION_VAL_40_EO  },
         { "50",  OPTION_VAL_50_EO  },
         { "60",  OPTION_VAL_60_EO  },
         { "70",  OPTION_VAL_70_EO  },
         { "80",  OPTION_VAL_80_EO  },
         { "90",  OPTION_VAL_90_EO  },
         { "100", OPTION_VAL_100_EO },
         { "110", OPTION_VAL_110_EO },
         { "120", OPTION_VAL_120_EO },
         { "130", OPTION_VAL_130_EO },
         { "140", OPTION_VAL_140_EO },
         { "150", OPTION_VAL_150_EO },
         { "160", OPTION_VAL_160_EO },
         { "170", OPTION_VAL_170_EO },
         { "180", OPTION_VAL_180_EO },
         { "190", OPTION_VAL_190_EO },
         { "200", OPTION_VAL_200_EO },
         { "210", OPTION_VAL_210_EO },
         { "220", OPTION_VAL_220_EO },
         { "230", OPTION_VAL_230_EO },
         { "240", OPTION_VAL_240_EO },
         { "250", OPTION_VAL_250_EO },
         { "260", OPTION_VAL_260_EO },
         { "270", OPTION_VAL_270_EO },
         { "280", OPTION_VAL_280_EO },
         { "290", OPTION_VAL_290_EO },
         { "300", OPTION_VAL_300_EO },
         { "310", OPTION_VAL_310_EO },
         { "320", OPTION_VAL_320_EO },
         { "330", OPTION_VAL_330_EO },
         { "340", OPTION_VAL_340_EO },
         { "350", OPTION_VAL_350_EO },
         { "360", OPTION_VAL_360_EO },
         { "370", OPTION_VAL_370_EO },
         { "380", OPTION_VAL_380_EO },
         { "390", OPTION_VAL_390_EO },
         { "400", OPTION_VAL_400_EO },
         { "410", OPTION_VAL_410_EO },
         { "420", OPTION_VAL_420_EO },
         { "430", OPTION_VAL_430_EO },
         { "440", OPTION_VAL_440_EO },
         { "450", OPTION_VAL_450_EO },
         { "460", OPTION_VAL_460_EO },
         { "470", OPTION_VAL_470_EO },
         { "480", OPTION_VAL_480_EO },
         { "490", OPTION_VAL_490_EO },
         { "500", OPTION_VAL_500_EO },
         { "510", OPTION_VAL_510_EO },
         { "520", OPTION_VAL_520_EO },
         { "530", OPTION_VAL_530_EO },
         { "540", OPTION_VAL_540_EO },
         { "550", OPTION_VAL_550_EO },
         { "560", OPTION_VAL_560_EO },
         { "570", OPTION_VAL_570_EO },
         { "580", OPTION_VAL_580_EO },
         { "590", OPTION_VAL_590_EO },
         { "600", OPTION_VAL_600_EO },
         { "610", OPTION_VAL_610_EO },
         { "620", OPTION_VAL_620_EO },
         { "630", OPTION_VAL_630_EO },
         { "640", OPTION_VAL_640_EO },
         { "650", OPTION_VAL_650_EO },
         { "660", OPTION_VAL_660_EO },
         { "670", OPTION_VAL_670_EO },
         { "680", OPTION_VAL_680_EO },
         { "690", OPTION_VAL_690_EO },
         { "700", OPTION_VAL_700_EO },
         { "710", OPTION_VAL_710_EO },
         { "720", OPTION_VAL_720_EO },
         { "730", OPTION_VAL_730_EO },
         { "740", OPTION_VAL_740_EO },
         { "750", OPTION_VAL_750_EO },
         { "760", OPTION_VAL_760_EO },
         { "770", OPTION_VAL_770_EO },
         { "780", OPTION_VAL_780_EO },
         { "790", OPTION_VAL_790_EO },
         { "800", OPTION_VAL_800_EO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_EO,
      BSNES_PPU_FAST_LABEL_CAT_EO,
      BSNES_PPU_FAST_INFO_0_EO,
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
      BSNES_PPU_DEINTERLACE_LABEL_EO,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_EO,
      BSNES_PPU_DEINTERLACE_INFO_0_EO,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_EO,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_EO,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_EO,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_EO,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_EO,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_EO,
      BSNES_MODE7_SCALE_LABEL_CAT_EO,
      BSNES_MODE7_SCALE_INFO_0_EO,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_EO  },
         { "2x", OPTION_VAL_2X_EO  },
         { "3x", OPTION_VAL_3X_EO  },
         { "4x", OPTION_VAL_4X_EO  },
         { "5x", OPTION_VAL_5X_EO },
         { "6x", OPTION_VAL_6X_EO },
         { "7x", OPTION_VAL_7X_EO },
         { "8x", OPTION_VAL_8X_EO },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_EO,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_EO,
      BSNES_MODE7_PERSPECTIVE_INFO_0_EO,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_EO,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_EO,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_EO,
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
      BSNES_MODE7_MOSAIC_LABEL_EO,
      BSNES_MODE7_MOSAIC_LABEL_CAT_EO,
      BSNES_MODE7_MOSAIC_INFO_0_EO,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_EO,
      BSNES_DSP_FAST_LABEL_CAT_EO,
      BSNES_DSP_FAST_INFO_0_EO,
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
      BSNES_DSP_CUBIC_LABEL_EO,
      BSNES_DSP_CUBIC_LABEL_CAT_EO,
      BSNES_DSP_CUBIC_INFO_0_EO,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_EO,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_EO,
      BSNES_DSP_ECHO_SHADOW_INFO_0_EO,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_EO,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_EO,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_EO,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_EO,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_EO,
      NULL,
      BSNES_SGB_BIOS_INFO_0_EO,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_EO   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_EO },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_EO,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_EO,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_EO  },
         { "2",   OPTION_VAL_2_EO },
         { "3",   OPTION_VAL_3_EO },
         { "4",   OPTION_VAL_4_EO },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_EO,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_EO,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_EO,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_EO,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_EO,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_EO,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define CATEGORY_VIDEO_LABEL_ES "Vídeo"
#define CATEGORY_VIDEO_INFO_0_ES "Cambia los ajustes de la salida de vídeo."
#define CATEGORY_AUDIO_LABEL_ES NULL
#define CATEGORY_AUDIO_INFO_0_ES "Cambia los ajustes de la salida de audio."
#define CATEGORY_MODE7_LABEL_ES "Modo 7 en alta definición (HD)"
#define CATEGORY_MODE7_INFO_0_ES "Cambia los ajustes relativos a la emulación de los gráficos en Modo 7."
#define CATEGORY_SGB_LABEL_ES NULL
#define CATEGORY_SGB_INFO_0_ES "Cambia los ajustes relativos a la emulación del Super Game Boy."
#define CATEGORY_LIGHTGUN_LABEL_ES "Pistola de luz"
#define CATEGORY_LIGHTGUN_INFO_0_ES "Cambia los ajustes de las pistolas de luz (pantallas táctiles)."
#define CATEGORY_OVERCLOCK_LABEL_ES "Subir/bajar velocidad de CPU"
#define CATEGORY_OVERCLOCK_INFO_0_ES "Cambia la velocidad del hardware emulado."
#define CATEGORY_HACK_LABEL_ES "Arreglos de emulación"
#define CATEGORY_HACK_INFO_0_ES "Aplica trucos y correcciones para la emulación."
#define BSNES_ASPECT_RATIO_LABEL_ES "Relación de aspecto preferida"
#define BSNES_ASPECT_RATIO_INFO_0_ES "Selecciona la relación de aspecto del contenido. Esta opción solo surtirá efecto cuando dicha relación de aspecto de RetroArch, en el apartado de ajustes de Vídeo, esté configurada como «Asignada por el núcleo»."
#define OPTION_VAL_AUTO_ES "Selección automática"
#define OPTION_VAL_8_7_ES "Píxeles perfectos"
#define OPTION_VAL_4_3_ES NULL
#define OPTION_VAL_NTSC_ES NULL
#define OPTION_VAL_PAL_ES NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_ES "Recortar sobrebarrido"
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_ES "Elimina los bordes superior e inferior de la pantalla, que normalmente no son utilizados por los juegos y son ocultados por el marco de un televisor de definición estándar."
#define OPTION_VAL_OFF_ES "8 píxeles"
#define BSNES_BLUR_EMULATION_LABEL_ES "Emular difuminado"
#define BSNES_BLUR_EMULATION_INFO_0_ES "Simula la limitación de la resolución horizontal de un televisor SD difuminando los píxeles que sean adyacentes horizontalmente. Algunos juegos necesitan este efecto para simular un efecto de transparencia."
#define BSNES_HOTFIXES_LABEL_ES "Correcciones"
#define BSNES_HOTFIXES_INFO_0_ES "A veces, hasta el software de procedencia oficial y comercial puede incluir fallos. Esta opción corregirá ciertos problemas que ocurren hasta en el hardware real."
#define BSNES_ENTROPY_LABEL_ES "Entropía (aleatorización)"
#define BSNES_ENTROPY_INFO_0_ES "Selecciona el nivel de aleatoriedad de la memoria y los registros. En caso de seleccionar Ninguna, toda la memoria y los registros se iniciarán al arrancar con unos valores constantes. Una aleatorización baja ofrece la representación más fidedigna de un sistema real. La opción Alta producirá unos valores lo más aleatorios posibles."
#define OPTION_VAL_LOW_ES "Baja"
#define OPTION_VAL_HIGH_ES "Alta"
#define OPTION_VAL_NONE_ES "Ninguna"
#define BSNES_CPU_OVERCLOCK_LABEL_ES "Velocidad de la CPU"
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_ES NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_ES "Aumenta o disminuye la velocidad de la CPU. Un valor superior al 100 % podría reducir los tiempos de carga y las ralentizaciones. Utiliza esta opción con cuidado, ya que también podría provocar cuelgues u otros problemas en algunos juegos."
#define OPTION_VAL_10_ES "10 %"
#define OPTION_VAL_20_ES "20 %"
#define OPTION_VAL_30_ES "30 %"
#define OPTION_VAL_40_ES "40 %"
#define OPTION_VAL_50_ES "50 %"
#define OPTION_VAL_60_ES "60 %"
#define OPTION_VAL_70_ES "70 %"
#define OPTION_VAL_80_ES "80 %"
#define OPTION_VAL_90_ES "90 %"
#define OPTION_VAL_100_ES "100 % (por defecto)"
#define OPTION_VAL_110_ES "110 %"
#define OPTION_VAL_120_ES "120 %"
#define OPTION_VAL_130_ES "130 %"
#define OPTION_VAL_140_ES "140 %"
#define OPTION_VAL_150_ES "150 %"
#define OPTION_VAL_160_ES "160 %"
#define OPTION_VAL_170_ES "170 %"
#define OPTION_VAL_180_ES "180 %"
#define OPTION_VAL_190_ES "190 %"
#define OPTION_VAL_200_ES "200 %"
#define OPTION_VAL_210_ES "210 %"
#define OPTION_VAL_220_ES "220 %"
#define OPTION_VAL_230_ES "230 %"
#define OPTION_VAL_240_ES "240 %"
#define OPTION_VAL_250_ES "250 %"
#define OPTION_VAL_260_ES "260 %"
#define OPTION_VAL_270_ES "270 %"
#define OPTION_VAL_280_ES "280 %"
#define OPTION_VAL_290_ES "290 %"
#define OPTION_VAL_300_ES "300 %"
#define OPTION_VAL_310_ES "310 %"
#define OPTION_VAL_320_ES "320 %"
#define OPTION_VAL_330_ES "330 %"
#define OPTION_VAL_340_ES "340 %"
#define OPTION_VAL_350_ES "350 %"
#define OPTION_VAL_360_ES "360 %"
#define OPTION_VAL_370_ES "370 %"
#define OPTION_VAL_380_ES "380 %"
#define OPTION_VAL_390_ES "390 %"
#define OPTION_VAL_400_ES "400 %"
#define BSNES_CPU_FASTMATH_LABEL_ES "Acelerar cálculos matemáticos de la CPU"
#define BSNES_CPU_FASTMATH_INFO_0_ES "Produce los resultados de computación de forma inmediata. Las multiplicaciones y divisiones vía CPU tardan un tiempo en llevarse a cabo en una SNES real. Los emuladores más antiguos no simulaban estos retrasos, por lo que ciertos «romhacks» antiguos no esperan a que se completen los cálculos matemáticos y necesitan esta corrección."
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_ES "Velocidad del coprocesador SA-1"
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_ES "Coprocesador SA-1"
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_ES "Aumenta o disminuye la velocidad del chip Super Accelerator 1 (SA-1). Un valor superior al 100 % podría mejorar el rendimiento en aquellos juegos compatibles con este chip. Utiliza esta opción con cuidado, ya que también podría provocar cuelgues u otros problemas en algunos juegos."
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_ES "Velocidad del coprocesador SuperFX"
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_ES "Coprocesador SuperFX"
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_ES "Aumenta o disminuye la velocidad del chip coprocesador SuperFX. Un valor superior al 100 % podría mejorar el rendimiento en aquellos juegos compatibles con este chip. Utiliza esta opción con cuidado, ya que también podría provocar cuelgues u otros problemas en algunos juegos."
#define OPTION_VAL_410_ES "410 %"
#define OPTION_VAL_420_ES "420 %"
#define OPTION_VAL_430_ES "430 %"
#define OPTION_VAL_440_ES "440 %"
#define OPTION_VAL_450_ES "450 %"
#define OPTION_VAL_460_ES "460 %"
#define OPTION_VAL_470_ES "470 %"
#define OPTION_VAL_480_ES "480 %"
#define OPTION_VAL_490_ES "490 %"
#define OPTION_VAL_500_ES "500 %"
#define OPTION_VAL_510_ES "510 %"
#define OPTION_VAL_520_ES "520 %"
#define OPTION_VAL_530_ES "530 %"
#define OPTION_VAL_540_ES "540 %"
#define OPTION_VAL_550_ES "550 %"
#define OPTION_VAL_560_ES "560 %"
#define OPTION_VAL_570_ES "570 %"
#define OPTION_VAL_580_ES "580 %"
#define OPTION_VAL_590_ES "590 %"
#define OPTION_VAL_600_ES "600 %"
#define OPTION_VAL_610_ES "610 %"
#define OPTION_VAL_620_ES "620 %"
#define OPTION_VAL_630_ES "630 %"
#define OPTION_VAL_640_ES "640 %"
#define OPTION_VAL_650_ES "650 %"
#define OPTION_VAL_660_ES "660 %"
#define OPTION_VAL_670_ES "670 %"
#define OPTION_VAL_680_ES "680 %"
#define OPTION_VAL_690_ES "690 %"
#define OPTION_VAL_700_ES "700 %"
#define OPTION_VAL_710_ES "710 %"
#define OPTION_VAL_720_ES "720 %"
#define OPTION_VAL_730_ES "730 %"
#define OPTION_VAL_740_ES "740 %"
#define OPTION_VAL_750_ES "750 %"
#define OPTION_VAL_760_ES "760 %"
#define OPTION_VAL_770_ES "770 %"
#define OPTION_VAL_780_ES "780 %"
#define OPTION_VAL_790_ES "790 %"
#define OPTION_VAL_800_ES "800 %"
#define BSNES_PPU_FAST_LABEL_ES "PPU (vídeo): modo rápido"
#define BSNES_PPU_FAST_LABEL_CAT_ES "PPU: modo rápido"
#define BSNES_PPU_FAST_INFO_0_ES "Permite una emulación más rápida de la PPU a cambio de perder precisión. Se recomienda dejar esta opción activada."
#define BSNES_PPU_DEINTERLACE_LABEL_ES "PPU (vídeo): desentrelazado"
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_ES "PPU: desentrelazado"
#define BSNES_PPU_DEINTERLACE_INFO_0_ES "Desentrelaza todos los juegos renderizándolos de forma interna a 480p. Apenas afecta al rendimiento, así que se recomienda dejar esta opción activada."
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_ES "PPU (vídeo): desactivar límite de sprites"
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_ES "PPU: desactivar límite de sprites"
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_ES "Elimina todos los límites en el número de sprites que se puedan representar de forma simultánea en pantalla. Podría provocar problemas en algunos juegos."
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_ES "PPU (vídeo): eliminar bloqueo de VRAM"
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_ES "Emula un defecto de las versiones antiguas de ZSNES y Snes9x, con las que no se emulaba el bloqueo de VRAM. Algunos «romhacks» antiguos dependían de este comportamiento y mostrarán sus gráficos incorrectamente si no se activa esta opción. Es sumamente inexacta y afecta a la velocidad de la PPU, así que se recomienda mantener esta opción desactivada a menos que necesites jugar a un juego que sea incompatible con este núcleo sin tal opción."
#define BSNES_MODE7_SCALE_LABEL_ES "Modo 7 en alta definición (HD): escalar"
#define BSNES_MODE7_SCALE_LABEL_CAT_ES "Escalar"
#define BSNES_MODE7_SCALE_INFO_0_ES "Aumenta la resolución horizontal y vertical de los gráficos en Modo 7 utilizados por ciertos juegos."
#define OPTION_VAL_1X_ES "240p (x1)"
#define OPTION_VAL_2X_ES "480p (x2)"
#define OPTION_VAL_3X_ES "720p (x3)"
#define OPTION_VAL_4X_ES "960p (x4)"
#define OPTION_VAL_5X_ES "1200p (x5)"
#define OPTION_VAL_6X_ES "1440p (x6)"
#define OPTION_VAL_7X_ES "1680p (x7)"
#define OPTION_VAL_8X_ES "1920p (x8)"
#define BSNES_MODE7_PERSPECTIVE_LABEL_ES "Modo 7 en alta definición: corrección de perspectiva"
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_ES "Corrección de perspectiva"
#define BSNES_MODE7_PERSPECTIVE_INFO_0_ES "Corrige la perspectiva de los gráficos en Modo 7 que utilizan ciertos juegos sorteando algunas de las limitaciones de los cálculos con números enteros que utiliza la SNES."
#define BSNES_MODE7_SUPERSAMPLE_LABEL_ES "Modo 7 en HD: supermuestreo"
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_ES "Supermuestreo"
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_ES "Supermuestrea los gráficos en Modo 7 que utilizan algunos juegos. Si se utiliza con una escala elevada para el Modo 7, producirá un efecto similar al suavizado de bordes."
#define BSNES_MODE7_MOSAIC_LABEL_ES "Modo 7 en alta definición: mosaico de alta a baja definición"
#define BSNES_MODE7_MOSAIC_LABEL_CAT_ES "Mosaico de alta a baja definición"
#define BSNES_MODE7_MOSAIC_INFO_0_ES "Muestra el efecto de mosaico de los gráficos en Modo 7 al aumentar su escala."
#define BSNES_DSP_FAST_LABEL_ES "DSP (audio): modo rápido"
#define BSNES_DSP_FAST_LABEL_CAT_ES "DSP: modo rápido"
#define BSNES_DSP_FAST_INFO_0_ES "Permite una emulación más rápida de la DSP a cambio de perder precisión. Se recomienda dejar esta opción activada."
#define BSNES_DSP_CUBIC_LABEL_ES "DSP (audio): interpolación cúbica"
#define BSNES_DSP_CUBIC_LABEL_CAT_ES "DSP: interpolación cúbica"
#define BSNES_DSP_CUBIC_INFO_0_ES "Aplica una interpolación cúbica al sonido para conservar un mayor rango de frecuencias agudas."
#define BSNES_DSP_ECHO_SHADOW_LABEL_ES "DSP (audio): duplicación de RAM para ecos"
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_ES "DSP: duplicación de RAM para ecos"
#define BSNES_DSP_ECHO_SHADOW_INFO_0_ES "Emula un defecto de ZSNES en el que la RAM para ecos se trataba como una unidad independiente de la RAM de la APU. Muchos «romhacks» antiguos para Super Mario World dependían de este comportamiento y se colgarán si no existe. Esta opción es sumamente inexacta y no debería ser activada a menos que sea imprescindible."
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_ES "Coprocesadores: modo rápido"
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_ES "Permite una emulación más rápida de los coprocesadores a cambio de perder precisión. Se recomienda dejar esta opción activada."
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_ES "Coprocesadores: protender a emulación de alto nivel (HLE)"
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_ES "Al activar esta opción se utilizará una emulación de alto nivel (HLE) menos precisa si es posible. En caso contrario, solo se empleará la emulación de alto nivel cuando no se encuentre el firmware de emulación de bajo nivel (LLE)."
#define BSNES_SGB_BIOS_LABEL_ES "BIOS de Super Game Boy preferida (es necesario reiniciar)"
#define BSNES_SGB_BIOS_INFO_0_ES "Selecciona la BIOS de Super Game Boy que se utilizará con los juegos compatibles."
#define OPTION_VAL_SGB1_SFC_ES NULL
#define OPTION_VAL_SGB2_SFC_ES NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_ES "Anticipación predictiva interna"
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_ES "Simula el sistema por adelantado y luego ejecuta una reversión para reducir la latencia de entrada. Esta opción tiene requisitos de sistema muy altos."
#define OPTION_VAL_1_ES "1 fotograma"
#define OPTION_VAL_2_ES "2 fotogramas"
#define OPTION_VAL_3_ES "3 fotogramas"
#define OPTION_VAL_4_ES "4 fotogramas"
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_ES "Usar la pantalla táctil como pistola de luz"
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_ES "Permite utilizar los dispositivos táctiles como método de entrada del Super Scope."
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_ES "Invertir gatillos del Super Scope"
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_ES "Invierte los botones de gatillo y cursor del Super Scope en la pantalla táctil."
#define BSNES_HIDE_SGB_BORDER_LABEL_ES "Ocultar borde del Super Game Boy"
#define BSNES_HIDE_SGB_BORDER_INFO_0_ES "Oculta el borde mientras se ejecuten juegos para Super Game Boy. Esta opción solo funcionará si «Recortar sobrebarrido» también está activada."

struct retro_core_option_v2_category option_cats_es[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ES,
      CATEGORY_VIDEO_INFO_0_ES
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_ES,
      CATEGORY_AUDIO_INFO_0_ES
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_ES,
      CATEGORY_MODE7_INFO_0_ES
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_ES,
      CATEGORY_SGB_INFO_0_ES
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_ES,
      CATEGORY_LIGHTGUN_INFO_0_ES
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_ES,
      CATEGORY_OVERCLOCK_INFO_0_ES
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_ES,
      CATEGORY_HACK_INFO_0_ES
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_ES,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_ES,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_ES },
         { "8:7",  OPTION_VAL_8_7_ES },
         { "4:3",  OPTION_VAL_4_3_ES },
         { "NTSC", OPTION_VAL_NTSC_ES },
         { "PAL",  OPTION_VAL_PAL_ES },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_ES,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_ES,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_ES },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_ES,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_ES,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_ES,
      NULL,
      BSNES_HOTFIXES_INFO_0_ES,
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
      BSNES_ENTROPY_LABEL_ES,
      NULL,
      BSNES_ENTROPY_INFO_0_ES,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_ES },
         { "High", OPTION_VAL_HIGH_ES },
         { "None", OPTION_VAL_NONE_ES },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_ES,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_ES,
      BSNES_CPU_OVERCLOCK_INFO_0_ES,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_ES  },
         { "20",  OPTION_VAL_20_ES  },
         { "30",  OPTION_VAL_30_ES  },
         { "40",  OPTION_VAL_40_ES  },
         { "50",  OPTION_VAL_50_ES  },
         { "60",  OPTION_VAL_60_ES  },
         { "70",  OPTION_VAL_70_ES  },
         { "80",  OPTION_VAL_80_ES  },
         { "90",  OPTION_VAL_90_ES  },
         { "100", OPTION_VAL_100_ES },
         { "110", OPTION_VAL_110_ES },
         { "120", OPTION_VAL_120_ES },
         { "130", OPTION_VAL_130_ES },
         { "140", OPTION_VAL_140_ES },
         { "150", OPTION_VAL_150_ES },
         { "160", OPTION_VAL_160_ES },
         { "170", OPTION_VAL_170_ES },
         { "180", OPTION_VAL_180_ES },
         { "190", OPTION_VAL_190_ES },
         { "200", OPTION_VAL_200_ES },
         { "210", OPTION_VAL_210_ES },
         { "220", OPTION_VAL_220_ES },
         { "230", OPTION_VAL_230_ES },
         { "240", OPTION_VAL_240_ES },
         { "250", OPTION_VAL_250_ES },
         { "260", OPTION_VAL_260_ES },
         { "270", OPTION_VAL_270_ES },
         { "280", OPTION_VAL_280_ES },
         { "290", OPTION_VAL_290_ES },
         { "300", OPTION_VAL_300_ES },
         { "310", OPTION_VAL_310_ES },
         { "320", OPTION_VAL_320_ES },
         { "330", OPTION_VAL_330_ES },
         { "340", OPTION_VAL_340_ES },
         { "350", OPTION_VAL_350_ES },
         { "360", OPTION_VAL_360_ES },
         { "370", OPTION_VAL_370_ES },
         { "380", OPTION_VAL_380_ES },
         { "390", OPTION_VAL_390_ES },
         { "400", OPTION_VAL_400_ES },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_ES,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_ES,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_ES,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_ES,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_ES,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_ES  },
         { "20",  OPTION_VAL_20_ES  },
         { "30",  OPTION_VAL_30_ES  },
         { "40",  OPTION_VAL_40_ES  },
         { "50",  OPTION_VAL_50_ES  },
         { "60",  OPTION_VAL_60_ES  },
         { "70",  OPTION_VAL_70_ES  },
         { "80",  OPTION_VAL_80_ES  },
         { "90",  OPTION_VAL_90_ES  },
         { "100", OPTION_VAL_100_ES },
         { "110", OPTION_VAL_110_ES },
         { "120", OPTION_VAL_120_ES },
         { "130", OPTION_VAL_130_ES },
         { "140", OPTION_VAL_140_ES },
         { "150", OPTION_VAL_150_ES },
         { "160", OPTION_VAL_160_ES },
         { "170", OPTION_VAL_170_ES },
         { "180", OPTION_VAL_180_ES },
         { "190", OPTION_VAL_190_ES },
         { "200", OPTION_VAL_200_ES },
         { "210", OPTION_VAL_210_ES },
         { "220", OPTION_VAL_220_ES },
         { "230", OPTION_VAL_230_ES },
         { "240", OPTION_VAL_240_ES },
         { "250", OPTION_VAL_250_ES },
         { "260", OPTION_VAL_260_ES },
         { "270", OPTION_VAL_270_ES },
         { "280", OPTION_VAL_280_ES },
         { "290", OPTION_VAL_290_ES },
         { "300", OPTION_VAL_300_ES },
         { "310", OPTION_VAL_310_ES },
         { "320", OPTION_VAL_320_ES },
         { "330", OPTION_VAL_330_ES },
         { "340", OPTION_VAL_340_ES },
         { "350", OPTION_VAL_350_ES },
         { "360", OPTION_VAL_360_ES },
         { "370", OPTION_VAL_370_ES },
         { "380", OPTION_VAL_380_ES },
         { "390", OPTION_VAL_390_ES },
         { "400", OPTION_VAL_400_ES },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_ES,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_ES,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_ES,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_ES  },
         { "20",  OPTION_VAL_20_ES  },
         { "30",  OPTION_VAL_30_ES  },
         { "40",  OPTION_VAL_40_ES  },
         { "50",  OPTION_VAL_50_ES  },
         { "60",  OPTION_VAL_60_ES  },
         { "70",  OPTION_VAL_70_ES  },
         { "80",  OPTION_VAL_80_ES  },
         { "90",  OPTION_VAL_90_ES  },
         { "100", OPTION_VAL_100_ES },
         { "110", OPTION_VAL_110_ES },
         { "120", OPTION_VAL_120_ES },
         { "130", OPTION_VAL_130_ES },
         { "140", OPTION_VAL_140_ES },
         { "150", OPTION_VAL_150_ES },
         { "160", OPTION_VAL_160_ES },
         { "170", OPTION_VAL_170_ES },
         { "180", OPTION_VAL_180_ES },
         { "190", OPTION_VAL_190_ES },
         { "200", OPTION_VAL_200_ES },
         { "210", OPTION_VAL_210_ES },
         { "220", OPTION_VAL_220_ES },
         { "230", OPTION_VAL_230_ES },
         { "240", OPTION_VAL_240_ES },
         { "250", OPTION_VAL_250_ES },
         { "260", OPTION_VAL_260_ES },
         { "270", OPTION_VAL_270_ES },
         { "280", OPTION_VAL_280_ES },
         { "290", OPTION_VAL_290_ES },
         { "300", OPTION_VAL_300_ES },
         { "310", OPTION_VAL_310_ES },
         { "320", OPTION_VAL_320_ES },
         { "330", OPTION_VAL_330_ES },
         { "340", OPTION_VAL_340_ES },
         { "350", OPTION_VAL_350_ES },
         { "360", OPTION_VAL_360_ES },
         { "370", OPTION_VAL_370_ES },
         { "380", OPTION_VAL_380_ES },
         { "390", OPTION_VAL_390_ES },
         { "400", OPTION_VAL_400_ES },
         { "410", OPTION_VAL_410_ES },
         { "420", OPTION_VAL_420_ES },
         { "430", OPTION_VAL_430_ES },
         { "440", OPTION_VAL_440_ES },
         { "450", OPTION_VAL_450_ES },
         { "460", OPTION_VAL_460_ES },
         { "470", OPTION_VAL_470_ES },
         { "480", OPTION_VAL_480_ES },
         { "490", OPTION_VAL_490_ES },
         { "500", OPTION_VAL_500_ES },
         { "510", OPTION_VAL_510_ES },
         { "520", OPTION_VAL_520_ES },
         { "530", OPTION_VAL_530_ES },
         { "540", OPTION_VAL_540_ES },
         { "550", OPTION_VAL_550_ES },
         { "560", OPTION_VAL_560_ES },
         { "570", OPTION_VAL_570_ES },
         { "580", OPTION_VAL_580_ES },
         { "590", OPTION_VAL_590_ES },
         { "600", OPTION_VAL_600_ES },
         { "610", OPTION_VAL_610_ES },
         { "620", OPTION_VAL_620_ES },
         { "630", OPTION_VAL_630_ES },
         { "640", OPTION_VAL_640_ES },
         { "650", OPTION_VAL_650_ES },
         { "660", OPTION_VAL_660_ES },
         { "670", OPTION_VAL_670_ES },
         { "680", OPTION_VAL_680_ES },
         { "690", OPTION_VAL_690_ES },
         { "700", OPTION_VAL_700_ES },
         { "710", OPTION_VAL_710_ES },
         { "720", OPTION_VAL_720_ES },
         { "730", OPTION_VAL_730_ES },
         { "740", OPTION_VAL_740_ES },
         { "750", OPTION_VAL_750_ES },
         { "760", OPTION_VAL_760_ES },
         { "770", OPTION_VAL_770_ES },
         { "780", OPTION_VAL_780_ES },
         { "790", OPTION_VAL_790_ES },
         { "800", OPTION_VAL_800_ES },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_ES,
      BSNES_PPU_FAST_LABEL_CAT_ES,
      BSNES_PPU_FAST_INFO_0_ES,
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
      BSNES_PPU_DEINTERLACE_LABEL_ES,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_ES,
      BSNES_PPU_DEINTERLACE_INFO_0_ES,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_ES,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_ES,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_ES,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_ES,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_ES,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_ES,
      BSNES_MODE7_SCALE_LABEL_CAT_ES,
      BSNES_MODE7_SCALE_INFO_0_ES,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_ES  },
         { "2x", OPTION_VAL_2X_ES  },
         { "3x", OPTION_VAL_3X_ES  },
         { "4x", OPTION_VAL_4X_ES  },
         { "5x", OPTION_VAL_5X_ES },
         { "6x", OPTION_VAL_6X_ES },
         { "7x", OPTION_VAL_7X_ES },
         { "8x", OPTION_VAL_8X_ES },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_ES,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_ES,
      BSNES_MODE7_PERSPECTIVE_INFO_0_ES,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_ES,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_ES,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_ES,
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
      BSNES_MODE7_MOSAIC_LABEL_ES,
      BSNES_MODE7_MOSAIC_LABEL_CAT_ES,
      BSNES_MODE7_MOSAIC_INFO_0_ES,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_ES,
      BSNES_DSP_FAST_LABEL_CAT_ES,
      BSNES_DSP_FAST_INFO_0_ES,
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
      BSNES_DSP_CUBIC_LABEL_ES,
      BSNES_DSP_CUBIC_LABEL_CAT_ES,
      BSNES_DSP_CUBIC_INFO_0_ES,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_ES,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_ES,
      BSNES_DSP_ECHO_SHADOW_INFO_0_ES,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_ES,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_ES,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_ES,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_ES,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_ES,
      NULL,
      BSNES_SGB_BIOS_INFO_0_ES,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_ES   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_ES },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_ES,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_ES,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_ES  },
         { "2",   OPTION_VAL_2_ES },
         { "3",   OPTION_VAL_3_ES },
         { "4",   OPTION_VAL_4_ES },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_ES,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_ES,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_ES,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_ES,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_ES,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_ES,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define CATEGORY_VIDEO_LABEL_FA "ویدیو"
#define CATEGORY_VIDEO_INFO_0_FA NULL
#define CATEGORY_AUDIO_LABEL_FA "صدا"
#define CATEGORY_AUDIO_INFO_0_FA NULL
#define CATEGORY_MODE7_LABEL_FA NULL
#define CATEGORY_MODE7_INFO_0_FA NULL
#define CATEGORY_SGB_LABEL_FA NULL
#define CATEGORY_SGB_INFO_0_FA NULL
#define CATEGORY_LIGHTGUN_LABEL_FA NULL
#define CATEGORY_LIGHTGUN_INFO_0_FA NULL
#define CATEGORY_OVERCLOCK_LABEL_FA NULL
#define CATEGORY_OVERCLOCK_INFO_0_FA NULL
#define CATEGORY_HACK_LABEL_FA NULL
#define CATEGORY_HACK_INFO_0_FA NULL
#define BSNES_ASPECT_RATIO_LABEL_FA NULL
#define BSNES_ASPECT_RATIO_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA NULL
#define OPTION_VAL_8_7_FA NULL
#define OPTION_VAL_4_3_FA NULL
#define OPTION_VAL_NTSC_FA NULL
#define OPTION_VAL_PAL_FA NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_FA NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_FA NULL
#define OPTION_VAL_OFF_FA NULL
#define BSNES_BLUR_EMULATION_LABEL_FA NULL
#define BSNES_BLUR_EMULATION_INFO_0_FA NULL
#define BSNES_HOTFIXES_LABEL_FA NULL
#define BSNES_HOTFIXES_INFO_0_FA NULL
#define BSNES_ENTROPY_LABEL_FA NULL
#define BSNES_ENTROPY_INFO_0_FA NULL
#define OPTION_VAL_LOW_FA NULL
#define OPTION_VAL_HIGH_FA NULL
#define OPTION_VAL_NONE_FA NULL
#define BSNES_CPU_OVERCLOCK_LABEL_FA NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_FA NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_FA NULL
#define OPTION_VAL_10_FA NULL
#define OPTION_VAL_20_FA NULL
#define OPTION_VAL_30_FA NULL
#define OPTION_VAL_40_FA NULL
#define OPTION_VAL_50_FA NULL
#define OPTION_VAL_60_FA NULL
#define OPTION_VAL_70_FA NULL
#define OPTION_VAL_80_FA NULL
#define OPTION_VAL_90_FA NULL
#define OPTION_VAL_100_FA NULL
#define OPTION_VAL_110_FA NULL
#define OPTION_VAL_120_FA NULL
#define OPTION_VAL_130_FA NULL
#define OPTION_VAL_140_FA NULL
#define OPTION_VAL_150_FA NULL
#define OPTION_VAL_160_FA NULL
#define OPTION_VAL_170_FA NULL
#define OPTION_VAL_180_FA NULL
#define OPTION_VAL_190_FA NULL
#define OPTION_VAL_200_FA NULL
#define OPTION_VAL_210_FA NULL
#define OPTION_VAL_220_FA NULL
#define OPTION_VAL_230_FA NULL
#define OPTION_VAL_240_FA NULL
#define OPTION_VAL_250_FA NULL
#define OPTION_VAL_260_FA NULL
#define OPTION_VAL_270_FA NULL
#define OPTION_VAL_280_FA NULL
#define OPTION_VAL_290_FA NULL
#define OPTION_VAL_300_FA NULL
#define OPTION_VAL_310_FA NULL
#define OPTION_VAL_320_FA NULL
#define OPTION_VAL_330_FA NULL
#define OPTION_VAL_340_FA NULL
#define OPTION_VAL_350_FA NULL
#define OPTION_VAL_360_FA NULL
#define OPTION_VAL_370_FA NULL
#define OPTION_VAL_380_FA NULL
#define OPTION_VAL_390_FA NULL
#define OPTION_VAL_400_FA NULL
#define BSNES_CPU_FASTMATH_LABEL_FA NULL
#define BSNES_CPU_FASTMATH_INFO_0_FA NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_FA NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_FA NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_FA NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_FA NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_FA NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_FA NULL
#define OPTION_VAL_410_FA NULL
#define OPTION_VAL_420_FA NULL
#define OPTION_VAL_430_FA NULL
#define OPTION_VAL_440_FA NULL
#define OPTION_VAL_450_FA NULL
#define OPTION_VAL_460_FA NULL
#define OPTION_VAL_470_FA NULL
#define OPTION_VAL_480_FA NULL
#define OPTION_VAL_490_FA NULL
#define OPTION_VAL_500_FA NULL
#define OPTION_VAL_510_FA NULL
#define OPTION_VAL_520_FA NULL
#define OPTION_VAL_530_FA NULL
#define OPTION_VAL_540_FA NULL
#define OPTION_VAL_550_FA NULL
#define OPTION_VAL_560_FA NULL
#define OPTION_VAL_570_FA NULL
#define OPTION_VAL_580_FA NULL
#define OPTION_VAL_590_FA NULL
#define OPTION_VAL_600_FA NULL
#define OPTION_VAL_610_FA NULL
#define OPTION_VAL_620_FA NULL
#define OPTION_VAL_630_FA NULL
#define OPTION_VAL_640_FA NULL
#define OPTION_VAL_650_FA NULL
#define OPTION_VAL_660_FA NULL
#define OPTION_VAL_670_FA NULL
#define OPTION_VAL_680_FA NULL
#define OPTION_VAL_690_FA NULL
#define OPTION_VAL_700_FA NULL
#define OPTION_VAL_710_FA NULL
#define OPTION_VAL_720_FA NULL
#define OPTION_VAL_730_FA NULL
#define OPTION_VAL_740_FA NULL
#define OPTION_VAL_750_FA NULL
#define OPTION_VAL_760_FA NULL
#define OPTION_VAL_770_FA NULL
#define OPTION_VAL_780_FA NULL
#define OPTION_VAL_790_FA NULL
#define OPTION_VAL_800_FA NULL
#define BSNES_PPU_FAST_LABEL_FA NULL
#define BSNES_PPU_FAST_LABEL_CAT_FA NULL
#define BSNES_PPU_FAST_INFO_0_FA NULL
#define BSNES_PPU_DEINTERLACE_LABEL_FA NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_FA NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_FA NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_FA NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_FA NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_FA NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_FA NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_FA NULL
#define BSNES_MODE7_SCALE_LABEL_FA NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_FA NULL
#define BSNES_MODE7_SCALE_INFO_0_FA NULL
#define OPTION_VAL_1X_FA NULL
#define OPTION_VAL_2X_FA NULL
#define OPTION_VAL_3X_FA NULL
#define OPTION_VAL_4X_FA NULL
#define OPTION_VAL_5X_FA NULL
#define OPTION_VAL_6X_FA NULL
#define OPTION_VAL_7X_FA NULL
#define OPTION_VAL_8X_FA NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_FA NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_FA NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_FA NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_FA NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_FA NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_FA NULL
#define BSNES_MODE7_MOSAIC_LABEL_FA NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_FA NULL
#define BSNES_MODE7_MOSAIC_INFO_0_FA NULL
#define BSNES_DSP_FAST_LABEL_FA NULL
#define BSNES_DSP_FAST_LABEL_CAT_FA NULL
#define BSNES_DSP_FAST_INFO_0_FA NULL
#define BSNES_DSP_CUBIC_LABEL_FA NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_FA NULL
#define BSNES_DSP_CUBIC_INFO_0_FA NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_FA NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_FA NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_FA NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_FA NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_FA NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_FA NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_FA NULL
#define BSNES_SGB_BIOS_LABEL_FA NULL
#define BSNES_SGB_BIOS_INFO_0_FA NULL
#define OPTION_VAL_SGB1_SFC_FA NULL
#define OPTION_VAL_SGB2_SFC_FA NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_FA NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_FA NULL
#define OPTION_VAL_1_FA NULL
#define OPTION_VAL_2_FA NULL
#define OPTION_VAL_3_FA NULL
#define OPTION_VAL_4_FA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_FA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_FA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_FA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_FA NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_FA NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FA,
      CATEGORY_VIDEO_INFO_0_FA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FA,
      CATEGORY_AUDIO_INFO_0_FA
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_FA,
      CATEGORY_MODE7_INFO_0_FA
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_FA,
      CATEGORY_SGB_INFO_0_FA
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_FA,
      CATEGORY_LIGHTGUN_INFO_0_FA
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_FA,
      CATEGORY_OVERCLOCK_INFO_0_FA
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_FA,
      CATEGORY_HACK_INFO_0_FA
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_FA,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_FA,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_FA },
         { "8:7",  OPTION_VAL_8_7_FA },
         { "4:3",  OPTION_VAL_4_3_FA },
         { "NTSC", OPTION_VAL_NTSC_FA },
         { "PAL",  OPTION_VAL_PAL_FA },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_FA,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_FA,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_FA },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_FA,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_FA,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_FA,
      NULL,
      BSNES_HOTFIXES_INFO_0_FA,
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
      BSNES_ENTROPY_LABEL_FA,
      NULL,
      BSNES_ENTROPY_INFO_0_FA,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_FA },
         { "High", OPTION_VAL_HIGH_FA },
         { "None", OPTION_VAL_NONE_FA },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_FA,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_FA,
      BSNES_CPU_OVERCLOCK_INFO_0_FA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_FA  },
         { "20",  OPTION_VAL_20_FA  },
         { "30",  OPTION_VAL_30_FA  },
         { "40",  OPTION_VAL_40_FA  },
         { "50",  OPTION_VAL_50_FA  },
         { "60",  OPTION_VAL_60_FA  },
         { "70",  OPTION_VAL_70_FA  },
         { "80",  OPTION_VAL_80_FA  },
         { "90",  OPTION_VAL_90_FA  },
         { "100", OPTION_VAL_100_FA },
         { "110", OPTION_VAL_110_FA },
         { "120", OPTION_VAL_120_FA },
         { "130", OPTION_VAL_130_FA },
         { "140", OPTION_VAL_140_FA },
         { "150", OPTION_VAL_150_FA },
         { "160", OPTION_VAL_160_FA },
         { "170", OPTION_VAL_170_FA },
         { "180", OPTION_VAL_180_FA },
         { "190", OPTION_VAL_190_FA },
         { "200", OPTION_VAL_200_FA },
         { "210", OPTION_VAL_210_FA },
         { "220", OPTION_VAL_220_FA },
         { "230", OPTION_VAL_230_FA },
         { "240", OPTION_VAL_240_FA },
         { "250", OPTION_VAL_250_FA },
         { "260", OPTION_VAL_260_FA },
         { "270", OPTION_VAL_270_FA },
         { "280", OPTION_VAL_280_FA },
         { "290", OPTION_VAL_290_FA },
         { "300", OPTION_VAL_300_FA },
         { "310", OPTION_VAL_310_FA },
         { "320", OPTION_VAL_320_FA },
         { "330", OPTION_VAL_330_FA },
         { "340", OPTION_VAL_340_FA },
         { "350", OPTION_VAL_350_FA },
         { "360", OPTION_VAL_360_FA },
         { "370", OPTION_VAL_370_FA },
         { "380", OPTION_VAL_380_FA },
         { "390", OPTION_VAL_390_FA },
         { "400", OPTION_VAL_400_FA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_FA,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_FA,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_FA,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_FA,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_FA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_FA  },
         { "20",  OPTION_VAL_20_FA  },
         { "30",  OPTION_VAL_30_FA  },
         { "40",  OPTION_VAL_40_FA  },
         { "50",  OPTION_VAL_50_FA  },
         { "60",  OPTION_VAL_60_FA  },
         { "70",  OPTION_VAL_70_FA  },
         { "80",  OPTION_VAL_80_FA  },
         { "90",  OPTION_VAL_90_FA  },
         { "100", OPTION_VAL_100_FA },
         { "110", OPTION_VAL_110_FA },
         { "120", OPTION_VAL_120_FA },
         { "130", OPTION_VAL_130_FA },
         { "140", OPTION_VAL_140_FA },
         { "150", OPTION_VAL_150_FA },
         { "160", OPTION_VAL_160_FA },
         { "170", OPTION_VAL_170_FA },
         { "180", OPTION_VAL_180_FA },
         { "190", OPTION_VAL_190_FA },
         { "200", OPTION_VAL_200_FA },
         { "210", OPTION_VAL_210_FA },
         { "220", OPTION_VAL_220_FA },
         { "230", OPTION_VAL_230_FA },
         { "240", OPTION_VAL_240_FA },
         { "250", OPTION_VAL_250_FA },
         { "260", OPTION_VAL_260_FA },
         { "270", OPTION_VAL_270_FA },
         { "280", OPTION_VAL_280_FA },
         { "290", OPTION_VAL_290_FA },
         { "300", OPTION_VAL_300_FA },
         { "310", OPTION_VAL_310_FA },
         { "320", OPTION_VAL_320_FA },
         { "330", OPTION_VAL_330_FA },
         { "340", OPTION_VAL_340_FA },
         { "350", OPTION_VAL_350_FA },
         { "360", OPTION_VAL_360_FA },
         { "370", OPTION_VAL_370_FA },
         { "380", OPTION_VAL_380_FA },
         { "390", OPTION_VAL_390_FA },
         { "400", OPTION_VAL_400_FA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_FA,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_FA,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_FA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_FA  },
         { "20",  OPTION_VAL_20_FA  },
         { "30",  OPTION_VAL_30_FA  },
         { "40",  OPTION_VAL_40_FA  },
         { "50",  OPTION_VAL_50_FA  },
         { "60",  OPTION_VAL_60_FA  },
         { "70",  OPTION_VAL_70_FA  },
         { "80",  OPTION_VAL_80_FA  },
         { "90",  OPTION_VAL_90_FA  },
         { "100", OPTION_VAL_100_FA },
         { "110", OPTION_VAL_110_FA },
         { "120", OPTION_VAL_120_FA },
         { "130", OPTION_VAL_130_FA },
         { "140", OPTION_VAL_140_FA },
         { "150", OPTION_VAL_150_FA },
         { "160", OPTION_VAL_160_FA },
         { "170", OPTION_VAL_170_FA },
         { "180", OPTION_VAL_180_FA },
         { "190", OPTION_VAL_190_FA },
         { "200", OPTION_VAL_200_FA },
         { "210", OPTION_VAL_210_FA },
         { "220", OPTION_VAL_220_FA },
         { "230", OPTION_VAL_230_FA },
         { "240", OPTION_VAL_240_FA },
         { "250", OPTION_VAL_250_FA },
         { "260", OPTION_VAL_260_FA },
         { "270", OPTION_VAL_270_FA },
         { "280", OPTION_VAL_280_FA },
         { "290", OPTION_VAL_290_FA },
         { "300", OPTION_VAL_300_FA },
         { "310", OPTION_VAL_310_FA },
         { "320", OPTION_VAL_320_FA },
         { "330", OPTION_VAL_330_FA },
         { "340", OPTION_VAL_340_FA },
         { "350", OPTION_VAL_350_FA },
         { "360", OPTION_VAL_360_FA },
         { "370", OPTION_VAL_370_FA },
         { "380", OPTION_VAL_380_FA },
         { "390", OPTION_VAL_390_FA },
         { "400", OPTION_VAL_400_FA },
         { "410", OPTION_VAL_410_FA },
         { "420", OPTION_VAL_420_FA },
         { "430", OPTION_VAL_430_FA },
         { "440", OPTION_VAL_440_FA },
         { "450", OPTION_VAL_450_FA },
         { "460", OPTION_VAL_460_FA },
         { "470", OPTION_VAL_470_FA },
         { "480", OPTION_VAL_480_FA },
         { "490", OPTION_VAL_490_FA },
         { "500", OPTION_VAL_500_FA },
         { "510", OPTION_VAL_510_FA },
         { "520", OPTION_VAL_520_FA },
         { "530", OPTION_VAL_530_FA },
         { "540", OPTION_VAL_540_FA },
         { "550", OPTION_VAL_550_FA },
         { "560", OPTION_VAL_560_FA },
         { "570", OPTION_VAL_570_FA },
         { "580", OPTION_VAL_580_FA },
         { "590", OPTION_VAL_590_FA },
         { "600", OPTION_VAL_600_FA },
         { "610", OPTION_VAL_610_FA },
         { "620", OPTION_VAL_620_FA },
         { "630", OPTION_VAL_630_FA },
         { "640", OPTION_VAL_640_FA },
         { "650", OPTION_VAL_650_FA },
         { "660", OPTION_VAL_660_FA },
         { "670", OPTION_VAL_670_FA },
         { "680", OPTION_VAL_680_FA },
         { "690", OPTION_VAL_690_FA },
         { "700", OPTION_VAL_700_FA },
         { "710", OPTION_VAL_710_FA },
         { "720", OPTION_VAL_720_FA },
         { "730", OPTION_VAL_730_FA },
         { "740", OPTION_VAL_740_FA },
         { "750", OPTION_VAL_750_FA },
         { "760", OPTION_VAL_760_FA },
         { "770", OPTION_VAL_770_FA },
         { "780", OPTION_VAL_780_FA },
         { "790", OPTION_VAL_790_FA },
         { "800", OPTION_VAL_800_FA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_FA,
      BSNES_PPU_FAST_LABEL_CAT_FA,
      BSNES_PPU_FAST_INFO_0_FA,
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
      BSNES_PPU_DEINTERLACE_LABEL_FA,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_FA,
      BSNES_PPU_DEINTERLACE_INFO_0_FA,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_FA,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_FA,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_FA,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_FA,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_FA,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_FA,
      BSNES_MODE7_SCALE_LABEL_CAT_FA,
      BSNES_MODE7_SCALE_INFO_0_FA,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_FA  },
         { "2x", OPTION_VAL_2X_FA  },
         { "3x", OPTION_VAL_3X_FA  },
         { "4x", OPTION_VAL_4X_FA  },
         { "5x", OPTION_VAL_5X_FA },
         { "6x", OPTION_VAL_6X_FA },
         { "7x", OPTION_VAL_7X_FA },
         { "8x", OPTION_VAL_8X_FA },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_FA,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_FA,
      BSNES_MODE7_PERSPECTIVE_INFO_0_FA,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_FA,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_FA,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_FA,
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
      BSNES_MODE7_MOSAIC_LABEL_FA,
      BSNES_MODE7_MOSAIC_LABEL_CAT_FA,
      BSNES_MODE7_MOSAIC_INFO_0_FA,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_FA,
      BSNES_DSP_FAST_LABEL_CAT_FA,
      BSNES_DSP_FAST_INFO_0_FA,
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
      BSNES_DSP_CUBIC_LABEL_FA,
      BSNES_DSP_CUBIC_LABEL_CAT_FA,
      BSNES_DSP_CUBIC_INFO_0_FA,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_FA,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_FA,
      BSNES_DSP_ECHO_SHADOW_INFO_0_FA,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_FA,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_FA,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_FA,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_FA,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_FA,
      NULL,
      BSNES_SGB_BIOS_INFO_0_FA,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_FA   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_FA },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_FA,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_FA,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_FA  },
         { "2",   OPTION_VAL_2_FA },
         { "3",   OPTION_VAL_3_FA },
         { "4",   OPTION_VAL_4_FA },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_FA,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_FA,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_FA,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_FA,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_FA,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_FA,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define CATEGORY_VIDEO_LABEL_FI NULL
#define CATEGORY_VIDEO_INFO_0_FI "Muuta videon ulostuloasetuksia."
#define CATEGORY_AUDIO_LABEL_FI "Ääni"
#define CATEGORY_AUDIO_INFO_0_FI "Muuta äänen ulostuloasetuksia."
#define CATEGORY_MODE7_LABEL_FI NULL
#define CATEGORY_MODE7_INFO_0_FI NULL
#define CATEGORY_SGB_LABEL_FI NULL
#define CATEGORY_SGB_INFO_0_FI NULL
#define CATEGORY_LIGHTGUN_LABEL_FI "Valoase"
#define CATEGORY_LIGHTGUN_INFO_0_FI NULL
#define CATEGORY_OVERCLOCK_LABEL_FI NULL
#define CATEGORY_OVERCLOCK_INFO_0_FI NULL
#define CATEGORY_HACK_LABEL_FI "Emulointikikat"
#define CATEGORY_HACK_INFO_0_FI NULL
#define BSNES_ASPECT_RATIO_LABEL_FI "Ensisijainen kuvasuhde"
#define BSNES_ASPECT_RATIO_INFO_0_FI NULL
#define OPTION_VAL_AUTO_FI "Automaattinen"
#define OPTION_VAL_8_7_FI NULL
#define OPTION_VAL_4_3_FI NULL
#define OPTION_VAL_NTSC_FI NULL
#define OPTION_VAL_PAL_FI NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_FI NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_FI NULL
#define OPTION_VAL_OFF_FI NULL
#define BSNES_BLUR_EMULATION_LABEL_FI NULL
#define BSNES_BLUR_EMULATION_INFO_0_FI NULL
#define BSNES_HOTFIXES_LABEL_FI NULL
#define BSNES_HOTFIXES_INFO_0_FI NULL
#define BSNES_ENTROPY_LABEL_FI NULL
#define BSNES_ENTROPY_INFO_0_FI NULL
#define OPTION_VAL_LOW_FI NULL
#define OPTION_VAL_HIGH_FI NULL
#define OPTION_VAL_NONE_FI "Ei mitään"
#define BSNES_CPU_OVERCLOCK_LABEL_FI NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_FI NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_FI NULL
#define OPTION_VAL_10_FI "10 %"
#define OPTION_VAL_20_FI "20 %"
#define OPTION_VAL_30_FI "30 %"
#define OPTION_VAL_40_FI "40 %"
#define OPTION_VAL_50_FI "50 %"
#define OPTION_VAL_60_FI "60 %"
#define OPTION_VAL_70_FI "70 %"
#define OPTION_VAL_80_FI "80 %"
#define OPTION_VAL_90_FI "90 %"
#define OPTION_VAL_100_FI "100 % (Oletus)"
#define OPTION_VAL_110_FI "110 %"
#define OPTION_VAL_120_FI "120 %"
#define OPTION_VAL_130_FI "130 %"
#define OPTION_VAL_140_FI "140 %"
#define OPTION_VAL_150_FI "150 %"
#define OPTION_VAL_160_FI "160 %"
#define OPTION_VAL_170_FI "170 %"
#define OPTION_VAL_180_FI "180 %"
#define OPTION_VAL_190_FI "190 %"
#define OPTION_VAL_200_FI "200 %"
#define OPTION_VAL_210_FI "210 %"
#define OPTION_VAL_220_FI "220 %"
#define OPTION_VAL_230_FI "230 %"
#define OPTION_VAL_240_FI "240 %"
#define OPTION_VAL_250_FI "250 %"
#define OPTION_VAL_260_FI "260 %"
#define OPTION_VAL_270_FI "270 %"
#define OPTION_VAL_280_FI "280 %"
#define OPTION_VAL_290_FI "290 %"
#define OPTION_VAL_300_FI "300 %"
#define OPTION_VAL_310_FI "310 %"
#define OPTION_VAL_320_FI "320 %"
#define OPTION_VAL_330_FI "330 %"
#define OPTION_VAL_340_FI "340 %"
#define OPTION_VAL_350_FI "350 %"
#define OPTION_VAL_360_FI "360 %"
#define OPTION_VAL_370_FI "370 %"
#define OPTION_VAL_380_FI "380 %"
#define OPTION_VAL_390_FI "390 %"
#define OPTION_VAL_400_FI "400 %"
#define BSNES_CPU_FASTMATH_LABEL_FI NULL
#define BSNES_CPU_FASTMATH_INFO_0_FI NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_FI NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_FI NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_FI NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_FI NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_FI NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_FI NULL
#define OPTION_VAL_410_FI "410 %"
#define OPTION_VAL_420_FI "420 %"
#define OPTION_VAL_430_FI "430 %"
#define OPTION_VAL_440_FI "440 %"
#define OPTION_VAL_450_FI "450 %"
#define OPTION_VAL_460_FI "460 %"
#define OPTION_VAL_470_FI "470 %"
#define OPTION_VAL_480_FI "480 %"
#define OPTION_VAL_490_FI "490 %"
#define OPTION_VAL_500_FI "500 %"
#define OPTION_VAL_510_FI "510 %"
#define OPTION_VAL_520_FI "520 %"
#define OPTION_VAL_530_FI "530 %"
#define OPTION_VAL_540_FI "540 %"
#define OPTION_VAL_550_FI "550 %"
#define OPTION_VAL_560_FI "560 %"
#define OPTION_VAL_570_FI "570 %"
#define OPTION_VAL_580_FI "580 %"
#define OPTION_VAL_590_FI "590 %"
#define OPTION_VAL_600_FI "600 %"
#define OPTION_VAL_610_FI "610 %"
#define OPTION_VAL_620_FI "620 %"
#define OPTION_VAL_630_FI "630 %"
#define OPTION_VAL_640_FI "640 %"
#define OPTION_VAL_650_FI "650 %"
#define OPTION_VAL_660_FI "660 %"
#define OPTION_VAL_670_FI "670 %"
#define OPTION_VAL_680_FI "680 %"
#define OPTION_VAL_690_FI "690 %"
#define OPTION_VAL_700_FI "700 %"
#define OPTION_VAL_710_FI "710 %"
#define OPTION_VAL_720_FI "720 %"
#define OPTION_VAL_730_FI "730 %"
#define OPTION_VAL_740_FI "740 %"
#define OPTION_VAL_750_FI "750 %"
#define OPTION_VAL_760_FI "760 %"
#define OPTION_VAL_770_FI "770 %"
#define OPTION_VAL_780_FI "780 %"
#define OPTION_VAL_790_FI "790 %"
#define OPTION_VAL_800_FI "800 %"
#define BSNES_PPU_FAST_LABEL_FI NULL
#define BSNES_PPU_FAST_LABEL_CAT_FI NULL
#define BSNES_PPU_FAST_INFO_0_FI NULL
#define BSNES_PPU_DEINTERLACE_LABEL_FI NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_FI NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_FI NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_FI NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_FI NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_FI NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_FI NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_FI NULL
#define BSNES_MODE7_SCALE_LABEL_FI NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_FI "Skaala"
#define BSNES_MODE7_SCALE_INFO_0_FI NULL
#define OPTION_VAL_1X_FI NULL
#define OPTION_VAL_2X_FI NULL
#define OPTION_VAL_3X_FI NULL
#define OPTION_VAL_4X_FI NULL
#define OPTION_VAL_5X_FI NULL
#define OPTION_VAL_6X_FI NULL
#define OPTION_VAL_7X_FI NULL
#define OPTION_VAL_8X_FI NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_FI NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_FI NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_FI NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_FI NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_FI NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_FI NULL
#define BSNES_MODE7_MOSAIC_LABEL_FI NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_FI NULL
#define BSNES_MODE7_MOSAIC_INFO_0_FI NULL
#define BSNES_DSP_FAST_LABEL_FI NULL
#define BSNES_DSP_FAST_LABEL_CAT_FI NULL
#define BSNES_DSP_FAST_INFO_0_FI NULL
#define BSNES_DSP_CUBIC_LABEL_FI NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_FI NULL
#define BSNES_DSP_CUBIC_INFO_0_FI NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_FI NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_FI NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_FI NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_FI NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_FI NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_FI NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_FI NULL
#define BSNES_SGB_BIOS_LABEL_FI NULL
#define BSNES_SGB_BIOS_INFO_0_FI NULL
#define OPTION_VAL_SGB1_SFC_FI NULL
#define OPTION_VAL_SGB2_SFC_FI NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_FI NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_FI NULL
#define OPTION_VAL_1_FI NULL
#define OPTION_VAL_2_FI NULL
#define OPTION_VAL_3_FI NULL
#define OPTION_VAL_4_FI NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_FI NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_FI NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_FI NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_FI NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_FI NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_FI NULL

struct retro_core_option_v2_category option_cats_fi[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FI,
      CATEGORY_VIDEO_INFO_0_FI
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FI,
      CATEGORY_AUDIO_INFO_0_FI
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_FI,
      CATEGORY_MODE7_INFO_0_FI
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_FI,
      CATEGORY_SGB_INFO_0_FI
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_FI,
      CATEGORY_LIGHTGUN_INFO_0_FI
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_FI,
      CATEGORY_OVERCLOCK_INFO_0_FI
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_FI,
      CATEGORY_HACK_INFO_0_FI
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_FI,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_FI,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_FI },
         { "8:7",  OPTION_VAL_8_7_FI },
         { "4:3",  OPTION_VAL_4_3_FI },
         { "NTSC", OPTION_VAL_NTSC_FI },
         { "PAL",  OPTION_VAL_PAL_FI },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_FI,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_FI,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_FI },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_FI,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_FI,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_FI,
      NULL,
      BSNES_HOTFIXES_INFO_0_FI,
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
      BSNES_ENTROPY_LABEL_FI,
      NULL,
      BSNES_ENTROPY_INFO_0_FI,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_FI },
         { "High", OPTION_VAL_HIGH_FI },
         { "None", OPTION_VAL_NONE_FI },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_FI,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_FI,
      BSNES_CPU_OVERCLOCK_INFO_0_FI,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_FI  },
         { "20",  OPTION_VAL_20_FI  },
         { "30",  OPTION_VAL_30_FI  },
         { "40",  OPTION_VAL_40_FI  },
         { "50",  OPTION_VAL_50_FI  },
         { "60",  OPTION_VAL_60_FI  },
         { "70",  OPTION_VAL_70_FI  },
         { "80",  OPTION_VAL_80_FI  },
         { "90",  OPTION_VAL_90_FI  },
         { "100", OPTION_VAL_100_FI },
         { "110", OPTION_VAL_110_FI },
         { "120", OPTION_VAL_120_FI },
         { "130", OPTION_VAL_130_FI },
         { "140", OPTION_VAL_140_FI },
         { "150", OPTION_VAL_150_FI },
         { "160", OPTION_VAL_160_FI },
         { "170", OPTION_VAL_170_FI },
         { "180", OPTION_VAL_180_FI },
         { "190", OPTION_VAL_190_FI },
         { "200", OPTION_VAL_200_FI },
         { "210", OPTION_VAL_210_FI },
         { "220", OPTION_VAL_220_FI },
         { "230", OPTION_VAL_230_FI },
         { "240", OPTION_VAL_240_FI },
         { "250", OPTION_VAL_250_FI },
         { "260", OPTION_VAL_260_FI },
         { "270", OPTION_VAL_270_FI },
         { "280", OPTION_VAL_280_FI },
         { "290", OPTION_VAL_290_FI },
         { "300", OPTION_VAL_300_FI },
         { "310", OPTION_VAL_310_FI },
         { "320", OPTION_VAL_320_FI },
         { "330", OPTION_VAL_330_FI },
         { "340", OPTION_VAL_340_FI },
         { "350", OPTION_VAL_350_FI },
         { "360", OPTION_VAL_360_FI },
         { "370", OPTION_VAL_370_FI },
         { "380", OPTION_VAL_380_FI },
         { "390", OPTION_VAL_390_FI },
         { "400", OPTION_VAL_400_FI },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_FI,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_FI,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_FI,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_FI,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_FI,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_FI  },
         { "20",  OPTION_VAL_20_FI  },
         { "30",  OPTION_VAL_30_FI  },
         { "40",  OPTION_VAL_40_FI  },
         { "50",  OPTION_VAL_50_FI  },
         { "60",  OPTION_VAL_60_FI  },
         { "70",  OPTION_VAL_70_FI  },
         { "80",  OPTION_VAL_80_FI  },
         { "90",  OPTION_VAL_90_FI  },
         { "100", OPTION_VAL_100_FI },
         { "110", OPTION_VAL_110_FI },
         { "120", OPTION_VAL_120_FI },
         { "130", OPTION_VAL_130_FI },
         { "140", OPTION_VAL_140_FI },
         { "150", OPTION_VAL_150_FI },
         { "160", OPTION_VAL_160_FI },
         { "170", OPTION_VAL_170_FI },
         { "180", OPTION_VAL_180_FI },
         { "190", OPTION_VAL_190_FI },
         { "200", OPTION_VAL_200_FI },
         { "210", OPTION_VAL_210_FI },
         { "220", OPTION_VAL_220_FI },
         { "230", OPTION_VAL_230_FI },
         { "240", OPTION_VAL_240_FI },
         { "250", OPTION_VAL_250_FI },
         { "260", OPTION_VAL_260_FI },
         { "270", OPTION_VAL_270_FI },
         { "280", OPTION_VAL_280_FI },
         { "290", OPTION_VAL_290_FI },
         { "300", OPTION_VAL_300_FI },
         { "310", OPTION_VAL_310_FI },
         { "320", OPTION_VAL_320_FI },
         { "330", OPTION_VAL_330_FI },
         { "340", OPTION_VAL_340_FI },
         { "350", OPTION_VAL_350_FI },
         { "360", OPTION_VAL_360_FI },
         { "370", OPTION_VAL_370_FI },
         { "380", OPTION_VAL_380_FI },
         { "390", OPTION_VAL_390_FI },
         { "400", OPTION_VAL_400_FI },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_FI,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_FI,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_FI,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_FI  },
         { "20",  OPTION_VAL_20_FI  },
         { "30",  OPTION_VAL_30_FI  },
         { "40",  OPTION_VAL_40_FI  },
         { "50",  OPTION_VAL_50_FI  },
         { "60",  OPTION_VAL_60_FI  },
         { "70",  OPTION_VAL_70_FI  },
         { "80",  OPTION_VAL_80_FI  },
         { "90",  OPTION_VAL_90_FI  },
         { "100", OPTION_VAL_100_FI },
         { "110", OPTION_VAL_110_FI },
         { "120", OPTION_VAL_120_FI },
         { "130", OPTION_VAL_130_FI },
         { "140", OPTION_VAL_140_FI },
         { "150", OPTION_VAL_150_FI },
         { "160", OPTION_VAL_160_FI },
         { "170", OPTION_VAL_170_FI },
         { "180", OPTION_VAL_180_FI },
         { "190", OPTION_VAL_190_FI },
         { "200", OPTION_VAL_200_FI },
         { "210", OPTION_VAL_210_FI },
         { "220", OPTION_VAL_220_FI },
         { "230", OPTION_VAL_230_FI },
         { "240", OPTION_VAL_240_FI },
         { "250", OPTION_VAL_250_FI },
         { "260", OPTION_VAL_260_FI },
         { "270", OPTION_VAL_270_FI },
         { "280", OPTION_VAL_280_FI },
         { "290", OPTION_VAL_290_FI },
         { "300", OPTION_VAL_300_FI },
         { "310", OPTION_VAL_310_FI },
         { "320", OPTION_VAL_320_FI },
         { "330", OPTION_VAL_330_FI },
         { "340", OPTION_VAL_340_FI },
         { "350", OPTION_VAL_350_FI },
         { "360", OPTION_VAL_360_FI },
         { "370", OPTION_VAL_370_FI },
         { "380", OPTION_VAL_380_FI },
         { "390", OPTION_VAL_390_FI },
         { "400", OPTION_VAL_400_FI },
         { "410", OPTION_VAL_410_FI },
         { "420", OPTION_VAL_420_FI },
         { "430", OPTION_VAL_430_FI },
         { "440", OPTION_VAL_440_FI },
         { "450", OPTION_VAL_450_FI },
         { "460", OPTION_VAL_460_FI },
         { "470", OPTION_VAL_470_FI },
         { "480", OPTION_VAL_480_FI },
         { "490", OPTION_VAL_490_FI },
         { "500", OPTION_VAL_500_FI },
         { "510", OPTION_VAL_510_FI },
         { "520", OPTION_VAL_520_FI },
         { "530", OPTION_VAL_530_FI },
         { "540", OPTION_VAL_540_FI },
         { "550", OPTION_VAL_550_FI },
         { "560", OPTION_VAL_560_FI },
         { "570", OPTION_VAL_570_FI },
         { "580", OPTION_VAL_580_FI },
         { "590", OPTION_VAL_590_FI },
         { "600", OPTION_VAL_600_FI },
         { "610", OPTION_VAL_610_FI },
         { "620", OPTION_VAL_620_FI },
         { "630", OPTION_VAL_630_FI },
         { "640", OPTION_VAL_640_FI },
         { "650", OPTION_VAL_650_FI },
         { "660", OPTION_VAL_660_FI },
         { "670", OPTION_VAL_670_FI },
         { "680", OPTION_VAL_680_FI },
         { "690", OPTION_VAL_690_FI },
         { "700", OPTION_VAL_700_FI },
         { "710", OPTION_VAL_710_FI },
         { "720", OPTION_VAL_720_FI },
         { "730", OPTION_VAL_730_FI },
         { "740", OPTION_VAL_740_FI },
         { "750", OPTION_VAL_750_FI },
         { "760", OPTION_VAL_760_FI },
         { "770", OPTION_VAL_770_FI },
         { "780", OPTION_VAL_780_FI },
         { "790", OPTION_VAL_790_FI },
         { "800", OPTION_VAL_800_FI },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_FI,
      BSNES_PPU_FAST_LABEL_CAT_FI,
      BSNES_PPU_FAST_INFO_0_FI,
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
      BSNES_PPU_DEINTERLACE_LABEL_FI,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_FI,
      BSNES_PPU_DEINTERLACE_INFO_0_FI,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_FI,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_FI,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_FI,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_FI,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_FI,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_FI,
      BSNES_MODE7_SCALE_LABEL_CAT_FI,
      BSNES_MODE7_SCALE_INFO_0_FI,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_FI  },
         { "2x", OPTION_VAL_2X_FI  },
         { "3x", OPTION_VAL_3X_FI  },
         { "4x", OPTION_VAL_4X_FI  },
         { "5x", OPTION_VAL_5X_FI },
         { "6x", OPTION_VAL_6X_FI },
         { "7x", OPTION_VAL_7X_FI },
         { "8x", OPTION_VAL_8X_FI },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_FI,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_FI,
      BSNES_MODE7_PERSPECTIVE_INFO_0_FI,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_FI,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_FI,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_FI,
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
      BSNES_MODE7_MOSAIC_LABEL_FI,
      BSNES_MODE7_MOSAIC_LABEL_CAT_FI,
      BSNES_MODE7_MOSAIC_INFO_0_FI,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_FI,
      BSNES_DSP_FAST_LABEL_CAT_FI,
      BSNES_DSP_FAST_INFO_0_FI,
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
      BSNES_DSP_CUBIC_LABEL_FI,
      BSNES_DSP_CUBIC_LABEL_CAT_FI,
      BSNES_DSP_CUBIC_INFO_0_FI,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_FI,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_FI,
      BSNES_DSP_ECHO_SHADOW_INFO_0_FI,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_FI,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_FI,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_FI,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_FI,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_FI,
      NULL,
      BSNES_SGB_BIOS_INFO_0_FI,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_FI   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_FI },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_FI,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_FI,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_FI  },
         { "2",   OPTION_VAL_2_FI },
         { "3",   OPTION_VAL_3_FI },
         { "4",   OPTION_VAL_4_FI },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_FI,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_FI,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_FI,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_FI,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_FI,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_FI,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define CATEGORY_VIDEO_LABEL_FR "Vidéo"
#define CATEGORY_VIDEO_INFO_0_FR "Modifier les réglages de sortie vidéo."
#define CATEGORY_AUDIO_LABEL_FR NULL
#define CATEGORY_AUDIO_INFO_0_FR "Modifier les réglages de sortie audio."
#define CATEGORY_MODE7_LABEL_FR "Mode 7 HD"
#define CATEGORY_MODE7_INFO_0_FR "Modifier les réglages concernant l'émulation graphique du Mode 7."
#define CATEGORY_SGB_LABEL_FR NULL
#define CATEGORY_SGB_INFO_0_FR "Modifier les réglages de l'émulation du Super Game Boy."
#define CATEGORY_LIGHTGUN_LABEL_FR "Pistolet"
#define CATEGORY_LIGHTGUN_INFO_0_FR "Modifier les réglages du pistolet (écran tactile)."
#define CATEGORY_OVERCLOCK_LABEL_FR "Over/underclocking"
#define CATEGORY_OVERCLOCK_INFO_0_FR "Modifier la vitesse du matériel émulé."
#define CATEGORY_HACK_LABEL_FR "Hacks d'émulation"
#define CATEGORY_HACK_INFO_0_FR "Appliquer des hacks et correctifs d'émulation."
#define BSNES_ASPECT_RATIO_LABEL_FR "Rapport d'aspect préféré"
#define BSNES_ASPECT_RATIO_INFO_0_FR "Choisir le rapport d'aspect préféré pour le contenu. Cela ne s'applique que lorsque le rapport d'aspect de RetroArch est réglé sur 'Fourni par le cœur' (Core provided) dans les paramètres vidéo."
#define OPTION_VAL_AUTO_FR NULL
#define OPTION_VAL_8_7_FR "Pixels parfaits à l'échelle"
#define OPTION_VAL_4_3_FR NULL
#define OPTION_VAL_NTSC_FR NULL
#define OPTION_VAL_PAL_FR NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_FR "Recadrage du surbalayage"
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_FR "Supprimer les bordures en haut et en bas de l'écran, généralement inutilisées par les jeux et cachées par le biseau autour du bord d'une télévision définition standard."
#define OPTION_VAL_OFF_FR "8 pixels"
#define BSNES_BLUR_EMULATION_LABEL_FR "Émulation du flou"
#define BSNES_BLUR_EMULATION_INFO_0_FR "Simuler la résolution horizontale limitée des télévisions définition SD en floutant les pixels horizontalement adjacents. Certains jeux dépendent de cela pour émuler un effet de transparence."
#define BSNES_HOTFIXES_LABEL_FR "Correctifs"
#define BSNES_HOTFIXES_INFO_0_FR "Même les logiciels sous licence commerciale et officiellement publiés sont parfois livrés avec des bugs. Cette option corrigera certains problèmes qui se produisaient même sur du matériel réel."
#define BSNES_ENTROPY_LABEL_FR "Entropie (aléatoire)"
#define BSNES_ENTROPY_INFO_0_FR "Choisir le niveau de randomisation de la mémoire et des registres. Si défini sur Aucune, toute la mémoire et tous les registres sont initialisés à des valeurs constantes au démarrage. La faible randomisation fournit la représentation la plus précise d'un système réel. La randomisation élevée est aussi aléatoire que possible."
#define OPTION_VAL_LOW_FR "Faible"
#define OPTION_VAL_HIGH_FR "Élevée"
#define OPTION_VAL_NONE_FR "Aucune"
#define BSNES_CPU_OVERCLOCK_LABEL_FR "Overclocking - processeur"
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_FR "Processeur"
#define BSNES_CPU_OVERCLOCK_INFO_0_FR "Overclocker ou underclocker le processeur. Définir cette valeur au-dessus de 100 % peut réduire les temps de chargement et supprimer les ralentissements. Utiliser avec précaution, car cela peut également causer le plantage de certains jeux ou exposer d'autres problèmes."
#define OPTION_VAL_10_FR NULL
#define OPTION_VAL_20_FR NULL
#define OPTION_VAL_30_FR NULL
#define OPTION_VAL_40_FR NULL
#define OPTION_VAL_50_FR NULL
#define OPTION_VAL_60_FR NULL
#define OPTION_VAL_70_FR NULL
#define OPTION_VAL_80_FR NULL
#define OPTION_VAL_90_FR NULL
#define OPTION_VAL_100_FR "100% (par défaut)"
#define OPTION_VAL_110_FR NULL
#define OPTION_VAL_120_FR NULL
#define OPTION_VAL_130_FR NULL
#define OPTION_VAL_140_FR NULL
#define OPTION_VAL_150_FR NULL
#define OPTION_VAL_160_FR NULL
#define OPTION_VAL_170_FR NULL
#define OPTION_VAL_180_FR NULL
#define OPTION_VAL_190_FR NULL
#define OPTION_VAL_200_FR NULL
#define OPTION_VAL_210_FR NULL
#define OPTION_VAL_220_FR NULL
#define OPTION_VAL_230_FR NULL
#define OPTION_VAL_240_FR NULL
#define OPTION_VAL_250_FR NULL
#define OPTION_VAL_260_FR NULL
#define OPTION_VAL_270_FR NULL
#define OPTION_VAL_280_FR NULL
#define OPTION_VAL_290_FR NULL
#define OPTION_VAL_300_FR NULL
#define OPTION_VAL_310_FR NULL
#define OPTION_VAL_320_FR NULL
#define OPTION_VAL_330_FR NULL
#define OPTION_VAL_340_FR NULL
#define OPTION_VAL_350_FR NULL
#define OPTION_VAL_360_FR NULL
#define OPTION_VAL_370_FR NULL
#define OPTION_VAL_380_FR NULL
#define OPTION_VAL_390_FR NULL
#define OPTION_VAL_400_FR NULL
#define BSNES_CPU_FASTMATH_LABEL_FR "Calculs rapides du processeur"
#define BSNES_CPU_FASTMATH_INFO_0_FR "Fournir les résultats des calculs immédiatement. La multiplication et la division par le processeur prennent du temps pour se terminer sur une SNES réelle. Les émulateurs plus anciens ne simulaient pas ces retards, donc certains hacks de ROM plus anciens n'attendent pas que les opérations mathématiques se terminent et ont besoin de ce hack."
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_FR "Overclocking - coprocesseur SA-1"
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_FR "Coprocesseur SA-1"
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_FR "Overclocker ou underclocker la puce Super Accelerator 1 (SA-1). Régler cette valeur au-dessus de 100% peut améliorer les performances dans les jeux qui prennent en charge la puce SA-1. Utiliser avec précaution, car cela peut également causer le plantage de certains jeux ou exposer d'autres problèmes."
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_FR "Overclocking - coprocesseur SuperFX"
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_FR "Coprocesseur SuperFX"
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_FR "Overclocker ou underclocker le coprocesseur SuperFX. Régler cette valeur au-dessus de 100% peut améliorer les performances dans les jeux qui prennent en charge le SuperFX. Utiliser avec précaution, car cela peut également causer le plantage de certains jeux ou exposer d'autres problèmes."
#define OPTION_VAL_410_FR NULL
#define OPTION_VAL_420_FR NULL
#define OPTION_VAL_430_FR NULL
#define OPTION_VAL_440_FR NULL
#define OPTION_VAL_450_FR NULL
#define OPTION_VAL_460_FR NULL
#define OPTION_VAL_470_FR NULL
#define OPTION_VAL_480_FR NULL
#define OPTION_VAL_490_FR NULL
#define OPTION_VAL_500_FR NULL
#define OPTION_VAL_510_FR NULL
#define OPTION_VAL_520_FR NULL
#define OPTION_VAL_530_FR NULL
#define OPTION_VAL_540_FR NULL
#define OPTION_VAL_550_FR NULL
#define OPTION_VAL_560_FR NULL
#define OPTION_VAL_570_FR NULL
#define OPTION_VAL_580_FR NULL
#define OPTION_VAL_590_FR NULL
#define OPTION_VAL_600_FR NULL
#define OPTION_VAL_610_FR NULL
#define OPTION_VAL_620_FR NULL
#define OPTION_VAL_630_FR NULL
#define OPTION_VAL_640_FR NULL
#define OPTION_VAL_650_FR NULL
#define OPTION_VAL_660_FR NULL
#define OPTION_VAL_670_FR NULL
#define OPTION_VAL_680_FR NULL
#define OPTION_VAL_690_FR NULL
#define OPTION_VAL_700_FR NULL
#define OPTION_VAL_710_FR NULL
#define OPTION_VAL_720_FR NULL
#define OPTION_VAL_730_FR NULL
#define OPTION_VAL_740_FR NULL
#define OPTION_VAL_750_FR NULL
#define OPTION_VAL_760_FR NULL
#define OPTION_VAL_770_FR NULL
#define OPTION_VAL_780_FR NULL
#define OPTION_VAL_790_FR NULL
#define OPTION_VAL_800_FR NULL
#define BSNES_PPU_FAST_LABEL_FR "PPU (vidéo) - mode rapide"
#define BSNES_PPU_FAST_LABEL_CAT_FR "PPU - mode rapide"
#define BSNES_PPU_FAST_INFO_0_FR "Activer l'émulation plus rapide du PPU au prix d'une réduction mineure de la précision. Il est recommandé de laisser cette option activée."
#define BSNES_PPU_DEINTERLACE_LABEL_FR "PPU (vidéo) - désentrelacer"
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_FR "PPU - désentrelacer"
#define BSNES_PPU_DEINTERLACE_INFO_0_FR "Désentrelacer tous les jeux en rendant à 480p en interne. La pénalité de performance est presque inexistante, il est donc recommandé de laisser cette option activée."
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_FR "PPU (vidéo) - aucune limite de sprites"
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_FR "PPU - aucune limite de sprites"
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_FR "Supprime toute limite au nombre de sprites qui peuvent être affichés simultanément à l'écran. Peut causer des problèmes avec certains jeux."
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_FR "PPU (vidéo) - pas de blocage VRAM"
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_FR "Émuler un bug dans les anciennes versions de ZSNES et Snes9x, où le blocage de la VRAM n'était pas émulé. Quelques hacks de ROM plus anciens s'appuyaient sur ce comportement et rendront les graphiques incorrectement si cette option n'est pas activée. Cette option est extrêmement peu précise et nuit à la vitesse du PPU, il est donc recommandé de la laisser désactivée à moins que vous n'ayez besoin de jouer à un jeu qui est par ailleurs incompatible avec ce cœur."
#define BSNES_MODE7_SCALE_LABEL_FR "Mode 7 HD - échelle"
#define BSNES_MODE7_SCALE_LABEL_CAT_FR "Échelle"
#define BSNES_MODE7_SCALE_INFO_0_FR "Augmenter la résolution horizontale et verticale des graphiques en Mode 7 utilisés dans certains jeux."
#define OPTION_VAL_1X_FR "240p (x1)"
#define OPTION_VAL_2X_FR "480p (x2)"
#define OPTION_VAL_3X_FR "720p (x3)"
#define OPTION_VAL_4X_FR "960p (x4)"
#define OPTION_VAL_5X_FR "1200p (x5)"
#define OPTION_VAL_6X_FR "1440p (x6)"
#define OPTION_VAL_7X_FR "1680p (x7)"
#define OPTION_VAL_8X_FR "1920p (x8)"
#define BSNES_MODE7_PERSPECTIVE_LABEL_FR "Mode 7 HD - correction de la perspective"
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_FR "Correction de la perspective"
#define BSNES_MODE7_PERSPECTIVE_INFO_0_FR "Corriger la perspective des graphismes en Mode 7 utilisés dans certains jeux en contournant certaines limitations de l'entier mathématique utilisé par la SNES."
#define BSNES_MODE7_SUPERSAMPLE_LABEL_FR "Mode 7 HD - suréchantillonnage"
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_FR "Suréchantillonnage"
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_FR "Les graphismes en Mode 7 utilisés dans certains jeux, combinés avec des facteurs d'échelle de Mode 7 plus élevés, produisent un effet similaire à l'anti-aliasing."
#define BSNES_MODE7_MOSAIC_LABEL_FR "Mode 7 HD - mosaïque HD->SD"
#define BSNES_MODE7_MOSAIC_LABEL_CAT_FR "Mosaïque HD->SD"
#define BSNES_MODE7_MOSAIC_INFO_0_FR "Afficher l'effet de mosaïque des graphismes en Mode 7 même lors de leur agrandissement."
#define BSNES_DSP_FAST_LABEL_FR "DSP (audio) - mode rapide"
#define BSNES_DSP_FAST_LABEL_CAT_FR "DSP - mode rapide"
#define BSNES_DSP_FAST_INFO_0_FR "Activer l'émulation plus rapide du DSP au prix d'une réduction mineure de la précision. Il est recommandé de laisser cette option activée."
#define BSNES_DSP_CUBIC_LABEL_FR "DSP (audio) - interpolation cubique"
#define BSNES_DSP_CUBIC_LABEL_CAT_FR "DSP - interpolation cubique"
#define BSNES_DSP_CUBIC_INFO_0_FR "Appliquer une interpolation cubique sur le son, en conservant une plus grande partie de la gamme des hautes fréquences."
#define BSNES_DSP_ECHO_SHADOW_LABEL_FR "DSP (audio) - RAM de l'Echo séparée"
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_FR "DSP - RAM de l'Echo séparée"
#define BSNES_DSP_ECHO_SHADOW_INFO_0_FR "Émuler un bug dans ZSNES où la RAM de l'Echo était traitée comme séparée de la RAM de l'APU. Beaucoup de hacks de ROM pour Super Mario World plus anciens s'appuyaient sur ce comportement et planteront sans cela. Cette option est extrêmement peu précise et ne devrait pas être activée sauf si nécessaire."
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_FR "Coprocesseurs - mode rapide"
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_FR "Activer l'émulation plus rapide des processeurs au prix d'une réduction mineure de la précision. Il est recommandé de laisser cette option activée."
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_FR "Coprocesseurs - préférer le mode HLE"
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_FR "Lorsque cette option est activée, l'émulation en mode HLE moins précise sera toujours utilisée lorsque disponible. Si désactivée, le mode HLE ne sera utilisé que lorsque le firmware LLE est manquant."
#define BSNES_SGB_BIOS_LABEL_FR "BIOS préféré du Super Game Boy (Redémarrage requis)"
#define BSNES_SGB_BIOS_INFO_0_FR "Sélectionner le BIOS préféré du Super Game Boy pour être utilisé avec des titres compatibles."
#define OPTION_VAL_SGB1_SFC_FR NULL
#define OPTION_VAL_SGB2_SFC_FR NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_FR "Exécution en avance interne"
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_FR "Simuler le système à l’avance et revenir en arrière pour réduire la latence des entrées. A des exigences système très élevées."
#define OPTION_VAL_1_FR "1 image"
#define OPTION_VAL_2_FR "2 images"
#define OPTION_VAL_3_FR "3 images"
#define OPTION_VAL_4_FR "4 images"
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_FR "Pistolet écran tactile"
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_FR "Activer l'entrée du Super Scope pour les appareils à écran tactile."
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_FR "Inverser les touches de tir du Super Scope"
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_FR "Inverser les touches de tir et du curseur Super Scope avec le pistolet écran tactile."
#define BSNES_HIDE_SGB_BORDER_LABEL_FR "Masquer la bordure du SGB"
#define BSNES_HIDE_SGB_BORDER_INFO_0_FR "Masquer la bordure lorsque vous jouez à des jeux de Super Game Boy. Ne fonctionne que lorsque le 'Recadrage du surbalayage' est activé."

struct retro_core_option_v2_category option_cats_fr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FR,
      CATEGORY_VIDEO_INFO_0_FR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FR,
      CATEGORY_AUDIO_INFO_0_FR
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_FR,
      CATEGORY_MODE7_INFO_0_FR
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_FR,
      CATEGORY_SGB_INFO_0_FR
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_FR,
      CATEGORY_LIGHTGUN_INFO_0_FR
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_FR,
      CATEGORY_OVERCLOCK_INFO_0_FR
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_FR,
      CATEGORY_HACK_INFO_0_FR
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_FR,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_FR,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_FR },
         { "8:7",  OPTION_VAL_8_7_FR },
         { "4:3",  OPTION_VAL_4_3_FR },
         { "NTSC", OPTION_VAL_NTSC_FR },
         { "PAL",  OPTION_VAL_PAL_FR },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_FR,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_FR,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_FR },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_FR,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_FR,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_FR,
      NULL,
      BSNES_HOTFIXES_INFO_0_FR,
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
      BSNES_ENTROPY_LABEL_FR,
      NULL,
      BSNES_ENTROPY_INFO_0_FR,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_FR },
         { "High", OPTION_VAL_HIGH_FR },
         { "None", OPTION_VAL_NONE_FR },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_FR,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_FR,
      BSNES_CPU_OVERCLOCK_INFO_0_FR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_FR  },
         { "20",  OPTION_VAL_20_FR  },
         { "30",  OPTION_VAL_30_FR  },
         { "40",  OPTION_VAL_40_FR  },
         { "50",  OPTION_VAL_50_FR  },
         { "60",  OPTION_VAL_60_FR  },
         { "70",  OPTION_VAL_70_FR  },
         { "80",  OPTION_VAL_80_FR  },
         { "90",  OPTION_VAL_90_FR  },
         { "100", OPTION_VAL_100_FR },
         { "110", OPTION_VAL_110_FR },
         { "120", OPTION_VAL_120_FR },
         { "130", OPTION_VAL_130_FR },
         { "140", OPTION_VAL_140_FR },
         { "150", OPTION_VAL_150_FR },
         { "160", OPTION_VAL_160_FR },
         { "170", OPTION_VAL_170_FR },
         { "180", OPTION_VAL_180_FR },
         { "190", OPTION_VAL_190_FR },
         { "200", OPTION_VAL_200_FR },
         { "210", OPTION_VAL_210_FR },
         { "220", OPTION_VAL_220_FR },
         { "230", OPTION_VAL_230_FR },
         { "240", OPTION_VAL_240_FR },
         { "250", OPTION_VAL_250_FR },
         { "260", OPTION_VAL_260_FR },
         { "270", OPTION_VAL_270_FR },
         { "280", OPTION_VAL_280_FR },
         { "290", OPTION_VAL_290_FR },
         { "300", OPTION_VAL_300_FR },
         { "310", OPTION_VAL_310_FR },
         { "320", OPTION_VAL_320_FR },
         { "330", OPTION_VAL_330_FR },
         { "340", OPTION_VAL_340_FR },
         { "350", OPTION_VAL_350_FR },
         { "360", OPTION_VAL_360_FR },
         { "370", OPTION_VAL_370_FR },
         { "380", OPTION_VAL_380_FR },
         { "390", OPTION_VAL_390_FR },
         { "400", OPTION_VAL_400_FR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_FR,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_FR,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_FR,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_FR,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_FR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_FR  },
         { "20",  OPTION_VAL_20_FR  },
         { "30",  OPTION_VAL_30_FR  },
         { "40",  OPTION_VAL_40_FR  },
         { "50",  OPTION_VAL_50_FR  },
         { "60",  OPTION_VAL_60_FR  },
         { "70",  OPTION_VAL_70_FR  },
         { "80",  OPTION_VAL_80_FR  },
         { "90",  OPTION_VAL_90_FR  },
         { "100", OPTION_VAL_100_FR },
         { "110", OPTION_VAL_110_FR },
         { "120", OPTION_VAL_120_FR },
         { "130", OPTION_VAL_130_FR },
         { "140", OPTION_VAL_140_FR },
         { "150", OPTION_VAL_150_FR },
         { "160", OPTION_VAL_160_FR },
         { "170", OPTION_VAL_170_FR },
         { "180", OPTION_VAL_180_FR },
         { "190", OPTION_VAL_190_FR },
         { "200", OPTION_VAL_200_FR },
         { "210", OPTION_VAL_210_FR },
         { "220", OPTION_VAL_220_FR },
         { "230", OPTION_VAL_230_FR },
         { "240", OPTION_VAL_240_FR },
         { "250", OPTION_VAL_250_FR },
         { "260", OPTION_VAL_260_FR },
         { "270", OPTION_VAL_270_FR },
         { "280", OPTION_VAL_280_FR },
         { "290", OPTION_VAL_290_FR },
         { "300", OPTION_VAL_300_FR },
         { "310", OPTION_VAL_310_FR },
         { "320", OPTION_VAL_320_FR },
         { "330", OPTION_VAL_330_FR },
         { "340", OPTION_VAL_340_FR },
         { "350", OPTION_VAL_350_FR },
         { "360", OPTION_VAL_360_FR },
         { "370", OPTION_VAL_370_FR },
         { "380", OPTION_VAL_380_FR },
         { "390", OPTION_VAL_390_FR },
         { "400", OPTION_VAL_400_FR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_FR,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_FR,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_FR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_FR  },
         { "20",  OPTION_VAL_20_FR  },
         { "30",  OPTION_VAL_30_FR  },
         { "40",  OPTION_VAL_40_FR  },
         { "50",  OPTION_VAL_50_FR  },
         { "60",  OPTION_VAL_60_FR  },
         { "70",  OPTION_VAL_70_FR  },
         { "80",  OPTION_VAL_80_FR  },
         { "90",  OPTION_VAL_90_FR  },
         { "100", OPTION_VAL_100_FR },
         { "110", OPTION_VAL_110_FR },
         { "120", OPTION_VAL_120_FR },
         { "130", OPTION_VAL_130_FR },
         { "140", OPTION_VAL_140_FR },
         { "150", OPTION_VAL_150_FR },
         { "160", OPTION_VAL_160_FR },
         { "170", OPTION_VAL_170_FR },
         { "180", OPTION_VAL_180_FR },
         { "190", OPTION_VAL_190_FR },
         { "200", OPTION_VAL_200_FR },
         { "210", OPTION_VAL_210_FR },
         { "220", OPTION_VAL_220_FR },
         { "230", OPTION_VAL_230_FR },
         { "240", OPTION_VAL_240_FR },
         { "250", OPTION_VAL_250_FR },
         { "260", OPTION_VAL_260_FR },
         { "270", OPTION_VAL_270_FR },
         { "280", OPTION_VAL_280_FR },
         { "290", OPTION_VAL_290_FR },
         { "300", OPTION_VAL_300_FR },
         { "310", OPTION_VAL_310_FR },
         { "320", OPTION_VAL_320_FR },
         { "330", OPTION_VAL_330_FR },
         { "340", OPTION_VAL_340_FR },
         { "350", OPTION_VAL_350_FR },
         { "360", OPTION_VAL_360_FR },
         { "370", OPTION_VAL_370_FR },
         { "380", OPTION_VAL_380_FR },
         { "390", OPTION_VAL_390_FR },
         { "400", OPTION_VAL_400_FR },
         { "410", OPTION_VAL_410_FR },
         { "420", OPTION_VAL_420_FR },
         { "430", OPTION_VAL_430_FR },
         { "440", OPTION_VAL_440_FR },
         { "450", OPTION_VAL_450_FR },
         { "460", OPTION_VAL_460_FR },
         { "470", OPTION_VAL_470_FR },
         { "480", OPTION_VAL_480_FR },
         { "490", OPTION_VAL_490_FR },
         { "500", OPTION_VAL_500_FR },
         { "510", OPTION_VAL_510_FR },
         { "520", OPTION_VAL_520_FR },
         { "530", OPTION_VAL_530_FR },
         { "540", OPTION_VAL_540_FR },
         { "550", OPTION_VAL_550_FR },
         { "560", OPTION_VAL_560_FR },
         { "570", OPTION_VAL_570_FR },
         { "580", OPTION_VAL_580_FR },
         { "590", OPTION_VAL_590_FR },
         { "600", OPTION_VAL_600_FR },
         { "610", OPTION_VAL_610_FR },
         { "620", OPTION_VAL_620_FR },
         { "630", OPTION_VAL_630_FR },
         { "640", OPTION_VAL_640_FR },
         { "650", OPTION_VAL_650_FR },
         { "660", OPTION_VAL_660_FR },
         { "670", OPTION_VAL_670_FR },
         { "680", OPTION_VAL_680_FR },
         { "690", OPTION_VAL_690_FR },
         { "700", OPTION_VAL_700_FR },
         { "710", OPTION_VAL_710_FR },
         { "720", OPTION_VAL_720_FR },
         { "730", OPTION_VAL_730_FR },
         { "740", OPTION_VAL_740_FR },
         { "750", OPTION_VAL_750_FR },
         { "760", OPTION_VAL_760_FR },
         { "770", OPTION_VAL_770_FR },
         { "780", OPTION_VAL_780_FR },
         { "790", OPTION_VAL_790_FR },
         { "800", OPTION_VAL_800_FR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_FR,
      BSNES_PPU_FAST_LABEL_CAT_FR,
      BSNES_PPU_FAST_INFO_0_FR,
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
      BSNES_PPU_DEINTERLACE_LABEL_FR,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_FR,
      BSNES_PPU_DEINTERLACE_INFO_0_FR,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_FR,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_FR,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_FR,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_FR,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_FR,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_FR,
      BSNES_MODE7_SCALE_LABEL_CAT_FR,
      BSNES_MODE7_SCALE_INFO_0_FR,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_FR  },
         { "2x", OPTION_VAL_2X_FR  },
         { "3x", OPTION_VAL_3X_FR  },
         { "4x", OPTION_VAL_4X_FR  },
         { "5x", OPTION_VAL_5X_FR },
         { "6x", OPTION_VAL_6X_FR },
         { "7x", OPTION_VAL_7X_FR },
         { "8x", OPTION_VAL_8X_FR },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_FR,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_FR,
      BSNES_MODE7_PERSPECTIVE_INFO_0_FR,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_FR,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_FR,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_FR,
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
      BSNES_MODE7_MOSAIC_LABEL_FR,
      BSNES_MODE7_MOSAIC_LABEL_CAT_FR,
      BSNES_MODE7_MOSAIC_INFO_0_FR,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_FR,
      BSNES_DSP_FAST_LABEL_CAT_FR,
      BSNES_DSP_FAST_INFO_0_FR,
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
      BSNES_DSP_CUBIC_LABEL_FR,
      BSNES_DSP_CUBIC_LABEL_CAT_FR,
      BSNES_DSP_CUBIC_INFO_0_FR,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_FR,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_FR,
      BSNES_DSP_ECHO_SHADOW_INFO_0_FR,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_FR,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_FR,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_FR,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_FR,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_FR,
      NULL,
      BSNES_SGB_BIOS_INFO_0_FR,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_FR   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_FR },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_FR,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_FR,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_FR  },
         { "2",   OPTION_VAL_2_FR },
         { "3",   OPTION_VAL_3_FR },
         { "4",   OPTION_VAL_4_FR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_FR,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_FR,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_FR,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_FR,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_FR,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_FR,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GL */

#define CATEGORY_VIDEO_LABEL_GL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_GL "Cambia os axustes da saída de video."
#define CATEGORY_AUDIO_LABEL_GL "Son"
#define CATEGORY_AUDIO_INFO_0_GL "Cambia os axustes da saída de son."
#define CATEGORY_MODE7_LABEL_GL NULL
#define CATEGORY_MODE7_INFO_0_GL NULL
#define CATEGORY_SGB_LABEL_GL NULL
#define CATEGORY_SGB_INFO_0_GL NULL
#define CATEGORY_LIGHTGUN_LABEL_GL NULL
#define CATEGORY_LIGHTGUN_INFO_0_GL NULL
#define CATEGORY_OVERCLOCK_LABEL_GL NULL
#define CATEGORY_OVERCLOCK_INFO_0_GL NULL
#define CATEGORY_HACK_LABEL_GL "Hacks de emulación"
#define CATEGORY_HACK_INFO_0_GL NULL
#define BSNES_ASPECT_RATIO_LABEL_GL NULL
#define BSNES_ASPECT_RATIO_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_8_7_GL NULL
#define OPTION_VAL_4_3_GL NULL
#define OPTION_VAL_NTSC_GL NULL
#define OPTION_VAL_PAL_GL NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_GL NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_GL NULL
#define OPTION_VAL_OFF_GL NULL
#define BSNES_BLUR_EMULATION_LABEL_GL NULL
#define BSNES_BLUR_EMULATION_INFO_0_GL NULL
#define BSNES_HOTFIXES_LABEL_GL NULL
#define BSNES_HOTFIXES_INFO_0_GL NULL
#define BSNES_ENTROPY_LABEL_GL NULL
#define BSNES_ENTROPY_INFO_0_GL NULL
#define OPTION_VAL_LOW_GL NULL
#define OPTION_VAL_HIGH_GL NULL
#define OPTION_VAL_NONE_GL "Ningún"
#define BSNES_CPU_OVERCLOCK_LABEL_GL NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_GL NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_GL NULL
#define OPTION_VAL_10_GL NULL
#define OPTION_VAL_20_GL NULL
#define OPTION_VAL_30_GL NULL
#define OPTION_VAL_40_GL NULL
#define OPTION_VAL_50_GL NULL
#define OPTION_VAL_60_GL NULL
#define OPTION_VAL_70_GL NULL
#define OPTION_VAL_80_GL NULL
#define OPTION_VAL_90_GL NULL
#define OPTION_VAL_100_GL NULL
#define OPTION_VAL_110_GL NULL
#define OPTION_VAL_120_GL NULL
#define OPTION_VAL_130_GL NULL
#define OPTION_VAL_140_GL NULL
#define OPTION_VAL_150_GL NULL
#define OPTION_VAL_160_GL NULL
#define OPTION_VAL_170_GL NULL
#define OPTION_VAL_180_GL NULL
#define OPTION_VAL_190_GL NULL
#define OPTION_VAL_200_GL NULL
#define OPTION_VAL_210_GL NULL
#define OPTION_VAL_220_GL NULL
#define OPTION_VAL_230_GL NULL
#define OPTION_VAL_240_GL NULL
#define OPTION_VAL_250_GL NULL
#define OPTION_VAL_260_GL NULL
#define OPTION_VAL_270_GL NULL
#define OPTION_VAL_280_GL NULL
#define OPTION_VAL_290_GL NULL
#define OPTION_VAL_300_GL NULL
#define OPTION_VAL_310_GL NULL
#define OPTION_VAL_320_GL NULL
#define OPTION_VAL_330_GL NULL
#define OPTION_VAL_340_GL NULL
#define OPTION_VAL_350_GL NULL
#define OPTION_VAL_360_GL NULL
#define OPTION_VAL_370_GL NULL
#define OPTION_VAL_380_GL NULL
#define OPTION_VAL_390_GL NULL
#define OPTION_VAL_400_GL NULL
#define BSNES_CPU_FASTMATH_LABEL_GL NULL
#define BSNES_CPU_FASTMATH_INFO_0_GL NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_GL NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_GL NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_GL NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_GL NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_GL NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_GL NULL
#define OPTION_VAL_410_GL NULL
#define OPTION_VAL_420_GL NULL
#define OPTION_VAL_430_GL NULL
#define OPTION_VAL_440_GL NULL
#define OPTION_VAL_450_GL NULL
#define OPTION_VAL_460_GL NULL
#define OPTION_VAL_470_GL NULL
#define OPTION_VAL_480_GL NULL
#define OPTION_VAL_490_GL NULL
#define OPTION_VAL_500_GL NULL
#define OPTION_VAL_510_GL NULL
#define OPTION_VAL_520_GL NULL
#define OPTION_VAL_530_GL NULL
#define OPTION_VAL_540_GL NULL
#define OPTION_VAL_550_GL NULL
#define OPTION_VAL_560_GL NULL
#define OPTION_VAL_570_GL NULL
#define OPTION_VAL_580_GL NULL
#define OPTION_VAL_590_GL NULL
#define OPTION_VAL_600_GL NULL
#define OPTION_VAL_610_GL NULL
#define OPTION_VAL_620_GL NULL
#define OPTION_VAL_630_GL NULL
#define OPTION_VAL_640_GL NULL
#define OPTION_VAL_650_GL NULL
#define OPTION_VAL_660_GL NULL
#define OPTION_VAL_670_GL NULL
#define OPTION_VAL_680_GL NULL
#define OPTION_VAL_690_GL NULL
#define OPTION_VAL_700_GL NULL
#define OPTION_VAL_710_GL NULL
#define OPTION_VAL_720_GL NULL
#define OPTION_VAL_730_GL NULL
#define OPTION_VAL_740_GL NULL
#define OPTION_VAL_750_GL NULL
#define OPTION_VAL_760_GL NULL
#define OPTION_VAL_770_GL NULL
#define OPTION_VAL_780_GL NULL
#define OPTION_VAL_790_GL NULL
#define OPTION_VAL_800_GL NULL
#define BSNES_PPU_FAST_LABEL_GL NULL
#define BSNES_PPU_FAST_LABEL_CAT_GL NULL
#define BSNES_PPU_FAST_INFO_0_GL NULL
#define BSNES_PPU_DEINTERLACE_LABEL_GL NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_GL NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_GL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_GL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_GL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_GL NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_GL NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_GL NULL
#define BSNES_MODE7_SCALE_LABEL_GL NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_GL NULL
#define BSNES_MODE7_SCALE_INFO_0_GL NULL
#define OPTION_VAL_1X_GL NULL
#define OPTION_VAL_2X_GL NULL
#define OPTION_VAL_3X_GL NULL
#define OPTION_VAL_4X_GL NULL
#define OPTION_VAL_5X_GL NULL
#define OPTION_VAL_6X_GL NULL
#define OPTION_VAL_7X_GL NULL
#define OPTION_VAL_8X_GL NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_GL NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_GL NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_GL NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_GL NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_GL NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_GL NULL
#define BSNES_MODE7_MOSAIC_LABEL_GL NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_GL NULL
#define BSNES_MODE7_MOSAIC_INFO_0_GL NULL
#define BSNES_DSP_FAST_LABEL_GL NULL
#define BSNES_DSP_FAST_LABEL_CAT_GL NULL
#define BSNES_DSP_FAST_INFO_0_GL NULL
#define BSNES_DSP_CUBIC_LABEL_GL NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_GL NULL
#define BSNES_DSP_CUBIC_INFO_0_GL NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_GL NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_GL NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_GL NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_GL NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_GL NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_GL NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_GL NULL
#define BSNES_SGB_BIOS_LABEL_GL NULL
#define BSNES_SGB_BIOS_INFO_0_GL NULL
#define OPTION_VAL_SGB1_SFC_GL NULL
#define OPTION_VAL_SGB2_SFC_GL NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_GL NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_GL NULL
#define OPTION_VAL_1_GL NULL
#define OPTION_VAL_2_GL NULL
#define OPTION_VAL_3_GL NULL
#define OPTION_VAL_4_GL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_GL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_GL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_GL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_GL NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_GL NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_GL,
      CATEGORY_VIDEO_INFO_0_GL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_GL,
      CATEGORY_AUDIO_INFO_0_GL
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_GL,
      CATEGORY_MODE7_INFO_0_GL
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_GL,
      CATEGORY_SGB_INFO_0_GL
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_GL,
      CATEGORY_LIGHTGUN_INFO_0_GL
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_GL,
      CATEGORY_OVERCLOCK_INFO_0_GL
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_GL,
      CATEGORY_HACK_INFO_0_GL
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_GL,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_GL,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_GL },
         { "8:7",  OPTION_VAL_8_7_GL },
         { "4:3",  OPTION_VAL_4_3_GL },
         { "NTSC", OPTION_VAL_NTSC_GL },
         { "PAL",  OPTION_VAL_PAL_GL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_GL,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_GL,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_GL },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_GL,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_GL,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_GL,
      NULL,
      BSNES_HOTFIXES_INFO_0_GL,
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
      BSNES_ENTROPY_LABEL_GL,
      NULL,
      BSNES_ENTROPY_INFO_0_GL,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_GL },
         { "High", OPTION_VAL_HIGH_GL },
         { "None", OPTION_VAL_NONE_GL },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_GL,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_GL,
      BSNES_CPU_OVERCLOCK_INFO_0_GL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_GL  },
         { "20",  OPTION_VAL_20_GL  },
         { "30",  OPTION_VAL_30_GL  },
         { "40",  OPTION_VAL_40_GL  },
         { "50",  OPTION_VAL_50_GL  },
         { "60",  OPTION_VAL_60_GL  },
         { "70",  OPTION_VAL_70_GL  },
         { "80",  OPTION_VAL_80_GL  },
         { "90",  OPTION_VAL_90_GL  },
         { "100", OPTION_VAL_100_GL },
         { "110", OPTION_VAL_110_GL },
         { "120", OPTION_VAL_120_GL },
         { "130", OPTION_VAL_130_GL },
         { "140", OPTION_VAL_140_GL },
         { "150", OPTION_VAL_150_GL },
         { "160", OPTION_VAL_160_GL },
         { "170", OPTION_VAL_170_GL },
         { "180", OPTION_VAL_180_GL },
         { "190", OPTION_VAL_190_GL },
         { "200", OPTION_VAL_200_GL },
         { "210", OPTION_VAL_210_GL },
         { "220", OPTION_VAL_220_GL },
         { "230", OPTION_VAL_230_GL },
         { "240", OPTION_VAL_240_GL },
         { "250", OPTION_VAL_250_GL },
         { "260", OPTION_VAL_260_GL },
         { "270", OPTION_VAL_270_GL },
         { "280", OPTION_VAL_280_GL },
         { "290", OPTION_VAL_290_GL },
         { "300", OPTION_VAL_300_GL },
         { "310", OPTION_VAL_310_GL },
         { "320", OPTION_VAL_320_GL },
         { "330", OPTION_VAL_330_GL },
         { "340", OPTION_VAL_340_GL },
         { "350", OPTION_VAL_350_GL },
         { "360", OPTION_VAL_360_GL },
         { "370", OPTION_VAL_370_GL },
         { "380", OPTION_VAL_380_GL },
         { "390", OPTION_VAL_390_GL },
         { "400", OPTION_VAL_400_GL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_GL,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_GL,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_GL,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_GL,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_GL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_GL  },
         { "20",  OPTION_VAL_20_GL  },
         { "30",  OPTION_VAL_30_GL  },
         { "40",  OPTION_VAL_40_GL  },
         { "50",  OPTION_VAL_50_GL  },
         { "60",  OPTION_VAL_60_GL  },
         { "70",  OPTION_VAL_70_GL  },
         { "80",  OPTION_VAL_80_GL  },
         { "90",  OPTION_VAL_90_GL  },
         { "100", OPTION_VAL_100_GL },
         { "110", OPTION_VAL_110_GL },
         { "120", OPTION_VAL_120_GL },
         { "130", OPTION_VAL_130_GL },
         { "140", OPTION_VAL_140_GL },
         { "150", OPTION_VAL_150_GL },
         { "160", OPTION_VAL_160_GL },
         { "170", OPTION_VAL_170_GL },
         { "180", OPTION_VAL_180_GL },
         { "190", OPTION_VAL_190_GL },
         { "200", OPTION_VAL_200_GL },
         { "210", OPTION_VAL_210_GL },
         { "220", OPTION_VAL_220_GL },
         { "230", OPTION_VAL_230_GL },
         { "240", OPTION_VAL_240_GL },
         { "250", OPTION_VAL_250_GL },
         { "260", OPTION_VAL_260_GL },
         { "270", OPTION_VAL_270_GL },
         { "280", OPTION_VAL_280_GL },
         { "290", OPTION_VAL_290_GL },
         { "300", OPTION_VAL_300_GL },
         { "310", OPTION_VAL_310_GL },
         { "320", OPTION_VAL_320_GL },
         { "330", OPTION_VAL_330_GL },
         { "340", OPTION_VAL_340_GL },
         { "350", OPTION_VAL_350_GL },
         { "360", OPTION_VAL_360_GL },
         { "370", OPTION_VAL_370_GL },
         { "380", OPTION_VAL_380_GL },
         { "390", OPTION_VAL_390_GL },
         { "400", OPTION_VAL_400_GL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_GL,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_GL,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_GL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_GL  },
         { "20",  OPTION_VAL_20_GL  },
         { "30",  OPTION_VAL_30_GL  },
         { "40",  OPTION_VAL_40_GL  },
         { "50",  OPTION_VAL_50_GL  },
         { "60",  OPTION_VAL_60_GL  },
         { "70",  OPTION_VAL_70_GL  },
         { "80",  OPTION_VAL_80_GL  },
         { "90",  OPTION_VAL_90_GL  },
         { "100", OPTION_VAL_100_GL },
         { "110", OPTION_VAL_110_GL },
         { "120", OPTION_VAL_120_GL },
         { "130", OPTION_VAL_130_GL },
         { "140", OPTION_VAL_140_GL },
         { "150", OPTION_VAL_150_GL },
         { "160", OPTION_VAL_160_GL },
         { "170", OPTION_VAL_170_GL },
         { "180", OPTION_VAL_180_GL },
         { "190", OPTION_VAL_190_GL },
         { "200", OPTION_VAL_200_GL },
         { "210", OPTION_VAL_210_GL },
         { "220", OPTION_VAL_220_GL },
         { "230", OPTION_VAL_230_GL },
         { "240", OPTION_VAL_240_GL },
         { "250", OPTION_VAL_250_GL },
         { "260", OPTION_VAL_260_GL },
         { "270", OPTION_VAL_270_GL },
         { "280", OPTION_VAL_280_GL },
         { "290", OPTION_VAL_290_GL },
         { "300", OPTION_VAL_300_GL },
         { "310", OPTION_VAL_310_GL },
         { "320", OPTION_VAL_320_GL },
         { "330", OPTION_VAL_330_GL },
         { "340", OPTION_VAL_340_GL },
         { "350", OPTION_VAL_350_GL },
         { "360", OPTION_VAL_360_GL },
         { "370", OPTION_VAL_370_GL },
         { "380", OPTION_VAL_380_GL },
         { "390", OPTION_VAL_390_GL },
         { "400", OPTION_VAL_400_GL },
         { "410", OPTION_VAL_410_GL },
         { "420", OPTION_VAL_420_GL },
         { "430", OPTION_VAL_430_GL },
         { "440", OPTION_VAL_440_GL },
         { "450", OPTION_VAL_450_GL },
         { "460", OPTION_VAL_460_GL },
         { "470", OPTION_VAL_470_GL },
         { "480", OPTION_VAL_480_GL },
         { "490", OPTION_VAL_490_GL },
         { "500", OPTION_VAL_500_GL },
         { "510", OPTION_VAL_510_GL },
         { "520", OPTION_VAL_520_GL },
         { "530", OPTION_VAL_530_GL },
         { "540", OPTION_VAL_540_GL },
         { "550", OPTION_VAL_550_GL },
         { "560", OPTION_VAL_560_GL },
         { "570", OPTION_VAL_570_GL },
         { "580", OPTION_VAL_580_GL },
         { "590", OPTION_VAL_590_GL },
         { "600", OPTION_VAL_600_GL },
         { "610", OPTION_VAL_610_GL },
         { "620", OPTION_VAL_620_GL },
         { "630", OPTION_VAL_630_GL },
         { "640", OPTION_VAL_640_GL },
         { "650", OPTION_VAL_650_GL },
         { "660", OPTION_VAL_660_GL },
         { "670", OPTION_VAL_670_GL },
         { "680", OPTION_VAL_680_GL },
         { "690", OPTION_VAL_690_GL },
         { "700", OPTION_VAL_700_GL },
         { "710", OPTION_VAL_710_GL },
         { "720", OPTION_VAL_720_GL },
         { "730", OPTION_VAL_730_GL },
         { "740", OPTION_VAL_740_GL },
         { "750", OPTION_VAL_750_GL },
         { "760", OPTION_VAL_760_GL },
         { "770", OPTION_VAL_770_GL },
         { "780", OPTION_VAL_780_GL },
         { "790", OPTION_VAL_790_GL },
         { "800", OPTION_VAL_800_GL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_GL,
      BSNES_PPU_FAST_LABEL_CAT_GL,
      BSNES_PPU_FAST_INFO_0_GL,
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
      BSNES_PPU_DEINTERLACE_LABEL_GL,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_GL,
      BSNES_PPU_DEINTERLACE_INFO_0_GL,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_GL,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_GL,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_GL,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_GL,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_GL,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_GL,
      BSNES_MODE7_SCALE_LABEL_CAT_GL,
      BSNES_MODE7_SCALE_INFO_0_GL,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_GL  },
         { "2x", OPTION_VAL_2X_GL  },
         { "3x", OPTION_VAL_3X_GL  },
         { "4x", OPTION_VAL_4X_GL  },
         { "5x", OPTION_VAL_5X_GL },
         { "6x", OPTION_VAL_6X_GL },
         { "7x", OPTION_VAL_7X_GL },
         { "8x", OPTION_VAL_8X_GL },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_GL,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_GL,
      BSNES_MODE7_PERSPECTIVE_INFO_0_GL,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_GL,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_GL,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_GL,
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
      BSNES_MODE7_MOSAIC_LABEL_GL,
      BSNES_MODE7_MOSAIC_LABEL_CAT_GL,
      BSNES_MODE7_MOSAIC_INFO_0_GL,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_GL,
      BSNES_DSP_FAST_LABEL_CAT_GL,
      BSNES_DSP_FAST_INFO_0_GL,
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
      BSNES_DSP_CUBIC_LABEL_GL,
      BSNES_DSP_CUBIC_LABEL_CAT_GL,
      BSNES_DSP_CUBIC_INFO_0_GL,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_GL,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_GL,
      BSNES_DSP_ECHO_SHADOW_INFO_0_GL,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_GL,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_GL,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_GL,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_GL,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_GL,
      NULL,
      BSNES_SGB_BIOS_INFO_0_GL,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_GL   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_GL },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_GL,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_GL,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_GL  },
         { "2",   OPTION_VAL_2_GL },
         { "3",   OPTION_VAL_3_GL },
         { "4",   OPTION_VAL_4_GL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_GL,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_GL,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_GL,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_GL,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_GL,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_GL,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define CATEGORY_VIDEO_LABEL_HE "וידאו"
#define CATEGORY_VIDEO_INFO_0_HE NULL
#define CATEGORY_AUDIO_LABEL_HE "שמע"
#define CATEGORY_AUDIO_INFO_0_HE NULL
#define CATEGORY_MODE7_LABEL_HE NULL
#define CATEGORY_MODE7_INFO_0_HE NULL
#define CATEGORY_SGB_LABEL_HE NULL
#define CATEGORY_SGB_INFO_0_HE NULL
#define CATEGORY_LIGHTGUN_LABEL_HE NULL
#define CATEGORY_LIGHTGUN_INFO_0_HE NULL
#define CATEGORY_OVERCLOCK_LABEL_HE NULL
#define CATEGORY_OVERCLOCK_INFO_0_HE NULL
#define CATEGORY_HACK_LABEL_HE NULL
#define CATEGORY_HACK_INFO_0_HE NULL
#define BSNES_ASPECT_RATIO_LABEL_HE NULL
#define BSNES_ASPECT_RATIO_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define OPTION_VAL_8_7_HE NULL
#define OPTION_VAL_4_3_HE NULL
#define OPTION_VAL_NTSC_HE NULL
#define OPTION_VAL_PAL_HE NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_HE NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_HE NULL
#define OPTION_VAL_OFF_HE NULL
#define BSNES_BLUR_EMULATION_LABEL_HE NULL
#define BSNES_BLUR_EMULATION_INFO_0_HE NULL
#define BSNES_HOTFIXES_LABEL_HE NULL
#define BSNES_HOTFIXES_INFO_0_HE NULL
#define BSNES_ENTROPY_LABEL_HE NULL
#define BSNES_ENTROPY_INFO_0_HE NULL
#define OPTION_VAL_LOW_HE NULL
#define OPTION_VAL_HIGH_HE NULL
#define OPTION_VAL_NONE_HE NULL
#define BSNES_CPU_OVERCLOCK_LABEL_HE NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_HE NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_HE NULL
#define OPTION_VAL_10_HE NULL
#define OPTION_VAL_20_HE NULL
#define OPTION_VAL_30_HE NULL
#define OPTION_VAL_40_HE NULL
#define OPTION_VAL_50_HE NULL
#define OPTION_VAL_60_HE NULL
#define OPTION_VAL_70_HE NULL
#define OPTION_VAL_80_HE NULL
#define OPTION_VAL_90_HE NULL
#define OPTION_VAL_100_HE NULL
#define OPTION_VAL_110_HE NULL
#define OPTION_VAL_120_HE NULL
#define OPTION_VAL_130_HE NULL
#define OPTION_VAL_140_HE NULL
#define OPTION_VAL_150_HE NULL
#define OPTION_VAL_160_HE NULL
#define OPTION_VAL_170_HE NULL
#define OPTION_VAL_180_HE NULL
#define OPTION_VAL_190_HE NULL
#define OPTION_VAL_200_HE NULL
#define OPTION_VAL_210_HE NULL
#define OPTION_VAL_220_HE NULL
#define OPTION_VAL_230_HE NULL
#define OPTION_VAL_240_HE NULL
#define OPTION_VAL_250_HE NULL
#define OPTION_VAL_260_HE NULL
#define OPTION_VAL_270_HE NULL
#define OPTION_VAL_280_HE NULL
#define OPTION_VAL_290_HE NULL
#define OPTION_VAL_300_HE NULL
#define OPTION_VAL_310_HE NULL
#define OPTION_VAL_320_HE NULL
#define OPTION_VAL_330_HE NULL
#define OPTION_VAL_340_HE NULL
#define OPTION_VAL_350_HE NULL
#define OPTION_VAL_360_HE NULL
#define OPTION_VAL_370_HE NULL
#define OPTION_VAL_380_HE NULL
#define OPTION_VAL_390_HE NULL
#define OPTION_VAL_400_HE NULL
#define BSNES_CPU_FASTMATH_LABEL_HE NULL
#define BSNES_CPU_FASTMATH_INFO_0_HE NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_HE NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_HE NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_HE NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_HE NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_HE NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_HE NULL
#define OPTION_VAL_410_HE NULL
#define OPTION_VAL_420_HE NULL
#define OPTION_VAL_430_HE NULL
#define OPTION_VAL_440_HE NULL
#define OPTION_VAL_450_HE NULL
#define OPTION_VAL_460_HE NULL
#define OPTION_VAL_470_HE NULL
#define OPTION_VAL_480_HE NULL
#define OPTION_VAL_490_HE NULL
#define OPTION_VAL_500_HE NULL
#define OPTION_VAL_510_HE NULL
#define OPTION_VAL_520_HE NULL
#define OPTION_VAL_530_HE NULL
#define OPTION_VAL_540_HE NULL
#define OPTION_VAL_550_HE NULL
#define OPTION_VAL_560_HE NULL
#define OPTION_VAL_570_HE NULL
#define OPTION_VAL_580_HE NULL
#define OPTION_VAL_590_HE NULL
#define OPTION_VAL_600_HE NULL
#define OPTION_VAL_610_HE NULL
#define OPTION_VAL_620_HE NULL
#define OPTION_VAL_630_HE NULL
#define OPTION_VAL_640_HE NULL
#define OPTION_VAL_650_HE NULL
#define OPTION_VAL_660_HE NULL
#define OPTION_VAL_670_HE NULL
#define OPTION_VAL_680_HE NULL
#define OPTION_VAL_690_HE NULL
#define OPTION_VAL_700_HE NULL
#define OPTION_VAL_710_HE NULL
#define OPTION_VAL_720_HE NULL
#define OPTION_VAL_730_HE NULL
#define OPTION_VAL_740_HE NULL
#define OPTION_VAL_750_HE NULL
#define OPTION_VAL_760_HE NULL
#define OPTION_VAL_770_HE NULL
#define OPTION_VAL_780_HE NULL
#define OPTION_VAL_790_HE NULL
#define OPTION_VAL_800_HE NULL
#define BSNES_PPU_FAST_LABEL_HE NULL
#define BSNES_PPU_FAST_LABEL_CAT_HE NULL
#define BSNES_PPU_FAST_INFO_0_HE NULL
#define BSNES_PPU_DEINTERLACE_LABEL_HE NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_HE NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_HE NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_HE NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_HE NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_HE NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_HE NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_HE NULL
#define BSNES_MODE7_SCALE_LABEL_HE NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_HE NULL
#define BSNES_MODE7_SCALE_INFO_0_HE NULL
#define OPTION_VAL_1X_HE NULL
#define OPTION_VAL_2X_HE NULL
#define OPTION_VAL_3X_HE NULL
#define OPTION_VAL_4X_HE NULL
#define OPTION_VAL_5X_HE NULL
#define OPTION_VAL_6X_HE NULL
#define OPTION_VAL_7X_HE NULL
#define OPTION_VAL_8X_HE NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_HE NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_HE NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_HE NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_HE NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_HE NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_HE NULL
#define BSNES_MODE7_MOSAIC_LABEL_HE NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_HE NULL
#define BSNES_MODE7_MOSAIC_INFO_0_HE NULL
#define BSNES_DSP_FAST_LABEL_HE NULL
#define BSNES_DSP_FAST_LABEL_CAT_HE NULL
#define BSNES_DSP_FAST_INFO_0_HE NULL
#define BSNES_DSP_CUBIC_LABEL_HE NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_HE NULL
#define BSNES_DSP_CUBIC_INFO_0_HE NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_HE NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_HE NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_HE NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_HE NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_HE NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_HE NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_HE NULL
#define BSNES_SGB_BIOS_LABEL_HE NULL
#define BSNES_SGB_BIOS_INFO_0_HE NULL
#define OPTION_VAL_SGB1_SFC_HE NULL
#define OPTION_VAL_SGB2_SFC_HE NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_HE NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_HE NULL
#define OPTION_VAL_1_HE NULL
#define OPTION_VAL_2_HE NULL
#define OPTION_VAL_3_HE NULL
#define OPTION_VAL_4_HE NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_HE NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_HE NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_HE NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_HE NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_HE NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HE,
      CATEGORY_VIDEO_INFO_0_HE
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HE,
      CATEGORY_AUDIO_INFO_0_HE
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_HE,
      CATEGORY_MODE7_INFO_0_HE
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_HE,
      CATEGORY_SGB_INFO_0_HE
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_HE,
      CATEGORY_LIGHTGUN_INFO_0_HE
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_HE,
      CATEGORY_OVERCLOCK_INFO_0_HE
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_HE,
      CATEGORY_HACK_INFO_0_HE
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_HE,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_HE,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_HE },
         { "8:7",  OPTION_VAL_8_7_HE },
         { "4:3",  OPTION_VAL_4_3_HE },
         { "NTSC", OPTION_VAL_NTSC_HE },
         { "PAL",  OPTION_VAL_PAL_HE },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_HE,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_HE,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_HE },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_HE,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_HE,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_HE,
      NULL,
      BSNES_HOTFIXES_INFO_0_HE,
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
      BSNES_ENTROPY_LABEL_HE,
      NULL,
      BSNES_ENTROPY_INFO_0_HE,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_HE },
         { "High", OPTION_VAL_HIGH_HE },
         { "None", OPTION_VAL_NONE_HE },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_HE,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_HE,
      BSNES_CPU_OVERCLOCK_INFO_0_HE,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_HE  },
         { "20",  OPTION_VAL_20_HE  },
         { "30",  OPTION_VAL_30_HE  },
         { "40",  OPTION_VAL_40_HE  },
         { "50",  OPTION_VAL_50_HE  },
         { "60",  OPTION_VAL_60_HE  },
         { "70",  OPTION_VAL_70_HE  },
         { "80",  OPTION_VAL_80_HE  },
         { "90",  OPTION_VAL_90_HE  },
         { "100", OPTION_VAL_100_HE },
         { "110", OPTION_VAL_110_HE },
         { "120", OPTION_VAL_120_HE },
         { "130", OPTION_VAL_130_HE },
         { "140", OPTION_VAL_140_HE },
         { "150", OPTION_VAL_150_HE },
         { "160", OPTION_VAL_160_HE },
         { "170", OPTION_VAL_170_HE },
         { "180", OPTION_VAL_180_HE },
         { "190", OPTION_VAL_190_HE },
         { "200", OPTION_VAL_200_HE },
         { "210", OPTION_VAL_210_HE },
         { "220", OPTION_VAL_220_HE },
         { "230", OPTION_VAL_230_HE },
         { "240", OPTION_VAL_240_HE },
         { "250", OPTION_VAL_250_HE },
         { "260", OPTION_VAL_260_HE },
         { "270", OPTION_VAL_270_HE },
         { "280", OPTION_VAL_280_HE },
         { "290", OPTION_VAL_290_HE },
         { "300", OPTION_VAL_300_HE },
         { "310", OPTION_VAL_310_HE },
         { "320", OPTION_VAL_320_HE },
         { "330", OPTION_VAL_330_HE },
         { "340", OPTION_VAL_340_HE },
         { "350", OPTION_VAL_350_HE },
         { "360", OPTION_VAL_360_HE },
         { "370", OPTION_VAL_370_HE },
         { "380", OPTION_VAL_380_HE },
         { "390", OPTION_VAL_390_HE },
         { "400", OPTION_VAL_400_HE },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_HE,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_HE,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_HE,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_HE,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_HE,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_HE  },
         { "20",  OPTION_VAL_20_HE  },
         { "30",  OPTION_VAL_30_HE  },
         { "40",  OPTION_VAL_40_HE  },
         { "50",  OPTION_VAL_50_HE  },
         { "60",  OPTION_VAL_60_HE  },
         { "70",  OPTION_VAL_70_HE  },
         { "80",  OPTION_VAL_80_HE  },
         { "90",  OPTION_VAL_90_HE  },
         { "100", OPTION_VAL_100_HE },
         { "110", OPTION_VAL_110_HE },
         { "120", OPTION_VAL_120_HE },
         { "130", OPTION_VAL_130_HE },
         { "140", OPTION_VAL_140_HE },
         { "150", OPTION_VAL_150_HE },
         { "160", OPTION_VAL_160_HE },
         { "170", OPTION_VAL_170_HE },
         { "180", OPTION_VAL_180_HE },
         { "190", OPTION_VAL_190_HE },
         { "200", OPTION_VAL_200_HE },
         { "210", OPTION_VAL_210_HE },
         { "220", OPTION_VAL_220_HE },
         { "230", OPTION_VAL_230_HE },
         { "240", OPTION_VAL_240_HE },
         { "250", OPTION_VAL_250_HE },
         { "260", OPTION_VAL_260_HE },
         { "270", OPTION_VAL_270_HE },
         { "280", OPTION_VAL_280_HE },
         { "290", OPTION_VAL_290_HE },
         { "300", OPTION_VAL_300_HE },
         { "310", OPTION_VAL_310_HE },
         { "320", OPTION_VAL_320_HE },
         { "330", OPTION_VAL_330_HE },
         { "340", OPTION_VAL_340_HE },
         { "350", OPTION_VAL_350_HE },
         { "360", OPTION_VAL_360_HE },
         { "370", OPTION_VAL_370_HE },
         { "380", OPTION_VAL_380_HE },
         { "390", OPTION_VAL_390_HE },
         { "400", OPTION_VAL_400_HE },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_HE,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_HE,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_HE,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_HE  },
         { "20",  OPTION_VAL_20_HE  },
         { "30",  OPTION_VAL_30_HE  },
         { "40",  OPTION_VAL_40_HE  },
         { "50",  OPTION_VAL_50_HE  },
         { "60",  OPTION_VAL_60_HE  },
         { "70",  OPTION_VAL_70_HE  },
         { "80",  OPTION_VAL_80_HE  },
         { "90",  OPTION_VAL_90_HE  },
         { "100", OPTION_VAL_100_HE },
         { "110", OPTION_VAL_110_HE },
         { "120", OPTION_VAL_120_HE },
         { "130", OPTION_VAL_130_HE },
         { "140", OPTION_VAL_140_HE },
         { "150", OPTION_VAL_150_HE },
         { "160", OPTION_VAL_160_HE },
         { "170", OPTION_VAL_170_HE },
         { "180", OPTION_VAL_180_HE },
         { "190", OPTION_VAL_190_HE },
         { "200", OPTION_VAL_200_HE },
         { "210", OPTION_VAL_210_HE },
         { "220", OPTION_VAL_220_HE },
         { "230", OPTION_VAL_230_HE },
         { "240", OPTION_VAL_240_HE },
         { "250", OPTION_VAL_250_HE },
         { "260", OPTION_VAL_260_HE },
         { "270", OPTION_VAL_270_HE },
         { "280", OPTION_VAL_280_HE },
         { "290", OPTION_VAL_290_HE },
         { "300", OPTION_VAL_300_HE },
         { "310", OPTION_VAL_310_HE },
         { "320", OPTION_VAL_320_HE },
         { "330", OPTION_VAL_330_HE },
         { "340", OPTION_VAL_340_HE },
         { "350", OPTION_VAL_350_HE },
         { "360", OPTION_VAL_360_HE },
         { "370", OPTION_VAL_370_HE },
         { "380", OPTION_VAL_380_HE },
         { "390", OPTION_VAL_390_HE },
         { "400", OPTION_VAL_400_HE },
         { "410", OPTION_VAL_410_HE },
         { "420", OPTION_VAL_420_HE },
         { "430", OPTION_VAL_430_HE },
         { "440", OPTION_VAL_440_HE },
         { "450", OPTION_VAL_450_HE },
         { "460", OPTION_VAL_460_HE },
         { "470", OPTION_VAL_470_HE },
         { "480", OPTION_VAL_480_HE },
         { "490", OPTION_VAL_490_HE },
         { "500", OPTION_VAL_500_HE },
         { "510", OPTION_VAL_510_HE },
         { "520", OPTION_VAL_520_HE },
         { "530", OPTION_VAL_530_HE },
         { "540", OPTION_VAL_540_HE },
         { "550", OPTION_VAL_550_HE },
         { "560", OPTION_VAL_560_HE },
         { "570", OPTION_VAL_570_HE },
         { "580", OPTION_VAL_580_HE },
         { "590", OPTION_VAL_590_HE },
         { "600", OPTION_VAL_600_HE },
         { "610", OPTION_VAL_610_HE },
         { "620", OPTION_VAL_620_HE },
         { "630", OPTION_VAL_630_HE },
         { "640", OPTION_VAL_640_HE },
         { "650", OPTION_VAL_650_HE },
         { "660", OPTION_VAL_660_HE },
         { "670", OPTION_VAL_670_HE },
         { "680", OPTION_VAL_680_HE },
         { "690", OPTION_VAL_690_HE },
         { "700", OPTION_VAL_700_HE },
         { "710", OPTION_VAL_710_HE },
         { "720", OPTION_VAL_720_HE },
         { "730", OPTION_VAL_730_HE },
         { "740", OPTION_VAL_740_HE },
         { "750", OPTION_VAL_750_HE },
         { "760", OPTION_VAL_760_HE },
         { "770", OPTION_VAL_770_HE },
         { "780", OPTION_VAL_780_HE },
         { "790", OPTION_VAL_790_HE },
         { "800", OPTION_VAL_800_HE },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_HE,
      BSNES_PPU_FAST_LABEL_CAT_HE,
      BSNES_PPU_FAST_INFO_0_HE,
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
      BSNES_PPU_DEINTERLACE_LABEL_HE,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_HE,
      BSNES_PPU_DEINTERLACE_INFO_0_HE,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_HE,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_HE,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_HE,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_HE,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_HE,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_HE,
      BSNES_MODE7_SCALE_LABEL_CAT_HE,
      BSNES_MODE7_SCALE_INFO_0_HE,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_HE  },
         { "2x", OPTION_VAL_2X_HE  },
         { "3x", OPTION_VAL_3X_HE  },
         { "4x", OPTION_VAL_4X_HE  },
         { "5x", OPTION_VAL_5X_HE },
         { "6x", OPTION_VAL_6X_HE },
         { "7x", OPTION_VAL_7X_HE },
         { "8x", OPTION_VAL_8X_HE },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_HE,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_HE,
      BSNES_MODE7_PERSPECTIVE_INFO_0_HE,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_HE,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_HE,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_HE,
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
      BSNES_MODE7_MOSAIC_LABEL_HE,
      BSNES_MODE7_MOSAIC_LABEL_CAT_HE,
      BSNES_MODE7_MOSAIC_INFO_0_HE,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_HE,
      BSNES_DSP_FAST_LABEL_CAT_HE,
      BSNES_DSP_FAST_INFO_0_HE,
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
      BSNES_DSP_CUBIC_LABEL_HE,
      BSNES_DSP_CUBIC_LABEL_CAT_HE,
      BSNES_DSP_CUBIC_INFO_0_HE,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_HE,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_HE,
      BSNES_DSP_ECHO_SHADOW_INFO_0_HE,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_HE,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_HE,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_HE,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_HE,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_HE,
      NULL,
      BSNES_SGB_BIOS_INFO_0_HE,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_HE   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_HE },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_HE,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_HE,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_HE  },
         { "2",   OPTION_VAL_2_HE },
         { "3",   OPTION_VAL_3_HE },
         { "4",   OPTION_VAL_4_HE },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_HE,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_HE,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_HE,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_HE,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_HE,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_HE,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HU */

#define CATEGORY_VIDEO_LABEL_HU "Videó"
#define CATEGORY_VIDEO_INFO_0_HU "Módosítsa a videokimeneti beállításokat."
#define CATEGORY_AUDIO_LABEL_HU "Hang"
#define CATEGORY_AUDIO_INFO_0_HU "Hang beállítások módosítása."
#define CATEGORY_MODE7_LABEL_HU NULL
#define CATEGORY_MODE7_INFO_0_HU NULL
#define CATEGORY_SGB_LABEL_HU NULL
#define CATEGORY_SGB_INFO_0_HU NULL
#define CATEGORY_LIGHTGUN_LABEL_HU NULL
#define CATEGORY_LIGHTGUN_INFO_0_HU NULL
#define CATEGORY_OVERCLOCK_LABEL_HU NULL
#define CATEGORY_OVERCLOCK_INFO_0_HU NULL
#define CATEGORY_HACK_LABEL_HU NULL
#define CATEGORY_HACK_INFO_0_HU NULL
#define BSNES_ASPECT_RATIO_LABEL_HU NULL
#define BSNES_ASPECT_RATIO_INFO_0_HU NULL
#define OPTION_VAL_AUTO_HU NULL
#define OPTION_VAL_8_7_HU NULL
#define OPTION_VAL_4_3_HU NULL
#define OPTION_VAL_NTSC_HU NULL
#define OPTION_VAL_PAL_HU NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_HU NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_HU NULL
#define OPTION_VAL_OFF_HU NULL
#define BSNES_BLUR_EMULATION_LABEL_HU NULL
#define BSNES_BLUR_EMULATION_INFO_0_HU NULL
#define BSNES_HOTFIXES_LABEL_HU NULL
#define BSNES_HOTFIXES_INFO_0_HU NULL
#define BSNES_ENTROPY_LABEL_HU NULL
#define BSNES_ENTROPY_INFO_0_HU NULL
#define OPTION_VAL_LOW_HU NULL
#define OPTION_VAL_HIGH_HU NULL
#define OPTION_VAL_NONE_HU NULL
#define BSNES_CPU_OVERCLOCK_LABEL_HU NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_HU NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_HU NULL
#define OPTION_VAL_10_HU NULL
#define OPTION_VAL_20_HU NULL
#define OPTION_VAL_30_HU NULL
#define OPTION_VAL_40_HU NULL
#define OPTION_VAL_50_HU NULL
#define OPTION_VAL_60_HU NULL
#define OPTION_VAL_70_HU NULL
#define OPTION_VAL_80_HU NULL
#define OPTION_VAL_90_HU NULL
#define OPTION_VAL_100_HU NULL
#define OPTION_VAL_110_HU NULL
#define OPTION_VAL_120_HU NULL
#define OPTION_VAL_130_HU NULL
#define OPTION_VAL_140_HU NULL
#define OPTION_VAL_150_HU NULL
#define OPTION_VAL_160_HU NULL
#define OPTION_VAL_170_HU NULL
#define OPTION_VAL_180_HU NULL
#define OPTION_VAL_190_HU NULL
#define OPTION_VAL_200_HU NULL
#define OPTION_VAL_210_HU NULL
#define OPTION_VAL_220_HU NULL
#define OPTION_VAL_230_HU NULL
#define OPTION_VAL_240_HU NULL
#define OPTION_VAL_250_HU NULL
#define OPTION_VAL_260_HU NULL
#define OPTION_VAL_270_HU NULL
#define OPTION_VAL_280_HU NULL
#define OPTION_VAL_290_HU NULL
#define OPTION_VAL_300_HU NULL
#define OPTION_VAL_310_HU NULL
#define OPTION_VAL_320_HU NULL
#define OPTION_VAL_330_HU NULL
#define OPTION_VAL_340_HU NULL
#define OPTION_VAL_350_HU NULL
#define OPTION_VAL_360_HU NULL
#define OPTION_VAL_370_HU NULL
#define OPTION_VAL_380_HU NULL
#define OPTION_VAL_390_HU NULL
#define OPTION_VAL_400_HU NULL
#define BSNES_CPU_FASTMATH_LABEL_HU NULL
#define BSNES_CPU_FASTMATH_INFO_0_HU NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_HU NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_HU NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_HU NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_HU NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_HU NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_HU NULL
#define OPTION_VAL_410_HU NULL
#define OPTION_VAL_420_HU NULL
#define OPTION_VAL_430_HU NULL
#define OPTION_VAL_440_HU NULL
#define OPTION_VAL_450_HU NULL
#define OPTION_VAL_460_HU NULL
#define OPTION_VAL_470_HU NULL
#define OPTION_VAL_480_HU NULL
#define OPTION_VAL_490_HU NULL
#define OPTION_VAL_500_HU NULL
#define OPTION_VAL_510_HU NULL
#define OPTION_VAL_520_HU NULL
#define OPTION_VAL_530_HU NULL
#define OPTION_VAL_540_HU NULL
#define OPTION_VAL_550_HU NULL
#define OPTION_VAL_560_HU NULL
#define OPTION_VAL_570_HU NULL
#define OPTION_VAL_580_HU NULL
#define OPTION_VAL_590_HU NULL
#define OPTION_VAL_600_HU NULL
#define OPTION_VAL_610_HU NULL
#define OPTION_VAL_620_HU NULL
#define OPTION_VAL_630_HU NULL
#define OPTION_VAL_640_HU NULL
#define OPTION_VAL_650_HU NULL
#define OPTION_VAL_660_HU NULL
#define OPTION_VAL_670_HU NULL
#define OPTION_VAL_680_HU NULL
#define OPTION_VAL_690_HU NULL
#define OPTION_VAL_700_HU NULL
#define OPTION_VAL_710_HU NULL
#define OPTION_VAL_720_HU NULL
#define OPTION_VAL_730_HU NULL
#define OPTION_VAL_740_HU NULL
#define OPTION_VAL_750_HU NULL
#define OPTION_VAL_760_HU NULL
#define OPTION_VAL_770_HU NULL
#define OPTION_VAL_780_HU NULL
#define OPTION_VAL_790_HU NULL
#define OPTION_VAL_800_HU NULL
#define BSNES_PPU_FAST_LABEL_HU NULL
#define BSNES_PPU_FAST_LABEL_CAT_HU NULL
#define BSNES_PPU_FAST_INFO_0_HU NULL
#define BSNES_PPU_DEINTERLACE_LABEL_HU NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_HU NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_HU NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_HU NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_HU NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_HU NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_HU NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_HU NULL
#define BSNES_MODE7_SCALE_LABEL_HU NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_HU NULL
#define BSNES_MODE7_SCALE_INFO_0_HU NULL
#define OPTION_VAL_1X_HU NULL
#define OPTION_VAL_2X_HU NULL
#define OPTION_VAL_3X_HU NULL
#define OPTION_VAL_4X_HU NULL
#define OPTION_VAL_5X_HU NULL
#define OPTION_VAL_6X_HU NULL
#define OPTION_VAL_7X_HU NULL
#define OPTION_VAL_8X_HU NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_HU NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_HU NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_HU NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_HU NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_HU NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_HU NULL
#define BSNES_MODE7_MOSAIC_LABEL_HU NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_HU NULL
#define BSNES_MODE7_MOSAIC_INFO_0_HU NULL
#define BSNES_DSP_FAST_LABEL_HU NULL
#define BSNES_DSP_FAST_LABEL_CAT_HU NULL
#define BSNES_DSP_FAST_INFO_0_HU NULL
#define BSNES_DSP_CUBIC_LABEL_HU NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_HU NULL
#define BSNES_DSP_CUBIC_INFO_0_HU NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_HU NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_HU NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_HU NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_HU NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_HU NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_HU NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_HU NULL
#define BSNES_SGB_BIOS_LABEL_HU NULL
#define BSNES_SGB_BIOS_INFO_0_HU NULL
#define OPTION_VAL_SGB1_SFC_HU NULL
#define OPTION_VAL_SGB2_SFC_HU NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_HU NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_HU NULL
#define OPTION_VAL_1_HU NULL
#define OPTION_VAL_2_HU NULL
#define OPTION_VAL_3_HU NULL
#define OPTION_VAL_4_HU NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_HU NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_HU NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_HU NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_HU NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_HU NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_HU NULL

struct retro_core_option_v2_category option_cats_hu[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HU,
      CATEGORY_VIDEO_INFO_0_HU
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HU,
      CATEGORY_AUDIO_INFO_0_HU
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_HU,
      CATEGORY_MODE7_INFO_0_HU
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_HU,
      CATEGORY_SGB_INFO_0_HU
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_HU,
      CATEGORY_LIGHTGUN_INFO_0_HU
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_HU,
      CATEGORY_OVERCLOCK_INFO_0_HU
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_HU,
      CATEGORY_HACK_INFO_0_HU
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_HU,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_HU,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_HU },
         { "8:7",  OPTION_VAL_8_7_HU },
         { "4:3",  OPTION_VAL_4_3_HU },
         { "NTSC", OPTION_VAL_NTSC_HU },
         { "PAL",  OPTION_VAL_PAL_HU },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_HU,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_HU,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_HU },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_HU,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_HU,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_HU,
      NULL,
      BSNES_HOTFIXES_INFO_0_HU,
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
      BSNES_ENTROPY_LABEL_HU,
      NULL,
      BSNES_ENTROPY_INFO_0_HU,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_HU },
         { "High", OPTION_VAL_HIGH_HU },
         { "None", OPTION_VAL_NONE_HU },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_HU,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_HU,
      BSNES_CPU_OVERCLOCK_INFO_0_HU,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_HU  },
         { "20",  OPTION_VAL_20_HU  },
         { "30",  OPTION_VAL_30_HU  },
         { "40",  OPTION_VAL_40_HU  },
         { "50",  OPTION_VAL_50_HU  },
         { "60",  OPTION_VAL_60_HU  },
         { "70",  OPTION_VAL_70_HU  },
         { "80",  OPTION_VAL_80_HU  },
         { "90",  OPTION_VAL_90_HU  },
         { "100", OPTION_VAL_100_HU },
         { "110", OPTION_VAL_110_HU },
         { "120", OPTION_VAL_120_HU },
         { "130", OPTION_VAL_130_HU },
         { "140", OPTION_VAL_140_HU },
         { "150", OPTION_VAL_150_HU },
         { "160", OPTION_VAL_160_HU },
         { "170", OPTION_VAL_170_HU },
         { "180", OPTION_VAL_180_HU },
         { "190", OPTION_VAL_190_HU },
         { "200", OPTION_VAL_200_HU },
         { "210", OPTION_VAL_210_HU },
         { "220", OPTION_VAL_220_HU },
         { "230", OPTION_VAL_230_HU },
         { "240", OPTION_VAL_240_HU },
         { "250", OPTION_VAL_250_HU },
         { "260", OPTION_VAL_260_HU },
         { "270", OPTION_VAL_270_HU },
         { "280", OPTION_VAL_280_HU },
         { "290", OPTION_VAL_290_HU },
         { "300", OPTION_VAL_300_HU },
         { "310", OPTION_VAL_310_HU },
         { "320", OPTION_VAL_320_HU },
         { "330", OPTION_VAL_330_HU },
         { "340", OPTION_VAL_340_HU },
         { "350", OPTION_VAL_350_HU },
         { "360", OPTION_VAL_360_HU },
         { "370", OPTION_VAL_370_HU },
         { "380", OPTION_VAL_380_HU },
         { "390", OPTION_VAL_390_HU },
         { "400", OPTION_VAL_400_HU },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_HU,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_HU,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_HU,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_HU,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_HU,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_HU  },
         { "20",  OPTION_VAL_20_HU  },
         { "30",  OPTION_VAL_30_HU  },
         { "40",  OPTION_VAL_40_HU  },
         { "50",  OPTION_VAL_50_HU  },
         { "60",  OPTION_VAL_60_HU  },
         { "70",  OPTION_VAL_70_HU  },
         { "80",  OPTION_VAL_80_HU  },
         { "90",  OPTION_VAL_90_HU  },
         { "100", OPTION_VAL_100_HU },
         { "110", OPTION_VAL_110_HU },
         { "120", OPTION_VAL_120_HU },
         { "130", OPTION_VAL_130_HU },
         { "140", OPTION_VAL_140_HU },
         { "150", OPTION_VAL_150_HU },
         { "160", OPTION_VAL_160_HU },
         { "170", OPTION_VAL_170_HU },
         { "180", OPTION_VAL_180_HU },
         { "190", OPTION_VAL_190_HU },
         { "200", OPTION_VAL_200_HU },
         { "210", OPTION_VAL_210_HU },
         { "220", OPTION_VAL_220_HU },
         { "230", OPTION_VAL_230_HU },
         { "240", OPTION_VAL_240_HU },
         { "250", OPTION_VAL_250_HU },
         { "260", OPTION_VAL_260_HU },
         { "270", OPTION_VAL_270_HU },
         { "280", OPTION_VAL_280_HU },
         { "290", OPTION_VAL_290_HU },
         { "300", OPTION_VAL_300_HU },
         { "310", OPTION_VAL_310_HU },
         { "320", OPTION_VAL_320_HU },
         { "330", OPTION_VAL_330_HU },
         { "340", OPTION_VAL_340_HU },
         { "350", OPTION_VAL_350_HU },
         { "360", OPTION_VAL_360_HU },
         { "370", OPTION_VAL_370_HU },
         { "380", OPTION_VAL_380_HU },
         { "390", OPTION_VAL_390_HU },
         { "400", OPTION_VAL_400_HU },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_HU,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_HU,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_HU,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_HU  },
         { "20",  OPTION_VAL_20_HU  },
         { "30",  OPTION_VAL_30_HU  },
         { "40",  OPTION_VAL_40_HU  },
         { "50",  OPTION_VAL_50_HU  },
         { "60",  OPTION_VAL_60_HU  },
         { "70",  OPTION_VAL_70_HU  },
         { "80",  OPTION_VAL_80_HU  },
         { "90",  OPTION_VAL_90_HU  },
         { "100", OPTION_VAL_100_HU },
         { "110", OPTION_VAL_110_HU },
         { "120", OPTION_VAL_120_HU },
         { "130", OPTION_VAL_130_HU },
         { "140", OPTION_VAL_140_HU },
         { "150", OPTION_VAL_150_HU },
         { "160", OPTION_VAL_160_HU },
         { "170", OPTION_VAL_170_HU },
         { "180", OPTION_VAL_180_HU },
         { "190", OPTION_VAL_190_HU },
         { "200", OPTION_VAL_200_HU },
         { "210", OPTION_VAL_210_HU },
         { "220", OPTION_VAL_220_HU },
         { "230", OPTION_VAL_230_HU },
         { "240", OPTION_VAL_240_HU },
         { "250", OPTION_VAL_250_HU },
         { "260", OPTION_VAL_260_HU },
         { "270", OPTION_VAL_270_HU },
         { "280", OPTION_VAL_280_HU },
         { "290", OPTION_VAL_290_HU },
         { "300", OPTION_VAL_300_HU },
         { "310", OPTION_VAL_310_HU },
         { "320", OPTION_VAL_320_HU },
         { "330", OPTION_VAL_330_HU },
         { "340", OPTION_VAL_340_HU },
         { "350", OPTION_VAL_350_HU },
         { "360", OPTION_VAL_360_HU },
         { "370", OPTION_VAL_370_HU },
         { "380", OPTION_VAL_380_HU },
         { "390", OPTION_VAL_390_HU },
         { "400", OPTION_VAL_400_HU },
         { "410", OPTION_VAL_410_HU },
         { "420", OPTION_VAL_420_HU },
         { "430", OPTION_VAL_430_HU },
         { "440", OPTION_VAL_440_HU },
         { "450", OPTION_VAL_450_HU },
         { "460", OPTION_VAL_460_HU },
         { "470", OPTION_VAL_470_HU },
         { "480", OPTION_VAL_480_HU },
         { "490", OPTION_VAL_490_HU },
         { "500", OPTION_VAL_500_HU },
         { "510", OPTION_VAL_510_HU },
         { "520", OPTION_VAL_520_HU },
         { "530", OPTION_VAL_530_HU },
         { "540", OPTION_VAL_540_HU },
         { "550", OPTION_VAL_550_HU },
         { "560", OPTION_VAL_560_HU },
         { "570", OPTION_VAL_570_HU },
         { "580", OPTION_VAL_580_HU },
         { "590", OPTION_VAL_590_HU },
         { "600", OPTION_VAL_600_HU },
         { "610", OPTION_VAL_610_HU },
         { "620", OPTION_VAL_620_HU },
         { "630", OPTION_VAL_630_HU },
         { "640", OPTION_VAL_640_HU },
         { "650", OPTION_VAL_650_HU },
         { "660", OPTION_VAL_660_HU },
         { "670", OPTION_VAL_670_HU },
         { "680", OPTION_VAL_680_HU },
         { "690", OPTION_VAL_690_HU },
         { "700", OPTION_VAL_700_HU },
         { "710", OPTION_VAL_710_HU },
         { "720", OPTION_VAL_720_HU },
         { "730", OPTION_VAL_730_HU },
         { "740", OPTION_VAL_740_HU },
         { "750", OPTION_VAL_750_HU },
         { "760", OPTION_VAL_760_HU },
         { "770", OPTION_VAL_770_HU },
         { "780", OPTION_VAL_780_HU },
         { "790", OPTION_VAL_790_HU },
         { "800", OPTION_VAL_800_HU },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_HU,
      BSNES_PPU_FAST_LABEL_CAT_HU,
      BSNES_PPU_FAST_INFO_0_HU,
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
      BSNES_PPU_DEINTERLACE_LABEL_HU,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_HU,
      BSNES_PPU_DEINTERLACE_INFO_0_HU,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_HU,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_HU,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_HU,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_HU,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_HU,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_HU,
      BSNES_MODE7_SCALE_LABEL_CAT_HU,
      BSNES_MODE7_SCALE_INFO_0_HU,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_HU  },
         { "2x", OPTION_VAL_2X_HU  },
         { "3x", OPTION_VAL_3X_HU  },
         { "4x", OPTION_VAL_4X_HU  },
         { "5x", OPTION_VAL_5X_HU },
         { "6x", OPTION_VAL_6X_HU },
         { "7x", OPTION_VAL_7X_HU },
         { "8x", OPTION_VAL_8X_HU },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_HU,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_HU,
      BSNES_MODE7_PERSPECTIVE_INFO_0_HU,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_HU,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_HU,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_HU,
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
      BSNES_MODE7_MOSAIC_LABEL_HU,
      BSNES_MODE7_MOSAIC_LABEL_CAT_HU,
      BSNES_MODE7_MOSAIC_INFO_0_HU,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_HU,
      BSNES_DSP_FAST_LABEL_CAT_HU,
      BSNES_DSP_FAST_INFO_0_HU,
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
      BSNES_DSP_CUBIC_LABEL_HU,
      BSNES_DSP_CUBIC_LABEL_CAT_HU,
      BSNES_DSP_CUBIC_INFO_0_HU,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_HU,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_HU,
      BSNES_DSP_ECHO_SHADOW_INFO_0_HU,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_HU,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_HU,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_HU,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_HU,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_HU,
      NULL,
      BSNES_SGB_BIOS_INFO_0_HU,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_HU   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_HU },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_HU,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_HU,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_HU  },
         { "2",   OPTION_VAL_2_HU },
         { "3",   OPTION_VAL_3_HU },
         { "4",   OPTION_VAL_4_HU },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_HU,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_HU,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_HU,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_HU,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_HU,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_HU,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define CATEGORY_VIDEO_LABEL_ID NULL
#define CATEGORY_VIDEO_INFO_0_ID "Ubah setelan luaran video."
#define CATEGORY_AUDIO_LABEL_ID "Suara"
#define CATEGORY_AUDIO_INFO_0_ID "Ubah pengaturan keluaran audio."
#define CATEGORY_MODE7_LABEL_ID NULL
#define CATEGORY_MODE7_INFO_0_ID NULL
#define CATEGORY_SGB_LABEL_ID NULL
#define CATEGORY_SGB_INFO_0_ID NULL
#define CATEGORY_LIGHTGUN_LABEL_ID NULL
#define CATEGORY_LIGHTGUN_INFO_0_ID NULL
#define CATEGORY_OVERCLOCK_LABEL_ID NULL
#define CATEGORY_OVERCLOCK_INFO_0_ID NULL
#define CATEGORY_HACK_LABEL_ID NULL
#define CATEGORY_HACK_INFO_0_ID NULL
#define BSNES_ASPECT_RATIO_LABEL_ID NULL
#define BSNES_ASPECT_RATIO_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID NULL
#define OPTION_VAL_8_7_ID NULL
#define OPTION_VAL_4_3_ID NULL
#define OPTION_VAL_NTSC_ID NULL
#define OPTION_VAL_PAL_ID NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_ID NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_ID NULL
#define OPTION_VAL_OFF_ID NULL
#define BSNES_BLUR_EMULATION_LABEL_ID NULL
#define BSNES_BLUR_EMULATION_INFO_0_ID NULL
#define BSNES_HOTFIXES_LABEL_ID NULL
#define BSNES_HOTFIXES_INFO_0_ID NULL
#define BSNES_ENTROPY_LABEL_ID NULL
#define BSNES_ENTROPY_INFO_0_ID NULL
#define OPTION_VAL_LOW_ID NULL
#define OPTION_VAL_HIGH_ID NULL
#define OPTION_VAL_NONE_ID NULL
#define BSNES_CPU_OVERCLOCK_LABEL_ID NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_ID NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_ID NULL
#define OPTION_VAL_10_ID NULL
#define OPTION_VAL_20_ID NULL
#define OPTION_VAL_30_ID NULL
#define OPTION_VAL_40_ID NULL
#define OPTION_VAL_50_ID NULL
#define OPTION_VAL_60_ID NULL
#define OPTION_VAL_70_ID NULL
#define OPTION_VAL_80_ID NULL
#define OPTION_VAL_90_ID NULL
#define OPTION_VAL_100_ID NULL
#define OPTION_VAL_110_ID NULL
#define OPTION_VAL_120_ID NULL
#define OPTION_VAL_130_ID NULL
#define OPTION_VAL_140_ID NULL
#define OPTION_VAL_150_ID NULL
#define OPTION_VAL_160_ID NULL
#define OPTION_VAL_170_ID NULL
#define OPTION_VAL_180_ID NULL
#define OPTION_VAL_190_ID NULL
#define OPTION_VAL_200_ID NULL
#define OPTION_VAL_210_ID NULL
#define OPTION_VAL_220_ID NULL
#define OPTION_VAL_230_ID NULL
#define OPTION_VAL_240_ID NULL
#define OPTION_VAL_250_ID NULL
#define OPTION_VAL_260_ID NULL
#define OPTION_VAL_270_ID NULL
#define OPTION_VAL_280_ID NULL
#define OPTION_VAL_290_ID NULL
#define OPTION_VAL_300_ID NULL
#define OPTION_VAL_310_ID NULL
#define OPTION_VAL_320_ID NULL
#define OPTION_VAL_330_ID NULL
#define OPTION_VAL_340_ID NULL
#define OPTION_VAL_350_ID NULL
#define OPTION_VAL_360_ID NULL
#define OPTION_VAL_370_ID NULL
#define OPTION_VAL_380_ID NULL
#define OPTION_VAL_390_ID NULL
#define OPTION_VAL_400_ID NULL
#define BSNES_CPU_FASTMATH_LABEL_ID NULL
#define BSNES_CPU_FASTMATH_INFO_0_ID NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_ID NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_ID NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_ID NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_ID NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_ID NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_ID NULL
#define OPTION_VAL_410_ID NULL
#define OPTION_VAL_420_ID NULL
#define OPTION_VAL_430_ID NULL
#define OPTION_VAL_440_ID NULL
#define OPTION_VAL_450_ID NULL
#define OPTION_VAL_460_ID NULL
#define OPTION_VAL_470_ID NULL
#define OPTION_VAL_480_ID NULL
#define OPTION_VAL_490_ID NULL
#define OPTION_VAL_500_ID NULL
#define OPTION_VAL_510_ID NULL
#define OPTION_VAL_520_ID NULL
#define OPTION_VAL_530_ID NULL
#define OPTION_VAL_540_ID NULL
#define OPTION_VAL_550_ID NULL
#define OPTION_VAL_560_ID NULL
#define OPTION_VAL_570_ID NULL
#define OPTION_VAL_580_ID NULL
#define OPTION_VAL_590_ID NULL
#define OPTION_VAL_600_ID NULL
#define OPTION_VAL_610_ID NULL
#define OPTION_VAL_620_ID NULL
#define OPTION_VAL_630_ID NULL
#define OPTION_VAL_640_ID NULL
#define OPTION_VAL_650_ID NULL
#define OPTION_VAL_660_ID NULL
#define OPTION_VAL_670_ID NULL
#define OPTION_VAL_680_ID NULL
#define OPTION_VAL_690_ID NULL
#define OPTION_VAL_700_ID NULL
#define OPTION_VAL_710_ID NULL
#define OPTION_VAL_720_ID NULL
#define OPTION_VAL_730_ID NULL
#define OPTION_VAL_740_ID NULL
#define OPTION_VAL_750_ID NULL
#define OPTION_VAL_760_ID NULL
#define OPTION_VAL_770_ID NULL
#define OPTION_VAL_780_ID NULL
#define OPTION_VAL_790_ID NULL
#define OPTION_VAL_800_ID NULL
#define BSNES_PPU_FAST_LABEL_ID NULL
#define BSNES_PPU_FAST_LABEL_CAT_ID NULL
#define BSNES_PPU_FAST_INFO_0_ID NULL
#define BSNES_PPU_DEINTERLACE_LABEL_ID NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_ID NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_ID NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_ID NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_ID NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_ID NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_ID NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_ID NULL
#define BSNES_MODE7_SCALE_LABEL_ID NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_ID NULL
#define BSNES_MODE7_SCALE_INFO_0_ID NULL
#define OPTION_VAL_1X_ID NULL
#define OPTION_VAL_2X_ID NULL
#define OPTION_VAL_3X_ID NULL
#define OPTION_VAL_4X_ID NULL
#define OPTION_VAL_5X_ID NULL
#define OPTION_VAL_6X_ID NULL
#define OPTION_VAL_7X_ID NULL
#define OPTION_VAL_8X_ID NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_ID NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_ID NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_ID NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_ID NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_ID NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_ID NULL
#define BSNES_MODE7_MOSAIC_LABEL_ID NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_ID NULL
#define BSNES_MODE7_MOSAIC_INFO_0_ID NULL
#define BSNES_DSP_FAST_LABEL_ID NULL
#define BSNES_DSP_FAST_LABEL_CAT_ID NULL
#define BSNES_DSP_FAST_INFO_0_ID NULL
#define BSNES_DSP_CUBIC_LABEL_ID NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_ID NULL
#define BSNES_DSP_CUBIC_INFO_0_ID NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_ID NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_ID NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_ID NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_ID NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_ID NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_ID NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_ID NULL
#define BSNES_SGB_BIOS_LABEL_ID NULL
#define BSNES_SGB_BIOS_INFO_0_ID NULL
#define OPTION_VAL_SGB1_SFC_ID NULL
#define OPTION_VAL_SGB2_SFC_ID NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_ID NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_ID NULL
#define OPTION_VAL_1_ID NULL
#define OPTION_VAL_2_ID NULL
#define OPTION_VAL_3_ID NULL
#define OPTION_VAL_4_ID NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_ID NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_ID NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_ID NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_ID NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_ID NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ID,
      CATEGORY_VIDEO_INFO_0_ID
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_ID,
      CATEGORY_AUDIO_INFO_0_ID
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_ID,
      CATEGORY_MODE7_INFO_0_ID
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_ID,
      CATEGORY_SGB_INFO_0_ID
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_ID,
      CATEGORY_LIGHTGUN_INFO_0_ID
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_ID,
      CATEGORY_OVERCLOCK_INFO_0_ID
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_ID,
      CATEGORY_HACK_INFO_0_ID
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_ID,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_ID,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_ID },
         { "8:7",  OPTION_VAL_8_7_ID },
         { "4:3",  OPTION_VAL_4_3_ID },
         { "NTSC", OPTION_VAL_NTSC_ID },
         { "PAL",  OPTION_VAL_PAL_ID },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_ID,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_ID,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_ID },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_ID,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_ID,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_ID,
      NULL,
      BSNES_HOTFIXES_INFO_0_ID,
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
      BSNES_ENTROPY_LABEL_ID,
      NULL,
      BSNES_ENTROPY_INFO_0_ID,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_ID },
         { "High", OPTION_VAL_HIGH_ID },
         { "None", OPTION_VAL_NONE_ID },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_ID,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_ID,
      BSNES_CPU_OVERCLOCK_INFO_0_ID,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_ID  },
         { "20",  OPTION_VAL_20_ID  },
         { "30",  OPTION_VAL_30_ID  },
         { "40",  OPTION_VAL_40_ID  },
         { "50",  OPTION_VAL_50_ID  },
         { "60",  OPTION_VAL_60_ID  },
         { "70",  OPTION_VAL_70_ID  },
         { "80",  OPTION_VAL_80_ID  },
         { "90",  OPTION_VAL_90_ID  },
         { "100", OPTION_VAL_100_ID },
         { "110", OPTION_VAL_110_ID },
         { "120", OPTION_VAL_120_ID },
         { "130", OPTION_VAL_130_ID },
         { "140", OPTION_VAL_140_ID },
         { "150", OPTION_VAL_150_ID },
         { "160", OPTION_VAL_160_ID },
         { "170", OPTION_VAL_170_ID },
         { "180", OPTION_VAL_180_ID },
         { "190", OPTION_VAL_190_ID },
         { "200", OPTION_VAL_200_ID },
         { "210", OPTION_VAL_210_ID },
         { "220", OPTION_VAL_220_ID },
         { "230", OPTION_VAL_230_ID },
         { "240", OPTION_VAL_240_ID },
         { "250", OPTION_VAL_250_ID },
         { "260", OPTION_VAL_260_ID },
         { "270", OPTION_VAL_270_ID },
         { "280", OPTION_VAL_280_ID },
         { "290", OPTION_VAL_290_ID },
         { "300", OPTION_VAL_300_ID },
         { "310", OPTION_VAL_310_ID },
         { "320", OPTION_VAL_320_ID },
         { "330", OPTION_VAL_330_ID },
         { "340", OPTION_VAL_340_ID },
         { "350", OPTION_VAL_350_ID },
         { "360", OPTION_VAL_360_ID },
         { "370", OPTION_VAL_370_ID },
         { "380", OPTION_VAL_380_ID },
         { "390", OPTION_VAL_390_ID },
         { "400", OPTION_VAL_400_ID },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_ID,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_ID,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_ID,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_ID,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_ID,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_ID  },
         { "20",  OPTION_VAL_20_ID  },
         { "30",  OPTION_VAL_30_ID  },
         { "40",  OPTION_VAL_40_ID  },
         { "50",  OPTION_VAL_50_ID  },
         { "60",  OPTION_VAL_60_ID  },
         { "70",  OPTION_VAL_70_ID  },
         { "80",  OPTION_VAL_80_ID  },
         { "90",  OPTION_VAL_90_ID  },
         { "100", OPTION_VAL_100_ID },
         { "110", OPTION_VAL_110_ID },
         { "120", OPTION_VAL_120_ID },
         { "130", OPTION_VAL_130_ID },
         { "140", OPTION_VAL_140_ID },
         { "150", OPTION_VAL_150_ID },
         { "160", OPTION_VAL_160_ID },
         { "170", OPTION_VAL_170_ID },
         { "180", OPTION_VAL_180_ID },
         { "190", OPTION_VAL_190_ID },
         { "200", OPTION_VAL_200_ID },
         { "210", OPTION_VAL_210_ID },
         { "220", OPTION_VAL_220_ID },
         { "230", OPTION_VAL_230_ID },
         { "240", OPTION_VAL_240_ID },
         { "250", OPTION_VAL_250_ID },
         { "260", OPTION_VAL_260_ID },
         { "270", OPTION_VAL_270_ID },
         { "280", OPTION_VAL_280_ID },
         { "290", OPTION_VAL_290_ID },
         { "300", OPTION_VAL_300_ID },
         { "310", OPTION_VAL_310_ID },
         { "320", OPTION_VAL_320_ID },
         { "330", OPTION_VAL_330_ID },
         { "340", OPTION_VAL_340_ID },
         { "350", OPTION_VAL_350_ID },
         { "360", OPTION_VAL_360_ID },
         { "370", OPTION_VAL_370_ID },
         { "380", OPTION_VAL_380_ID },
         { "390", OPTION_VAL_390_ID },
         { "400", OPTION_VAL_400_ID },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_ID,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_ID,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_ID,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_ID  },
         { "20",  OPTION_VAL_20_ID  },
         { "30",  OPTION_VAL_30_ID  },
         { "40",  OPTION_VAL_40_ID  },
         { "50",  OPTION_VAL_50_ID  },
         { "60",  OPTION_VAL_60_ID  },
         { "70",  OPTION_VAL_70_ID  },
         { "80",  OPTION_VAL_80_ID  },
         { "90",  OPTION_VAL_90_ID  },
         { "100", OPTION_VAL_100_ID },
         { "110", OPTION_VAL_110_ID },
         { "120", OPTION_VAL_120_ID },
         { "130", OPTION_VAL_130_ID },
         { "140", OPTION_VAL_140_ID },
         { "150", OPTION_VAL_150_ID },
         { "160", OPTION_VAL_160_ID },
         { "170", OPTION_VAL_170_ID },
         { "180", OPTION_VAL_180_ID },
         { "190", OPTION_VAL_190_ID },
         { "200", OPTION_VAL_200_ID },
         { "210", OPTION_VAL_210_ID },
         { "220", OPTION_VAL_220_ID },
         { "230", OPTION_VAL_230_ID },
         { "240", OPTION_VAL_240_ID },
         { "250", OPTION_VAL_250_ID },
         { "260", OPTION_VAL_260_ID },
         { "270", OPTION_VAL_270_ID },
         { "280", OPTION_VAL_280_ID },
         { "290", OPTION_VAL_290_ID },
         { "300", OPTION_VAL_300_ID },
         { "310", OPTION_VAL_310_ID },
         { "320", OPTION_VAL_320_ID },
         { "330", OPTION_VAL_330_ID },
         { "340", OPTION_VAL_340_ID },
         { "350", OPTION_VAL_350_ID },
         { "360", OPTION_VAL_360_ID },
         { "370", OPTION_VAL_370_ID },
         { "380", OPTION_VAL_380_ID },
         { "390", OPTION_VAL_390_ID },
         { "400", OPTION_VAL_400_ID },
         { "410", OPTION_VAL_410_ID },
         { "420", OPTION_VAL_420_ID },
         { "430", OPTION_VAL_430_ID },
         { "440", OPTION_VAL_440_ID },
         { "450", OPTION_VAL_450_ID },
         { "460", OPTION_VAL_460_ID },
         { "470", OPTION_VAL_470_ID },
         { "480", OPTION_VAL_480_ID },
         { "490", OPTION_VAL_490_ID },
         { "500", OPTION_VAL_500_ID },
         { "510", OPTION_VAL_510_ID },
         { "520", OPTION_VAL_520_ID },
         { "530", OPTION_VAL_530_ID },
         { "540", OPTION_VAL_540_ID },
         { "550", OPTION_VAL_550_ID },
         { "560", OPTION_VAL_560_ID },
         { "570", OPTION_VAL_570_ID },
         { "580", OPTION_VAL_580_ID },
         { "590", OPTION_VAL_590_ID },
         { "600", OPTION_VAL_600_ID },
         { "610", OPTION_VAL_610_ID },
         { "620", OPTION_VAL_620_ID },
         { "630", OPTION_VAL_630_ID },
         { "640", OPTION_VAL_640_ID },
         { "650", OPTION_VAL_650_ID },
         { "660", OPTION_VAL_660_ID },
         { "670", OPTION_VAL_670_ID },
         { "680", OPTION_VAL_680_ID },
         { "690", OPTION_VAL_690_ID },
         { "700", OPTION_VAL_700_ID },
         { "710", OPTION_VAL_710_ID },
         { "720", OPTION_VAL_720_ID },
         { "730", OPTION_VAL_730_ID },
         { "740", OPTION_VAL_740_ID },
         { "750", OPTION_VAL_750_ID },
         { "760", OPTION_VAL_760_ID },
         { "770", OPTION_VAL_770_ID },
         { "780", OPTION_VAL_780_ID },
         { "790", OPTION_VAL_790_ID },
         { "800", OPTION_VAL_800_ID },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_ID,
      BSNES_PPU_FAST_LABEL_CAT_ID,
      BSNES_PPU_FAST_INFO_0_ID,
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
      BSNES_PPU_DEINTERLACE_LABEL_ID,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_ID,
      BSNES_PPU_DEINTERLACE_INFO_0_ID,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_ID,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_ID,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_ID,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_ID,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_ID,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_ID,
      BSNES_MODE7_SCALE_LABEL_CAT_ID,
      BSNES_MODE7_SCALE_INFO_0_ID,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_ID  },
         { "2x", OPTION_VAL_2X_ID  },
         { "3x", OPTION_VAL_3X_ID  },
         { "4x", OPTION_VAL_4X_ID  },
         { "5x", OPTION_VAL_5X_ID },
         { "6x", OPTION_VAL_6X_ID },
         { "7x", OPTION_VAL_7X_ID },
         { "8x", OPTION_VAL_8X_ID },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_ID,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_ID,
      BSNES_MODE7_PERSPECTIVE_INFO_0_ID,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_ID,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_ID,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_ID,
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
      BSNES_MODE7_MOSAIC_LABEL_ID,
      BSNES_MODE7_MOSAIC_LABEL_CAT_ID,
      BSNES_MODE7_MOSAIC_INFO_0_ID,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_ID,
      BSNES_DSP_FAST_LABEL_CAT_ID,
      BSNES_DSP_FAST_INFO_0_ID,
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
      BSNES_DSP_CUBIC_LABEL_ID,
      BSNES_DSP_CUBIC_LABEL_CAT_ID,
      BSNES_DSP_CUBIC_INFO_0_ID,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_ID,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_ID,
      BSNES_DSP_ECHO_SHADOW_INFO_0_ID,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_ID,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_ID,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_ID,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_ID,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_ID,
      NULL,
      BSNES_SGB_BIOS_INFO_0_ID,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_ID   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_ID },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_ID,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_ID,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_ID  },
         { "2",   OPTION_VAL_2_ID },
         { "3",   OPTION_VAL_3_ID },
         { "4",   OPTION_VAL_4_ID },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_ID,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_ID,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_ID,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_ID,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_ID,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_ID,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define CATEGORY_VIDEO_LABEL_IT NULL
#define CATEGORY_VIDEO_INFO_0_IT "Cambia le impostazioni di uscita video."
#define CATEGORY_AUDIO_LABEL_IT NULL
#define CATEGORY_AUDIO_INFO_0_IT "Cambia le impostazioni di uscita audio."
#define CATEGORY_MODE7_LABEL_IT "Modalità HD 7"
#define CATEGORY_MODE7_INFO_0_IT "Modificare le impostazioni relative all'emulazione grafica della Modalità 7."
#define CATEGORY_SGB_LABEL_IT NULL
#define CATEGORY_SGB_INFO_0_IT "Modificare le impostazioni relative all'emulazione Super Game Boy."
#define CATEGORY_LIGHTGUN_LABEL_IT "Cannone Leggero"
#define CATEGORY_LIGHTGUN_INFO_0_IT "Cambia le impostazioni (touchscreen) della pistola leggera."
#define CATEGORY_OVERCLOCK_LABEL_IT NULL
#define CATEGORY_OVERCLOCK_INFO_0_IT "Cambia la velocità dell'hardware emulato."
#define CATEGORY_HACK_LABEL_IT "Emulazione Hacks"
#define CATEGORY_HACK_INFO_0_IT "Applica hack di emulazione e hotfix."
#define BSNES_ASPECT_RATIO_LABEL_IT "Rapporto D'Aspetto (Aspect Ratio)"
#define BSNES_ASPECT_RATIO_INFO_0_IT "Definisce la proporzione scelta per il rapporto d'aspetto. Questo valore viene applicato correttamente solo se il rapporto d'aspetto nelle Impostazioni Video di RetroArch è configurato su 'Fornito dal Core'."
#define OPTION_VAL_AUTO_IT "Automatico"
#define OPTION_VAL_8_7_IT "8:7"
#define OPTION_VAL_4_3_IT NULL
#define OPTION_VAL_NTSC_IT NULL
#define OPTION_VAL_PAL_IT NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_IT "Taglia Bordi dell'Overscan"
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_IT "Rimuove i bordi dell'immagine in alto e in basso, zona che nei giochi è tipicamente inutilizzata e viene nascosta dalle cornici dei televisori a definizione standard."
#define OPTION_VAL_OFF_IT "8 Pixel"
#define BSNES_BLUR_EMULATION_LABEL_IT "Emulazione della Sfocatura"
#define BSNES_BLUR_EMULATION_INFO_0_IT "Simula la risoluzione orizzontale limitata dei televisori a definizione standard, sfumando i pixel adiacenti. Alcuni giochi dipendono da questa opzione per poter riprodurre un effetto trasparenza."
#define BSNES_HOTFIXES_LABEL_IT "Hotfix"
#define BSNES_HOTFIXES_INFO_0_IT "Anche i giochi rilasciati ufficialmente e commercializzati su licenza originale talvolta presentavano dei bug. Attivare questa opzione consente di correggere alcune di queste anomalie che si verificavano persino su hardware originale."
#define BSNES_ENTROPY_LABEL_IT "Entropia (Randomizzazione)"
#define BSNES_ENTROPY_INFO_0_IT "Determina il livello di randomizzazione della memoria e dei registri. Se impostata su 'Nessuna', memoria e registri saranno inizializzati con valori costanti all'avvio. Una bassa randomizzazione produce la rappresentazione più accurata del sistema originale. Se impostata su 'Alta', configura memorie e registri con valori quanto più possibile casuali."
#define OPTION_VAL_LOW_IT "Bassa"
#define OPTION_VAL_HIGH_IT "Alta"
#define OPTION_VAL_NONE_IT "Nessuna"
#define BSNES_CPU_OVERCLOCK_LABEL_IT NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_IT NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_IT "Applica un overclock o downclock alla CPU. Impostare questo valore oltre il 100% può diminuire tempi di attesa e rallentamenti. Da usare con cautela, in quanto potrebbe causare in alcuni giochi delle anomalie o un blocco totale."
#define OPTION_VAL_10_IT NULL
#define OPTION_VAL_20_IT NULL
#define OPTION_VAL_30_IT NULL
#define OPTION_VAL_40_IT NULL
#define OPTION_VAL_50_IT NULL
#define OPTION_VAL_60_IT NULL
#define OPTION_VAL_70_IT NULL
#define OPTION_VAL_80_IT NULL
#define OPTION_VAL_90_IT NULL
#define OPTION_VAL_100_IT "100%"
#define OPTION_VAL_110_IT NULL
#define OPTION_VAL_120_IT NULL
#define OPTION_VAL_130_IT NULL
#define OPTION_VAL_140_IT NULL
#define OPTION_VAL_150_IT NULL
#define OPTION_VAL_160_IT NULL
#define OPTION_VAL_170_IT NULL
#define OPTION_VAL_180_IT NULL
#define OPTION_VAL_190_IT NULL
#define OPTION_VAL_200_IT NULL
#define OPTION_VAL_210_IT NULL
#define OPTION_VAL_220_IT NULL
#define OPTION_VAL_230_IT NULL
#define OPTION_VAL_240_IT NULL
#define OPTION_VAL_250_IT NULL
#define OPTION_VAL_260_IT NULL
#define OPTION_VAL_270_IT NULL
#define OPTION_VAL_280_IT NULL
#define OPTION_VAL_290_IT NULL
#define OPTION_VAL_300_IT NULL
#define OPTION_VAL_310_IT NULL
#define OPTION_VAL_320_IT NULL
#define OPTION_VAL_330_IT NULL
#define OPTION_VAL_340_IT NULL
#define OPTION_VAL_350_IT NULL
#define OPTION_VAL_360_IT NULL
#define OPTION_VAL_370_IT NULL
#define OPTION_VAL_380_IT NULL
#define OPTION_VAL_390_IT NULL
#define OPTION_VAL_400_IT NULL
#define BSNES_CPU_FASTMATH_LABEL_IT "Accelerazione del Calcolo Matematico della CPU"
#define BSNES_CPU_FASTMATH_INFO_0_IT "Le operazioni di moltiplicazione e divisione impongono un certo tempo di elaborazione alla CPU di un vero SNES. I vecchi emulatori non simulavano questo ritardo e restituivano immediatamente il risultato. Alcune ROM hack non attendono il completamento delle operazioni matematiche e pertanto richiedono l'utilizzo di questo espediente."
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_IT "Overclocking - Coprocessore SA-1"
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_IT "Coprocessore SA-1"
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_IT "Applica un overclock o downclock al chip Super Accelerator 1 (SA-1). Impostare questo valore oltre il 100% può incrementare le prestazioni nei giochi che supportano il chip SA-1. Da usare con cautela, in quanto potrebbe causare in alcuni giochi delle anomalie o un blocco totale."
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_IT "Overclocking - Coprocessore SuperFX"
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_IT "Coprocessore SuperFX"
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_IT "Applica un overclock o downclock al coprocessore SuperFX. Impostare questo valore oltre il 100% può incrementare le prestazioni nei giochi che supportano il SuperFX. Da usare con cautela, in quanto potrebbe causare in alcuni giochi delle anomalie o un blocco totale."
#define OPTION_VAL_410_IT NULL
#define OPTION_VAL_420_IT NULL
#define OPTION_VAL_430_IT NULL
#define OPTION_VAL_440_IT NULL
#define OPTION_VAL_450_IT NULL
#define OPTION_VAL_460_IT NULL
#define OPTION_VAL_470_IT NULL
#define OPTION_VAL_480_IT NULL
#define OPTION_VAL_490_IT NULL
#define OPTION_VAL_500_IT NULL
#define OPTION_VAL_510_IT NULL
#define OPTION_VAL_520_IT NULL
#define OPTION_VAL_530_IT NULL
#define OPTION_VAL_540_IT NULL
#define OPTION_VAL_550_IT NULL
#define OPTION_VAL_560_IT NULL
#define OPTION_VAL_570_IT NULL
#define OPTION_VAL_580_IT NULL
#define OPTION_VAL_590_IT NULL
#define OPTION_VAL_600_IT NULL
#define OPTION_VAL_610_IT NULL
#define OPTION_VAL_620_IT NULL
#define OPTION_VAL_630_IT NULL
#define OPTION_VAL_640_IT NULL
#define OPTION_VAL_650_IT NULL
#define OPTION_VAL_660_IT NULL
#define OPTION_VAL_670_IT NULL
#define OPTION_VAL_680_IT NULL
#define OPTION_VAL_690_IT NULL
#define OPTION_VAL_700_IT NULL
#define OPTION_VAL_710_IT NULL
#define OPTION_VAL_720_IT NULL
#define OPTION_VAL_730_IT NULL
#define OPTION_VAL_740_IT NULL
#define OPTION_VAL_750_IT NULL
#define OPTION_VAL_760_IT NULL
#define OPTION_VAL_770_IT NULL
#define OPTION_VAL_780_IT NULL
#define OPTION_VAL_790_IT NULL
#define OPTION_VAL_800_IT NULL
#define BSNES_PPU_FAST_LABEL_IT "PPU (Video) - Modalità Rapida"
#define BSNES_PPU_FAST_LABEL_CAT_IT NULL
#define BSNES_PPU_FAST_INFO_0_IT "Permette un'emulazione più rapida della PPU al costo di una minima diminuzione dell'accuratezza. Si consiglia di mantenere quest'opzione attiva."
#define BSNES_PPU_DEINTERLACE_LABEL_IT "PPU (Video) - Deinterlacciamento"
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_IT NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_IT "Effettua un deinterlacciamento di tutti i giochi, utilizzando una riproduzione interna a 480p. La conseguente riduzione delle prestazioni è quasi nulla, pertanto si consiglia di mantenere l'opzione attiva."
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_IT "PPU (Video) - Nessun Limite agli Sprite"
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_IT "PPU - Nessun Limite Di Sprite"
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_IT "Rimuove qualsiasi limite al numero di sprite che possono essere visualizzati a schermo simultaneamente. Potrebbe causare anomalie in alcuni giochi."
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_IT "PPU (Video) - Nessun Blocco della VRAM"
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_IT "Riproduce un bug presente in alcune vecchie versioni di ZSNES e Snes9x, che comportava la mancata emulazione del blocco della VRAM. Alcune vecchie ROM hack richiedono l'utilizzo di questo espediente e mostreranno errori grafici in caso di disattivazione. Questa opzione riduce sensibilmente l'accuratezza e la velocità della PPU, pertanto si consiglia di utilizzarla solo se si vuole avviare un gioco altrimenti incompatibile."
#define BSNES_MODE7_SCALE_LABEL_IT "HD Mode 7 - Scala"
#define BSNES_MODE7_SCALE_LABEL_CAT_IT "Scala"
#define BSNES_MODE7_SCALE_INFO_0_IT "Permette di incrementare la risoluzione orizzontale e verticale della grafica in Mode 7 utilizzata in alcuni giochi."
#define OPTION_VAL_1X_IT NULL
#define OPTION_VAL_2X_IT NULL
#define OPTION_VAL_3X_IT NULL
#define OPTION_VAL_4X_IT NULL
#define OPTION_VAL_5X_IT NULL
#define OPTION_VAL_6X_IT NULL
#define OPTION_VAL_7X_IT NULL
#define OPTION_VAL_8X_IT NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_IT "HD Mode 7 - Correzione della Prospettiva"
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_IT "Correzione Prospettiva"
#define BSNES_MODE7_PERSPECTIVE_INFO_0_IT "Corregge la prospettiva nella grafica in Mode 7 utilizzata in alcuni giochi, aggirando alcune delle limitazioni relative al calcolo matematico degli interi utilizzato dallo SNES."
#define BSNES_MODE7_SUPERSAMPLE_LABEL_IT "Modalità HD 7 - Sovracampionamento"
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_IT "Sovracampionamento"
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_IT "Applica un effetto di 'supersampling' alla grafica in Mode 7 utilizzata in alcuni giochi. Se abbinata a fattori elevati di scala del Mode 7, smussa le scalettature creando un filtro simile all'anti-aliasing."
#define BSNES_MODE7_MOSAIC_LABEL_IT "HD Mode 7 - Effetto Mosaico HD->SD"
#define BSNES_MODE7_MOSAIC_LABEL_CAT_IT "HD->SD Mosaico"
#define BSNES_MODE7_MOSAIC_INFO_0_IT "Consente di mostrare o meno l'effetto mosaico quando si incrementa la risoluzione della grafica in Mode 7 utilizzata in alcuni giochi."
#define BSNES_DSP_FAST_LABEL_IT "DSP (Audio) - Modalità Rapida"
#define BSNES_DSP_FAST_LABEL_CAT_IT NULL
#define BSNES_DSP_FAST_INFO_0_IT "Permette un'emulazione più rapida del DSP al costo di una minima diminuzione dell'accuratezza. Si consiglia di mantenere quest'opzione attiva."
#define BSNES_DSP_CUBIC_LABEL_IT "DSP (Audio) - Interpolazione Cubica"
#define BSNES_DSP_CUBIC_LABEL_CAT_IT "DSP - Interpolazione Cubica"
#define BSNES_DSP_CUBIC_INFO_0_IT "Applica un'interpolazione cubica al suono, preservando maggiormente le alte frequenze."
#define BSNES_DSP_ECHO_SHADOW_LABEL_IT "DSP (Audio) - RAM dell'Eco Separata"
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_IT "DSP - RAM Echo Shadow"
#define BSNES_DSP_ECHO_SHADOW_INFO_0_IT "Riproduce un bug di ZSNES che interpretava la RAM dell'effetto 'eco' come separata dalla RAM dell'APU. Molte vecchie ROM hack di Super Mario World si affidavano a questa implementazione, pertanto non potranno essere riprodotte senza questo espediente. Si tratta di un'opzione che riduce sensibilmente l'accuratezza, quindi si consiglia di non attivarla a meno che non sia strettamente necessario."
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_IT "Coprocessori - Modalità Rapida"
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_IT "Permette un'emulazione più rapida dei coprocessori al costo di una minima diminuzione dell'accuratezza. Si consiglia di mantenere quest'opzione attiva."
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_IT "Coprocessori - Preferisci Emulazione ad Alto Livello (HLE)"
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_IT "Quando quest'opzione è attiva, sarà favorito l'utilizzo dell'emulazione ad alto livello (HLE), meno accurata. Se l'opzione viene disattivata, l'emulazione ad alto livello (HLE) sarà utilizzata solo in caso di assenza del firmware relativo all'emulazione a basso livello (LLE)."
#define BSNES_SGB_BIOS_LABEL_IT "BIOS del Super Game Boy (Richiede un Riavvio)"
#define BSNES_SGB_BIOS_INFO_0_IT "Consente di scegliere il BIOS del Super Game Boy da utilizzarsi con i relativi titoli compatibili. Richiede un riavvio per avere effetto."
#define OPTION_VAL_SGB1_SFC_IT NULL
#define OPTION_VAL_SGB2_SFC_IT NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_IT "Funzione Interna di Run-Ahead"
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_IT "Anticipa l'emulazione del sistema e riavvolge la riproduzione per ridurre la latenza nei comandi. Ha requisiti di sistema molto alti."
#define OPTION_VAL_1_IT NULL
#define OPTION_VAL_2_IT "2 frame"
#define OPTION_VAL_3_IT "3 frame"
#define OPTION_VAL_4_IT "4 frame"
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_IT "Emulazione Pistola su Touchscreen"
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_IT "Consente il controllo della pistola Super Scope per dispositivi muniti di touchscreen."
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_IT "Inverti Pulsanti di Grilletto e Cursore per la Pistola"
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_IT "Permette di invertire i pulsanti del grilletto e del cursore della pistola Super Scope nell'utilizzo tramite touchscreen."
#define BSNES_HIDE_SGB_BORDER_LABEL_IT "Nascondi Bordo SGB"
#define BSNES_HIDE_SGB_BORDER_INFO_0_IT "Nascondi il bordo durante la riproduzione di giochi Super Game Boy. Funziona solo quando 'Crop Overscan' è abilitato."

struct retro_core_option_v2_category option_cats_it[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_IT,
      CATEGORY_VIDEO_INFO_0_IT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_IT,
      CATEGORY_AUDIO_INFO_0_IT
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_IT,
      CATEGORY_MODE7_INFO_0_IT
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_IT,
      CATEGORY_SGB_INFO_0_IT
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_IT,
      CATEGORY_LIGHTGUN_INFO_0_IT
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_IT,
      CATEGORY_OVERCLOCK_INFO_0_IT
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_IT,
      CATEGORY_HACK_INFO_0_IT
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_IT,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_IT,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_IT },
         { "8:7",  OPTION_VAL_8_7_IT },
         { "4:3",  OPTION_VAL_4_3_IT },
         { "NTSC", OPTION_VAL_NTSC_IT },
         { "PAL",  OPTION_VAL_PAL_IT },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_IT,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_IT,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_IT },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_IT,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_IT,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_IT,
      NULL,
      BSNES_HOTFIXES_INFO_0_IT,
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
      BSNES_ENTROPY_LABEL_IT,
      NULL,
      BSNES_ENTROPY_INFO_0_IT,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_IT },
         { "High", OPTION_VAL_HIGH_IT },
         { "None", OPTION_VAL_NONE_IT },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_IT,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_IT,
      BSNES_CPU_OVERCLOCK_INFO_0_IT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_IT  },
         { "20",  OPTION_VAL_20_IT  },
         { "30",  OPTION_VAL_30_IT  },
         { "40",  OPTION_VAL_40_IT  },
         { "50",  OPTION_VAL_50_IT  },
         { "60",  OPTION_VAL_60_IT  },
         { "70",  OPTION_VAL_70_IT  },
         { "80",  OPTION_VAL_80_IT  },
         { "90",  OPTION_VAL_90_IT  },
         { "100", OPTION_VAL_100_IT },
         { "110", OPTION_VAL_110_IT },
         { "120", OPTION_VAL_120_IT },
         { "130", OPTION_VAL_130_IT },
         { "140", OPTION_VAL_140_IT },
         { "150", OPTION_VAL_150_IT },
         { "160", OPTION_VAL_160_IT },
         { "170", OPTION_VAL_170_IT },
         { "180", OPTION_VAL_180_IT },
         { "190", OPTION_VAL_190_IT },
         { "200", OPTION_VAL_200_IT },
         { "210", OPTION_VAL_210_IT },
         { "220", OPTION_VAL_220_IT },
         { "230", OPTION_VAL_230_IT },
         { "240", OPTION_VAL_240_IT },
         { "250", OPTION_VAL_250_IT },
         { "260", OPTION_VAL_260_IT },
         { "270", OPTION_VAL_270_IT },
         { "280", OPTION_VAL_280_IT },
         { "290", OPTION_VAL_290_IT },
         { "300", OPTION_VAL_300_IT },
         { "310", OPTION_VAL_310_IT },
         { "320", OPTION_VAL_320_IT },
         { "330", OPTION_VAL_330_IT },
         { "340", OPTION_VAL_340_IT },
         { "350", OPTION_VAL_350_IT },
         { "360", OPTION_VAL_360_IT },
         { "370", OPTION_VAL_370_IT },
         { "380", OPTION_VAL_380_IT },
         { "390", OPTION_VAL_390_IT },
         { "400", OPTION_VAL_400_IT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_IT,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_IT,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_IT,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_IT,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_IT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_IT  },
         { "20",  OPTION_VAL_20_IT  },
         { "30",  OPTION_VAL_30_IT  },
         { "40",  OPTION_VAL_40_IT  },
         { "50",  OPTION_VAL_50_IT  },
         { "60",  OPTION_VAL_60_IT  },
         { "70",  OPTION_VAL_70_IT  },
         { "80",  OPTION_VAL_80_IT  },
         { "90",  OPTION_VAL_90_IT  },
         { "100", OPTION_VAL_100_IT },
         { "110", OPTION_VAL_110_IT },
         { "120", OPTION_VAL_120_IT },
         { "130", OPTION_VAL_130_IT },
         { "140", OPTION_VAL_140_IT },
         { "150", OPTION_VAL_150_IT },
         { "160", OPTION_VAL_160_IT },
         { "170", OPTION_VAL_170_IT },
         { "180", OPTION_VAL_180_IT },
         { "190", OPTION_VAL_190_IT },
         { "200", OPTION_VAL_200_IT },
         { "210", OPTION_VAL_210_IT },
         { "220", OPTION_VAL_220_IT },
         { "230", OPTION_VAL_230_IT },
         { "240", OPTION_VAL_240_IT },
         { "250", OPTION_VAL_250_IT },
         { "260", OPTION_VAL_260_IT },
         { "270", OPTION_VAL_270_IT },
         { "280", OPTION_VAL_280_IT },
         { "290", OPTION_VAL_290_IT },
         { "300", OPTION_VAL_300_IT },
         { "310", OPTION_VAL_310_IT },
         { "320", OPTION_VAL_320_IT },
         { "330", OPTION_VAL_330_IT },
         { "340", OPTION_VAL_340_IT },
         { "350", OPTION_VAL_350_IT },
         { "360", OPTION_VAL_360_IT },
         { "370", OPTION_VAL_370_IT },
         { "380", OPTION_VAL_380_IT },
         { "390", OPTION_VAL_390_IT },
         { "400", OPTION_VAL_400_IT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_IT,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_IT,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_IT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_IT  },
         { "20",  OPTION_VAL_20_IT  },
         { "30",  OPTION_VAL_30_IT  },
         { "40",  OPTION_VAL_40_IT  },
         { "50",  OPTION_VAL_50_IT  },
         { "60",  OPTION_VAL_60_IT  },
         { "70",  OPTION_VAL_70_IT  },
         { "80",  OPTION_VAL_80_IT  },
         { "90",  OPTION_VAL_90_IT  },
         { "100", OPTION_VAL_100_IT },
         { "110", OPTION_VAL_110_IT },
         { "120", OPTION_VAL_120_IT },
         { "130", OPTION_VAL_130_IT },
         { "140", OPTION_VAL_140_IT },
         { "150", OPTION_VAL_150_IT },
         { "160", OPTION_VAL_160_IT },
         { "170", OPTION_VAL_170_IT },
         { "180", OPTION_VAL_180_IT },
         { "190", OPTION_VAL_190_IT },
         { "200", OPTION_VAL_200_IT },
         { "210", OPTION_VAL_210_IT },
         { "220", OPTION_VAL_220_IT },
         { "230", OPTION_VAL_230_IT },
         { "240", OPTION_VAL_240_IT },
         { "250", OPTION_VAL_250_IT },
         { "260", OPTION_VAL_260_IT },
         { "270", OPTION_VAL_270_IT },
         { "280", OPTION_VAL_280_IT },
         { "290", OPTION_VAL_290_IT },
         { "300", OPTION_VAL_300_IT },
         { "310", OPTION_VAL_310_IT },
         { "320", OPTION_VAL_320_IT },
         { "330", OPTION_VAL_330_IT },
         { "340", OPTION_VAL_340_IT },
         { "350", OPTION_VAL_350_IT },
         { "360", OPTION_VAL_360_IT },
         { "370", OPTION_VAL_370_IT },
         { "380", OPTION_VAL_380_IT },
         { "390", OPTION_VAL_390_IT },
         { "400", OPTION_VAL_400_IT },
         { "410", OPTION_VAL_410_IT },
         { "420", OPTION_VAL_420_IT },
         { "430", OPTION_VAL_430_IT },
         { "440", OPTION_VAL_440_IT },
         { "450", OPTION_VAL_450_IT },
         { "460", OPTION_VAL_460_IT },
         { "470", OPTION_VAL_470_IT },
         { "480", OPTION_VAL_480_IT },
         { "490", OPTION_VAL_490_IT },
         { "500", OPTION_VAL_500_IT },
         { "510", OPTION_VAL_510_IT },
         { "520", OPTION_VAL_520_IT },
         { "530", OPTION_VAL_530_IT },
         { "540", OPTION_VAL_540_IT },
         { "550", OPTION_VAL_550_IT },
         { "560", OPTION_VAL_560_IT },
         { "570", OPTION_VAL_570_IT },
         { "580", OPTION_VAL_580_IT },
         { "590", OPTION_VAL_590_IT },
         { "600", OPTION_VAL_600_IT },
         { "610", OPTION_VAL_610_IT },
         { "620", OPTION_VAL_620_IT },
         { "630", OPTION_VAL_630_IT },
         { "640", OPTION_VAL_640_IT },
         { "650", OPTION_VAL_650_IT },
         { "660", OPTION_VAL_660_IT },
         { "670", OPTION_VAL_670_IT },
         { "680", OPTION_VAL_680_IT },
         { "690", OPTION_VAL_690_IT },
         { "700", OPTION_VAL_700_IT },
         { "710", OPTION_VAL_710_IT },
         { "720", OPTION_VAL_720_IT },
         { "730", OPTION_VAL_730_IT },
         { "740", OPTION_VAL_740_IT },
         { "750", OPTION_VAL_750_IT },
         { "760", OPTION_VAL_760_IT },
         { "770", OPTION_VAL_770_IT },
         { "780", OPTION_VAL_780_IT },
         { "790", OPTION_VAL_790_IT },
         { "800", OPTION_VAL_800_IT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_IT,
      BSNES_PPU_FAST_LABEL_CAT_IT,
      BSNES_PPU_FAST_INFO_0_IT,
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
      BSNES_PPU_DEINTERLACE_LABEL_IT,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_IT,
      BSNES_PPU_DEINTERLACE_INFO_0_IT,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_IT,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_IT,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_IT,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_IT,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_IT,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_IT,
      BSNES_MODE7_SCALE_LABEL_CAT_IT,
      BSNES_MODE7_SCALE_INFO_0_IT,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_IT  },
         { "2x", OPTION_VAL_2X_IT  },
         { "3x", OPTION_VAL_3X_IT  },
         { "4x", OPTION_VAL_4X_IT  },
         { "5x", OPTION_VAL_5X_IT },
         { "6x", OPTION_VAL_6X_IT },
         { "7x", OPTION_VAL_7X_IT },
         { "8x", OPTION_VAL_8X_IT },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_IT,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_IT,
      BSNES_MODE7_PERSPECTIVE_INFO_0_IT,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_IT,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_IT,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_IT,
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
      BSNES_MODE7_MOSAIC_LABEL_IT,
      BSNES_MODE7_MOSAIC_LABEL_CAT_IT,
      BSNES_MODE7_MOSAIC_INFO_0_IT,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_IT,
      BSNES_DSP_FAST_LABEL_CAT_IT,
      BSNES_DSP_FAST_INFO_0_IT,
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
      BSNES_DSP_CUBIC_LABEL_IT,
      BSNES_DSP_CUBIC_LABEL_CAT_IT,
      BSNES_DSP_CUBIC_INFO_0_IT,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_IT,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_IT,
      BSNES_DSP_ECHO_SHADOW_INFO_0_IT,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_IT,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_IT,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_IT,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_IT,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_IT,
      NULL,
      BSNES_SGB_BIOS_INFO_0_IT,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_IT   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_IT },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_IT,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_IT,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_IT  },
         { "2",   OPTION_VAL_2_IT },
         { "3",   OPTION_VAL_3_IT },
         { "4",   OPTION_VAL_4_IT },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_IT,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_IT,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_IT,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_IT,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_IT,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_IT,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define CATEGORY_VIDEO_LABEL_JA "ビデオのドライバ"
#define CATEGORY_VIDEO_INFO_0_JA "ビデオ出力の設定を変更します."
#define CATEGORY_AUDIO_LABEL_JA "オーディオのドライバ"
#define CATEGORY_AUDIO_INFO_0_JA "オーディオ出力の設定を変更します."
#define CATEGORY_MODE7_LABEL_JA "HDモード7"
#define CATEGORY_MODE7_INFO_0_JA "Mode7グラフィックエミュレーションに関する設定を変更します。"
#define CATEGORY_SGB_LABEL_JA "スーパーゲームボーイ"
#define CATEGORY_SGB_INFO_0_JA "スーパーゲームボーイエミュレーションに関する設定を変更します。"
#define CATEGORY_LIGHTGUN_LABEL_JA "ライトガン"
#define CATEGORY_LIGHTGUN_INFO_0_JA NULL
#define CATEGORY_OVERCLOCK_LABEL_JA NULL
#define CATEGORY_OVERCLOCK_INFO_0_JA "エミュレートされたハードウェアの速度を変更します。"
#define CATEGORY_HACK_LABEL_JA "エミュレーションハック"
#define CATEGORY_HACK_INFO_0_JA "エミュレーションハックとホットフィックスを適用します。"
#define BSNES_ASPECT_RATIO_LABEL_JA "優先アスペクト比"
#define BSNES_ASPECT_RATIO_INFO_0_JA NULL
#define OPTION_VAL_AUTO_JA "自動"
#define OPTION_VAL_8_7_JA NULL
#define OPTION_VAL_4_3_JA NULL
#define OPTION_VAL_NTSC_JA NULL
#define OPTION_VAL_PAL_JA NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_JA NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_JA NULL
#define OPTION_VAL_OFF_JA "8 ピクセル"
#define BSNES_BLUR_EMULATION_LABEL_JA "ぼかしのエミュレーション"
#define BSNES_BLUR_EMULATION_INFO_0_JA "SDTVの限られた水平方向の隣接するピクセルを一緒にぼかして、水平方向の解像度をシミュレートします。いくつかのゲームはこれに依存して透明効果をエミュレートします。"
#define BSNES_HOTFIXES_LABEL_JA NULL
#define BSNES_HOTFIXES_INFO_0_JA NULL
#define BSNES_ENTROPY_LABEL_JA "エントロピー(ランダム化)"
#define BSNES_ENTROPY_INFO_0_JA NULL
#define OPTION_VAL_LOW_JA "低"
#define OPTION_VAL_HIGH_JA "高"
#define OPTION_VAL_NONE_JA "なし"
#define BSNES_CPU_OVERCLOCK_LABEL_JA "オーバークロック - CPU"
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_JA NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_JA "CPUをオーバークロックまたはダウンクロックします。この値を100%以上に設定すると、ロード時間が短縮され、遅くなります。 ゲームがクラッシュしたり、その他の問題が発生する可能性があるため、注意して使用してください。"
#define OPTION_VAL_10_JA NULL
#define OPTION_VAL_20_JA NULL
#define OPTION_VAL_30_JA NULL
#define OPTION_VAL_40_JA NULL
#define OPTION_VAL_50_JA NULL
#define OPTION_VAL_60_JA NULL
#define OPTION_VAL_70_JA NULL
#define OPTION_VAL_80_JA NULL
#define OPTION_VAL_90_JA NULL
#define OPTION_VAL_100_JA "100% (デフォルト)"
#define OPTION_VAL_110_JA NULL
#define OPTION_VAL_120_JA NULL
#define OPTION_VAL_130_JA NULL
#define OPTION_VAL_140_JA NULL
#define OPTION_VAL_150_JA NULL
#define OPTION_VAL_160_JA NULL
#define OPTION_VAL_170_JA NULL
#define OPTION_VAL_180_JA NULL
#define OPTION_VAL_190_JA NULL
#define OPTION_VAL_200_JA NULL
#define OPTION_VAL_210_JA NULL
#define OPTION_VAL_220_JA NULL
#define OPTION_VAL_230_JA NULL
#define OPTION_VAL_240_JA NULL
#define OPTION_VAL_250_JA NULL
#define OPTION_VAL_260_JA NULL
#define OPTION_VAL_270_JA NULL
#define OPTION_VAL_280_JA NULL
#define OPTION_VAL_290_JA NULL
#define OPTION_VAL_300_JA NULL
#define OPTION_VAL_310_JA NULL
#define OPTION_VAL_320_JA NULL
#define OPTION_VAL_330_JA NULL
#define OPTION_VAL_340_JA NULL
#define OPTION_VAL_350_JA NULL
#define OPTION_VAL_360_JA NULL
#define OPTION_VAL_370_JA NULL
#define OPTION_VAL_380_JA NULL
#define OPTION_VAL_390_JA NULL
#define OPTION_VAL_400_JA NULL
#define BSNES_CPU_FASTMATH_LABEL_JA NULL
#define BSNES_CPU_FASTMATH_INFO_0_JA NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_JA NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_JA NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_JA NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_JA NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_JA NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_JA NULL
#define OPTION_VAL_410_JA NULL
#define OPTION_VAL_420_JA NULL
#define OPTION_VAL_430_JA NULL
#define OPTION_VAL_440_JA NULL
#define OPTION_VAL_450_JA NULL
#define OPTION_VAL_460_JA NULL
#define OPTION_VAL_470_JA NULL
#define OPTION_VAL_480_JA NULL
#define OPTION_VAL_490_JA NULL
#define OPTION_VAL_500_JA NULL
#define OPTION_VAL_510_JA NULL
#define OPTION_VAL_520_JA NULL
#define OPTION_VAL_530_JA NULL
#define OPTION_VAL_540_JA NULL
#define OPTION_VAL_550_JA NULL
#define OPTION_VAL_560_JA NULL
#define OPTION_VAL_570_JA NULL
#define OPTION_VAL_580_JA NULL
#define OPTION_VAL_590_JA NULL
#define OPTION_VAL_600_JA NULL
#define OPTION_VAL_610_JA NULL
#define OPTION_VAL_620_JA NULL
#define OPTION_VAL_630_JA NULL
#define OPTION_VAL_640_JA NULL
#define OPTION_VAL_650_JA NULL
#define OPTION_VAL_660_JA NULL
#define OPTION_VAL_670_JA NULL
#define OPTION_VAL_680_JA NULL
#define OPTION_VAL_690_JA NULL
#define OPTION_VAL_700_JA NULL
#define OPTION_VAL_710_JA NULL
#define OPTION_VAL_720_JA NULL
#define OPTION_VAL_730_JA NULL
#define OPTION_VAL_740_JA NULL
#define OPTION_VAL_750_JA NULL
#define OPTION_VAL_760_JA NULL
#define OPTION_VAL_770_JA NULL
#define OPTION_VAL_780_JA NULL
#define OPTION_VAL_790_JA NULL
#define OPTION_VAL_800_JA NULL
#define BSNES_PPU_FAST_LABEL_JA NULL
#define BSNES_PPU_FAST_LABEL_CAT_JA NULL
#define BSNES_PPU_FAST_INFO_0_JA "精度の軽減を犠牲にしてPPUのより高速なエミュレーションを可能にします。これをオンにすることをお勧めします。"
#define BSNES_PPU_DEINTERLACE_LABEL_JA NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_JA NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_JA "480pで内部的にレンダリングすることにより、すべてのゲームを解除します。パフォーマンスペナルティはほぼ存在しませんので、このままにすることをお勧めします。"
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_JA "PPU (Video) - スプライト制限なし"
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_JA "PPU - スプライト制限なし"
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_JA NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_JA NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_JA NULL
#define BSNES_MODE7_SCALE_LABEL_JA NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_JA "スケール"
#define BSNES_MODE7_SCALE_INFO_0_JA NULL
#define OPTION_VAL_1X_JA NULL
#define OPTION_VAL_2X_JA NULL
#define OPTION_VAL_3X_JA NULL
#define OPTION_VAL_4X_JA NULL
#define OPTION_VAL_5X_JA NULL
#define OPTION_VAL_6X_JA NULL
#define OPTION_VAL_7X_JA NULL
#define OPTION_VAL_8X_JA NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_JA "HDモード7 - 視点補正"
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_JA "視点補正"
#define BSNES_MODE7_PERSPECTIVE_INFO_0_JA NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_JA NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_JA NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_JA NULL
#define BSNES_MODE7_MOSAIC_LABEL_JA NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_JA NULL
#define BSNES_MODE7_MOSAIC_INFO_0_JA NULL
#define BSNES_DSP_FAST_LABEL_JA NULL
#define BSNES_DSP_FAST_LABEL_CAT_JA NULL
#define BSNES_DSP_FAST_INFO_0_JA NULL
#define BSNES_DSP_CUBIC_LABEL_JA NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_JA NULL
#define BSNES_DSP_CUBIC_INFO_0_JA NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_JA NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_JA NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_JA NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_JA NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_JA NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_JA NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_JA NULL
#define BSNES_SGB_BIOS_LABEL_JA NULL
#define BSNES_SGB_BIOS_INFO_0_JA NULL
#define OPTION_VAL_SGB1_SFC_JA NULL
#define OPTION_VAL_SGB2_SFC_JA NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_JA NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_JA NULL
#define OPTION_VAL_1_JA NULL
#define OPTION_VAL_2_JA NULL
#define OPTION_VAL_3_JA NULL
#define OPTION_VAL_4_JA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_JA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_JA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_JA NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_JA NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_JA NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_JA,
      CATEGORY_VIDEO_INFO_0_JA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_JA,
      CATEGORY_AUDIO_INFO_0_JA
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_JA,
      CATEGORY_MODE7_INFO_0_JA
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_JA,
      CATEGORY_SGB_INFO_0_JA
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_JA,
      CATEGORY_LIGHTGUN_INFO_0_JA
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_JA,
      CATEGORY_OVERCLOCK_INFO_0_JA
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_JA,
      CATEGORY_HACK_INFO_0_JA
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_JA,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_JA,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_JA },
         { "8:7",  OPTION_VAL_8_7_JA },
         { "4:3",  OPTION_VAL_4_3_JA },
         { "NTSC", OPTION_VAL_NTSC_JA },
         { "PAL",  OPTION_VAL_PAL_JA },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_JA,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_JA,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_JA },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_JA,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_JA,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_JA,
      NULL,
      BSNES_HOTFIXES_INFO_0_JA,
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
      BSNES_ENTROPY_LABEL_JA,
      NULL,
      BSNES_ENTROPY_INFO_0_JA,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_JA },
         { "High", OPTION_VAL_HIGH_JA },
         { "None", OPTION_VAL_NONE_JA },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_JA,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_JA,
      BSNES_CPU_OVERCLOCK_INFO_0_JA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_JA  },
         { "20",  OPTION_VAL_20_JA  },
         { "30",  OPTION_VAL_30_JA  },
         { "40",  OPTION_VAL_40_JA  },
         { "50",  OPTION_VAL_50_JA  },
         { "60",  OPTION_VAL_60_JA  },
         { "70",  OPTION_VAL_70_JA  },
         { "80",  OPTION_VAL_80_JA  },
         { "90",  OPTION_VAL_90_JA  },
         { "100", OPTION_VAL_100_JA },
         { "110", OPTION_VAL_110_JA },
         { "120", OPTION_VAL_120_JA },
         { "130", OPTION_VAL_130_JA },
         { "140", OPTION_VAL_140_JA },
         { "150", OPTION_VAL_150_JA },
         { "160", OPTION_VAL_160_JA },
         { "170", OPTION_VAL_170_JA },
         { "180", OPTION_VAL_180_JA },
         { "190", OPTION_VAL_190_JA },
         { "200", OPTION_VAL_200_JA },
         { "210", OPTION_VAL_210_JA },
         { "220", OPTION_VAL_220_JA },
         { "230", OPTION_VAL_230_JA },
         { "240", OPTION_VAL_240_JA },
         { "250", OPTION_VAL_250_JA },
         { "260", OPTION_VAL_260_JA },
         { "270", OPTION_VAL_270_JA },
         { "280", OPTION_VAL_280_JA },
         { "290", OPTION_VAL_290_JA },
         { "300", OPTION_VAL_300_JA },
         { "310", OPTION_VAL_310_JA },
         { "320", OPTION_VAL_320_JA },
         { "330", OPTION_VAL_330_JA },
         { "340", OPTION_VAL_340_JA },
         { "350", OPTION_VAL_350_JA },
         { "360", OPTION_VAL_360_JA },
         { "370", OPTION_VAL_370_JA },
         { "380", OPTION_VAL_380_JA },
         { "390", OPTION_VAL_390_JA },
         { "400", OPTION_VAL_400_JA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_JA,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_JA,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_JA,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_JA,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_JA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_JA  },
         { "20",  OPTION_VAL_20_JA  },
         { "30",  OPTION_VAL_30_JA  },
         { "40",  OPTION_VAL_40_JA  },
         { "50",  OPTION_VAL_50_JA  },
         { "60",  OPTION_VAL_60_JA  },
         { "70",  OPTION_VAL_70_JA  },
         { "80",  OPTION_VAL_80_JA  },
         { "90",  OPTION_VAL_90_JA  },
         { "100", OPTION_VAL_100_JA },
         { "110", OPTION_VAL_110_JA },
         { "120", OPTION_VAL_120_JA },
         { "130", OPTION_VAL_130_JA },
         { "140", OPTION_VAL_140_JA },
         { "150", OPTION_VAL_150_JA },
         { "160", OPTION_VAL_160_JA },
         { "170", OPTION_VAL_170_JA },
         { "180", OPTION_VAL_180_JA },
         { "190", OPTION_VAL_190_JA },
         { "200", OPTION_VAL_200_JA },
         { "210", OPTION_VAL_210_JA },
         { "220", OPTION_VAL_220_JA },
         { "230", OPTION_VAL_230_JA },
         { "240", OPTION_VAL_240_JA },
         { "250", OPTION_VAL_250_JA },
         { "260", OPTION_VAL_260_JA },
         { "270", OPTION_VAL_270_JA },
         { "280", OPTION_VAL_280_JA },
         { "290", OPTION_VAL_290_JA },
         { "300", OPTION_VAL_300_JA },
         { "310", OPTION_VAL_310_JA },
         { "320", OPTION_VAL_320_JA },
         { "330", OPTION_VAL_330_JA },
         { "340", OPTION_VAL_340_JA },
         { "350", OPTION_VAL_350_JA },
         { "360", OPTION_VAL_360_JA },
         { "370", OPTION_VAL_370_JA },
         { "380", OPTION_VAL_380_JA },
         { "390", OPTION_VAL_390_JA },
         { "400", OPTION_VAL_400_JA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_JA,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_JA,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_JA,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_JA  },
         { "20",  OPTION_VAL_20_JA  },
         { "30",  OPTION_VAL_30_JA  },
         { "40",  OPTION_VAL_40_JA  },
         { "50",  OPTION_VAL_50_JA  },
         { "60",  OPTION_VAL_60_JA  },
         { "70",  OPTION_VAL_70_JA  },
         { "80",  OPTION_VAL_80_JA  },
         { "90",  OPTION_VAL_90_JA  },
         { "100", OPTION_VAL_100_JA },
         { "110", OPTION_VAL_110_JA },
         { "120", OPTION_VAL_120_JA },
         { "130", OPTION_VAL_130_JA },
         { "140", OPTION_VAL_140_JA },
         { "150", OPTION_VAL_150_JA },
         { "160", OPTION_VAL_160_JA },
         { "170", OPTION_VAL_170_JA },
         { "180", OPTION_VAL_180_JA },
         { "190", OPTION_VAL_190_JA },
         { "200", OPTION_VAL_200_JA },
         { "210", OPTION_VAL_210_JA },
         { "220", OPTION_VAL_220_JA },
         { "230", OPTION_VAL_230_JA },
         { "240", OPTION_VAL_240_JA },
         { "250", OPTION_VAL_250_JA },
         { "260", OPTION_VAL_260_JA },
         { "270", OPTION_VAL_270_JA },
         { "280", OPTION_VAL_280_JA },
         { "290", OPTION_VAL_290_JA },
         { "300", OPTION_VAL_300_JA },
         { "310", OPTION_VAL_310_JA },
         { "320", OPTION_VAL_320_JA },
         { "330", OPTION_VAL_330_JA },
         { "340", OPTION_VAL_340_JA },
         { "350", OPTION_VAL_350_JA },
         { "360", OPTION_VAL_360_JA },
         { "370", OPTION_VAL_370_JA },
         { "380", OPTION_VAL_380_JA },
         { "390", OPTION_VAL_390_JA },
         { "400", OPTION_VAL_400_JA },
         { "410", OPTION_VAL_410_JA },
         { "420", OPTION_VAL_420_JA },
         { "430", OPTION_VAL_430_JA },
         { "440", OPTION_VAL_440_JA },
         { "450", OPTION_VAL_450_JA },
         { "460", OPTION_VAL_460_JA },
         { "470", OPTION_VAL_470_JA },
         { "480", OPTION_VAL_480_JA },
         { "490", OPTION_VAL_490_JA },
         { "500", OPTION_VAL_500_JA },
         { "510", OPTION_VAL_510_JA },
         { "520", OPTION_VAL_520_JA },
         { "530", OPTION_VAL_530_JA },
         { "540", OPTION_VAL_540_JA },
         { "550", OPTION_VAL_550_JA },
         { "560", OPTION_VAL_560_JA },
         { "570", OPTION_VAL_570_JA },
         { "580", OPTION_VAL_580_JA },
         { "590", OPTION_VAL_590_JA },
         { "600", OPTION_VAL_600_JA },
         { "610", OPTION_VAL_610_JA },
         { "620", OPTION_VAL_620_JA },
         { "630", OPTION_VAL_630_JA },
         { "640", OPTION_VAL_640_JA },
         { "650", OPTION_VAL_650_JA },
         { "660", OPTION_VAL_660_JA },
         { "670", OPTION_VAL_670_JA },
         { "680", OPTION_VAL_680_JA },
         { "690", OPTION_VAL_690_JA },
         { "700", OPTION_VAL_700_JA },
         { "710", OPTION_VAL_710_JA },
         { "720", OPTION_VAL_720_JA },
         { "730", OPTION_VAL_730_JA },
         { "740", OPTION_VAL_740_JA },
         { "750", OPTION_VAL_750_JA },
         { "760", OPTION_VAL_760_JA },
         { "770", OPTION_VAL_770_JA },
         { "780", OPTION_VAL_780_JA },
         { "790", OPTION_VAL_790_JA },
         { "800", OPTION_VAL_800_JA },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_JA,
      BSNES_PPU_FAST_LABEL_CAT_JA,
      BSNES_PPU_FAST_INFO_0_JA,
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
      BSNES_PPU_DEINTERLACE_LABEL_JA,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_JA,
      BSNES_PPU_DEINTERLACE_INFO_0_JA,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_JA,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_JA,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_JA,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_JA,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_JA,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_JA,
      BSNES_MODE7_SCALE_LABEL_CAT_JA,
      BSNES_MODE7_SCALE_INFO_0_JA,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_JA  },
         { "2x", OPTION_VAL_2X_JA  },
         { "3x", OPTION_VAL_3X_JA  },
         { "4x", OPTION_VAL_4X_JA  },
         { "5x", OPTION_VAL_5X_JA },
         { "6x", OPTION_VAL_6X_JA },
         { "7x", OPTION_VAL_7X_JA },
         { "8x", OPTION_VAL_8X_JA },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_JA,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_JA,
      BSNES_MODE7_PERSPECTIVE_INFO_0_JA,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_JA,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_JA,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_JA,
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
      BSNES_MODE7_MOSAIC_LABEL_JA,
      BSNES_MODE7_MOSAIC_LABEL_CAT_JA,
      BSNES_MODE7_MOSAIC_INFO_0_JA,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_JA,
      BSNES_DSP_FAST_LABEL_CAT_JA,
      BSNES_DSP_FAST_INFO_0_JA,
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
      BSNES_DSP_CUBIC_LABEL_JA,
      BSNES_DSP_CUBIC_LABEL_CAT_JA,
      BSNES_DSP_CUBIC_INFO_0_JA,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_JA,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_JA,
      BSNES_DSP_ECHO_SHADOW_INFO_0_JA,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_JA,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_JA,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_JA,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_JA,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_JA,
      NULL,
      BSNES_SGB_BIOS_INFO_0_JA,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_JA   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_JA },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_JA,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_JA,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_JA  },
         { "2",   OPTION_VAL_2_JA },
         { "3",   OPTION_VAL_3_JA },
         { "4",   OPTION_VAL_4_JA },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_JA,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_JA,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_JA,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_JA,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_JA,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_JA,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define CATEGORY_VIDEO_LABEL_KO "비디오"
#define CATEGORY_VIDEO_INFO_0_KO "비디오 출력 설정을 변경합니다."
#define CATEGORY_AUDIO_LABEL_KO "오디오"
#define CATEGORY_AUDIO_INFO_0_KO "오디오 출력 설정을 변경합니다."
#define CATEGORY_MODE7_LABEL_KO NULL
#define CATEGORY_MODE7_INFO_0_KO NULL
#define CATEGORY_SGB_LABEL_KO NULL
#define CATEGORY_SGB_INFO_0_KO NULL
#define CATEGORY_LIGHTGUN_LABEL_KO "라이트 건"
#define CATEGORY_LIGHTGUN_INFO_0_KO NULL
#define CATEGORY_OVERCLOCK_LABEL_KO NULL
#define CATEGORY_OVERCLOCK_INFO_0_KO NULL
#define CATEGORY_HACK_LABEL_KO "에뮬레이션 핵"
#define CATEGORY_HACK_INFO_0_KO NULL
#define BSNES_ASPECT_RATIO_LABEL_KO "선호하는 화면비"
#define BSNES_ASPECT_RATIO_INFO_0_KO "선호하는 컨텐츠 화면비를 선택합니다. RetroArch의 비디오 설정에서 화면비가 'Core provided'로 설정되어 있어야 적용됩니다."
#define OPTION_VAL_AUTO_KO "자동"
#define OPTION_VAL_8_7_KO "픽셀 퍼펙트"
#define OPTION_VAL_4_3_KO NULL
#define OPTION_VAL_NTSC_KO NULL
#define OPTION_VAL_PAL_KO NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_KO "오버스캔 잘라내기"
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_KO NULL
#define OPTION_VAL_OFF_KO NULL
#define BSNES_BLUR_EMULATION_LABEL_KO NULL
#define BSNES_BLUR_EMULATION_INFO_0_KO NULL
#define BSNES_HOTFIXES_LABEL_KO NULL
#define BSNES_HOTFIXES_INFO_0_KO NULL
#define BSNES_ENTROPY_LABEL_KO NULL
#define BSNES_ENTROPY_INFO_0_KO NULL
#define OPTION_VAL_LOW_KO "낮음"
#define OPTION_VAL_HIGH_KO "높음"
#define OPTION_VAL_NONE_KO "없음"
#define BSNES_CPU_OVERCLOCK_LABEL_KO NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_KO NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_KO NULL
#define OPTION_VAL_10_KO NULL
#define OPTION_VAL_20_KO NULL
#define OPTION_VAL_30_KO NULL
#define OPTION_VAL_40_KO NULL
#define OPTION_VAL_50_KO NULL
#define OPTION_VAL_60_KO NULL
#define OPTION_VAL_70_KO NULL
#define OPTION_VAL_80_KO NULL
#define OPTION_VAL_90_KO NULL
#define OPTION_VAL_100_KO "100% (기본)"
#define OPTION_VAL_110_KO NULL
#define OPTION_VAL_120_KO NULL
#define OPTION_VAL_130_KO NULL
#define OPTION_VAL_140_KO NULL
#define OPTION_VAL_150_KO NULL
#define OPTION_VAL_160_KO NULL
#define OPTION_VAL_170_KO NULL
#define OPTION_VAL_180_KO NULL
#define OPTION_VAL_190_KO NULL
#define OPTION_VAL_200_KO NULL
#define OPTION_VAL_210_KO NULL
#define OPTION_VAL_220_KO NULL
#define OPTION_VAL_230_KO NULL
#define OPTION_VAL_240_KO NULL
#define OPTION_VAL_250_KO NULL
#define OPTION_VAL_260_KO NULL
#define OPTION_VAL_270_KO NULL
#define OPTION_VAL_280_KO NULL
#define OPTION_VAL_290_KO NULL
#define OPTION_VAL_300_KO NULL
#define OPTION_VAL_310_KO NULL
#define OPTION_VAL_320_KO NULL
#define OPTION_VAL_330_KO NULL
#define OPTION_VAL_340_KO NULL
#define OPTION_VAL_350_KO NULL
#define OPTION_VAL_360_KO NULL
#define OPTION_VAL_370_KO NULL
#define OPTION_VAL_380_KO NULL
#define OPTION_VAL_390_KO NULL
#define OPTION_VAL_400_KO NULL
#define BSNES_CPU_FASTMATH_LABEL_KO NULL
#define BSNES_CPU_FASTMATH_INFO_0_KO NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_KO NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_KO NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_KO NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_KO NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_KO NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_KO NULL
#define OPTION_VAL_410_KO NULL
#define OPTION_VAL_420_KO NULL
#define OPTION_VAL_430_KO NULL
#define OPTION_VAL_440_KO NULL
#define OPTION_VAL_450_KO NULL
#define OPTION_VAL_460_KO NULL
#define OPTION_VAL_470_KO NULL
#define OPTION_VAL_480_KO NULL
#define OPTION_VAL_490_KO NULL
#define OPTION_VAL_500_KO NULL
#define OPTION_VAL_510_KO NULL
#define OPTION_VAL_520_KO NULL
#define OPTION_VAL_530_KO NULL
#define OPTION_VAL_540_KO NULL
#define OPTION_VAL_550_KO NULL
#define OPTION_VAL_560_KO NULL
#define OPTION_VAL_570_KO NULL
#define OPTION_VAL_580_KO NULL
#define OPTION_VAL_590_KO NULL
#define OPTION_VAL_600_KO NULL
#define OPTION_VAL_610_KO NULL
#define OPTION_VAL_620_KO NULL
#define OPTION_VAL_630_KO NULL
#define OPTION_VAL_640_KO NULL
#define OPTION_VAL_650_KO NULL
#define OPTION_VAL_660_KO NULL
#define OPTION_VAL_670_KO NULL
#define OPTION_VAL_680_KO NULL
#define OPTION_VAL_690_KO NULL
#define OPTION_VAL_700_KO NULL
#define OPTION_VAL_710_KO NULL
#define OPTION_VAL_720_KO NULL
#define OPTION_VAL_730_KO NULL
#define OPTION_VAL_740_KO NULL
#define OPTION_VAL_750_KO NULL
#define OPTION_VAL_760_KO NULL
#define OPTION_VAL_770_KO NULL
#define OPTION_VAL_780_KO NULL
#define OPTION_VAL_790_KO NULL
#define OPTION_VAL_800_KO NULL
#define BSNES_PPU_FAST_LABEL_KO NULL
#define BSNES_PPU_FAST_LABEL_CAT_KO NULL
#define BSNES_PPU_FAST_INFO_0_KO NULL
#define BSNES_PPU_DEINTERLACE_LABEL_KO NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_KO NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_KO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_KO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_KO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_KO NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_KO NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_KO NULL
#define BSNES_MODE7_SCALE_LABEL_KO NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_KO "크기"
#define BSNES_MODE7_SCALE_INFO_0_KO NULL
#define OPTION_VAL_1X_KO NULL
#define OPTION_VAL_2X_KO NULL
#define OPTION_VAL_3X_KO NULL
#define OPTION_VAL_4X_KO NULL
#define OPTION_VAL_5X_KO NULL
#define OPTION_VAL_6X_KO NULL
#define OPTION_VAL_7X_KO NULL
#define OPTION_VAL_8X_KO NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_KO NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_KO NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_KO NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_KO NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_KO NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_KO NULL
#define BSNES_MODE7_MOSAIC_LABEL_KO NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_KO NULL
#define BSNES_MODE7_MOSAIC_INFO_0_KO NULL
#define BSNES_DSP_FAST_LABEL_KO NULL
#define BSNES_DSP_FAST_LABEL_CAT_KO NULL
#define BSNES_DSP_FAST_INFO_0_KO NULL
#define BSNES_DSP_CUBIC_LABEL_KO NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_KO NULL
#define BSNES_DSP_CUBIC_INFO_0_KO NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_KO NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_KO NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_KO NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_KO NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_KO NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_KO NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_KO NULL
#define BSNES_SGB_BIOS_LABEL_KO NULL
#define BSNES_SGB_BIOS_INFO_0_KO NULL
#define OPTION_VAL_SGB1_SFC_KO NULL
#define OPTION_VAL_SGB2_SFC_KO NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_KO NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_KO NULL
#define OPTION_VAL_1_KO NULL
#define OPTION_VAL_2_KO NULL
#define OPTION_VAL_3_KO NULL
#define OPTION_VAL_4_KO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_KO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_KO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_KO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_KO NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_KO NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_KO NULL

struct retro_core_option_v2_category option_cats_ko[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_KO,
      CATEGORY_VIDEO_INFO_0_KO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_KO,
      CATEGORY_AUDIO_INFO_0_KO
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_KO,
      CATEGORY_MODE7_INFO_0_KO
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_KO,
      CATEGORY_SGB_INFO_0_KO
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_KO,
      CATEGORY_LIGHTGUN_INFO_0_KO
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_KO,
      CATEGORY_OVERCLOCK_INFO_0_KO
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_KO,
      CATEGORY_HACK_INFO_0_KO
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_KO,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_KO,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_KO },
         { "8:7",  OPTION_VAL_8_7_KO },
         { "4:3",  OPTION_VAL_4_3_KO },
         { "NTSC", OPTION_VAL_NTSC_KO },
         { "PAL",  OPTION_VAL_PAL_KO },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_KO,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_KO,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_KO },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_KO,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_KO,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_KO,
      NULL,
      BSNES_HOTFIXES_INFO_0_KO,
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
      BSNES_ENTROPY_LABEL_KO,
      NULL,
      BSNES_ENTROPY_INFO_0_KO,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_KO },
         { "High", OPTION_VAL_HIGH_KO },
         { "None", OPTION_VAL_NONE_KO },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_KO,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_KO,
      BSNES_CPU_OVERCLOCK_INFO_0_KO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_KO  },
         { "20",  OPTION_VAL_20_KO  },
         { "30",  OPTION_VAL_30_KO  },
         { "40",  OPTION_VAL_40_KO  },
         { "50",  OPTION_VAL_50_KO  },
         { "60",  OPTION_VAL_60_KO  },
         { "70",  OPTION_VAL_70_KO  },
         { "80",  OPTION_VAL_80_KO  },
         { "90",  OPTION_VAL_90_KO  },
         { "100", OPTION_VAL_100_KO },
         { "110", OPTION_VAL_110_KO },
         { "120", OPTION_VAL_120_KO },
         { "130", OPTION_VAL_130_KO },
         { "140", OPTION_VAL_140_KO },
         { "150", OPTION_VAL_150_KO },
         { "160", OPTION_VAL_160_KO },
         { "170", OPTION_VAL_170_KO },
         { "180", OPTION_VAL_180_KO },
         { "190", OPTION_VAL_190_KO },
         { "200", OPTION_VAL_200_KO },
         { "210", OPTION_VAL_210_KO },
         { "220", OPTION_VAL_220_KO },
         { "230", OPTION_VAL_230_KO },
         { "240", OPTION_VAL_240_KO },
         { "250", OPTION_VAL_250_KO },
         { "260", OPTION_VAL_260_KO },
         { "270", OPTION_VAL_270_KO },
         { "280", OPTION_VAL_280_KO },
         { "290", OPTION_VAL_290_KO },
         { "300", OPTION_VAL_300_KO },
         { "310", OPTION_VAL_310_KO },
         { "320", OPTION_VAL_320_KO },
         { "330", OPTION_VAL_330_KO },
         { "340", OPTION_VAL_340_KO },
         { "350", OPTION_VAL_350_KO },
         { "360", OPTION_VAL_360_KO },
         { "370", OPTION_VAL_370_KO },
         { "380", OPTION_VAL_380_KO },
         { "390", OPTION_VAL_390_KO },
         { "400", OPTION_VAL_400_KO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_KO,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_KO,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_KO,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_KO,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_KO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_KO  },
         { "20",  OPTION_VAL_20_KO  },
         { "30",  OPTION_VAL_30_KO  },
         { "40",  OPTION_VAL_40_KO  },
         { "50",  OPTION_VAL_50_KO  },
         { "60",  OPTION_VAL_60_KO  },
         { "70",  OPTION_VAL_70_KO  },
         { "80",  OPTION_VAL_80_KO  },
         { "90",  OPTION_VAL_90_KO  },
         { "100", OPTION_VAL_100_KO },
         { "110", OPTION_VAL_110_KO },
         { "120", OPTION_VAL_120_KO },
         { "130", OPTION_VAL_130_KO },
         { "140", OPTION_VAL_140_KO },
         { "150", OPTION_VAL_150_KO },
         { "160", OPTION_VAL_160_KO },
         { "170", OPTION_VAL_170_KO },
         { "180", OPTION_VAL_180_KO },
         { "190", OPTION_VAL_190_KO },
         { "200", OPTION_VAL_200_KO },
         { "210", OPTION_VAL_210_KO },
         { "220", OPTION_VAL_220_KO },
         { "230", OPTION_VAL_230_KO },
         { "240", OPTION_VAL_240_KO },
         { "250", OPTION_VAL_250_KO },
         { "260", OPTION_VAL_260_KO },
         { "270", OPTION_VAL_270_KO },
         { "280", OPTION_VAL_280_KO },
         { "290", OPTION_VAL_290_KO },
         { "300", OPTION_VAL_300_KO },
         { "310", OPTION_VAL_310_KO },
         { "320", OPTION_VAL_320_KO },
         { "330", OPTION_VAL_330_KO },
         { "340", OPTION_VAL_340_KO },
         { "350", OPTION_VAL_350_KO },
         { "360", OPTION_VAL_360_KO },
         { "370", OPTION_VAL_370_KO },
         { "380", OPTION_VAL_380_KO },
         { "390", OPTION_VAL_390_KO },
         { "400", OPTION_VAL_400_KO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_KO,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_KO,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_KO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_KO  },
         { "20",  OPTION_VAL_20_KO  },
         { "30",  OPTION_VAL_30_KO  },
         { "40",  OPTION_VAL_40_KO  },
         { "50",  OPTION_VAL_50_KO  },
         { "60",  OPTION_VAL_60_KO  },
         { "70",  OPTION_VAL_70_KO  },
         { "80",  OPTION_VAL_80_KO  },
         { "90",  OPTION_VAL_90_KO  },
         { "100", OPTION_VAL_100_KO },
         { "110", OPTION_VAL_110_KO },
         { "120", OPTION_VAL_120_KO },
         { "130", OPTION_VAL_130_KO },
         { "140", OPTION_VAL_140_KO },
         { "150", OPTION_VAL_150_KO },
         { "160", OPTION_VAL_160_KO },
         { "170", OPTION_VAL_170_KO },
         { "180", OPTION_VAL_180_KO },
         { "190", OPTION_VAL_190_KO },
         { "200", OPTION_VAL_200_KO },
         { "210", OPTION_VAL_210_KO },
         { "220", OPTION_VAL_220_KO },
         { "230", OPTION_VAL_230_KO },
         { "240", OPTION_VAL_240_KO },
         { "250", OPTION_VAL_250_KO },
         { "260", OPTION_VAL_260_KO },
         { "270", OPTION_VAL_270_KO },
         { "280", OPTION_VAL_280_KO },
         { "290", OPTION_VAL_290_KO },
         { "300", OPTION_VAL_300_KO },
         { "310", OPTION_VAL_310_KO },
         { "320", OPTION_VAL_320_KO },
         { "330", OPTION_VAL_330_KO },
         { "340", OPTION_VAL_340_KO },
         { "350", OPTION_VAL_350_KO },
         { "360", OPTION_VAL_360_KO },
         { "370", OPTION_VAL_370_KO },
         { "380", OPTION_VAL_380_KO },
         { "390", OPTION_VAL_390_KO },
         { "400", OPTION_VAL_400_KO },
         { "410", OPTION_VAL_410_KO },
         { "420", OPTION_VAL_420_KO },
         { "430", OPTION_VAL_430_KO },
         { "440", OPTION_VAL_440_KO },
         { "450", OPTION_VAL_450_KO },
         { "460", OPTION_VAL_460_KO },
         { "470", OPTION_VAL_470_KO },
         { "480", OPTION_VAL_480_KO },
         { "490", OPTION_VAL_490_KO },
         { "500", OPTION_VAL_500_KO },
         { "510", OPTION_VAL_510_KO },
         { "520", OPTION_VAL_520_KO },
         { "530", OPTION_VAL_530_KO },
         { "540", OPTION_VAL_540_KO },
         { "550", OPTION_VAL_550_KO },
         { "560", OPTION_VAL_560_KO },
         { "570", OPTION_VAL_570_KO },
         { "580", OPTION_VAL_580_KO },
         { "590", OPTION_VAL_590_KO },
         { "600", OPTION_VAL_600_KO },
         { "610", OPTION_VAL_610_KO },
         { "620", OPTION_VAL_620_KO },
         { "630", OPTION_VAL_630_KO },
         { "640", OPTION_VAL_640_KO },
         { "650", OPTION_VAL_650_KO },
         { "660", OPTION_VAL_660_KO },
         { "670", OPTION_VAL_670_KO },
         { "680", OPTION_VAL_680_KO },
         { "690", OPTION_VAL_690_KO },
         { "700", OPTION_VAL_700_KO },
         { "710", OPTION_VAL_710_KO },
         { "720", OPTION_VAL_720_KO },
         { "730", OPTION_VAL_730_KO },
         { "740", OPTION_VAL_740_KO },
         { "750", OPTION_VAL_750_KO },
         { "760", OPTION_VAL_760_KO },
         { "770", OPTION_VAL_770_KO },
         { "780", OPTION_VAL_780_KO },
         { "790", OPTION_VAL_790_KO },
         { "800", OPTION_VAL_800_KO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_KO,
      BSNES_PPU_FAST_LABEL_CAT_KO,
      BSNES_PPU_FAST_INFO_0_KO,
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
      BSNES_PPU_DEINTERLACE_LABEL_KO,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_KO,
      BSNES_PPU_DEINTERLACE_INFO_0_KO,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_KO,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_KO,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_KO,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_KO,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_KO,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_KO,
      BSNES_MODE7_SCALE_LABEL_CAT_KO,
      BSNES_MODE7_SCALE_INFO_0_KO,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_KO  },
         { "2x", OPTION_VAL_2X_KO  },
         { "3x", OPTION_VAL_3X_KO  },
         { "4x", OPTION_VAL_4X_KO  },
         { "5x", OPTION_VAL_5X_KO },
         { "6x", OPTION_VAL_6X_KO },
         { "7x", OPTION_VAL_7X_KO },
         { "8x", OPTION_VAL_8X_KO },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_KO,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_KO,
      BSNES_MODE7_PERSPECTIVE_INFO_0_KO,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_KO,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_KO,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_KO,
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
      BSNES_MODE7_MOSAIC_LABEL_KO,
      BSNES_MODE7_MOSAIC_LABEL_CAT_KO,
      BSNES_MODE7_MOSAIC_INFO_0_KO,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_KO,
      BSNES_DSP_FAST_LABEL_CAT_KO,
      BSNES_DSP_FAST_INFO_0_KO,
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
      BSNES_DSP_CUBIC_LABEL_KO,
      BSNES_DSP_CUBIC_LABEL_CAT_KO,
      BSNES_DSP_CUBIC_INFO_0_KO,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_KO,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_KO,
      BSNES_DSP_ECHO_SHADOW_INFO_0_KO,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_KO,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_KO,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_KO,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_KO,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_KO,
      NULL,
      BSNES_SGB_BIOS_INFO_0_KO,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_KO   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_KO },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_KO,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_KO,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_KO  },
         { "2",   OPTION_VAL_2_KO },
         { "3",   OPTION_VAL_3_KO },
         { "4",   OPTION_VAL_4_KO },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_KO,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_KO,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_KO,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_KO,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_KO,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_KO,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_MT */

#define CATEGORY_VIDEO_LABEL_MT NULL
#define CATEGORY_VIDEO_INFO_0_MT NULL
#define CATEGORY_AUDIO_LABEL_MT NULL
#define CATEGORY_AUDIO_INFO_0_MT NULL
#define CATEGORY_MODE7_LABEL_MT NULL
#define CATEGORY_MODE7_INFO_0_MT NULL
#define CATEGORY_SGB_LABEL_MT NULL
#define CATEGORY_SGB_INFO_0_MT NULL
#define CATEGORY_LIGHTGUN_LABEL_MT NULL
#define CATEGORY_LIGHTGUN_INFO_0_MT NULL
#define CATEGORY_OVERCLOCK_LABEL_MT NULL
#define CATEGORY_OVERCLOCK_INFO_0_MT NULL
#define CATEGORY_HACK_LABEL_MT NULL
#define CATEGORY_HACK_INFO_0_MT NULL
#define BSNES_ASPECT_RATIO_LABEL_MT NULL
#define BSNES_ASPECT_RATIO_INFO_0_MT NULL
#define OPTION_VAL_AUTO_MT NULL
#define OPTION_VAL_8_7_MT NULL
#define OPTION_VAL_4_3_MT NULL
#define OPTION_VAL_NTSC_MT NULL
#define OPTION_VAL_PAL_MT NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_MT NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_MT NULL
#define OPTION_VAL_OFF_MT NULL
#define BSNES_BLUR_EMULATION_LABEL_MT NULL
#define BSNES_BLUR_EMULATION_INFO_0_MT NULL
#define BSNES_HOTFIXES_LABEL_MT NULL
#define BSNES_HOTFIXES_INFO_0_MT NULL
#define BSNES_ENTROPY_LABEL_MT NULL
#define BSNES_ENTROPY_INFO_0_MT NULL
#define OPTION_VAL_LOW_MT NULL
#define OPTION_VAL_HIGH_MT NULL
#define OPTION_VAL_NONE_MT NULL
#define BSNES_CPU_OVERCLOCK_LABEL_MT NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_MT NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_MT NULL
#define OPTION_VAL_10_MT NULL
#define OPTION_VAL_20_MT NULL
#define OPTION_VAL_30_MT NULL
#define OPTION_VAL_40_MT NULL
#define OPTION_VAL_50_MT NULL
#define OPTION_VAL_60_MT NULL
#define OPTION_VAL_70_MT NULL
#define OPTION_VAL_80_MT NULL
#define OPTION_VAL_90_MT NULL
#define OPTION_VAL_100_MT NULL
#define OPTION_VAL_110_MT NULL
#define OPTION_VAL_120_MT NULL
#define OPTION_VAL_130_MT NULL
#define OPTION_VAL_140_MT NULL
#define OPTION_VAL_150_MT NULL
#define OPTION_VAL_160_MT NULL
#define OPTION_VAL_170_MT NULL
#define OPTION_VAL_180_MT NULL
#define OPTION_VAL_190_MT NULL
#define OPTION_VAL_200_MT NULL
#define OPTION_VAL_210_MT NULL
#define OPTION_VAL_220_MT NULL
#define OPTION_VAL_230_MT NULL
#define OPTION_VAL_240_MT NULL
#define OPTION_VAL_250_MT NULL
#define OPTION_VAL_260_MT NULL
#define OPTION_VAL_270_MT NULL
#define OPTION_VAL_280_MT NULL
#define OPTION_VAL_290_MT NULL
#define OPTION_VAL_300_MT NULL
#define OPTION_VAL_310_MT NULL
#define OPTION_VAL_320_MT NULL
#define OPTION_VAL_330_MT NULL
#define OPTION_VAL_340_MT NULL
#define OPTION_VAL_350_MT NULL
#define OPTION_VAL_360_MT NULL
#define OPTION_VAL_370_MT NULL
#define OPTION_VAL_380_MT NULL
#define OPTION_VAL_390_MT NULL
#define OPTION_VAL_400_MT NULL
#define BSNES_CPU_FASTMATH_LABEL_MT NULL
#define BSNES_CPU_FASTMATH_INFO_0_MT NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_MT NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_MT NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_MT NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_MT NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_MT NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_MT NULL
#define OPTION_VAL_410_MT NULL
#define OPTION_VAL_420_MT NULL
#define OPTION_VAL_430_MT NULL
#define OPTION_VAL_440_MT NULL
#define OPTION_VAL_450_MT NULL
#define OPTION_VAL_460_MT NULL
#define OPTION_VAL_470_MT NULL
#define OPTION_VAL_480_MT NULL
#define OPTION_VAL_490_MT NULL
#define OPTION_VAL_500_MT NULL
#define OPTION_VAL_510_MT NULL
#define OPTION_VAL_520_MT NULL
#define OPTION_VAL_530_MT NULL
#define OPTION_VAL_540_MT NULL
#define OPTION_VAL_550_MT NULL
#define OPTION_VAL_560_MT NULL
#define OPTION_VAL_570_MT NULL
#define OPTION_VAL_580_MT NULL
#define OPTION_VAL_590_MT NULL
#define OPTION_VAL_600_MT NULL
#define OPTION_VAL_610_MT NULL
#define OPTION_VAL_620_MT NULL
#define OPTION_VAL_630_MT NULL
#define OPTION_VAL_640_MT NULL
#define OPTION_VAL_650_MT NULL
#define OPTION_VAL_660_MT NULL
#define OPTION_VAL_670_MT NULL
#define OPTION_VAL_680_MT NULL
#define OPTION_VAL_690_MT NULL
#define OPTION_VAL_700_MT NULL
#define OPTION_VAL_710_MT NULL
#define OPTION_VAL_720_MT NULL
#define OPTION_VAL_730_MT NULL
#define OPTION_VAL_740_MT NULL
#define OPTION_VAL_750_MT NULL
#define OPTION_VAL_760_MT NULL
#define OPTION_VAL_770_MT NULL
#define OPTION_VAL_780_MT NULL
#define OPTION_VAL_790_MT NULL
#define OPTION_VAL_800_MT NULL
#define BSNES_PPU_FAST_LABEL_MT NULL
#define BSNES_PPU_FAST_LABEL_CAT_MT NULL
#define BSNES_PPU_FAST_INFO_0_MT NULL
#define BSNES_PPU_DEINTERLACE_LABEL_MT NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_MT NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_MT NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_MT NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_MT NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_MT NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_MT NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_MT NULL
#define BSNES_MODE7_SCALE_LABEL_MT NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_MT NULL
#define BSNES_MODE7_SCALE_INFO_0_MT NULL
#define OPTION_VAL_1X_MT NULL
#define OPTION_VAL_2X_MT NULL
#define OPTION_VAL_3X_MT NULL
#define OPTION_VAL_4X_MT NULL
#define OPTION_VAL_5X_MT NULL
#define OPTION_VAL_6X_MT NULL
#define OPTION_VAL_7X_MT NULL
#define OPTION_VAL_8X_MT NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_MT NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_MT NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_MT NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_MT NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_MT NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_MT NULL
#define BSNES_MODE7_MOSAIC_LABEL_MT NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_MT NULL
#define BSNES_MODE7_MOSAIC_INFO_0_MT NULL
#define BSNES_DSP_FAST_LABEL_MT NULL
#define BSNES_DSP_FAST_LABEL_CAT_MT NULL
#define BSNES_DSP_FAST_INFO_0_MT NULL
#define BSNES_DSP_CUBIC_LABEL_MT NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_MT NULL
#define BSNES_DSP_CUBIC_INFO_0_MT NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_MT NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_MT NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_MT NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_MT NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_MT NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_MT NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_MT NULL
#define BSNES_SGB_BIOS_LABEL_MT NULL
#define BSNES_SGB_BIOS_INFO_0_MT NULL
#define OPTION_VAL_SGB1_SFC_MT NULL
#define OPTION_VAL_SGB2_SFC_MT NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_MT NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_MT NULL
#define OPTION_VAL_1_MT NULL
#define OPTION_VAL_2_MT NULL
#define OPTION_VAL_3_MT NULL
#define OPTION_VAL_4_MT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_MT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_MT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_MT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_MT NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_MT NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_MT NULL

struct retro_core_option_v2_category option_cats_mt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_MT,
      CATEGORY_VIDEO_INFO_0_MT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_MT,
      CATEGORY_AUDIO_INFO_0_MT
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_MT,
      CATEGORY_MODE7_INFO_0_MT
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_MT,
      CATEGORY_SGB_INFO_0_MT
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_MT,
      CATEGORY_LIGHTGUN_INFO_0_MT
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_MT,
      CATEGORY_OVERCLOCK_INFO_0_MT
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_MT,
      CATEGORY_HACK_INFO_0_MT
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_mt[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_MT,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_MT,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_MT },
         { "8:7",  OPTION_VAL_8_7_MT },
         { "4:3",  OPTION_VAL_4_3_MT },
         { "NTSC", OPTION_VAL_NTSC_MT },
         { "PAL",  OPTION_VAL_PAL_MT },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_MT,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_MT,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_MT },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_MT,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_MT,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_MT,
      NULL,
      BSNES_HOTFIXES_INFO_0_MT,
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
      BSNES_ENTROPY_LABEL_MT,
      NULL,
      BSNES_ENTROPY_INFO_0_MT,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_MT },
         { "High", OPTION_VAL_HIGH_MT },
         { "None", OPTION_VAL_NONE_MT },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_MT,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_MT,
      BSNES_CPU_OVERCLOCK_INFO_0_MT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_MT  },
         { "20",  OPTION_VAL_20_MT  },
         { "30",  OPTION_VAL_30_MT  },
         { "40",  OPTION_VAL_40_MT  },
         { "50",  OPTION_VAL_50_MT  },
         { "60",  OPTION_VAL_60_MT  },
         { "70",  OPTION_VAL_70_MT  },
         { "80",  OPTION_VAL_80_MT  },
         { "90",  OPTION_VAL_90_MT  },
         { "100", OPTION_VAL_100_MT },
         { "110", OPTION_VAL_110_MT },
         { "120", OPTION_VAL_120_MT },
         { "130", OPTION_VAL_130_MT },
         { "140", OPTION_VAL_140_MT },
         { "150", OPTION_VAL_150_MT },
         { "160", OPTION_VAL_160_MT },
         { "170", OPTION_VAL_170_MT },
         { "180", OPTION_VAL_180_MT },
         { "190", OPTION_VAL_190_MT },
         { "200", OPTION_VAL_200_MT },
         { "210", OPTION_VAL_210_MT },
         { "220", OPTION_VAL_220_MT },
         { "230", OPTION_VAL_230_MT },
         { "240", OPTION_VAL_240_MT },
         { "250", OPTION_VAL_250_MT },
         { "260", OPTION_VAL_260_MT },
         { "270", OPTION_VAL_270_MT },
         { "280", OPTION_VAL_280_MT },
         { "290", OPTION_VAL_290_MT },
         { "300", OPTION_VAL_300_MT },
         { "310", OPTION_VAL_310_MT },
         { "320", OPTION_VAL_320_MT },
         { "330", OPTION_VAL_330_MT },
         { "340", OPTION_VAL_340_MT },
         { "350", OPTION_VAL_350_MT },
         { "360", OPTION_VAL_360_MT },
         { "370", OPTION_VAL_370_MT },
         { "380", OPTION_VAL_380_MT },
         { "390", OPTION_VAL_390_MT },
         { "400", OPTION_VAL_400_MT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_MT,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_MT,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_MT,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_MT,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_MT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_MT  },
         { "20",  OPTION_VAL_20_MT  },
         { "30",  OPTION_VAL_30_MT  },
         { "40",  OPTION_VAL_40_MT  },
         { "50",  OPTION_VAL_50_MT  },
         { "60",  OPTION_VAL_60_MT  },
         { "70",  OPTION_VAL_70_MT  },
         { "80",  OPTION_VAL_80_MT  },
         { "90",  OPTION_VAL_90_MT  },
         { "100", OPTION_VAL_100_MT },
         { "110", OPTION_VAL_110_MT },
         { "120", OPTION_VAL_120_MT },
         { "130", OPTION_VAL_130_MT },
         { "140", OPTION_VAL_140_MT },
         { "150", OPTION_VAL_150_MT },
         { "160", OPTION_VAL_160_MT },
         { "170", OPTION_VAL_170_MT },
         { "180", OPTION_VAL_180_MT },
         { "190", OPTION_VAL_190_MT },
         { "200", OPTION_VAL_200_MT },
         { "210", OPTION_VAL_210_MT },
         { "220", OPTION_VAL_220_MT },
         { "230", OPTION_VAL_230_MT },
         { "240", OPTION_VAL_240_MT },
         { "250", OPTION_VAL_250_MT },
         { "260", OPTION_VAL_260_MT },
         { "270", OPTION_VAL_270_MT },
         { "280", OPTION_VAL_280_MT },
         { "290", OPTION_VAL_290_MT },
         { "300", OPTION_VAL_300_MT },
         { "310", OPTION_VAL_310_MT },
         { "320", OPTION_VAL_320_MT },
         { "330", OPTION_VAL_330_MT },
         { "340", OPTION_VAL_340_MT },
         { "350", OPTION_VAL_350_MT },
         { "360", OPTION_VAL_360_MT },
         { "370", OPTION_VAL_370_MT },
         { "380", OPTION_VAL_380_MT },
         { "390", OPTION_VAL_390_MT },
         { "400", OPTION_VAL_400_MT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_MT,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_MT,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_MT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_MT  },
         { "20",  OPTION_VAL_20_MT  },
         { "30",  OPTION_VAL_30_MT  },
         { "40",  OPTION_VAL_40_MT  },
         { "50",  OPTION_VAL_50_MT  },
         { "60",  OPTION_VAL_60_MT  },
         { "70",  OPTION_VAL_70_MT  },
         { "80",  OPTION_VAL_80_MT  },
         { "90",  OPTION_VAL_90_MT  },
         { "100", OPTION_VAL_100_MT },
         { "110", OPTION_VAL_110_MT },
         { "120", OPTION_VAL_120_MT },
         { "130", OPTION_VAL_130_MT },
         { "140", OPTION_VAL_140_MT },
         { "150", OPTION_VAL_150_MT },
         { "160", OPTION_VAL_160_MT },
         { "170", OPTION_VAL_170_MT },
         { "180", OPTION_VAL_180_MT },
         { "190", OPTION_VAL_190_MT },
         { "200", OPTION_VAL_200_MT },
         { "210", OPTION_VAL_210_MT },
         { "220", OPTION_VAL_220_MT },
         { "230", OPTION_VAL_230_MT },
         { "240", OPTION_VAL_240_MT },
         { "250", OPTION_VAL_250_MT },
         { "260", OPTION_VAL_260_MT },
         { "270", OPTION_VAL_270_MT },
         { "280", OPTION_VAL_280_MT },
         { "290", OPTION_VAL_290_MT },
         { "300", OPTION_VAL_300_MT },
         { "310", OPTION_VAL_310_MT },
         { "320", OPTION_VAL_320_MT },
         { "330", OPTION_VAL_330_MT },
         { "340", OPTION_VAL_340_MT },
         { "350", OPTION_VAL_350_MT },
         { "360", OPTION_VAL_360_MT },
         { "370", OPTION_VAL_370_MT },
         { "380", OPTION_VAL_380_MT },
         { "390", OPTION_VAL_390_MT },
         { "400", OPTION_VAL_400_MT },
         { "410", OPTION_VAL_410_MT },
         { "420", OPTION_VAL_420_MT },
         { "430", OPTION_VAL_430_MT },
         { "440", OPTION_VAL_440_MT },
         { "450", OPTION_VAL_450_MT },
         { "460", OPTION_VAL_460_MT },
         { "470", OPTION_VAL_470_MT },
         { "480", OPTION_VAL_480_MT },
         { "490", OPTION_VAL_490_MT },
         { "500", OPTION_VAL_500_MT },
         { "510", OPTION_VAL_510_MT },
         { "520", OPTION_VAL_520_MT },
         { "530", OPTION_VAL_530_MT },
         { "540", OPTION_VAL_540_MT },
         { "550", OPTION_VAL_550_MT },
         { "560", OPTION_VAL_560_MT },
         { "570", OPTION_VAL_570_MT },
         { "580", OPTION_VAL_580_MT },
         { "590", OPTION_VAL_590_MT },
         { "600", OPTION_VAL_600_MT },
         { "610", OPTION_VAL_610_MT },
         { "620", OPTION_VAL_620_MT },
         { "630", OPTION_VAL_630_MT },
         { "640", OPTION_VAL_640_MT },
         { "650", OPTION_VAL_650_MT },
         { "660", OPTION_VAL_660_MT },
         { "670", OPTION_VAL_670_MT },
         { "680", OPTION_VAL_680_MT },
         { "690", OPTION_VAL_690_MT },
         { "700", OPTION_VAL_700_MT },
         { "710", OPTION_VAL_710_MT },
         { "720", OPTION_VAL_720_MT },
         { "730", OPTION_VAL_730_MT },
         { "740", OPTION_VAL_740_MT },
         { "750", OPTION_VAL_750_MT },
         { "760", OPTION_VAL_760_MT },
         { "770", OPTION_VAL_770_MT },
         { "780", OPTION_VAL_780_MT },
         { "790", OPTION_VAL_790_MT },
         { "800", OPTION_VAL_800_MT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_MT,
      BSNES_PPU_FAST_LABEL_CAT_MT,
      BSNES_PPU_FAST_INFO_0_MT,
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
      BSNES_PPU_DEINTERLACE_LABEL_MT,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_MT,
      BSNES_PPU_DEINTERLACE_INFO_0_MT,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_MT,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_MT,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_MT,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_MT,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_MT,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_MT,
      BSNES_MODE7_SCALE_LABEL_CAT_MT,
      BSNES_MODE7_SCALE_INFO_0_MT,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_MT  },
         { "2x", OPTION_VAL_2X_MT  },
         { "3x", OPTION_VAL_3X_MT  },
         { "4x", OPTION_VAL_4X_MT  },
         { "5x", OPTION_VAL_5X_MT },
         { "6x", OPTION_VAL_6X_MT },
         { "7x", OPTION_VAL_7X_MT },
         { "8x", OPTION_VAL_8X_MT },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_MT,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_MT,
      BSNES_MODE7_PERSPECTIVE_INFO_0_MT,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_MT,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_MT,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_MT,
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
      BSNES_MODE7_MOSAIC_LABEL_MT,
      BSNES_MODE7_MOSAIC_LABEL_CAT_MT,
      BSNES_MODE7_MOSAIC_INFO_0_MT,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_MT,
      BSNES_DSP_FAST_LABEL_CAT_MT,
      BSNES_DSP_FAST_INFO_0_MT,
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
      BSNES_DSP_CUBIC_LABEL_MT,
      BSNES_DSP_CUBIC_LABEL_CAT_MT,
      BSNES_DSP_CUBIC_INFO_0_MT,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_MT,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_MT,
      BSNES_DSP_ECHO_SHADOW_INFO_0_MT,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_MT,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_MT,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_MT,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_MT,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_MT,
      NULL,
      BSNES_SGB_BIOS_INFO_0_MT,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_MT   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_MT },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_MT,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_MT,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_MT  },
         { "2",   OPTION_VAL_2_MT },
         { "3",   OPTION_VAL_3_MT },
         { "4",   OPTION_VAL_4_MT },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_MT,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_MT,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_MT,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_MT,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_MT,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_MT,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_mt = {
   option_cats_mt,
   option_defs_mt
};

/* RETRO_LANGUAGE_NL */

#define CATEGORY_VIDEO_LABEL_NL NULL
#define CATEGORY_VIDEO_INFO_0_NL "Instellingen voor video-uitvoer wijzigen."
#define CATEGORY_AUDIO_LABEL_NL "Geluid"
#define CATEGORY_AUDIO_INFO_0_NL "Instellingen voor audio-uitvoer wijzigen."
#define CATEGORY_MODE7_LABEL_NL NULL
#define CATEGORY_MODE7_INFO_0_NL NULL
#define CATEGORY_SGB_LABEL_NL NULL
#define CATEGORY_SGB_INFO_0_NL NULL
#define CATEGORY_LIGHTGUN_LABEL_NL NULL
#define CATEGORY_LIGHTGUN_INFO_0_NL NULL
#define CATEGORY_OVERCLOCK_LABEL_NL NULL
#define CATEGORY_OVERCLOCK_INFO_0_NL NULL
#define CATEGORY_HACK_LABEL_NL NULL
#define CATEGORY_HACK_INFO_0_NL NULL
#define BSNES_ASPECT_RATIO_LABEL_NL NULL
#define BSNES_ASPECT_RATIO_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL "Automatisch"
#define OPTION_VAL_8_7_NL NULL
#define OPTION_VAL_4_3_NL NULL
#define OPTION_VAL_NTSC_NL NULL
#define OPTION_VAL_PAL_NL NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_NL NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_NL NULL
#define OPTION_VAL_OFF_NL NULL
#define BSNES_BLUR_EMULATION_LABEL_NL NULL
#define BSNES_BLUR_EMULATION_INFO_0_NL NULL
#define BSNES_HOTFIXES_LABEL_NL NULL
#define BSNES_HOTFIXES_INFO_0_NL NULL
#define BSNES_ENTROPY_LABEL_NL NULL
#define BSNES_ENTROPY_INFO_0_NL NULL
#define OPTION_VAL_LOW_NL NULL
#define OPTION_VAL_HIGH_NL NULL
#define OPTION_VAL_NONE_NL "Geen"
#define BSNES_CPU_OVERCLOCK_LABEL_NL NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_NL NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_NL NULL
#define OPTION_VAL_10_NL NULL
#define OPTION_VAL_20_NL NULL
#define OPTION_VAL_30_NL NULL
#define OPTION_VAL_40_NL NULL
#define OPTION_VAL_50_NL NULL
#define OPTION_VAL_60_NL NULL
#define OPTION_VAL_70_NL NULL
#define OPTION_VAL_80_NL NULL
#define OPTION_VAL_90_NL NULL
#define OPTION_VAL_100_NL NULL
#define OPTION_VAL_110_NL NULL
#define OPTION_VAL_120_NL NULL
#define OPTION_VAL_130_NL NULL
#define OPTION_VAL_140_NL NULL
#define OPTION_VAL_150_NL NULL
#define OPTION_VAL_160_NL NULL
#define OPTION_VAL_170_NL NULL
#define OPTION_VAL_180_NL NULL
#define OPTION_VAL_190_NL NULL
#define OPTION_VAL_200_NL NULL
#define OPTION_VAL_210_NL NULL
#define OPTION_VAL_220_NL NULL
#define OPTION_VAL_230_NL NULL
#define OPTION_VAL_240_NL NULL
#define OPTION_VAL_250_NL NULL
#define OPTION_VAL_260_NL NULL
#define OPTION_VAL_270_NL NULL
#define OPTION_VAL_280_NL NULL
#define OPTION_VAL_290_NL NULL
#define OPTION_VAL_300_NL NULL
#define OPTION_VAL_310_NL NULL
#define OPTION_VAL_320_NL NULL
#define OPTION_VAL_330_NL NULL
#define OPTION_VAL_340_NL NULL
#define OPTION_VAL_350_NL NULL
#define OPTION_VAL_360_NL NULL
#define OPTION_VAL_370_NL NULL
#define OPTION_VAL_380_NL NULL
#define OPTION_VAL_390_NL NULL
#define OPTION_VAL_400_NL NULL
#define BSNES_CPU_FASTMATH_LABEL_NL NULL
#define BSNES_CPU_FASTMATH_INFO_0_NL NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_NL NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_NL NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_NL NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_NL NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_NL NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_NL NULL
#define OPTION_VAL_410_NL NULL
#define OPTION_VAL_420_NL NULL
#define OPTION_VAL_430_NL NULL
#define OPTION_VAL_440_NL NULL
#define OPTION_VAL_450_NL NULL
#define OPTION_VAL_460_NL NULL
#define OPTION_VAL_470_NL NULL
#define OPTION_VAL_480_NL NULL
#define OPTION_VAL_490_NL NULL
#define OPTION_VAL_500_NL NULL
#define OPTION_VAL_510_NL NULL
#define OPTION_VAL_520_NL NULL
#define OPTION_VAL_530_NL NULL
#define OPTION_VAL_540_NL NULL
#define OPTION_VAL_550_NL NULL
#define OPTION_VAL_560_NL NULL
#define OPTION_VAL_570_NL NULL
#define OPTION_VAL_580_NL NULL
#define OPTION_VAL_590_NL NULL
#define OPTION_VAL_600_NL NULL
#define OPTION_VAL_610_NL NULL
#define OPTION_VAL_620_NL NULL
#define OPTION_VAL_630_NL NULL
#define OPTION_VAL_640_NL NULL
#define OPTION_VAL_650_NL NULL
#define OPTION_VAL_660_NL NULL
#define OPTION_VAL_670_NL NULL
#define OPTION_VAL_680_NL NULL
#define OPTION_VAL_690_NL NULL
#define OPTION_VAL_700_NL NULL
#define OPTION_VAL_710_NL NULL
#define OPTION_VAL_720_NL NULL
#define OPTION_VAL_730_NL NULL
#define OPTION_VAL_740_NL NULL
#define OPTION_VAL_750_NL NULL
#define OPTION_VAL_760_NL NULL
#define OPTION_VAL_770_NL NULL
#define OPTION_VAL_780_NL NULL
#define OPTION_VAL_790_NL NULL
#define OPTION_VAL_800_NL NULL
#define BSNES_PPU_FAST_LABEL_NL NULL
#define BSNES_PPU_FAST_LABEL_CAT_NL NULL
#define BSNES_PPU_FAST_INFO_0_NL NULL
#define BSNES_PPU_DEINTERLACE_LABEL_NL NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_NL NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_NL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_NL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_NL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_NL NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_NL NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_NL NULL
#define BSNES_MODE7_SCALE_LABEL_NL NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_NL NULL
#define BSNES_MODE7_SCALE_INFO_0_NL NULL
#define OPTION_VAL_1X_NL NULL
#define OPTION_VAL_2X_NL NULL
#define OPTION_VAL_3X_NL NULL
#define OPTION_VAL_4X_NL NULL
#define OPTION_VAL_5X_NL NULL
#define OPTION_VAL_6X_NL NULL
#define OPTION_VAL_7X_NL NULL
#define OPTION_VAL_8X_NL NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_NL NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_NL NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_NL NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_NL NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_NL NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_NL NULL
#define BSNES_MODE7_MOSAIC_LABEL_NL NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_NL NULL
#define BSNES_MODE7_MOSAIC_INFO_0_NL NULL
#define BSNES_DSP_FAST_LABEL_NL NULL
#define BSNES_DSP_FAST_LABEL_CAT_NL NULL
#define BSNES_DSP_FAST_INFO_0_NL NULL
#define BSNES_DSP_CUBIC_LABEL_NL NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_NL NULL
#define BSNES_DSP_CUBIC_INFO_0_NL NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_NL NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_NL NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_NL NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_NL NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_NL NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_NL NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_NL NULL
#define BSNES_SGB_BIOS_LABEL_NL NULL
#define BSNES_SGB_BIOS_INFO_0_NL NULL
#define OPTION_VAL_SGB1_SFC_NL NULL
#define OPTION_VAL_SGB2_SFC_NL NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_NL NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_NL NULL
#define OPTION_VAL_1_NL NULL
#define OPTION_VAL_2_NL NULL
#define OPTION_VAL_3_NL NULL
#define OPTION_VAL_4_NL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_NL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_NL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_NL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_NL NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_NL NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_NL,
      CATEGORY_VIDEO_INFO_0_NL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_NL,
      CATEGORY_AUDIO_INFO_0_NL
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_NL,
      CATEGORY_MODE7_INFO_0_NL
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_NL,
      CATEGORY_SGB_INFO_0_NL
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_NL,
      CATEGORY_LIGHTGUN_INFO_0_NL
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_NL,
      CATEGORY_OVERCLOCK_INFO_0_NL
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_NL,
      CATEGORY_HACK_INFO_0_NL
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_NL,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_NL,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_NL },
         { "8:7",  OPTION_VAL_8_7_NL },
         { "4:3",  OPTION_VAL_4_3_NL },
         { "NTSC", OPTION_VAL_NTSC_NL },
         { "PAL",  OPTION_VAL_PAL_NL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_NL,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_NL,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_NL },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_NL,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_NL,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_NL,
      NULL,
      BSNES_HOTFIXES_INFO_0_NL,
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
      BSNES_ENTROPY_LABEL_NL,
      NULL,
      BSNES_ENTROPY_INFO_0_NL,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_NL },
         { "High", OPTION_VAL_HIGH_NL },
         { "None", OPTION_VAL_NONE_NL },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_NL,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_NL,
      BSNES_CPU_OVERCLOCK_INFO_0_NL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_NL  },
         { "20",  OPTION_VAL_20_NL  },
         { "30",  OPTION_VAL_30_NL  },
         { "40",  OPTION_VAL_40_NL  },
         { "50",  OPTION_VAL_50_NL  },
         { "60",  OPTION_VAL_60_NL  },
         { "70",  OPTION_VAL_70_NL  },
         { "80",  OPTION_VAL_80_NL  },
         { "90",  OPTION_VAL_90_NL  },
         { "100", OPTION_VAL_100_NL },
         { "110", OPTION_VAL_110_NL },
         { "120", OPTION_VAL_120_NL },
         { "130", OPTION_VAL_130_NL },
         { "140", OPTION_VAL_140_NL },
         { "150", OPTION_VAL_150_NL },
         { "160", OPTION_VAL_160_NL },
         { "170", OPTION_VAL_170_NL },
         { "180", OPTION_VAL_180_NL },
         { "190", OPTION_VAL_190_NL },
         { "200", OPTION_VAL_200_NL },
         { "210", OPTION_VAL_210_NL },
         { "220", OPTION_VAL_220_NL },
         { "230", OPTION_VAL_230_NL },
         { "240", OPTION_VAL_240_NL },
         { "250", OPTION_VAL_250_NL },
         { "260", OPTION_VAL_260_NL },
         { "270", OPTION_VAL_270_NL },
         { "280", OPTION_VAL_280_NL },
         { "290", OPTION_VAL_290_NL },
         { "300", OPTION_VAL_300_NL },
         { "310", OPTION_VAL_310_NL },
         { "320", OPTION_VAL_320_NL },
         { "330", OPTION_VAL_330_NL },
         { "340", OPTION_VAL_340_NL },
         { "350", OPTION_VAL_350_NL },
         { "360", OPTION_VAL_360_NL },
         { "370", OPTION_VAL_370_NL },
         { "380", OPTION_VAL_380_NL },
         { "390", OPTION_VAL_390_NL },
         { "400", OPTION_VAL_400_NL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_NL,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_NL,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_NL,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_NL,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_NL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_NL  },
         { "20",  OPTION_VAL_20_NL  },
         { "30",  OPTION_VAL_30_NL  },
         { "40",  OPTION_VAL_40_NL  },
         { "50",  OPTION_VAL_50_NL  },
         { "60",  OPTION_VAL_60_NL  },
         { "70",  OPTION_VAL_70_NL  },
         { "80",  OPTION_VAL_80_NL  },
         { "90",  OPTION_VAL_90_NL  },
         { "100", OPTION_VAL_100_NL },
         { "110", OPTION_VAL_110_NL },
         { "120", OPTION_VAL_120_NL },
         { "130", OPTION_VAL_130_NL },
         { "140", OPTION_VAL_140_NL },
         { "150", OPTION_VAL_150_NL },
         { "160", OPTION_VAL_160_NL },
         { "170", OPTION_VAL_170_NL },
         { "180", OPTION_VAL_180_NL },
         { "190", OPTION_VAL_190_NL },
         { "200", OPTION_VAL_200_NL },
         { "210", OPTION_VAL_210_NL },
         { "220", OPTION_VAL_220_NL },
         { "230", OPTION_VAL_230_NL },
         { "240", OPTION_VAL_240_NL },
         { "250", OPTION_VAL_250_NL },
         { "260", OPTION_VAL_260_NL },
         { "270", OPTION_VAL_270_NL },
         { "280", OPTION_VAL_280_NL },
         { "290", OPTION_VAL_290_NL },
         { "300", OPTION_VAL_300_NL },
         { "310", OPTION_VAL_310_NL },
         { "320", OPTION_VAL_320_NL },
         { "330", OPTION_VAL_330_NL },
         { "340", OPTION_VAL_340_NL },
         { "350", OPTION_VAL_350_NL },
         { "360", OPTION_VAL_360_NL },
         { "370", OPTION_VAL_370_NL },
         { "380", OPTION_VAL_380_NL },
         { "390", OPTION_VAL_390_NL },
         { "400", OPTION_VAL_400_NL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_NL,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_NL,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_NL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_NL  },
         { "20",  OPTION_VAL_20_NL  },
         { "30",  OPTION_VAL_30_NL  },
         { "40",  OPTION_VAL_40_NL  },
         { "50",  OPTION_VAL_50_NL  },
         { "60",  OPTION_VAL_60_NL  },
         { "70",  OPTION_VAL_70_NL  },
         { "80",  OPTION_VAL_80_NL  },
         { "90",  OPTION_VAL_90_NL  },
         { "100", OPTION_VAL_100_NL },
         { "110", OPTION_VAL_110_NL },
         { "120", OPTION_VAL_120_NL },
         { "130", OPTION_VAL_130_NL },
         { "140", OPTION_VAL_140_NL },
         { "150", OPTION_VAL_150_NL },
         { "160", OPTION_VAL_160_NL },
         { "170", OPTION_VAL_170_NL },
         { "180", OPTION_VAL_180_NL },
         { "190", OPTION_VAL_190_NL },
         { "200", OPTION_VAL_200_NL },
         { "210", OPTION_VAL_210_NL },
         { "220", OPTION_VAL_220_NL },
         { "230", OPTION_VAL_230_NL },
         { "240", OPTION_VAL_240_NL },
         { "250", OPTION_VAL_250_NL },
         { "260", OPTION_VAL_260_NL },
         { "270", OPTION_VAL_270_NL },
         { "280", OPTION_VAL_280_NL },
         { "290", OPTION_VAL_290_NL },
         { "300", OPTION_VAL_300_NL },
         { "310", OPTION_VAL_310_NL },
         { "320", OPTION_VAL_320_NL },
         { "330", OPTION_VAL_330_NL },
         { "340", OPTION_VAL_340_NL },
         { "350", OPTION_VAL_350_NL },
         { "360", OPTION_VAL_360_NL },
         { "370", OPTION_VAL_370_NL },
         { "380", OPTION_VAL_380_NL },
         { "390", OPTION_VAL_390_NL },
         { "400", OPTION_VAL_400_NL },
         { "410", OPTION_VAL_410_NL },
         { "420", OPTION_VAL_420_NL },
         { "430", OPTION_VAL_430_NL },
         { "440", OPTION_VAL_440_NL },
         { "450", OPTION_VAL_450_NL },
         { "460", OPTION_VAL_460_NL },
         { "470", OPTION_VAL_470_NL },
         { "480", OPTION_VAL_480_NL },
         { "490", OPTION_VAL_490_NL },
         { "500", OPTION_VAL_500_NL },
         { "510", OPTION_VAL_510_NL },
         { "520", OPTION_VAL_520_NL },
         { "530", OPTION_VAL_530_NL },
         { "540", OPTION_VAL_540_NL },
         { "550", OPTION_VAL_550_NL },
         { "560", OPTION_VAL_560_NL },
         { "570", OPTION_VAL_570_NL },
         { "580", OPTION_VAL_580_NL },
         { "590", OPTION_VAL_590_NL },
         { "600", OPTION_VAL_600_NL },
         { "610", OPTION_VAL_610_NL },
         { "620", OPTION_VAL_620_NL },
         { "630", OPTION_VAL_630_NL },
         { "640", OPTION_VAL_640_NL },
         { "650", OPTION_VAL_650_NL },
         { "660", OPTION_VAL_660_NL },
         { "670", OPTION_VAL_670_NL },
         { "680", OPTION_VAL_680_NL },
         { "690", OPTION_VAL_690_NL },
         { "700", OPTION_VAL_700_NL },
         { "710", OPTION_VAL_710_NL },
         { "720", OPTION_VAL_720_NL },
         { "730", OPTION_VAL_730_NL },
         { "740", OPTION_VAL_740_NL },
         { "750", OPTION_VAL_750_NL },
         { "760", OPTION_VAL_760_NL },
         { "770", OPTION_VAL_770_NL },
         { "780", OPTION_VAL_780_NL },
         { "790", OPTION_VAL_790_NL },
         { "800", OPTION_VAL_800_NL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_NL,
      BSNES_PPU_FAST_LABEL_CAT_NL,
      BSNES_PPU_FAST_INFO_0_NL,
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
      BSNES_PPU_DEINTERLACE_LABEL_NL,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_NL,
      BSNES_PPU_DEINTERLACE_INFO_0_NL,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_NL,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_NL,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_NL,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_NL,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_NL,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_NL,
      BSNES_MODE7_SCALE_LABEL_CAT_NL,
      BSNES_MODE7_SCALE_INFO_0_NL,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_NL  },
         { "2x", OPTION_VAL_2X_NL  },
         { "3x", OPTION_VAL_3X_NL  },
         { "4x", OPTION_VAL_4X_NL  },
         { "5x", OPTION_VAL_5X_NL },
         { "6x", OPTION_VAL_6X_NL },
         { "7x", OPTION_VAL_7X_NL },
         { "8x", OPTION_VAL_8X_NL },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_NL,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_NL,
      BSNES_MODE7_PERSPECTIVE_INFO_0_NL,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_NL,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_NL,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_NL,
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
      BSNES_MODE7_MOSAIC_LABEL_NL,
      BSNES_MODE7_MOSAIC_LABEL_CAT_NL,
      BSNES_MODE7_MOSAIC_INFO_0_NL,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_NL,
      BSNES_DSP_FAST_LABEL_CAT_NL,
      BSNES_DSP_FAST_INFO_0_NL,
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
      BSNES_DSP_CUBIC_LABEL_NL,
      BSNES_DSP_CUBIC_LABEL_CAT_NL,
      BSNES_DSP_CUBIC_INFO_0_NL,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_NL,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_NL,
      BSNES_DSP_ECHO_SHADOW_INFO_0_NL,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_NL,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_NL,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_NL,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_NL,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_NL,
      NULL,
      BSNES_SGB_BIOS_INFO_0_NL,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_NL   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_NL },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_NL,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_NL,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_NL  },
         { "2",   OPTION_VAL_2_NL },
         { "3",   OPTION_VAL_3_NL },
         { "4",   OPTION_VAL_4_NL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_NL,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_NL,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_NL,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_NL,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_NL,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_NL,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_NO */

#define CATEGORY_VIDEO_LABEL_NO NULL
#define CATEGORY_VIDEO_INFO_0_NO "Endre innstillinger for video utdata."
#define CATEGORY_AUDIO_LABEL_NO "Lyd"
#define CATEGORY_AUDIO_INFO_0_NO "Endre innstillinger for lydutgang."
#define CATEGORY_MODE7_LABEL_NO NULL
#define CATEGORY_MODE7_INFO_0_NO NULL
#define CATEGORY_SGB_LABEL_NO NULL
#define CATEGORY_SGB_INFO_0_NO NULL
#define CATEGORY_LIGHTGUN_LABEL_NO NULL
#define CATEGORY_LIGHTGUN_INFO_0_NO NULL
#define CATEGORY_OVERCLOCK_LABEL_NO NULL
#define CATEGORY_OVERCLOCK_INFO_0_NO NULL
#define CATEGORY_HACK_LABEL_NO NULL
#define CATEGORY_HACK_INFO_0_NO NULL
#define BSNES_ASPECT_RATIO_LABEL_NO NULL
#define BSNES_ASPECT_RATIO_INFO_0_NO NULL
#define OPTION_VAL_AUTO_NO NULL
#define OPTION_VAL_8_7_NO NULL
#define OPTION_VAL_4_3_NO NULL
#define OPTION_VAL_NTSC_NO NULL
#define OPTION_VAL_PAL_NO NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_NO NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_NO NULL
#define OPTION_VAL_OFF_NO NULL
#define BSNES_BLUR_EMULATION_LABEL_NO NULL
#define BSNES_BLUR_EMULATION_INFO_0_NO NULL
#define BSNES_HOTFIXES_LABEL_NO NULL
#define BSNES_HOTFIXES_INFO_0_NO NULL
#define BSNES_ENTROPY_LABEL_NO NULL
#define BSNES_ENTROPY_INFO_0_NO NULL
#define OPTION_VAL_LOW_NO NULL
#define OPTION_VAL_HIGH_NO NULL
#define OPTION_VAL_NONE_NO NULL
#define BSNES_CPU_OVERCLOCK_LABEL_NO NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_NO NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_NO NULL
#define OPTION_VAL_10_NO NULL
#define OPTION_VAL_20_NO NULL
#define OPTION_VAL_30_NO NULL
#define OPTION_VAL_40_NO NULL
#define OPTION_VAL_50_NO NULL
#define OPTION_VAL_60_NO NULL
#define OPTION_VAL_70_NO NULL
#define OPTION_VAL_80_NO NULL
#define OPTION_VAL_90_NO NULL
#define OPTION_VAL_100_NO NULL
#define OPTION_VAL_110_NO NULL
#define OPTION_VAL_120_NO NULL
#define OPTION_VAL_130_NO NULL
#define OPTION_VAL_140_NO NULL
#define OPTION_VAL_150_NO NULL
#define OPTION_VAL_160_NO NULL
#define OPTION_VAL_170_NO NULL
#define OPTION_VAL_180_NO NULL
#define OPTION_VAL_190_NO NULL
#define OPTION_VAL_200_NO NULL
#define OPTION_VAL_210_NO NULL
#define OPTION_VAL_220_NO NULL
#define OPTION_VAL_230_NO NULL
#define OPTION_VAL_240_NO NULL
#define OPTION_VAL_250_NO NULL
#define OPTION_VAL_260_NO NULL
#define OPTION_VAL_270_NO NULL
#define OPTION_VAL_280_NO NULL
#define OPTION_VAL_290_NO NULL
#define OPTION_VAL_300_NO NULL
#define OPTION_VAL_310_NO NULL
#define OPTION_VAL_320_NO NULL
#define OPTION_VAL_330_NO NULL
#define OPTION_VAL_340_NO NULL
#define OPTION_VAL_350_NO NULL
#define OPTION_VAL_360_NO NULL
#define OPTION_VAL_370_NO NULL
#define OPTION_VAL_380_NO NULL
#define OPTION_VAL_390_NO NULL
#define OPTION_VAL_400_NO NULL
#define BSNES_CPU_FASTMATH_LABEL_NO NULL
#define BSNES_CPU_FASTMATH_INFO_0_NO NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_NO NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_NO NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_NO NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_NO NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_NO NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_NO NULL
#define OPTION_VAL_410_NO NULL
#define OPTION_VAL_420_NO NULL
#define OPTION_VAL_430_NO NULL
#define OPTION_VAL_440_NO NULL
#define OPTION_VAL_450_NO NULL
#define OPTION_VAL_460_NO NULL
#define OPTION_VAL_470_NO NULL
#define OPTION_VAL_480_NO NULL
#define OPTION_VAL_490_NO NULL
#define OPTION_VAL_500_NO NULL
#define OPTION_VAL_510_NO NULL
#define OPTION_VAL_520_NO NULL
#define OPTION_VAL_530_NO NULL
#define OPTION_VAL_540_NO NULL
#define OPTION_VAL_550_NO NULL
#define OPTION_VAL_560_NO NULL
#define OPTION_VAL_570_NO NULL
#define OPTION_VAL_580_NO NULL
#define OPTION_VAL_590_NO NULL
#define OPTION_VAL_600_NO NULL
#define OPTION_VAL_610_NO NULL
#define OPTION_VAL_620_NO NULL
#define OPTION_VAL_630_NO NULL
#define OPTION_VAL_640_NO NULL
#define OPTION_VAL_650_NO NULL
#define OPTION_VAL_660_NO NULL
#define OPTION_VAL_670_NO NULL
#define OPTION_VAL_680_NO NULL
#define OPTION_VAL_690_NO NULL
#define OPTION_VAL_700_NO NULL
#define OPTION_VAL_710_NO NULL
#define OPTION_VAL_720_NO NULL
#define OPTION_VAL_730_NO NULL
#define OPTION_VAL_740_NO NULL
#define OPTION_VAL_750_NO NULL
#define OPTION_VAL_760_NO NULL
#define OPTION_VAL_770_NO NULL
#define OPTION_VAL_780_NO NULL
#define OPTION_VAL_790_NO NULL
#define OPTION_VAL_800_NO NULL
#define BSNES_PPU_FAST_LABEL_NO NULL
#define BSNES_PPU_FAST_LABEL_CAT_NO NULL
#define BSNES_PPU_FAST_INFO_0_NO NULL
#define BSNES_PPU_DEINTERLACE_LABEL_NO NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_NO NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_NO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_NO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_NO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_NO NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_NO NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_NO NULL
#define BSNES_MODE7_SCALE_LABEL_NO NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_NO NULL
#define BSNES_MODE7_SCALE_INFO_0_NO NULL
#define OPTION_VAL_1X_NO NULL
#define OPTION_VAL_2X_NO NULL
#define OPTION_VAL_3X_NO NULL
#define OPTION_VAL_4X_NO NULL
#define OPTION_VAL_5X_NO NULL
#define OPTION_VAL_6X_NO NULL
#define OPTION_VAL_7X_NO NULL
#define OPTION_VAL_8X_NO NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_NO NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_NO NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_NO NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_NO NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_NO NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_NO NULL
#define BSNES_MODE7_MOSAIC_LABEL_NO NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_NO NULL
#define BSNES_MODE7_MOSAIC_INFO_0_NO NULL
#define BSNES_DSP_FAST_LABEL_NO NULL
#define BSNES_DSP_FAST_LABEL_CAT_NO NULL
#define BSNES_DSP_FAST_INFO_0_NO NULL
#define BSNES_DSP_CUBIC_LABEL_NO NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_NO NULL
#define BSNES_DSP_CUBIC_INFO_0_NO NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_NO NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_NO NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_NO NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_NO NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_NO NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_NO NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_NO NULL
#define BSNES_SGB_BIOS_LABEL_NO NULL
#define BSNES_SGB_BIOS_INFO_0_NO NULL
#define OPTION_VAL_SGB1_SFC_NO NULL
#define OPTION_VAL_SGB2_SFC_NO NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_NO NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_NO NULL
#define OPTION_VAL_1_NO NULL
#define OPTION_VAL_2_NO NULL
#define OPTION_VAL_3_NO NULL
#define OPTION_VAL_4_NO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_NO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_NO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_NO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_NO NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_NO NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_NO NULL

struct retro_core_option_v2_category option_cats_no[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_NO,
      CATEGORY_VIDEO_INFO_0_NO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_NO,
      CATEGORY_AUDIO_INFO_0_NO
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_NO,
      CATEGORY_MODE7_INFO_0_NO
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_NO,
      CATEGORY_SGB_INFO_0_NO
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_NO,
      CATEGORY_LIGHTGUN_INFO_0_NO
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_NO,
      CATEGORY_OVERCLOCK_INFO_0_NO
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_NO,
      CATEGORY_HACK_INFO_0_NO
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_no[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_NO,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_NO,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_NO },
         { "8:7",  OPTION_VAL_8_7_NO },
         { "4:3",  OPTION_VAL_4_3_NO },
         { "NTSC", OPTION_VAL_NTSC_NO },
         { "PAL",  OPTION_VAL_PAL_NO },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_NO,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_NO,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_NO },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_NO,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_NO,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_NO,
      NULL,
      BSNES_HOTFIXES_INFO_0_NO,
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
      BSNES_ENTROPY_LABEL_NO,
      NULL,
      BSNES_ENTROPY_INFO_0_NO,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_NO },
         { "High", OPTION_VAL_HIGH_NO },
         { "None", OPTION_VAL_NONE_NO },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_NO,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_NO,
      BSNES_CPU_OVERCLOCK_INFO_0_NO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_NO  },
         { "20",  OPTION_VAL_20_NO  },
         { "30",  OPTION_VAL_30_NO  },
         { "40",  OPTION_VAL_40_NO  },
         { "50",  OPTION_VAL_50_NO  },
         { "60",  OPTION_VAL_60_NO  },
         { "70",  OPTION_VAL_70_NO  },
         { "80",  OPTION_VAL_80_NO  },
         { "90",  OPTION_VAL_90_NO  },
         { "100", OPTION_VAL_100_NO },
         { "110", OPTION_VAL_110_NO },
         { "120", OPTION_VAL_120_NO },
         { "130", OPTION_VAL_130_NO },
         { "140", OPTION_VAL_140_NO },
         { "150", OPTION_VAL_150_NO },
         { "160", OPTION_VAL_160_NO },
         { "170", OPTION_VAL_170_NO },
         { "180", OPTION_VAL_180_NO },
         { "190", OPTION_VAL_190_NO },
         { "200", OPTION_VAL_200_NO },
         { "210", OPTION_VAL_210_NO },
         { "220", OPTION_VAL_220_NO },
         { "230", OPTION_VAL_230_NO },
         { "240", OPTION_VAL_240_NO },
         { "250", OPTION_VAL_250_NO },
         { "260", OPTION_VAL_260_NO },
         { "270", OPTION_VAL_270_NO },
         { "280", OPTION_VAL_280_NO },
         { "290", OPTION_VAL_290_NO },
         { "300", OPTION_VAL_300_NO },
         { "310", OPTION_VAL_310_NO },
         { "320", OPTION_VAL_320_NO },
         { "330", OPTION_VAL_330_NO },
         { "340", OPTION_VAL_340_NO },
         { "350", OPTION_VAL_350_NO },
         { "360", OPTION_VAL_360_NO },
         { "370", OPTION_VAL_370_NO },
         { "380", OPTION_VAL_380_NO },
         { "390", OPTION_VAL_390_NO },
         { "400", OPTION_VAL_400_NO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_NO,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_NO,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_NO,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_NO,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_NO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_NO  },
         { "20",  OPTION_VAL_20_NO  },
         { "30",  OPTION_VAL_30_NO  },
         { "40",  OPTION_VAL_40_NO  },
         { "50",  OPTION_VAL_50_NO  },
         { "60",  OPTION_VAL_60_NO  },
         { "70",  OPTION_VAL_70_NO  },
         { "80",  OPTION_VAL_80_NO  },
         { "90",  OPTION_VAL_90_NO  },
         { "100", OPTION_VAL_100_NO },
         { "110", OPTION_VAL_110_NO },
         { "120", OPTION_VAL_120_NO },
         { "130", OPTION_VAL_130_NO },
         { "140", OPTION_VAL_140_NO },
         { "150", OPTION_VAL_150_NO },
         { "160", OPTION_VAL_160_NO },
         { "170", OPTION_VAL_170_NO },
         { "180", OPTION_VAL_180_NO },
         { "190", OPTION_VAL_190_NO },
         { "200", OPTION_VAL_200_NO },
         { "210", OPTION_VAL_210_NO },
         { "220", OPTION_VAL_220_NO },
         { "230", OPTION_VAL_230_NO },
         { "240", OPTION_VAL_240_NO },
         { "250", OPTION_VAL_250_NO },
         { "260", OPTION_VAL_260_NO },
         { "270", OPTION_VAL_270_NO },
         { "280", OPTION_VAL_280_NO },
         { "290", OPTION_VAL_290_NO },
         { "300", OPTION_VAL_300_NO },
         { "310", OPTION_VAL_310_NO },
         { "320", OPTION_VAL_320_NO },
         { "330", OPTION_VAL_330_NO },
         { "340", OPTION_VAL_340_NO },
         { "350", OPTION_VAL_350_NO },
         { "360", OPTION_VAL_360_NO },
         { "370", OPTION_VAL_370_NO },
         { "380", OPTION_VAL_380_NO },
         { "390", OPTION_VAL_390_NO },
         { "400", OPTION_VAL_400_NO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_NO,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_NO,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_NO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_NO  },
         { "20",  OPTION_VAL_20_NO  },
         { "30",  OPTION_VAL_30_NO  },
         { "40",  OPTION_VAL_40_NO  },
         { "50",  OPTION_VAL_50_NO  },
         { "60",  OPTION_VAL_60_NO  },
         { "70",  OPTION_VAL_70_NO  },
         { "80",  OPTION_VAL_80_NO  },
         { "90",  OPTION_VAL_90_NO  },
         { "100", OPTION_VAL_100_NO },
         { "110", OPTION_VAL_110_NO },
         { "120", OPTION_VAL_120_NO },
         { "130", OPTION_VAL_130_NO },
         { "140", OPTION_VAL_140_NO },
         { "150", OPTION_VAL_150_NO },
         { "160", OPTION_VAL_160_NO },
         { "170", OPTION_VAL_170_NO },
         { "180", OPTION_VAL_180_NO },
         { "190", OPTION_VAL_190_NO },
         { "200", OPTION_VAL_200_NO },
         { "210", OPTION_VAL_210_NO },
         { "220", OPTION_VAL_220_NO },
         { "230", OPTION_VAL_230_NO },
         { "240", OPTION_VAL_240_NO },
         { "250", OPTION_VAL_250_NO },
         { "260", OPTION_VAL_260_NO },
         { "270", OPTION_VAL_270_NO },
         { "280", OPTION_VAL_280_NO },
         { "290", OPTION_VAL_290_NO },
         { "300", OPTION_VAL_300_NO },
         { "310", OPTION_VAL_310_NO },
         { "320", OPTION_VAL_320_NO },
         { "330", OPTION_VAL_330_NO },
         { "340", OPTION_VAL_340_NO },
         { "350", OPTION_VAL_350_NO },
         { "360", OPTION_VAL_360_NO },
         { "370", OPTION_VAL_370_NO },
         { "380", OPTION_VAL_380_NO },
         { "390", OPTION_VAL_390_NO },
         { "400", OPTION_VAL_400_NO },
         { "410", OPTION_VAL_410_NO },
         { "420", OPTION_VAL_420_NO },
         { "430", OPTION_VAL_430_NO },
         { "440", OPTION_VAL_440_NO },
         { "450", OPTION_VAL_450_NO },
         { "460", OPTION_VAL_460_NO },
         { "470", OPTION_VAL_470_NO },
         { "480", OPTION_VAL_480_NO },
         { "490", OPTION_VAL_490_NO },
         { "500", OPTION_VAL_500_NO },
         { "510", OPTION_VAL_510_NO },
         { "520", OPTION_VAL_520_NO },
         { "530", OPTION_VAL_530_NO },
         { "540", OPTION_VAL_540_NO },
         { "550", OPTION_VAL_550_NO },
         { "560", OPTION_VAL_560_NO },
         { "570", OPTION_VAL_570_NO },
         { "580", OPTION_VAL_580_NO },
         { "590", OPTION_VAL_590_NO },
         { "600", OPTION_VAL_600_NO },
         { "610", OPTION_VAL_610_NO },
         { "620", OPTION_VAL_620_NO },
         { "630", OPTION_VAL_630_NO },
         { "640", OPTION_VAL_640_NO },
         { "650", OPTION_VAL_650_NO },
         { "660", OPTION_VAL_660_NO },
         { "670", OPTION_VAL_670_NO },
         { "680", OPTION_VAL_680_NO },
         { "690", OPTION_VAL_690_NO },
         { "700", OPTION_VAL_700_NO },
         { "710", OPTION_VAL_710_NO },
         { "720", OPTION_VAL_720_NO },
         { "730", OPTION_VAL_730_NO },
         { "740", OPTION_VAL_740_NO },
         { "750", OPTION_VAL_750_NO },
         { "760", OPTION_VAL_760_NO },
         { "770", OPTION_VAL_770_NO },
         { "780", OPTION_VAL_780_NO },
         { "790", OPTION_VAL_790_NO },
         { "800", OPTION_VAL_800_NO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_NO,
      BSNES_PPU_FAST_LABEL_CAT_NO,
      BSNES_PPU_FAST_INFO_0_NO,
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
      BSNES_PPU_DEINTERLACE_LABEL_NO,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_NO,
      BSNES_PPU_DEINTERLACE_INFO_0_NO,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_NO,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_NO,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_NO,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_NO,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_NO,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_NO,
      BSNES_MODE7_SCALE_LABEL_CAT_NO,
      BSNES_MODE7_SCALE_INFO_0_NO,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_NO  },
         { "2x", OPTION_VAL_2X_NO  },
         { "3x", OPTION_VAL_3X_NO  },
         { "4x", OPTION_VAL_4X_NO  },
         { "5x", OPTION_VAL_5X_NO },
         { "6x", OPTION_VAL_6X_NO },
         { "7x", OPTION_VAL_7X_NO },
         { "8x", OPTION_VAL_8X_NO },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_NO,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_NO,
      BSNES_MODE7_PERSPECTIVE_INFO_0_NO,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_NO,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_NO,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_NO,
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
      BSNES_MODE7_MOSAIC_LABEL_NO,
      BSNES_MODE7_MOSAIC_LABEL_CAT_NO,
      BSNES_MODE7_MOSAIC_INFO_0_NO,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_NO,
      BSNES_DSP_FAST_LABEL_CAT_NO,
      BSNES_DSP_FAST_INFO_0_NO,
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
      BSNES_DSP_CUBIC_LABEL_NO,
      BSNES_DSP_CUBIC_LABEL_CAT_NO,
      BSNES_DSP_CUBIC_INFO_0_NO,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_NO,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_NO,
      BSNES_DSP_ECHO_SHADOW_INFO_0_NO,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_NO,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_NO,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_NO,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_NO,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_NO,
      NULL,
      BSNES_SGB_BIOS_INFO_0_NO,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_NO   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_NO },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_NO,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_NO,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_NO  },
         { "2",   OPTION_VAL_2_NO },
         { "3",   OPTION_VAL_3_NO },
         { "4",   OPTION_VAL_4_NO },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_NO,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_NO,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_NO,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_NO,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_NO,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_NO,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_no = {
   option_cats_no,
   option_defs_no
};

/* RETRO_LANGUAGE_OC */

#define CATEGORY_VIDEO_LABEL_OC "Vidèo"
#define CATEGORY_VIDEO_INFO_0_OC NULL
#define CATEGORY_AUDIO_LABEL_OC NULL
#define CATEGORY_AUDIO_INFO_0_OC NULL
#define CATEGORY_MODE7_LABEL_OC NULL
#define CATEGORY_MODE7_INFO_0_OC NULL
#define CATEGORY_SGB_LABEL_OC NULL
#define CATEGORY_SGB_INFO_0_OC NULL
#define CATEGORY_LIGHTGUN_LABEL_OC NULL
#define CATEGORY_LIGHTGUN_INFO_0_OC NULL
#define CATEGORY_OVERCLOCK_LABEL_OC NULL
#define CATEGORY_OVERCLOCK_INFO_0_OC NULL
#define CATEGORY_HACK_LABEL_OC NULL
#define CATEGORY_HACK_INFO_0_OC NULL
#define BSNES_ASPECT_RATIO_LABEL_OC NULL
#define BSNES_ASPECT_RATIO_INFO_0_OC NULL
#define OPTION_VAL_AUTO_OC NULL
#define OPTION_VAL_8_7_OC NULL
#define OPTION_VAL_4_3_OC NULL
#define OPTION_VAL_NTSC_OC NULL
#define OPTION_VAL_PAL_OC NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_OC NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_OC NULL
#define OPTION_VAL_OFF_OC NULL
#define BSNES_BLUR_EMULATION_LABEL_OC NULL
#define BSNES_BLUR_EMULATION_INFO_0_OC NULL
#define BSNES_HOTFIXES_LABEL_OC NULL
#define BSNES_HOTFIXES_INFO_0_OC NULL
#define BSNES_ENTROPY_LABEL_OC NULL
#define BSNES_ENTROPY_INFO_0_OC NULL
#define OPTION_VAL_LOW_OC NULL
#define OPTION_VAL_HIGH_OC NULL
#define OPTION_VAL_NONE_OC NULL
#define BSNES_CPU_OVERCLOCK_LABEL_OC NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_OC NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_OC NULL
#define OPTION_VAL_10_OC NULL
#define OPTION_VAL_20_OC NULL
#define OPTION_VAL_30_OC NULL
#define OPTION_VAL_40_OC NULL
#define OPTION_VAL_50_OC NULL
#define OPTION_VAL_60_OC NULL
#define OPTION_VAL_70_OC NULL
#define OPTION_VAL_80_OC NULL
#define OPTION_VAL_90_OC NULL
#define OPTION_VAL_100_OC NULL
#define OPTION_VAL_110_OC NULL
#define OPTION_VAL_120_OC NULL
#define OPTION_VAL_130_OC NULL
#define OPTION_VAL_140_OC NULL
#define OPTION_VAL_150_OC NULL
#define OPTION_VAL_160_OC NULL
#define OPTION_VAL_170_OC NULL
#define OPTION_VAL_180_OC NULL
#define OPTION_VAL_190_OC NULL
#define OPTION_VAL_200_OC NULL
#define OPTION_VAL_210_OC NULL
#define OPTION_VAL_220_OC NULL
#define OPTION_VAL_230_OC NULL
#define OPTION_VAL_240_OC NULL
#define OPTION_VAL_250_OC NULL
#define OPTION_VAL_260_OC NULL
#define OPTION_VAL_270_OC NULL
#define OPTION_VAL_280_OC NULL
#define OPTION_VAL_290_OC NULL
#define OPTION_VAL_300_OC NULL
#define OPTION_VAL_310_OC NULL
#define OPTION_VAL_320_OC NULL
#define OPTION_VAL_330_OC NULL
#define OPTION_VAL_340_OC NULL
#define OPTION_VAL_350_OC NULL
#define OPTION_VAL_360_OC NULL
#define OPTION_VAL_370_OC NULL
#define OPTION_VAL_380_OC NULL
#define OPTION_VAL_390_OC NULL
#define OPTION_VAL_400_OC NULL
#define BSNES_CPU_FASTMATH_LABEL_OC NULL
#define BSNES_CPU_FASTMATH_INFO_0_OC NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_OC NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_OC NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_OC NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_OC NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_OC NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_OC NULL
#define OPTION_VAL_410_OC NULL
#define OPTION_VAL_420_OC NULL
#define OPTION_VAL_430_OC NULL
#define OPTION_VAL_440_OC NULL
#define OPTION_VAL_450_OC NULL
#define OPTION_VAL_460_OC NULL
#define OPTION_VAL_470_OC NULL
#define OPTION_VAL_480_OC NULL
#define OPTION_VAL_490_OC NULL
#define OPTION_VAL_500_OC NULL
#define OPTION_VAL_510_OC NULL
#define OPTION_VAL_520_OC NULL
#define OPTION_VAL_530_OC NULL
#define OPTION_VAL_540_OC NULL
#define OPTION_VAL_550_OC NULL
#define OPTION_VAL_560_OC NULL
#define OPTION_VAL_570_OC NULL
#define OPTION_VAL_580_OC NULL
#define OPTION_VAL_590_OC NULL
#define OPTION_VAL_600_OC NULL
#define OPTION_VAL_610_OC NULL
#define OPTION_VAL_620_OC NULL
#define OPTION_VAL_630_OC NULL
#define OPTION_VAL_640_OC NULL
#define OPTION_VAL_650_OC NULL
#define OPTION_VAL_660_OC NULL
#define OPTION_VAL_670_OC NULL
#define OPTION_VAL_680_OC NULL
#define OPTION_VAL_690_OC NULL
#define OPTION_VAL_700_OC NULL
#define OPTION_VAL_710_OC NULL
#define OPTION_VAL_720_OC NULL
#define OPTION_VAL_730_OC NULL
#define OPTION_VAL_740_OC NULL
#define OPTION_VAL_750_OC NULL
#define OPTION_VAL_760_OC NULL
#define OPTION_VAL_770_OC NULL
#define OPTION_VAL_780_OC NULL
#define OPTION_VAL_790_OC NULL
#define OPTION_VAL_800_OC NULL
#define BSNES_PPU_FAST_LABEL_OC NULL
#define BSNES_PPU_FAST_LABEL_CAT_OC NULL
#define BSNES_PPU_FAST_INFO_0_OC NULL
#define BSNES_PPU_DEINTERLACE_LABEL_OC NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_OC NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_OC NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_OC NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_OC NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_OC NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_OC NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_OC NULL
#define BSNES_MODE7_SCALE_LABEL_OC NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_OC NULL
#define BSNES_MODE7_SCALE_INFO_0_OC NULL
#define OPTION_VAL_1X_OC NULL
#define OPTION_VAL_2X_OC NULL
#define OPTION_VAL_3X_OC NULL
#define OPTION_VAL_4X_OC NULL
#define OPTION_VAL_5X_OC NULL
#define OPTION_VAL_6X_OC NULL
#define OPTION_VAL_7X_OC NULL
#define OPTION_VAL_8X_OC NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_OC NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_OC NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_OC NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_OC NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_OC NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_OC NULL
#define BSNES_MODE7_MOSAIC_LABEL_OC NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_OC NULL
#define BSNES_MODE7_MOSAIC_INFO_0_OC NULL
#define BSNES_DSP_FAST_LABEL_OC NULL
#define BSNES_DSP_FAST_LABEL_CAT_OC NULL
#define BSNES_DSP_FAST_INFO_0_OC NULL
#define BSNES_DSP_CUBIC_LABEL_OC NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_OC NULL
#define BSNES_DSP_CUBIC_INFO_0_OC NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_OC NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_OC NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_OC NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_OC NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_OC NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_OC NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_OC NULL
#define BSNES_SGB_BIOS_LABEL_OC NULL
#define BSNES_SGB_BIOS_INFO_0_OC NULL
#define OPTION_VAL_SGB1_SFC_OC NULL
#define OPTION_VAL_SGB2_SFC_OC NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_OC NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_OC NULL
#define OPTION_VAL_1_OC NULL
#define OPTION_VAL_2_OC NULL
#define OPTION_VAL_3_OC NULL
#define OPTION_VAL_4_OC NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_OC NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_OC NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_OC NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_OC NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_OC NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_OC NULL

struct retro_core_option_v2_category option_cats_oc[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_OC,
      CATEGORY_VIDEO_INFO_0_OC
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_OC,
      CATEGORY_AUDIO_INFO_0_OC
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_OC,
      CATEGORY_MODE7_INFO_0_OC
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_OC,
      CATEGORY_SGB_INFO_0_OC
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_OC,
      CATEGORY_LIGHTGUN_INFO_0_OC
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_OC,
      CATEGORY_OVERCLOCK_INFO_0_OC
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_OC,
      CATEGORY_HACK_INFO_0_OC
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_oc[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_OC,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_OC,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_OC },
         { "8:7",  OPTION_VAL_8_7_OC },
         { "4:3",  OPTION_VAL_4_3_OC },
         { "NTSC", OPTION_VAL_NTSC_OC },
         { "PAL",  OPTION_VAL_PAL_OC },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_OC,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_OC,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_OC },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_OC,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_OC,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_OC,
      NULL,
      BSNES_HOTFIXES_INFO_0_OC,
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
      BSNES_ENTROPY_LABEL_OC,
      NULL,
      BSNES_ENTROPY_INFO_0_OC,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_OC },
         { "High", OPTION_VAL_HIGH_OC },
         { "None", OPTION_VAL_NONE_OC },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_OC,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_OC,
      BSNES_CPU_OVERCLOCK_INFO_0_OC,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_OC  },
         { "20",  OPTION_VAL_20_OC  },
         { "30",  OPTION_VAL_30_OC  },
         { "40",  OPTION_VAL_40_OC  },
         { "50",  OPTION_VAL_50_OC  },
         { "60",  OPTION_VAL_60_OC  },
         { "70",  OPTION_VAL_70_OC  },
         { "80",  OPTION_VAL_80_OC  },
         { "90",  OPTION_VAL_90_OC  },
         { "100", OPTION_VAL_100_OC },
         { "110", OPTION_VAL_110_OC },
         { "120", OPTION_VAL_120_OC },
         { "130", OPTION_VAL_130_OC },
         { "140", OPTION_VAL_140_OC },
         { "150", OPTION_VAL_150_OC },
         { "160", OPTION_VAL_160_OC },
         { "170", OPTION_VAL_170_OC },
         { "180", OPTION_VAL_180_OC },
         { "190", OPTION_VAL_190_OC },
         { "200", OPTION_VAL_200_OC },
         { "210", OPTION_VAL_210_OC },
         { "220", OPTION_VAL_220_OC },
         { "230", OPTION_VAL_230_OC },
         { "240", OPTION_VAL_240_OC },
         { "250", OPTION_VAL_250_OC },
         { "260", OPTION_VAL_260_OC },
         { "270", OPTION_VAL_270_OC },
         { "280", OPTION_VAL_280_OC },
         { "290", OPTION_VAL_290_OC },
         { "300", OPTION_VAL_300_OC },
         { "310", OPTION_VAL_310_OC },
         { "320", OPTION_VAL_320_OC },
         { "330", OPTION_VAL_330_OC },
         { "340", OPTION_VAL_340_OC },
         { "350", OPTION_VAL_350_OC },
         { "360", OPTION_VAL_360_OC },
         { "370", OPTION_VAL_370_OC },
         { "380", OPTION_VAL_380_OC },
         { "390", OPTION_VAL_390_OC },
         { "400", OPTION_VAL_400_OC },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_OC,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_OC,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_OC,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_OC,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_OC,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_OC  },
         { "20",  OPTION_VAL_20_OC  },
         { "30",  OPTION_VAL_30_OC  },
         { "40",  OPTION_VAL_40_OC  },
         { "50",  OPTION_VAL_50_OC  },
         { "60",  OPTION_VAL_60_OC  },
         { "70",  OPTION_VAL_70_OC  },
         { "80",  OPTION_VAL_80_OC  },
         { "90",  OPTION_VAL_90_OC  },
         { "100", OPTION_VAL_100_OC },
         { "110", OPTION_VAL_110_OC },
         { "120", OPTION_VAL_120_OC },
         { "130", OPTION_VAL_130_OC },
         { "140", OPTION_VAL_140_OC },
         { "150", OPTION_VAL_150_OC },
         { "160", OPTION_VAL_160_OC },
         { "170", OPTION_VAL_170_OC },
         { "180", OPTION_VAL_180_OC },
         { "190", OPTION_VAL_190_OC },
         { "200", OPTION_VAL_200_OC },
         { "210", OPTION_VAL_210_OC },
         { "220", OPTION_VAL_220_OC },
         { "230", OPTION_VAL_230_OC },
         { "240", OPTION_VAL_240_OC },
         { "250", OPTION_VAL_250_OC },
         { "260", OPTION_VAL_260_OC },
         { "270", OPTION_VAL_270_OC },
         { "280", OPTION_VAL_280_OC },
         { "290", OPTION_VAL_290_OC },
         { "300", OPTION_VAL_300_OC },
         { "310", OPTION_VAL_310_OC },
         { "320", OPTION_VAL_320_OC },
         { "330", OPTION_VAL_330_OC },
         { "340", OPTION_VAL_340_OC },
         { "350", OPTION_VAL_350_OC },
         { "360", OPTION_VAL_360_OC },
         { "370", OPTION_VAL_370_OC },
         { "380", OPTION_VAL_380_OC },
         { "390", OPTION_VAL_390_OC },
         { "400", OPTION_VAL_400_OC },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_OC,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_OC,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_OC,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_OC  },
         { "20",  OPTION_VAL_20_OC  },
         { "30",  OPTION_VAL_30_OC  },
         { "40",  OPTION_VAL_40_OC  },
         { "50",  OPTION_VAL_50_OC  },
         { "60",  OPTION_VAL_60_OC  },
         { "70",  OPTION_VAL_70_OC  },
         { "80",  OPTION_VAL_80_OC  },
         { "90",  OPTION_VAL_90_OC  },
         { "100", OPTION_VAL_100_OC },
         { "110", OPTION_VAL_110_OC },
         { "120", OPTION_VAL_120_OC },
         { "130", OPTION_VAL_130_OC },
         { "140", OPTION_VAL_140_OC },
         { "150", OPTION_VAL_150_OC },
         { "160", OPTION_VAL_160_OC },
         { "170", OPTION_VAL_170_OC },
         { "180", OPTION_VAL_180_OC },
         { "190", OPTION_VAL_190_OC },
         { "200", OPTION_VAL_200_OC },
         { "210", OPTION_VAL_210_OC },
         { "220", OPTION_VAL_220_OC },
         { "230", OPTION_VAL_230_OC },
         { "240", OPTION_VAL_240_OC },
         { "250", OPTION_VAL_250_OC },
         { "260", OPTION_VAL_260_OC },
         { "270", OPTION_VAL_270_OC },
         { "280", OPTION_VAL_280_OC },
         { "290", OPTION_VAL_290_OC },
         { "300", OPTION_VAL_300_OC },
         { "310", OPTION_VAL_310_OC },
         { "320", OPTION_VAL_320_OC },
         { "330", OPTION_VAL_330_OC },
         { "340", OPTION_VAL_340_OC },
         { "350", OPTION_VAL_350_OC },
         { "360", OPTION_VAL_360_OC },
         { "370", OPTION_VAL_370_OC },
         { "380", OPTION_VAL_380_OC },
         { "390", OPTION_VAL_390_OC },
         { "400", OPTION_VAL_400_OC },
         { "410", OPTION_VAL_410_OC },
         { "420", OPTION_VAL_420_OC },
         { "430", OPTION_VAL_430_OC },
         { "440", OPTION_VAL_440_OC },
         { "450", OPTION_VAL_450_OC },
         { "460", OPTION_VAL_460_OC },
         { "470", OPTION_VAL_470_OC },
         { "480", OPTION_VAL_480_OC },
         { "490", OPTION_VAL_490_OC },
         { "500", OPTION_VAL_500_OC },
         { "510", OPTION_VAL_510_OC },
         { "520", OPTION_VAL_520_OC },
         { "530", OPTION_VAL_530_OC },
         { "540", OPTION_VAL_540_OC },
         { "550", OPTION_VAL_550_OC },
         { "560", OPTION_VAL_560_OC },
         { "570", OPTION_VAL_570_OC },
         { "580", OPTION_VAL_580_OC },
         { "590", OPTION_VAL_590_OC },
         { "600", OPTION_VAL_600_OC },
         { "610", OPTION_VAL_610_OC },
         { "620", OPTION_VAL_620_OC },
         { "630", OPTION_VAL_630_OC },
         { "640", OPTION_VAL_640_OC },
         { "650", OPTION_VAL_650_OC },
         { "660", OPTION_VAL_660_OC },
         { "670", OPTION_VAL_670_OC },
         { "680", OPTION_VAL_680_OC },
         { "690", OPTION_VAL_690_OC },
         { "700", OPTION_VAL_700_OC },
         { "710", OPTION_VAL_710_OC },
         { "720", OPTION_VAL_720_OC },
         { "730", OPTION_VAL_730_OC },
         { "740", OPTION_VAL_740_OC },
         { "750", OPTION_VAL_750_OC },
         { "760", OPTION_VAL_760_OC },
         { "770", OPTION_VAL_770_OC },
         { "780", OPTION_VAL_780_OC },
         { "790", OPTION_VAL_790_OC },
         { "800", OPTION_VAL_800_OC },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_OC,
      BSNES_PPU_FAST_LABEL_CAT_OC,
      BSNES_PPU_FAST_INFO_0_OC,
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
      BSNES_PPU_DEINTERLACE_LABEL_OC,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_OC,
      BSNES_PPU_DEINTERLACE_INFO_0_OC,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_OC,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_OC,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_OC,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_OC,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_OC,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_OC,
      BSNES_MODE7_SCALE_LABEL_CAT_OC,
      BSNES_MODE7_SCALE_INFO_0_OC,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_OC  },
         { "2x", OPTION_VAL_2X_OC  },
         { "3x", OPTION_VAL_3X_OC  },
         { "4x", OPTION_VAL_4X_OC  },
         { "5x", OPTION_VAL_5X_OC },
         { "6x", OPTION_VAL_6X_OC },
         { "7x", OPTION_VAL_7X_OC },
         { "8x", OPTION_VAL_8X_OC },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_OC,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_OC,
      BSNES_MODE7_PERSPECTIVE_INFO_0_OC,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_OC,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_OC,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_OC,
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
      BSNES_MODE7_MOSAIC_LABEL_OC,
      BSNES_MODE7_MOSAIC_LABEL_CAT_OC,
      BSNES_MODE7_MOSAIC_INFO_0_OC,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_OC,
      BSNES_DSP_FAST_LABEL_CAT_OC,
      BSNES_DSP_FAST_INFO_0_OC,
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
      BSNES_DSP_CUBIC_LABEL_OC,
      BSNES_DSP_CUBIC_LABEL_CAT_OC,
      BSNES_DSP_CUBIC_INFO_0_OC,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_OC,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_OC,
      BSNES_DSP_ECHO_SHADOW_INFO_0_OC,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_OC,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_OC,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_OC,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_OC,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_OC,
      NULL,
      BSNES_SGB_BIOS_INFO_0_OC,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_OC   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_OC },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_OC,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_OC,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_OC  },
         { "2",   OPTION_VAL_2_OC },
         { "3",   OPTION_VAL_3_OC },
         { "4",   OPTION_VAL_4_OC },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_OC,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_OC,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_OC,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_OC,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_OC,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_OC,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_oc = {
   option_cats_oc,
   option_defs_oc
};

/* RETRO_LANGUAGE_PL */

#define CATEGORY_VIDEO_LABEL_PL "Wideo"
#define CATEGORY_VIDEO_INFO_0_PL "Zmień ustawienia wyglądu wideo."
#define CATEGORY_AUDIO_LABEL_PL NULL
#define CATEGORY_AUDIO_INFO_0_PL "Zmień ustawienia wyjścia dźwięku."
#define CATEGORY_MODE7_LABEL_PL NULL
#define CATEGORY_MODE7_INFO_0_PL NULL
#define CATEGORY_SGB_LABEL_PL NULL
#define CATEGORY_SGB_INFO_0_PL "Zmień ustawienia dotyczące emulsji Super Game Boy."
#define CATEGORY_LIGHTGUN_LABEL_PL "Pistolet Świetlny"
#define CATEGORY_LIGHTGUN_INFO_0_PL "Zmień ustawienia broni świetlnej (ekran dotykowy)."
#define CATEGORY_OVERCLOCK_LABEL_PL NULL
#define CATEGORY_OVERCLOCK_INFO_0_PL NULL
#define CATEGORY_HACK_LABEL_PL "Hacki emulacyjne"
#define CATEGORY_HACK_INFO_0_PL NULL
#define BSNES_ASPECT_RATIO_LABEL_PL NULL
#define BSNES_ASPECT_RATIO_INFO_0_PL NULL
#define OPTION_VAL_AUTO_PL NULL
#define OPTION_VAL_8_7_PL "Pikselowa perfekcja"
#define OPTION_VAL_4_3_PL NULL
#define OPTION_VAL_NTSC_PL NULL
#define OPTION_VAL_PAL_PL NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_PL "Przytnij overscan"
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_PL NULL
#define OPTION_VAL_OFF_PL NULL
#define BSNES_BLUR_EMULATION_LABEL_PL NULL
#define BSNES_BLUR_EMULATION_INFO_0_PL NULL
#define BSNES_HOTFIXES_LABEL_PL NULL
#define BSNES_HOTFIXES_INFO_0_PL NULL
#define BSNES_ENTROPY_LABEL_PL NULL
#define BSNES_ENTROPY_INFO_0_PL NULL
#define OPTION_VAL_LOW_PL "Niski"
#define OPTION_VAL_HIGH_PL "Wysoki"
#define OPTION_VAL_NONE_PL "Brak"
#define BSNES_CPU_OVERCLOCK_LABEL_PL NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_PL NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_PL NULL
#define OPTION_VAL_10_PL NULL
#define OPTION_VAL_20_PL NULL
#define OPTION_VAL_30_PL "30 %"
#define OPTION_VAL_40_PL NULL
#define OPTION_VAL_50_PL "50 %"
#define OPTION_VAL_60_PL "60 %"
#define OPTION_VAL_70_PL NULL
#define OPTION_VAL_80_PL "80 %"
#define OPTION_VAL_90_PL NULL
#define OPTION_VAL_100_PL NULL
#define OPTION_VAL_110_PL NULL
#define OPTION_VAL_120_PL NULL
#define OPTION_VAL_130_PL NULL
#define OPTION_VAL_140_PL NULL
#define OPTION_VAL_150_PL NULL
#define OPTION_VAL_160_PL NULL
#define OPTION_VAL_170_PL NULL
#define OPTION_VAL_180_PL NULL
#define OPTION_VAL_190_PL NULL
#define OPTION_VAL_200_PL NULL
#define OPTION_VAL_210_PL NULL
#define OPTION_VAL_220_PL NULL
#define OPTION_VAL_230_PL NULL
#define OPTION_VAL_240_PL NULL
#define OPTION_VAL_250_PL NULL
#define OPTION_VAL_260_PL NULL
#define OPTION_VAL_270_PL NULL
#define OPTION_VAL_280_PL NULL
#define OPTION_VAL_290_PL NULL
#define OPTION_VAL_300_PL NULL
#define OPTION_VAL_310_PL NULL
#define OPTION_VAL_320_PL NULL
#define OPTION_VAL_330_PL NULL
#define OPTION_VAL_340_PL NULL
#define OPTION_VAL_350_PL NULL
#define OPTION_VAL_360_PL NULL
#define OPTION_VAL_370_PL NULL
#define OPTION_VAL_380_PL NULL
#define OPTION_VAL_390_PL NULL
#define OPTION_VAL_400_PL NULL
#define BSNES_CPU_FASTMATH_LABEL_PL NULL
#define BSNES_CPU_FASTMATH_INFO_0_PL NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_PL NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_PL NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_PL NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_PL NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_PL NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_PL NULL
#define OPTION_VAL_410_PL NULL
#define OPTION_VAL_420_PL NULL
#define OPTION_VAL_430_PL NULL
#define OPTION_VAL_440_PL NULL
#define OPTION_VAL_450_PL NULL
#define OPTION_VAL_460_PL NULL
#define OPTION_VAL_470_PL NULL
#define OPTION_VAL_480_PL NULL
#define OPTION_VAL_490_PL NULL
#define OPTION_VAL_500_PL NULL
#define OPTION_VAL_510_PL NULL
#define OPTION_VAL_520_PL NULL
#define OPTION_VAL_530_PL NULL
#define OPTION_VAL_540_PL NULL
#define OPTION_VAL_550_PL NULL
#define OPTION_VAL_560_PL NULL
#define OPTION_VAL_570_PL NULL
#define OPTION_VAL_580_PL NULL
#define OPTION_VAL_590_PL NULL
#define OPTION_VAL_600_PL NULL
#define OPTION_VAL_610_PL NULL
#define OPTION_VAL_620_PL NULL
#define OPTION_VAL_630_PL NULL
#define OPTION_VAL_640_PL NULL
#define OPTION_VAL_650_PL NULL
#define OPTION_VAL_660_PL NULL
#define OPTION_VAL_670_PL NULL
#define OPTION_VAL_680_PL NULL
#define OPTION_VAL_690_PL NULL
#define OPTION_VAL_700_PL NULL
#define OPTION_VAL_710_PL NULL
#define OPTION_VAL_720_PL NULL
#define OPTION_VAL_730_PL NULL
#define OPTION_VAL_740_PL NULL
#define OPTION_VAL_750_PL NULL
#define OPTION_VAL_760_PL NULL
#define OPTION_VAL_770_PL NULL
#define OPTION_VAL_780_PL NULL
#define OPTION_VAL_790_PL NULL
#define OPTION_VAL_800_PL NULL
#define BSNES_PPU_FAST_LABEL_PL NULL
#define BSNES_PPU_FAST_LABEL_CAT_PL NULL
#define BSNES_PPU_FAST_INFO_0_PL NULL
#define BSNES_PPU_DEINTERLACE_LABEL_PL NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_PL NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_PL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_PL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_PL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_PL NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_PL NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_PL NULL
#define BSNES_MODE7_SCALE_LABEL_PL NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_PL "Skala"
#define BSNES_MODE7_SCALE_INFO_0_PL NULL
#define OPTION_VAL_1X_PL NULL
#define OPTION_VAL_2X_PL NULL
#define OPTION_VAL_3X_PL NULL
#define OPTION_VAL_4X_PL NULL
#define OPTION_VAL_5X_PL NULL
#define OPTION_VAL_6X_PL NULL
#define OPTION_VAL_7X_PL NULL
#define OPTION_VAL_8X_PL NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_PL NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_PL NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_PL NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_PL NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_PL NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_PL NULL
#define BSNES_MODE7_MOSAIC_LABEL_PL NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_PL NULL
#define BSNES_MODE7_MOSAIC_INFO_0_PL NULL
#define BSNES_DSP_FAST_LABEL_PL NULL
#define BSNES_DSP_FAST_LABEL_CAT_PL NULL
#define BSNES_DSP_FAST_INFO_0_PL NULL
#define BSNES_DSP_CUBIC_LABEL_PL NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_PL NULL
#define BSNES_DSP_CUBIC_INFO_0_PL NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_PL NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_PL NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_PL NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_PL NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_PL NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_PL NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_PL NULL
#define BSNES_SGB_BIOS_LABEL_PL NULL
#define BSNES_SGB_BIOS_INFO_0_PL NULL
#define OPTION_VAL_SGB1_SFC_PL NULL
#define OPTION_VAL_SGB2_SFC_PL NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_PL NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_PL NULL
#define OPTION_VAL_1_PL NULL
#define OPTION_VAL_2_PL NULL
#define OPTION_VAL_3_PL NULL
#define OPTION_VAL_4_PL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_PL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_PL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_PL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_PL NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_PL NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_PL "Ukryj obramowanie podczas grania w Super Game Boy. Działa tylko wtedy, gdy 'Przytnij Przeskanowanie' jest włączone."

struct retro_core_option_v2_category option_cats_pl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PL,
      CATEGORY_VIDEO_INFO_0_PL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PL,
      CATEGORY_AUDIO_INFO_0_PL
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_PL,
      CATEGORY_MODE7_INFO_0_PL
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_PL,
      CATEGORY_SGB_INFO_0_PL
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_PL,
      CATEGORY_LIGHTGUN_INFO_0_PL
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_PL,
      CATEGORY_OVERCLOCK_INFO_0_PL
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_PL,
      CATEGORY_HACK_INFO_0_PL
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_PL,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_PL,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_PL },
         { "8:7",  OPTION_VAL_8_7_PL },
         { "4:3",  OPTION_VAL_4_3_PL },
         { "NTSC", OPTION_VAL_NTSC_PL },
         { "PAL",  OPTION_VAL_PAL_PL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_PL,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_PL,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_PL },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_PL,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_PL,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_PL,
      NULL,
      BSNES_HOTFIXES_INFO_0_PL,
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
      BSNES_ENTROPY_LABEL_PL,
      NULL,
      BSNES_ENTROPY_INFO_0_PL,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_PL },
         { "High", OPTION_VAL_HIGH_PL },
         { "None", OPTION_VAL_NONE_PL },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_PL,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_PL,
      BSNES_CPU_OVERCLOCK_INFO_0_PL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_PL  },
         { "20",  OPTION_VAL_20_PL  },
         { "30",  OPTION_VAL_30_PL  },
         { "40",  OPTION_VAL_40_PL  },
         { "50",  OPTION_VAL_50_PL  },
         { "60",  OPTION_VAL_60_PL  },
         { "70",  OPTION_VAL_70_PL  },
         { "80",  OPTION_VAL_80_PL  },
         { "90",  OPTION_VAL_90_PL  },
         { "100", OPTION_VAL_100_PL },
         { "110", OPTION_VAL_110_PL },
         { "120", OPTION_VAL_120_PL },
         { "130", OPTION_VAL_130_PL },
         { "140", OPTION_VAL_140_PL },
         { "150", OPTION_VAL_150_PL },
         { "160", OPTION_VAL_160_PL },
         { "170", OPTION_VAL_170_PL },
         { "180", OPTION_VAL_180_PL },
         { "190", OPTION_VAL_190_PL },
         { "200", OPTION_VAL_200_PL },
         { "210", OPTION_VAL_210_PL },
         { "220", OPTION_VAL_220_PL },
         { "230", OPTION_VAL_230_PL },
         { "240", OPTION_VAL_240_PL },
         { "250", OPTION_VAL_250_PL },
         { "260", OPTION_VAL_260_PL },
         { "270", OPTION_VAL_270_PL },
         { "280", OPTION_VAL_280_PL },
         { "290", OPTION_VAL_290_PL },
         { "300", OPTION_VAL_300_PL },
         { "310", OPTION_VAL_310_PL },
         { "320", OPTION_VAL_320_PL },
         { "330", OPTION_VAL_330_PL },
         { "340", OPTION_VAL_340_PL },
         { "350", OPTION_VAL_350_PL },
         { "360", OPTION_VAL_360_PL },
         { "370", OPTION_VAL_370_PL },
         { "380", OPTION_VAL_380_PL },
         { "390", OPTION_VAL_390_PL },
         { "400", OPTION_VAL_400_PL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_PL,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_PL,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_PL,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_PL,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_PL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_PL  },
         { "20",  OPTION_VAL_20_PL  },
         { "30",  OPTION_VAL_30_PL  },
         { "40",  OPTION_VAL_40_PL  },
         { "50",  OPTION_VAL_50_PL  },
         { "60",  OPTION_VAL_60_PL  },
         { "70",  OPTION_VAL_70_PL  },
         { "80",  OPTION_VAL_80_PL  },
         { "90",  OPTION_VAL_90_PL  },
         { "100", OPTION_VAL_100_PL },
         { "110", OPTION_VAL_110_PL },
         { "120", OPTION_VAL_120_PL },
         { "130", OPTION_VAL_130_PL },
         { "140", OPTION_VAL_140_PL },
         { "150", OPTION_VAL_150_PL },
         { "160", OPTION_VAL_160_PL },
         { "170", OPTION_VAL_170_PL },
         { "180", OPTION_VAL_180_PL },
         { "190", OPTION_VAL_190_PL },
         { "200", OPTION_VAL_200_PL },
         { "210", OPTION_VAL_210_PL },
         { "220", OPTION_VAL_220_PL },
         { "230", OPTION_VAL_230_PL },
         { "240", OPTION_VAL_240_PL },
         { "250", OPTION_VAL_250_PL },
         { "260", OPTION_VAL_260_PL },
         { "270", OPTION_VAL_270_PL },
         { "280", OPTION_VAL_280_PL },
         { "290", OPTION_VAL_290_PL },
         { "300", OPTION_VAL_300_PL },
         { "310", OPTION_VAL_310_PL },
         { "320", OPTION_VAL_320_PL },
         { "330", OPTION_VAL_330_PL },
         { "340", OPTION_VAL_340_PL },
         { "350", OPTION_VAL_350_PL },
         { "360", OPTION_VAL_360_PL },
         { "370", OPTION_VAL_370_PL },
         { "380", OPTION_VAL_380_PL },
         { "390", OPTION_VAL_390_PL },
         { "400", OPTION_VAL_400_PL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_PL,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_PL,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_PL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_PL  },
         { "20",  OPTION_VAL_20_PL  },
         { "30",  OPTION_VAL_30_PL  },
         { "40",  OPTION_VAL_40_PL  },
         { "50",  OPTION_VAL_50_PL  },
         { "60",  OPTION_VAL_60_PL  },
         { "70",  OPTION_VAL_70_PL  },
         { "80",  OPTION_VAL_80_PL  },
         { "90",  OPTION_VAL_90_PL  },
         { "100", OPTION_VAL_100_PL },
         { "110", OPTION_VAL_110_PL },
         { "120", OPTION_VAL_120_PL },
         { "130", OPTION_VAL_130_PL },
         { "140", OPTION_VAL_140_PL },
         { "150", OPTION_VAL_150_PL },
         { "160", OPTION_VAL_160_PL },
         { "170", OPTION_VAL_170_PL },
         { "180", OPTION_VAL_180_PL },
         { "190", OPTION_VAL_190_PL },
         { "200", OPTION_VAL_200_PL },
         { "210", OPTION_VAL_210_PL },
         { "220", OPTION_VAL_220_PL },
         { "230", OPTION_VAL_230_PL },
         { "240", OPTION_VAL_240_PL },
         { "250", OPTION_VAL_250_PL },
         { "260", OPTION_VAL_260_PL },
         { "270", OPTION_VAL_270_PL },
         { "280", OPTION_VAL_280_PL },
         { "290", OPTION_VAL_290_PL },
         { "300", OPTION_VAL_300_PL },
         { "310", OPTION_VAL_310_PL },
         { "320", OPTION_VAL_320_PL },
         { "330", OPTION_VAL_330_PL },
         { "340", OPTION_VAL_340_PL },
         { "350", OPTION_VAL_350_PL },
         { "360", OPTION_VAL_360_PL },
         { "370", OPTION_VAL_370_PL },
         { "380", OPTION_VAL_380_PL },
         { "390", OPTION_VAL_390_PL },
         { "400", OPTION_VAL_400_PL },
         { "410", OPTION_VAL_410_PL },
         { "420", OPTION_VAL_420_PL },
         { "430", OPTION_VAL_430_PL },
         { "440", OPTION_VAL_440_PL },
         { "450", OPTION_VAL_450_PL },
         { "460", OPTION_VAL_460_PL },
         { "470", OPTION_VAL_470_PL },
         { "480", OPTION_VAL_480_PL },
         { "490", OPTION_VAL_490_PL },
         { "500", OPTION_VAL_500_PL },
         { "510", OPTION_VAL_510_PL },
         { "520", OPTION_VAL_520_PL },
         { "530", OPTION_VAL_530_PL },
         { "540", OPTION_VAL_540_PL },
         { "550", OPTION_VAL_550_PL },
         { "560", OPTION_VAL_560_PL },
         { "570", OPTION_VAL_570_PL },
         { "580", OPTION_VAL_580_PL },
         { "590", OPTION_VAL_590_PL },
         { "600", OPTION_VAL_600_PL },
         { "610", OPTION_VAL_610_PL },
         { "620", OPTION_VAL_620_PL },
         { "630", OPTION_VAL_630_PL },
         { "640", OPTION_VAL_640_PL },
         { "650", OPTION_VAL_650_PL },
         { "660", OPTION_VAL_660_PL },
         { "670", OPTION_VAL_670_PL },
         { "680", OPTION_VAL_680_PL },
         { "690", OPTION_VAL_690_PL },
         { "700", OPTION_VAL_700_PL },
         { "710", OPTION_VAL_710_PL },
         { "720", OPTION_VAL_720_PL },
         { "730", OPTION_VAL_730_PL },
         { "740", OPTION_VAL_740_PL },
         { "750", OPTION_VAL_750_PL },
         { "760", OPTION_VAL_760_PL },
         { "770", OPTION_VAL_770_PL },
         { "780", OPTION_VAL_780_PL },
         { "790", OPTION_VAL_790_PL },
         { "800", OPTION_VAL_800_PL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_PL,
      BSNES_PPU_FAST_LABEL_CAT_PL,
      BSNES_PPU_FAST_INFO_0_PL,
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
      BSNES_PPU_DEINTERLACE_LABEL_PL,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_PL,
      BSNES_PPU_DEINTERLACE_INFO_0_PL,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_PL,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_PL,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_PL,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_PL,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_PL,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_PL,
      BSNES_MODE7_SCALE_LABEL_CAT_PL,
      BSNES_MODE7_SCALE_INFO_0_PL,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_PL  },
         { "2x", OPTION_VAL_2X_PL  },
         { "3x", OPTION_VAL_3X_PL  },
         { "4x", OPTION_VAL_4X_PL  },
         { "5x", OPTION_VAL_5X_PL },
         { "6x", OPTION_VAL_6X_PL },
         { "7x", OPTION_VAL_7X_PL },
         { "8x", OPTION_VAL_8X_PL },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_PL,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_PL,
      BSNES_MODE7_PERSPECTIVE_INFO_0_PL,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_PL,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_PL,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_PL,
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
      BSNES_MODE7_MOSAIC_LABEL_PL,
      BSNES_MODE7_MOSAIC_LABEL_CAT_PL,
      BSNES_MODE7_MOSAIC_INFO_0_PL,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_PL,
      BSNES_DSP_FAST_LABEL_CAT_PL,
      BSNES_DSP_FAST_INFO_0_PL,
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
      BSNES_DSP_CUBIC_LABEL_PL,
      BSNES_DSP_CUBIC_LABEL_CAT_PL,
      BSNES_DSP_CUBIC_INFO_0_PL,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_PL,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_PL,
      BSNES_DSP_ECHO_SHADOW_INFO_0_PL,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_PL,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_PL,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_PL,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_PL,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_PL,
      NULL,
      BSNES_SGB_BIOS_INFO_0_PL,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_PL   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_PL },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_PL,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_PL,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_PL  },
         { "2",   OPTION_VAL_2_PL },
         { "3",   OPTION_VAL_3_PL },
         { "4",   OPTION_VAL_4_PL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_PL,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_PL,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_PL,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_PL,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_PL,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_PL,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define CATEGORY_VIDEO_LABEL_PT_BR "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_BR "Altera as configurações de saída de vídeo."
#define CATEGORY_AUDIO_LABEL_PT_BR "Áudio"
#define CATEGORY_AUDIO_INFO_0_PT_BR "Altera as configurações de saída de áudio."
#define CATEGORY_MODE7_LABEL_PT_BR "Mode 7 HD"
#define CATEGORY_MODE7_INFO_0_PT_BR "Altera as configurações relativas à emulação gráfica do Mode 7."
#define CATEGORY_SGB_LABEL_PT_BR NULL
#define CATEGORY_SGB_INFO_0_PT_BR "Altera as configurações relativas à emulação do Super Game Boy."
#define CATEGORY_LIGHTGUN_LABEL_PT_BR "Pistola de luz"
#define CATEGORY_LIGHTGUN_INFO_0_PT_BR "Altera as configurações da pistola de luz (tela sensível ao toque)."
#define CATEGORY_OVERCLOCK_LABEL_PT_BR NULL
#define CATEGORY_OVERCLOCK_INFO_0_PT_BR "Altera a velocidade do hardware emulado."
#define CATEGORY_HACK_LABEL_PT_BR "Hacks de emulação"
#define CATEGORY_HACK_INFO_0_PT_BR "Aplica hacks de emulação e hotfixes."
#define BSNES_ASPECT_RATIO_LABEL_PT_BR "Proporção de tela preferida"
#define BSNES_ASPECT_RATIO_INFO_0_PT_BR "Escolhe a proporção de tela preferida do conteúdo. Isso se aplicará somente quando a proporção de tela do RetroArch estiver configurada como 'Fornecida pelo núcleo' nas configurações de vídeo."
#define OPTION_VAL_AUTO_PT_BR "Automática"
#define OPTION_VAL_8_7_PT_BR "Pixel perfeito"
#define OPTION_VAL_4_3_PT_BR NULL
#define OPTION_VAL_NTSC_PT_BR NULL
#define OPTION_VAL_PAL_PT_BR NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_PT_BR "Cortar overscan"
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_PT_BR "Remova as bordas na parte superior e inferior da tela, normalmente não utilizadas por jogos e escondidas pela moldura de uma televisão de definição padrão."
#define OPTION_VAL_OFF_PT_BR NULL
#define BSNES_BLUR_EMULATION_LABEL_PT_BR "Emulação do desfoque"
#define BSNES_BLUR_EMULATION_INFO_0_PT_BR "Simula a resolução horizontal limitada dos SDTVs, desfocando os pixels horizontalmente adjetivos. Alguns jogos dependem disso para emular um efeito de transparência."
#define BSNES_HOTFIXES_LABEL_PT_BR NULL
#define BSNES_HOTFIXES_INFO_0_PT_BR "Até mesmo os softwares comercialmente licenciados e lançados oficialmente às vezes vem com erros. Esta opção irá corrigir certos problemas que ocorreram mesmo no hardware real."
#define BSNES_ENTROPY_LABEL_PT_BR "Entropia (aleatorização)"
#define BSNES_ENTROPY_INFO_0_PT_BR "Escolha o nível de aleatorização da memória e dos registros. Se ajustado para 'Nenhuma', toda a memória e registros são inicializados para valores constantes na inicialização. 'Baixa' aleatorização proporciona a representação mais precisa de um sistema real. ' Alta' irá aleatorizar o máximo possível."
#define OPTION_VAL_LOW_PT_BR "Baixa"
#define OPTION_VAL_HIGH_PT_BR "Alta"
#define OPTION_VAL_NONE_PT_BR "Nenhuma"
#define BSNES_CPU_OVERCLOCK_LABEL_PT_BR NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_PT_BR NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_PT_BR "Faça o overclock ou o downclock da CPU. A definição deste valor acima de 100% pode reduzir os tempos de carregamento e remover a lentidão. Use com cautela, pois também pode causar o travamento de alguns jogos ou apresentar outros problemas."
#define OPTION_VAL_10_PT_BR NULL
#define OPTION_VAL_20_PT_BR NULL
#define OPTION_VAL_30_PT_BR NULL
#define OPTION_VAL_40_PT_BR NULL
#define OPTION_VAL_50_PT_BR NULL
#define OPTION_VAL_60_PT_BR NULL
#define OPTION_VAL_70_PT_BR NULL
#define OPTION_VAL_80_PT_BR NULL
#define OPTION_VAL_90_PT_BR NULL
#define OPTION_VAL_100_PT_BR "100% (padrão)"
#define OPTION_VAL_110_PT_BR NULL
#define OPTION_VAL_120_PT_BR NULL
#define OPTION_VAL_130_PT_BR NULL
#define OPTION_VAL_140_PT_BR NULL
#define OPTION_VAL_150_PT_BR NULL
#define OPTION_VAL_160_PT_BR NULL
#define OPTION_VAL_170_PT_BR NULL
#define OPTION_VAL_180_PT_BR NULL
#define OPTION_VAL_190_PT_BR NULL
#define OPTION_VAL_200_PT_BR NULL
#define OPTION_VAL_210_PT_BR NULL
#define OPTION_VAL_220_PT_BR NULL
#define OPTION_VAL_230_PT_BR NULL
#define OPTION_VAL_240_PT_BR NULL
#define OPTION_VAL_250_PT_BR NULL
#define OPTION_VAL_260_PT_BR NULL
#define OPTION_VAL_270_PT_BR NULL
#define OPTION_VAL_280_PT_BR NULL
#define OPTION_VAL_290_PT_BR NULL
#define OPTION_VAL_300_PT_BR NULL
#define OPTION_VAL_310_PT_BR NULL
#define OPTION_VAL_320_PT_BR NULL
#define OPTION_VAL_330_PT_BR NULL
#define OPTION_VAL_340_PT_BR NULL
#define OPTION_VAL_350_PT_BR NULL
#define OPTION_VAL_360_PT_BR NULL
#define OPTION_VAL_370_PT_BR NULL
#define OPTION_VAL_380_PT_BR NULL
#define OPTION_VAL_390_PT_BR NULL
#define OPTION_VAL_400_PT_BR NULL
#define BSNES_CPU_FASTMATH_LABEL_PT_BR "Matemática rápida da CPU"
#define BSNES_CPU_FASTMATH_INFO_0_PT_BR "Proporciona resultados de computação de imediato. A multiplicação e a divisão pela CPU leva tempo para ser completada em um SNES real. Os emuladores mais antigos não simulavam estes atrasos e, portanto, alguns hacks mais antigos de ROMs não esperam por operações matemáticas para completar e precisam deste hack."
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_PT_BR "Overclock do coprocessador SA-1"
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_PT_BR "Coprocessador SA-1"
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_PT_BR "Faça o overclock ou o downclock do chip do 'Super Accelerator 1' (SA-1). A definição deste valor acima de 100% pode melhorar o desempenho em jogos que suportam o chip SA-1. Use com cautela, pois pode também causar o travamento de alguns jogos ou apresentar outros problemas."
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_PT_BR "Overclock do coprocessador SuperFX"
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_PT_BR "Coprocessador SuperFX"
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_PT_BR "Faça o overclock ou o downclock do coprocessador SuperFX. A definição deste valor acima de 100% pode melhorar o desempenho em jogos que suportam o SuperFX. Use com cautela, pois pode também causar o travamento de alguns jogos ou apresentar outros problemas."
#define OPTION_VAL_410_PT_BR NULL
#define OPTION_VAL_420_PT_BR NULL
#define OPTION_VAL_430_PT_BR NULL
#define OPTION_VAL_440_PT_BR NULL
#define OPTION_VAL_450_PT_BR NULL
#define OPTION_VAL_460_PT_BR NULL
#define OPTION_VAL_470_PT_BR NULL
#define OPTION_VAL_480_PT_BR NULL
#define OPTION_VAL_490_PT_BR NULL
#define OPTION_VAL_500_PT_BR NULL
#define OPTION_VAL_510_PT_BR NULL
#define OPTION_VAL_520_PT_BR NULL
#define OPTION_VAL_530_PT_BR NULL
#define OPTION_VAL_540_PT_BR NULL
#define OPTION_VAL_550_PT_BR NULL
#define OPTION_VAL_560_PT_BR NULL
#define OPTION_VAL_570_PT_BR NULL
#define OPTION_VAL_580_PT_BR NULL
#define OPTION_VAL_590_PT_BR NULL
#define OPTION_VAL_600_PT_BR NULL
#define OPTION_VAL_610_PT_BR NULL
#define OPTION_VAL_620_PT_BR NULL
#define OPTION_VAL_630_PT_BR NULL
#define OPTION_VAL_640_PT_BR NULL
#define OPTION_VAL_650_PT_BR NULL
#define OPTION_VAL_660_PT_BR NULL
#define OPTION_VAL_670_PT_BR NULL
#define OPTION_VAL_680_PT_BR NULL
#define OPTION_VAL_690_PT_BR NULL
#define OPTION_VAL_700_PT_BR NULL
#define OPTION_VAL_710_PT_BR NULL
#define OPTION_VAL_720_PT_BR NULL
#define OPTION_VAL_730_PT_BR NULL
#define OPTION_VAL_740_PT_BR NULL
#define OPTION_VAL_750_PT_BR NULL
#define OPTION_VAL_760_PT_BR NULL
#define OPTION_VAL_770_PT_BR NULL
#define OPTION_VAL_780_PT_BR NULL
#define OPTION_VAL_790_PT_BR NULL
#define OPTION_VAL_800_PT_BR NULL
#define BSNES_PPU_FAST_LABEL_PT_BR "Modo rápido - PPU (vídeo)"
#define BSNES_PPU_FAST_LABEL_CAT_PT_BR "Modo rápido - PPU"
#define BSNES_PPU_FAST_INFO_0_PT_BR "Permite uma emulação mais rápida da PPU ao custo de uma pequena redução da precisão. É recomendável deixar isto ligado."
#define BSNES_PPU_DEINTERLACE_LABEL_PT_BR "Desentrelaçamento - PPU (vídeo)"
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_PT_BR "Desentrelaçamento - PPU"
#define BSNES_PPU_DEINTERLACE_INFO_0_PT_BR "Desentrelaça todos os jogos, renderizando internamente a 480p. A penalidade de desempenho é quase inexistente, por isso é recomendável deixar isso ligado."
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_PT_BR "Sem limite de sprites - PPU (vídeo)"
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_PT_BR "Sem limite de sprites - PPU"
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_PT_BR "Remove qualquer limite para a quantidade de sprites que podem ser desenhados simultaneamente na tela. Pode causar problemas com alguns jogos."
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_PT_BR "Sem bloqueio da VRAM - PPU (vídeo)"
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_PT_BR "Emula um erro em versões antigas do ZSNES e do Snes9x, onde o bloqueio da VRAM não foi emulado. Alguns hacks mais antigos de ROMs se basearam neste comportamento e irão renderizar gráficos incorretamente se isto não for ativado. Esta opção é extremamente imprecisa e prejudica a velocidade da PPU, portanto é recomendável deixá-la desativada, a menos que você precise jogar um jogo que seja de outra forma incompatível com este núcleo."
#define BSNES_MODE7_SCALE_LABEL_PT_BR "Escala - Mode 7 HD"
#define BSNES_MODE7_SCALE_LABEL_CAT_PT_BR "Escala"
#define BSNES_MODE7_SCALE_INFO_0_PT_BR "Aumenta a resolução horizontal e vertical dos gráficos do Mode 7 usados em certos jogos."
#define OPTION_VAL_1X_PT_BR NULL
#define OPTION_VAL_2X_PT_BR NULL
#define OPTION_VAL_3X_PT_BR NULL
#define OPTION_VAL_4X_PT_BR NULL
#define OPTION_VAL_5X_PT_BR NULL
#define OPTION_VAL_6X_PT_BR NULL
#define OPTION_VAL_7X_PT_BR NULL
#define OPTION_VAL_8X_PT_BR NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_PT_BR "Correção da perspectiva - Mode 7 HD"
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_PT_BR "Correção da perspectiva"
#define BSNES_MODE7_PERSPECTIVE_INFO_0_PT_BR "Corrige a perspectiva dos gráficos do Mode 7 usados em certos jogos, trabalhando em torno de algumas limitações dos números inteiros usados pelo SNES."
#define BSNES_MODE7_SUPERSAMPLE_LABEL_PT_BR "Superamostragem - Mode 7 HD"
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_PT_BR "Superamostragem"
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_PT_BR "Redimensiona os gráficos da Mode 7 usados em certos jogos. Combinado com fatores de escala superior ao Mode 7, produz um efeito semelhante ao anti-serrilhado."
#define BSNES_MODE7_MOSAIC_LABEL_PT_BR "Mosaico HD->SD - Mode 7 HD"
#define BSNES_MODE7_MOSAIC_LABEL_CAT_PT_BR "Mosaico HD->SD"
#define BSNES_MODE7_MOSAIC_INFO_0_PT_BR "Mostra o efeito mosaico dos gráficos do Mode 7 mesmo ao ampliá-los."
#define BSNES_DSP_FAST_LABEL_PT_BR "Modo rápido - DSP (áudio)"
#define BSNES_DSP_FAST_LABEL_CAT_PT_BR "Modo rápido - DSP"
#define BSNES_DSP_FAST_INFO_0_PT_BR "Permite uma emulação mais rápida do DSP ao custo de uma pequena redução da precisão. É recomendável deixar isto ligado."
#define BSNES_DSP_CUBIC_LABEL_PT_BR "Interpolação cúbica - DSP (áudio)"
#define BSNES_DSP_CUBIC_LABEL_CAT_PT_BR "Interpolação cúbica - DSP"
#define BSNES_DSP_CUBIC_INFO_0_PT_BR "Aplica interpolação cúbica ao som, preservando mais a banda larga."
#define BSNES_DSP_ECHO_SHADOW_LABEL_PT_BR "Sombra da RAM de eco - DSP (áudio)"
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_PT_BR "Sombra da RAM de eco - DSP"
#define BSNES_DSP_ECHO_SHADOW_INFO_0_PT_BR "Emula um erro no ZSNES onde a RAM de eco foi tratada como separada da RAM da APU. Muitos hacks antigos de ROMs para o Super Mario World confiaram neste comportamento e terão um travamento sem isto. Esta opção é extremamente imprecisa e não deve ser habilitada, a menos que seja necessária."
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_PT_BR "Modo rápido - Coprocessadores"
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_PT_BR "Permite uma emulação mais rápida dos coprocessadores ao custo de uma pequena redução da precisão. É recomendável deixar isto ligado."
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_PT_BR "Preferir HLE - Coprocessadores"
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_PT_BR "Quando esta opção é ativada, sempre será usada uma emulação HLE menos precisa quando disponível. Se desativada, o HLE só será usado quando o firmware LLE estiver faltando."
#define BSNES_SGB_BIOS_LABEL_PT_BR "BIOS preferida do Super Game Boy (requer reinício)"
#define BSNES_SGB_BIOS_INFO_0_PT_BR "Escolha a BIOS preferida do Super Game Boy para ser usada com títulos compatíveis."
#define OPTION_VAL_SGB1_SFC_PT_BR NULL
#define OPTION_VAL_SGB2_SFC_PT_BR NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_PT_BR "Execução antecipada interna"
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_PT_BR "Simula o sistema antecipadamente e retrocede para reduzir a latência da entrada. Tem requisitos de sistema muito altos."
#define OPTION_VAL_1_PT_BR "1 quadro"
#define OPTION_VAL_2_PT_BR "2 quadros"
#define OPTION_VAL_3_PT_BR "3 quadros"
#define OPTION_VAL_4_PT_BR "4 quadros"
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_PT_BR "Pistola de luz com tela sensível ao toque"
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_PT_BR "Ativa a entrada 'Super Scope' para dispositivos com tela sensível ao toque."
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_PT_BR "Botões de disparo invertido na 'Super Scope'"
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_PT_BR "Inverte o gatilho e os botões de cursor da 'Super Scope' com a pistola de luz na tela sensível ao toque."
#define BSNES_HIDE_SGB_BORDER_LABEL_PT_BR "Ocultar bordas do Super GameBoy"
#define BSNES_HIDE_SGB_BORDER_INFO_0_PT_BR "Oculta a borda ao jogar Super Game Boy. Só funciona quando a opção 'Cortar Overscan' estiver ativo."

struct retro_core_option_v2_category option_cats_pt_br[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_BR,
      CATEGORY_VIDEO_INFO_0_PT_BR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PT_BR,
      CATEGORY_AUDIO_INFO_0_PT_BR
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_PT_BR,
      CATEGORY_MODE7_INFO_0_PT_BR
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_PT_BR,
      CATEGORY_SGB_INFO_0_PT_BR
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_PT_BR,
      CATEGORY_LIGHTGUN_INFO_0_PT_BR
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_PT_BR,
      CATEGORY_OVERCLOCK_INFO_0_PT_BR
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_PT_BR,
      CATEGORY_HACK_INFO_0_PT_BR
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_PT_BR,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_PT_BR },
         { "8:7",  OPTION_VAL_8_7_PT_BR },
         { "4:3",  OPTION_VAL_4_3_PT_BR },
         { "NTSC", OPTION_VAL_NTSC_PT_BR },
         { "PAL",  OPTION_VAL_PAL_PT_BR },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_PT_BR,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_PT_BR },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_PT_BR,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_PT_BR,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_PT_BR,
      NULL,
      BSNES_HOTFIXES_INFO_0_PT_BR,
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
      BSNES_ENTROPY_LABEL_PT_BR,
      NULL,
      BSNES_ENTROPY_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_PT_BR },
         { "High", OPTION_VAL_HIGH_PT_BR },
         { "None", OPTION_VAL_NONE_PT_BR },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_PT_BR,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_PT_BR,
      BSNES_CPU_OVERCLOCK_INFO_0_PT_BR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_PT_BR  },
         { "20",  OPTION_VAL_20_PT_BR  },
         { "30",  OPTION_VAL_30_PT_BR  },
         { "40",  OPTION_VAL_40_PT_BR  },
         { "50",  OPTION_VAL_50_PT_BR  },
         { "60",  OPTION_VAL_60_PT_BR  },
         { "70",  OPTION_VAL_70_PT_BR  },
         { "80",  OPTION_VAL_80_PT_BR  },
         { "90",  OPTION_VAL_90_PT_BR  },
         { "100", OPTION_VAL_100_PT_BR },
         { "110", OPTION_VAL_110_PT_BR },
         { "120", OPTION_VAL_120_PT_BR },
         { "130", OPTION_VAL_130_PT_BR },
         { "140", OPTION_VAL_140_PT_BR },
         { "150", OPTION_VAL_150_PT_BR },
         { "160", OPTION_VAL_160_PT_BR },
         { "170", OPTION_VAL_170_PT_BR },
         { "180", OPTION_VAL_180_PT_BR },
         { "190", OPTION_VAL_190_PT_BR },
         { "200", OPTION_VAL_200_PT_BR },
         { "210", OPTION_VAL_210_PT_BR },
         { "220", OPTION_VAL_220_PT_BR },
         { "230", OPTION_VAL_230_PT_BR },
         { "240", OPTION_VAL_240_PT_BR },
         { "250", OPTION_VAL_250_PT_BR },
         { "260", OPTION_VAL_260_PT_BR },
         { "270", OPTION_VAL_270_PT_BR },
         { "280", OPTION_VAL_280_PT_BR },
         { "290", OPTION_VAL_290_PT_BR },
         { "300", OPTION_VAL_300_PT_BR },
         { "310", OPTION_VAL_310_PT_BR },
         { "320", OPTION_VAL_320_PT_BR },
         { "330", OPTION_VAL_330_PT_BR },
         { "340", OPTION_VAL_340_PT_BR },
         { "350", OPTION_VAL_350_PT_BR },
         { "360", OPTION_VAL_360_PT_BR },
         { "370", OPTION_VAL_370_PT_BR },
         { "380", OPTION_VAL_380_PT_BR },
         { "390", OPTION_VAL_390_PT_BR },
         { "400", OPTION_VAL_400_PT_BR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_PT_BR,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_PT_BR,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_PT_BR,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_PT_BR,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_PT_BR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_PT_BR  },
         { "20",  OPTION_VAL_20_PT_BR  },
         { "30",  OPTION_VAL_30_PT_BR  },
         { "40",  OPTION_VAL_40_PT_BR  },
         { "50",  OPTION_VAL_50_PT_BR  },
         { "60",  OPTION_VAL_60_PT_BR  },
         { "70",  OPTION_VAL_70_PT_BR  },
         { "80",  OPTION_VAL_80_PT_BR  },
         { "90",  OPTION_VAL_90_PT_BR  },
         { "100", OPTION_VAL_100_PT_BR },
         { "110", OPTION_VAL_110_PT_BR },
         { "120", OPTION_VAL_120_PT_BR },
         { "130", OPTION_VAL_130_PT_BR },
         { "140", OPTION_VAL_140_PT_BR },
         { "150", OPTION_VAL_150_PT_BR },
         { "160", OPTION_VAL_160_PT_BR },
         { "170", OPTION_VAL_170_PT_BR },
         { "180", OPTION_VAL_180_PT_BR },
         { "190", OPTION_VAL_190_PT_BR },
         { "200", OPTION_VAL_200_PT_BR },
         { "210", OPTION_VAL_210_PT_BR },
         { "220", OPTION_VAL_220_PT_BR },
         { "230", OPTION_VAL_230_PT_BR },
         { "240", OPTION_VAL_240_PT_BR },
         { "250", OPTION_VAL_250_PT_BR },
         { "260", OPTION_VAL_260_PT_BR },
         { "270", OPTION_VAL_270_PT_BR },
         { "280", OPTION_VAL_280_PT_BR },
         { "290", OPTION_VAL_290_PT_BR },
         { "300", OPTION_VAL_300_PT_BR },
         { "310", OPTION_VAL_310_PT_BR },
         { "320", OPTION_VAL_320_PT_BR },
         { "330", OPTION_VAL_330_PT_BR },
         { "340", OPTION_VAL_340_PT_BR },
         { "350", OPTION_VAL_350_PT_BR },
         { "360", OPTION_VAL_360_PT_BR },
         { "370", OPTION_VAL_370_PT_BR },
         { "380", OPTION_VAL_380_PT_BR },
         { "390", OPTION_VAL_390_PT_BR },
         { "400", OPTION_VAL_400_PT_BR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_PT_BR,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_PT_BR,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_PT_BR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_PT_BR  },
         { "20",  OPTION_VAL_20_PT_BR  },
         { "30",  OPTION_VAL_30_PT_BR  },
         { "40",  OPTION_VAL_40_PT_BR  },
         { "50",  OPTION_VAL_50_PT_BR  },
         { "60",  OPTION_VAL_60_PT_BR  },
         { "70",  OPTION_VAL_70_PT_BR  },
         { "80",  OPTION_VAL_80_PT_BR  },
         { "90",  OPTION_VAL_90_PT_BR  },
         { "100", OPTION_VAL_100_PT_BR },
         { "110", OPTION_VAL_110_PT_BR },
         { "120", OPTION_VAL_120_PT_BR },
         { "130", OPTION_VAL_130_PT_BR },
         { "140", OPTION_VAL_140_PT_BR },
         { "150", OPTION_VAL_150_PT_BR },
         { "160", OPTION_VAL_160_PT_BR },
         { "170", OPTION_VAL_170_PT_BR },
         { "180", OPTION_VAL_180_PT_BR },
         { "190", OPTION_VAL_190_PT_BR },
         { "200", OPTION_VAL_200_PT_BR },
         { "210", OPTION_VAL_210_PT_BR },
         { "220", OPTION_VAL_220_PT_BR },
         { "230", OPTION_VAL_230_PT_BR },
         { "240", OPTION_VAL_240_PT_BR },
         { "250", OPTION_VAL_250_PT_BR },
         { "260", OPTION_VAL_260_PT_BR },
         { "270", OPTION_VAL_270_PT_BR },
         { "280", OPTION_VAL_280_PT_BR },
         { "290", OPTION_VAL_290_PT_BR },
         { "300", OPTION_VAL_300_PT_BR },
         { "310", OPTION_VAL_310_PT_BR },
         { "320", OPTION_VAL_320_PT_BR },
         { "330", OPTION_VAL_330_PT_BR },
         { "340", OPTION_VAL_340_PT_BR },
         { "350", OPTION_VAL_350_PT_BR },
         { "360", OPTION_VAL_360_PT_BR },
         { "370", OPTION_VAL_370_PT_BR },
         { "380", OPTION_VAL_380_PT_BR },
         { "390", OPTION_VAL_390_PT_BR },
         { "400", OPTION_VAL_400_PT_BR },
         { "410", OPTION_VAL_410_PT_BR },
         { "420", OPTION_VAL_420_PT_BR },
         { "430", OPTION_VAL_430_PT_BR },
         { "440", OPTION_VAL_440_PT_BR },
         { "450", OPTION_VAL_450_PT_BR },
         { "460", OPTION_VAL_460_PT_BR },
         { "470", OPTION_VAL_470_PT_BR },
         { "480", OPTION_VAL_480_PT_BR },
         { "490", OPTION_VAL_490_PT_BR },
         { "500", OPTION_VAL_500_PT_BR },
         { "510", OPTION_VAL_510_PT_BR },
         { "520", OPTION_VAL_520_PT_BR },
         { "530", OPTION_VAL_530_PT_BR },
         { "540", OPTION_VAL_540_PT_BR },
         { "550", OPTION_VAL_550_PT_BR },
         { "560", OPTION_VAL_560_PT_BR },
         { "570", OPTION_VAL_570_PT_BR },
         { "580", OPTION_VAL_580_PT_BR },
         { "590", OPTION_VAL_590_PT_BR },
         { "600", OPTION_VAL_600_PT_BR },
         { "610", OPTION_VAL_610_PT_BR },
         { "620", OPTION_VAL_620_PT_BR },
         { "630", OPTION_VAL_630_PT_BR },
         { "640", OPTION_VAL_640_PT_BR },
         { "650", OPTION_VAL_650_PT_BR },
         { "660", OPTION_VAL_660_PT_BR },
         { "670", OPTION_VAL_670_PT_BR },
         { "680", OPTION_VAL_680_PT_BR },
         { "690", OPTION_VAL_690_PT_BR },
         { "700", OPTION_VAL_700_PT_BR },
         { "710", OPTION_VAL_710_PT_BR },
         { "720", OPTION_VAL_720_PT_BR },
         { "730", OPTION_VAL_730_PT_BR },
         { "740", OPTION_VAL_740_PT_BR },
         { "750", OPTION_VAL_750_PT_BR },
         { "760", OPTION_VAL_760_PT_BR },
         { "770", OPTION_VAL_770_PT_BR },
         { "780", OPTION_VAL_780_PT_BR },
         { "790", OPTION_VAL_790_PT_BR },
         { "800", OPTION_VAL_800_PT_BR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_PT_BR,
      BSNES_PPU_FAST_LABEL_CAT_PT_BR,
      BSNES_PPU_FAST_INFO_0_PT_BR,
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
      BSNES_PPU_DEINTERLACE_LABEL_PT_BR,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_PT_BR,
      BSNES_PPU_DEINTERLACE_INFO_0_PT_BR,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_PT_BR,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_PT_BR,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_PT_BR,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_PT_BR,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_PT_BR,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_PT_BR,
      BSNES_MODE7_SCALE_LABEL_CAT_PT_BR,
      BSNES_MODE7_SCALE_INFO_0_PT_BR,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_PT_BR  },
         { "2x", OPTION_VAL_2X_PT_BR  },
         { "3x", OPTION_VAL_3X_PT_BR  },
         { "4x", OPTION_VAL_4X_PT_BR  },
         { "5x", OPTION_VAL_5X_PT_BR },
         { "6x", OPTION_VAL_6X_PT_BR },
         { "7x", OPTION_VAL_7X_PT_BR },
         { "8x", OPTION_VAL_8X_PT_BR },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_PT_BR,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_PT_BR,
      BSNES_MODE7_PERSPECTIVE_INFO_0_PT_BR,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_PT_BR,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_PT_BR,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_PT_BR,
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
      BSNES_MODE7_MOSAIC_LABEL_PT_BR,
      BSNES_MODE7_MOSAIC_LABEL_CAT_PT_BR,
      BSNES_MODE7_MOSAIC_INFO_0_PT_BR,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_PT_BR,
      BSNES_DSP_FAST_LABEL_CAT_PT_BR,
      BSNES_DSP_FAST_INFO_0_PT_BR,
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
      BSNES_DSP_CUBIC_LABEL_PT_BR,
      BSNES_DSP_CUBIC_LABEL_CAT_PT_BR,
      BSNES_DSP_CUBIC_INFO_0_PT_BR,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_PT_BR,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_PT_BR,
      BSNES_DSP_ECHO_SHADOW_INFO_0_PT_BR,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_PT_BR,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_PT_BR,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_PT_BR,
      NULL,
      BSNES_SGB_BIOS_INFO_0_PT_BR,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_PT_BR   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_PT_BR },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_PT_BR,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_PT_BR  },
         { "2",   OPTION_VAL_2_PT_BR },
         { "3",   OPTION_VAL_3_PT_BR },
         { "4",   OPTION_VAL_4_PT_BR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_PT_BR,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_PT_BR,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_PT_BR,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_PT_BR,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_PT_BR,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_PT_BR,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define CATEGORY_VIDEO_LABEL_PT_PT "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_PT "Alterar as definições da saída de vídeo."
#define CATEGORY_AUDIO_LABEL_PT_PT "Áudio"
#define CATEGORY_AUDIO_INFO_0_PT_PT "Modificar as definições de saída de som."
#define CATEGORY_MODE7_LABEL_PT_PT NULL
#define CATEGORY_MODE7_INFO_0_PT_PT NULL
#define CATEGORY_SGB_LABEL_PT_PT NULL
#define CATEGORY_SGB_INFO_0_PT_PT NULL
#define CATEGORY_LIGHTGUN_LABEL_PT_PT NULL
#define CATEGORY_LIGHTGUN_INFO_0_PT_PT NULL
#define CATEGORY_OVERCLOCK_LABEL_PT_PT NULL
#define CATEGORY_OVERCLOCK_INFO_0_PT_PT NULL
#define CATEGORY_HACK_LABEL_PT_PT NULL
#define CATEGORY_HACK_INFO_0_PT_PT NULL
#define BSNES_ASPECT_RATIO_LABEL_PT_PT NULL
#define BSNES_ASPECT_RATIO_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT NULL
#define OPTION_VAL_8_7_PT_PT NULL
#define OPTION_VAL_4_3_PT_PT NULL
#define OPTION_VAL_NTSC_PT_PT NULL
#define OPTION_VAL_PAL_PT_PT NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_PT_PT NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_PT_PT NULL
#define OPTION_VAL_OFF_PT_PT NULL
#define BSNES_BLUR_EMULATION_LABEL_PT_PT NULL
#define BSNES_BLUR_EMULATION_INFO_0_PT_PT NULL
#define BSNES_HOTFIXES_LABEL_PT_PT NULL
#define BSNES_HOTFIXES_INFO_0_PT_PT NULL
#define BSNES_ENTROPY_LABEL_PT_PT NULL
#define BSNES_ENTROPY_INFO_0_PT_PT NULL
#define OPTION_VAL_LOW_PT_PT NULL
#define OPTION_VAL_HIGH_PT_PT NULL
#define OPTION_VAL_NONE_PT_PT "Nenhum"
#define BSNES_CPU_OVERCLOCK_LABEL_PT_PT NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_PT_PT NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_PT_PT NULL
#define OPTION_VAL_10_PT_PT NULL
#define OPTION_VAL_20_PT_PT NULL
#define OPTION_VAL_30_PT_PT NULL
#define OPTION_VAL_40_PT_PT NULL
#define OPTION_VAL_50_PT_PT NULL
#define OPTION_VAL_60_PT_PT NULL
#define OPTION_VAL_70_PT_PT NULL
#define OPTION_VAL_80_PT_PT NULL
#define OPTION_VAL_90_PT_PT NULL
#define OPTION_VAL_100_PT_PT NULL
#define OPTION_VAL_110_PT_PT NULL
#define OPTION_VAL_120_PT_PT NULL
#define OPTION_VAL_130_PT_PT NULL
#define OPTION_VAL_140_PT_PT NULL
#define OPTION_VAL_150_PT_PT NULL
#define OPTION_VAL_160_PT_PT NULL
#define OPTION_VAL_170_PT_PT NULL
#define OPTION_VAL_180_PT_PT NULL
#define OPTION_VAL_190_PT_PT NULL
#define OPTION_VAL_200_PT_PT NULL
#define OPTION_VAL_210_PT_PT NULL
#define OPTION_VAL_220_PT_PT NULL
#define OPTION_VAL_230_PT_PT NULL
#define OPTION_VAL_240_PT_PT NULL
#define OPTION_VAL_250_PT_PT NULL
#define OPTION_VAL_260_PT_PT NULL
#define OPTION_VAL_270_PT_PT NULL
#define OPTION_VAL_280_PT_PT NULL
#define OPTION_VAL_290_PT_PT NULL
#define OPTION_VAL_300_PT_PT NULL
#define OPTION_VAL_310_PT_PT NULL
#define OPTION_VAL_320_PT_PT NULL
#define OPTION_VAL_330_PT_PT NULL
#define OPTION_VAL_340_PT_PT NULL
#define OPTION_VAL_350_PT_PT NULL
#define OPTION_VAL_360_PT_PT NULL
#define OPTION_VAL_370_PT_PT NULL
#define OPTION_VAL_380_PT_PT NULL
#define OPTION_VAL_390_PT_PT NULL
#define OPTION_VAL_400_PT_PT NULL
#define BSNES_CPU_FASTMATH_LABEL_PT_PT NULL
#define BSNES_CPU_FASTMATH_INFO_0_PT_PT NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_PT_PT NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_PT_PT NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_PT_PT NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_PT_PT NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_PT_PT NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_PT_PT NULL
#define OPTION_VAL_410_PT_PT NULL
#define OPTION_VAL_420_PT_PT NULL
#define OPTION_VAL_430_PT_PT NULL
#define OPTION_VAL_440_PT_PT NULL
#define OPTION_VAL_450_PT_PT NULL
#define OPTION_VAL_460_PT_PT NULL
#define OPTION_VAL_470_PT_PT NULL
#define OPTION_VAL_480_PT_PT NULL
#define OPTION_VAL_490_PT_PT NULL
#define OPTION_VAL_500_PT_PT NULL
#define OPTION_VAL_510_PT_PT NULL
#define OPTION_VAL_520_PT_PT NULL
#define OPTION_VAL_530_PT_PT NULL
#define OPTION_VAL_540_PT_PT NULL
#define OPTION_VAL_550_PT_PT NULL
#define OPTION_VAL_560_PT_PT NULL
#define OPTION_VAL_570_PT_PT NULL
#define OPTION_VAL_580_PT_PT NULL
#define OPTION_VAL_590_PT_PT NULL
#define OPTION_VAL_600_PT_PT NULL
#define OPTION_VAL_610_PT_PT NULL
#define OPTION_VAL_620_PT_PT NULL
#define OPTION_VAL_630_PT_PT NULL
#define OPTION_VAL_640_PT_PT NULL
#define OPTION_VAL_650_PT_PT NULL
#define OPTION_VAL_660_PT_PT NULL
#define OPTION_VAL_670_PT_PT NULL
#define OPTION_VAL_680_PT_PT NULL
#define OPTION_VAL_690_PT_PT NULL
#define OPTION_VAL_700_PT_PT NULL
#define OPTION_VAL_710_PT_PT NULL
#define OPTION_VAL_720_PT_PT NULL
#define OPTION_VAL_730_PT_PT NULL
#define OPTION_VAL_740_PT_PT NULL
#define OPTION_VAL_750_PT_PT NULL
#define OPTION_VAL_760_PT_PT NULL
#define OPTION_VAL_770_PT_PT NULL
#define OPTION_VAL_780_PT_PT NULL
#define OPTION_VAL_790_PT_PT NULL
#define OPTION_VAL_800_PT_PT NULL
#define BSNES_PPU_FAST_LABEL_PT_PT NULL
#define BSNES_PPU_FAST_LABEL_CAT_PT_PT NULL
#define BSNES_PPU_FAST_INFO_0_PT_PT NULL
#define BSNES_PPU_DEINTERLACE_LABEL_PT_PT NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_PT_PT NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_PT_PT NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_PT_PT NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_PT_PT NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_PT_PT NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_PT_PT NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_PT_PT NULL
#define BSNES_MODE7_SCALE_LABEL_PT_PT NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_PT_PT "Escala"
#define BSNES_MODE7_SCALE_INFO_0_PT_PT NULL
#define OPTION_VAL_1X_PT_PT NULL
#define OPTION_VAL_2X_PT_PT NULL
#define OPTION_VAL_3X_PT_PT NULL
#define OPTION_VAL_4X_PT_PT NULL
#define OPTION_VAL_5X_PT_PT NULL
#define OPTION_VAL_6X_PT_PT NULL
#define OPTION_VAL_7X_PT_PT NULL
#define OPTION_VAL_8X_PT_PT NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_PT_PT NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_PT_PT NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_PT_PT NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_PT_PT NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_PT_PT NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_PT_PT NULL
#define BSNES_MODE7_MOSAIC_LABEL_PT_PT NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_PT_PT NULL
#define BSNES_MODE7_MOSAIC_INFO_0_PT_PT NULL
#define BSNES_DSP_FAST_LABEL_PT_PT NULL
#define BSNES_DSP_FAST_LABEL_CAT_PT_PT NULL
#define BSNES_DSP_FAST_INFO_0_PT_PT NULL
#define BSNES_DSP_CUBIC_LABEL_PT_PT NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_PT_PT NULL
#define BSNES_DSP_CUBIC_INFO_0_PT_PT NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_PT_PT NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_PT_PT NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_PT_PT NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_PT_PT NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_PT_PT NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_PT_PT NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_PT_PT NULL
#define BSNES_SGB_BIOS_LABEL_PT_PT NULL
#define BSNES_SGB_BIOS_INFO_0_PT_PT NULL
#define OPTION_VAL_SGB1_SFC_PT_PT NULL
#define OPTION_VAL_SGB2_SFC_PT_PT NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_PT_PT NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_PT_PT NULL
#define OPTION_VAL_1_PT_PT NULL
#define OPTION_VAL_2_PT_PT NULL
#define OPTION_VAL_3_PT_PT NULL
#define OPTION_VAL_4_PT_PT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_PT_PT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_PT_PT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_PT_PT NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_PT_PT NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_PT_PT NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_PT,
      CATEGORY_VIDEO_INFO_0_PT_PT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PT_PT,
      CATEGORY_AUDIO_INFO_0_PT_PT
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_PT_PT,
      CATEGORY_MODE7_INFO_0_PT_PT
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_PT_PT,
      CATEGORY_SGB_INFO_0_PT_PT
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_PT_PT,
      CATEGORY_LIGHTGUN_INFO_0_PT_PT
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_PT_PT,
      CATEGORY_OVERCLOCK_INFO_0_PT_PT
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_PT_PT,
      CATEGORY_HACK_INFO_0_PT_PT
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_PT_PT,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_PT_PT },
         { "8:7",  OPTION_VAL_8_7_PT_PT },
         { "4:3",  OPTION_VAL_4_3_PT_PT },
         { "NTSC", OPTION_VAL_NTSC_PT_PT },
         { "PAL",  OPTION_VAL_PAL_PT_PT },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_PT_PT,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_PT_PT },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_PT_PT,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_PT_PT,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_PT_PT,
      NULL,
      BSNES_HOTFIXES_INFO_0_PT_PT,
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
      BSNES_ENTROPY_LABEL_PT_PT,
      NULL,
      BSNES_ENTROPY_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_PT_PT },
         { "High", OPTION_VAL_HIGH_PT_PT },
         { "None", OPTION_VAL_NONE_PT_PT },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_PT_PT,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_PT_PT,
      BSNES_CPU_OVERCLOCK_INFO_0_PT_PT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_PT_PT  },
         { "20",  OPTION_VAL_20_PT_PT  },
         { "30",  OPTION_VAL_30_PT_PT  },
         { "40",  OPTION_VAL_40_PT_PT  },
         { "50",  OPTION_VAL_50_PT_PT  },
         { "60",  OPTION_VAL_60_PT_PT  },
         { "70",  OPTION_VAL_70_PT_PT  },
         { "80",  OPTION_VAL_80_PT_PT  },
         { "90",  OPTION_VAL_90_PT_PT  },
         { "100", OPTION_VAL_100_PT_PT },
         { "110", OPTION_VAL_110_PT_PT },
         { "120", OPTION_VAL_120_PT_PT },
         { "130", OPTION_VAL_130_PT_PT },
         { "140", OPTION_VAL_140_PT_PT },
         { "150", OPTION_VAL_150_PT_PT },
         { "160", OPTION_VAL_160_PT_PT },
         { "170", OPTION_VAL_170_PT_PT },
         { "180", OPTION_VAL_180_PT_PT },
         { "190", OPTION_VAL_190_PT_PT },
         { "200", OPTION_VAL_200_PT_PT },
         { "210", OPTION_VAL_210_PT_PT },
         { "220", OPTION_VAL_220_PT_PT },
         { "230", OPTION_VAL_230_PT_PT },
         { "240", OPTION_VAL_240_PT_PT },
         { "250", OPTION_VAL_250_PT_PT },
         { "260", OPTION_VAL_260_PT_PT },
         { "270", OPTION_VAL_270_PT_PT },
         { "280", OPTION_VAL_280_PT_PT },
         { "290", OPTION_VAL_290_PT_PT },
         { "300", OPTION_VAL_300_PT_PT },
         { "310", OPTION_VAL_310_PT_PT },
         { "320", OPTION_VAL_320_PT_PT },
         { "330", OPTION_VAL_330_PT_PT },
         { "340", OPTION_VAL_340_PT_PT },
         { "350", OPTION_VAL_350_PT_PT },
         { "360", OPTION_VAL_360_PT_PT },
         { "370", OPTION_VAL_370_PT_PT },
         { "380", OPTION_VAL_380_PT_PT },
         { "390", OPTION_VAL_390_PT_PT },
         { "400", OPTION_VAL_400_PT_PT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_PT_PT,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_PT_PT,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_PT_PT,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_PT_PT,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_PT_PT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_PT_PT  },
         { "20",  OPTION_VAL_20_PT_PT  },
         { "30",  OPTION_VAL_30_PT_PT  },
         { "40",  OPTION_VAL_40_PT_PT  },
         { "50",  OPTION_VAL_50_PT_PT  },
         { "60",  OPTION_VAL_60_PT_PT  },
         { "70",  OPTION_VAL_70_PT_PT  },
         { "80",  OPTION_VAL_80_PT_PT  },
         { "90",  OPTION_VAL_90_PT_PT  },
         { "100", OPTION_VAL_100_PT_PT },
         { "110", OPTION_VAL_110_PT_PT },
         { "120", OPTION_VAL_120_PT_PT },
         { "130", OPTION_VAL_130_PT_PT },
         { "140", OPTION_VAL_140_PT_PT },
         { "150", OPTION_VAL_150_PT_PT },
         { "160", OPTION_VAL_160_PT_PT },
         { "170", OPTION_VAL_170_PT_PT },
         { "180", OPTION_VAL_180_PT_PT },
         { "190", OPTION_VAL_190_PT_PT },
         { "200", OPTION_VAL_200_PT_PT },
         { "210", OPTION_VAL_210_PT_PT },
         { "220", OPTION_VAL_220_PT_PT },
         { "230", OPTION_VAL_230_PT_PT },
         { "240", OPTION_VAL_240_PT_PT },
         { "250", OPTION_VAL_250_PT_PT },
         { "260", OPTION_VAL_260_PT_PT },
         { "270", OPTION_VAL_270_PT_PT },
         { "280", OPTION_VAL_280_PT_PT },
         { "290", OPTION_VAL_290_PT_PT },
         { "300", OPTION_VAL_300_PT_PT },
         { "310", OPTION_VAL_310_PT_PT },
         { "320", OPTION_VAL_320_PT_PT },
         { "330", OPTION_VAL_330_PT_PT },
         { "340", OPTION_VAL_340_PT_PT },
         { "350", OPTION_VAL_350_PT_PT },
         { "360", OPTION_VAL_360_PT_PT },
         { "370", OPTION_VAL_370_PT_PT },
         { "380", OPTION_VAL_380_PT_PT },
         { "390", OPTION_VAL_390_PT_PT },
         { "400", OPTION_VAL_400_PT_PT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_PT_PT,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_PT_PT,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_PT_PT,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_PT_PT  },
         { "20",  OPTION_VAL_20_PT_PT  },
         { "30",  OPTION_VAL_30_PT_PT  },
         { "40",  OPTION_VAL_40_PT_PT  },
         { "50",  OPTION_VAL_50_PT_PT  },
         { "60",  OPTION_VAL_60_PT_PT  },
         { "70",  OPTION_VAL_70_PT_PT  },
         { "80",  OPTION_VAL_80_PT_PT  },
         { "90",  OPTION_VAL_90_PT_PT  },
         { "100", OPTION_VAL_100_PT_PT },
         { "110", OPTION_VAL_110_PT_PT },
         { "120", OPTION_VAL_120_PT_PT },
         { "130", OPTION_VAL_130_PT_PT },
         { "140", OPTION_VAL_140_PT_PT },
         { "150", OPTION_VAL_150_PT_PT },
         { "160", OPTION_VAL_160_PT_PT },
         { "170", OPTION_VAL_170_PT_PT },
         { "180", OPTION_VAL_180_PT_PT },
         { "190", OPTION_VAL_190_PT_PT },
         { "200", OPTION_VAL_200_PT_PT },
         { "210", OPTION_VAL_210_PT_PT },
         { "220", OPTION_VAL_220_PT_PT },
         { "230", OPTION_VAL_230_PT_PT },
         { "240", OPTION_VAL_240_PT_PT },
         { "250", OPTION_VAL_250_PT_PT },
         { "260", OPTION_VAL_260_PT_PT },
         { "270", OPTION_VAL_270_PT_PT },
         { "280", OPTION_VAL_280_PT_PT },
         { "290", OPTION_VAL_290_PT_PT },
         { "300", OPTION_VAL_300_PT_PT },
         { "310", OPTION_VAL_310_PT_PT },
         { "320", OPTION_VAL_320_PT_PT },
         { "330", OPTION_VAL_330_PT_PT },
         { "340", OPTION_VAL_340_PT_PT },
         { "350", OPTION_VAL_350_PT_PT },
         { "360", OPTION_VAL_360_PT_PT },
         { "370", OPTION_VAL_370_PT_PT },
         { "380", OPTION_VAL_380_PT_PT },
         { "390", OPTION_VAL_390_PT_PT },
         { "400", OPTION_VAL_400_PT_PT },
         { "410", OPTION_VAL_410_PT_PT },
         { "420", OPTION_VAL_420_PT_PT },
         { "430", OPTION_VAL_430_PT_PT },
         { "440", OPTION_VAL_440_PT_PT },
         { "450", OPTION_VAL_450_PT_PT },
         { "460", OPTION_VAL_460_PT_PT },
         { "470", OPTION_VAL_470_PT_PT },
         { "480", OPTION_VAL_480_PT_PT },
         { "490", OPTION_VAL_490_PT_PT },
         { "500", OPTION_VAL_500_PT_PT },
         { "510", OPTION_VAL_510_PT_PT },
         { "520", OPTION_VAL_520_PT_PT },
         { "530", OPTION_VAL_530_PT_PT },
         { "540", OPTION_VAL_540_PT_PT },
         { "550", OPTION_VAL_550_PT_PT },
         { "560", OPTION_VAL_560_PT_PT },
         { "570", OPTION_VAL_570_PT_PT },
         { "580", OPTION_VAL_580_PT_PT },
         { "590", OPTION_VAL_590_PT_PT },
         { "600", OPTION_VAL_600_PT_PT },
         { "610", OPTION_VAL_610_PT_PT },
         { "620", OPTION_VAL_620_PT_PT },
         { "630", OPTION_VAL_630_PT_PT },
         { "640", OPTION_VAL_640_PT_PT },
         { "650", OPTION_VAL_650_PT_PT },
         { "660", OPTION_VAL_660_PT_PT },
         { "670", OPTION_VAL_670_PT_PT },
         { "680", OPTION_VAL_680_PT_PT },
         { "690", OPTION_VAL_690_PT_PT },
         { "700", OPTION_VAL_700_PT_PT },
         { "710", OPTION_VAL_710_PT_PT },
         { "720", OPTION_VAL_720_PT_PT },
         { "730", OPTION_VAL_730_PT_PT },
         { "740", OPTION_VAL_740_PT_PT },
         { "750", OPTION_VAL_750_PT_PT },
         { "760", OPTION_VAL_760_PT_PT },
         { "770", OPTION_VAL_770_PT_PT },
         { "780", OPTION_VAL_780_PT_PT },
         { "790", OPTION_VAL_790_PT_PT },
         { "800", OPTION_VAL_800_PT_PT },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_PT_PT,
      BSNES_PPU_FAST_LABEL_CAT_PT_PT,
      BSNES_PPU_FAST_INFO_0_PT_PT,
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
      BSNES_PPU_DEINTERLACE_LABEL_PT_PT,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_PT_PT,
      BSNES_PPU_DEINTERLACE_INFO_0_PT_PT,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_PT_PT,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_PT_PT,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_PT_PT,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_PT_PT,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_PT_PT,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_PT_PT,
      BSNES_MODE7_SCALE_LABEL_CAT_PT_PT,
      BSNES_MODE7_SCALE_INFO_0_PT_PT,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_PT_PT  },
         { "2x", OPTION_VAL_2X_PT_PT  },
         { "3x", OPTION_VAL_3X_PT_PT  },
         { "4x", OPTION_VAL_4X_PT_PT  },
         { "5x", OPTION_VAL_5X_PT_PT },
         { "6x", OPTION_VAL_6X_PT_PT },
         { "7x", OPTION_VAL_7X_PT_PT },
         { "8x", OPTION_VAL_8X_PT_PT },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_PT_PT,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_PT_PT,
      BSNES_MODE7_PERSPECTIVE_INFO_0_PT_PT,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_PT_PT,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_PT_PT,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_PT_PT,
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
      BSNES_MODE7_MOSAIC_LABEL_PT_PT,
      BSNES_MODE7_MOSAIC_LABEL_CAT_PT_PT,
      BSNES_MODE7_MOSAIC_INFO_0_PT_PT,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_PT_PT,
      BSNES_DSP_FAST_LABEL_CAT_PT_PT,
      BSNES_DSP_FAST_INFO_0_PT_PT,
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
      BSNES_DSP_CUBIC_LABEL_PT_PT,
      BSNES_DSP_CUBIC_LABEL_CAT_PT_PT,
      BSNES_DSP_CUBIC_INFO_0_PT_PT,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_PT_PT,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_PT_PT,
      BSNES_DSP_ECHO_SHADOW_INFO_0_PT_PT,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_PT_PT,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_PT_PT,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_PT_PT,
      NULL,
      BSNES_SGB_BIOS_INFO_0_PT_PT,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_PT_PT   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_PT_PT },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_PT_PT,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_PT_PT  },
         { "2",   OPTION_VAL_2_PT_PT },
         { "3",   OPTION_VAL_3_PT_PT },
         { "4",   OPTION_VAL_4_PT_PT },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_PT_PT,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_PT_PT,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_PT_PT,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_PT_PT,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_PT_PT,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_PT_PT,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RO */

#define CATEGORY_VIDEO_LABEL_RO NULL
#define CATEGORY_VIDEO_INFO_0_RO NULL
#define CATEGORY_AUDIO_LABEL_RO NULL
#define CATEGORY_AUDIO_INFO_0_RO NULL
#define CATEGORY_MODE7_LABEL_RO NULL
#define CATEGORY_MODE7_INFO_0_RO NULL
#define CATEGORY_SGB_LABEL_RO NULL
#define CATEGORY_SGB_INFO_0_RO NULL
#define CATEGORY_LIGHTGUN_LABEL_RO NULL
#define CATEGORY_LIGHTGUN_INFO_0_RO NULL
#define CATEGORY_OVERCLOCK_LABEL_RO NULL
#define CATEGORY_OVERCLOCK_INFO_0_RO NULL
#define CATEGORY_HACK_LABEL_RO NULL
#define CATEGORY_HACK_INFO_0_RO NULL
#define BSNES_ASPECT_RATIO_LABEL_RO NULL
#define BSNES_ASPECT_RATIO_INFO_0_RO NULL
#define OPTION_VAL_AUTO_RO NULL
#define OPTION_VAL_8_7_RO NULL
#define OPTION_VAL_4_3_RO NULL
#define OPTION_VAL_NTSC_RO NULL
#define OPTION_VAL_PAL_RO NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_RO NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_RO NULL
#define OPTION_VAL_OFF_RO NULL
#define BSNES_BLUR_EMULATION_LABEL_RO NULL
#define BSNES_BLUR_EMULATION_INFO_0_RO NULL
#define BSNES_HOTFIXES_LABEL_RO NULL
#define BSNES_HOTFIXES_INFO_0_RO NULL
#define BSNES_ENTROPY_LABEL_RO NULL
#define BSNES_ENTROPY_INFO_0_RO NULL
#define OPTION_VAL_LOW_RO NULL
#define OPTION_VAL_HIGH_RO NULL
#define OPTION_VAL_NONE_RO NULL
#define BSNES_CPU_OVERCLOCK_LABEL_RO NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_RO NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_RO NULL
#define OPTION_VAL_10_RO NULL
#define OPTION_VAL_20_RO NULL
#define OPTION_VAL_30_RO NULL
#define OPTION_VAL_40_RO NULL
#define OPTION_VAL_50_RO NULL
#define OPTION_VAL_60_RO NULL
#define OPTION_VAL_70_RO NULL
#define OPTION_VAL_80_RO NULL
#define OPTION_VAL_90_RO NULL
#define OPTION_VAL_100_RO NULL
#define OPTION_VAL_110_RO NULL
#define OPTION_VAL_120_RO NULL
#define OPTION_VAL_130_RO NULL
#define OPTION_VAL_140_RO NULL
#define OPTION_VAL_150_RO NULL
#define OPTION_VAL_160_RO NULL
#define OPTION_VAL_170_RO NULL
#define OPTION_VAL_180_RO NULL
#define OPTION_VAL_190_RO NULL
#define OPTION_VAL_200_RO NULL
#define OPTION_VAL_210_RO NULL
#define OPTION_VAL_220_RO NULL
#define OPTION_VAL_230_RO NULL
#define OPTION_VAL_240_RO NULL
#define OPTION_VAL_250_RO NULL
#define OPTION_VAL_260_RO NULL
#define OPTION_VAL_270_RO NULL
#define OPTION_VAL_280_RO NULL
#define OPTION_VAL_290_RO NULL
#define OPTION_VAL_300_RO NULL
#define OPTION_VAL_310_RO NULL
#define OPTION_VAL_320_RO NULL
#define OPTION_VAL_330_RO NULL
#define OPTION_VAL_340_RO NULL
#define OPTION_VAL_350_RO NULL
#define OPTION_VAL_360_RO NULL
#define OPTION_VAL_370_RO NULL
#define OPTION_VAL_380_RO NULL
#define OPTION_VAL_390_RO NULL
#define OPTION_VAL_400_RO NULL
#define BSNES_CPU_FASTMATH_LABEL_RO NULL
#define BSNES_CPU_FASTMATH_INFO_0_RO NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_RO NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_RO NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_RO NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_RO NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_RO NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_RO NULL
#define OPTION_VAL_410_RO NULL
#define OPTION_VAL_420_RO NULL
#define OPTION_VAL_430_RO NULL
#define OPTION_VAL_440_RO NULL
#define OPTION_VAL_450_RO NULL
#define OPTION_VAL_460_RO NULL
#define OPTION_VAL_470_RO NULL
#define OPTION_VAL_480_RO NULL
#define OPTION_VAL_490_RO NULL
#define OPTION_VAL_500_RO NULL
#define OPTION_VAL_510_RO NULL
#define OPTION_VAL_520_RO NULL
#define OPTION_VAL_530_RO NULL
#define OPTION_VAL_540_RO NULL
#define OPTION_VAL_550_RO NULL
#define OPTION_VAL_560_RO NULL
#define OPTION_VAL_570_RO NULL
#define OPTION_VAL_580_RO NULL
#define OPTION_VAL_590_RO NULL
#define OPTION_VAL_600_RO NULL
#define OPTION_VAL_610_RO NULL
#define OPTION_VAL_620_RO NULL
#define OPTION_VAL_630_RO NULL
#define OPTION_VAL_640_RO NULL
#define OPTION_VAL_650_RO NULL
#define OPTION_VAL_660_RO NULL
#define OPTION_VAL_670_RO NULL
#define OPTION_VAL_680_RO NULL
#define OPTION_VAL_690_RO NULL
#define OPTION_VAL_700_RO NULL
#define OPTION_VAL_710_RO NULL
#define OPTION_VAL_720_RO NULL
#define OPTION_VAL_730_RO NULL
#define OPTION_VAL_740_RO NULL
#define OPTION_VAL_750_RO NULL
#define OPTION_VAL_760_RO NULL
#define OPTION_VAL_770_RO NULL
#define OPTION_VAL_780_RO NULL
#define OPTION_VAL_790_RO NULL
#define OPTION_VAL_800_RO NULL
#define BSNES_PPU_FAST_LABEL_RO NULL
#define BSNES_PPU_FAST_LABEL_CAT_RO NULL
#define BSNES_PPU_FAST_INFO_0_RO NULL
#define BSNES_PPU_DEINTERLACE_LABEL_RO NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_RO NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_RO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_RO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_RO NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_RO NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_RO NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_RO NULL
#define BSNES_MODE7_SCALE_LABEL_RO NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_RO NULL
#define BSNES_MODE7_SCALE_INFO_0_RO NULL
#define OPTION_VAL_1X_RO NULL
#define OPTION_VAL_2X_RO NULL
#define OPTION_VAL_3X_RO NULL
#define OPTION_VAL_4X_RO NULL
#define OPTION_VAL_5X_RO NULL
#define OPTION_VAL_6X_RO NULL
#define OPTION_VAL_7X_RO NULL
#define OPTION_VAL_8X_RO NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_RO NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_RO NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_RO NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_RO NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_RO NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_RO NULL
#define BSNES_MODE7_MOSAIC_LABEL_RO NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_RO NULL
#define BSNES_MODE7_MOSAIC_INFO_0_RO NULL
#define BSNES_DSP_FAST_LABEL_RO NULL
#define BSNES_DSP_FAST_LABEL_CAT_RO NULL
#define BSNES_DSP_FAST_INFO_0_RO NULL
#define BSNES_DSP_CUBIC_LABEL_RO NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_RO NULL
#define BSNES_DSP_CUBIC_INFO_0_RO NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_RO NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_RO NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_RO NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_RO NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_RO NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_RO NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_RO NULL
#define BSNES_SGB_BIOS_LABEL_RO NULL
#define BSNES_SGB_BIOS_INFO_0_RO NULL
#define OPTION_VAL_SGB1_SFC_RO NULL
#define OPTION_VAL_SGB2_SFC_RO NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_RO NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_RO NULL
#define OPTION_VAL_1_RO NULL
#define OPTION_VAL_2_RO NULL
#define OPTION_VAL_3_RO NULL
#define OPTION_VAL_4_RO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_RO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_RO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_RO NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_RO NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_RO NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_RO NULL

struct retro_core_option_v2_category option_cats_ro[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RO,
      CATEGORY_VIDEO_INFO_0_RO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_RO,
      CATEGORY_AUDIO_INFO_0_RO
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_RO,
      CATEGORY_MODE7_INFO_0_RO
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_RO,
      CATEGORY_SGB_INFO_0_RO
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_RO,
      CATEGORY_LIGHTGUN_INFO_0_RO
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_RO,
      CATEGORY_OVERCLOCK_INFO_0_RO
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_RO,
      CATEGORY_HACK_INFO_0_RO
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ro[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_RO,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_RO,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_RO },
         { "8:7",  OPTION_VAL_8_7_RO },
         { "4:3",  OPTION_VAL_4_3_RO },
         { "NTSC", OPTION_VAL_NTSC_RO },
         { "PAL",  OPTION_VAL_PAL_RO },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_RO,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_RO,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_RO },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_RO,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_RO,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_RO,
      NULL,
      BSNES_HOTFIXES_INFO_0_RO,
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
      BSNES_ENTROPY_LABEL_RO,
      NULL,
      BSNES_ENTROPY_INFO_0_RO,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_RO },
         { "High", OPTION_VAL_HIGH_RO },
         { "None", OPTION_VAL_NONE_RO },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_RO,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_RO,
      BSNES_CPU_OVERCLOCK_INFO_0_RO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_RO  },
         { "20",  OPTION_VAL_20_RO  },
         { "30",  OPTION_VAL_30_RO  },
         { "40",  OPTION_VAL_40_RO  },
         { "50",  OPTION_VAL_50_RO  },
         { "60",  OPTION_VAL_60_RO  },
         { "70",  OPTION_VAL_70_RO  },
         { "80",  OPTION_VAL_80_RO  },
         { "90",  OPTION_VAL_90_RO  },
         { "100", OPTION_VAL_100_RO },
         { "110", OPTION_VAL_110_RO },
         { "120", OPTION_VAL_120_RO },
         { "130", OPTION_VAL_130_RO },
         { "140", OPTION_VAL_140_RO },
         { "150", OPTION_VAL_150_RO },
         { "160", OPTION_VAL_160_RO },
         { "170", OPTION_VAL_170_RO },
         { "180", OPTION_VAL_180_RO },
         { "190", OPTION_VAL_190_RO },
         { "200", OPTION_VAL_200_RO },
         { "210", OPTION_VAL_210_RO },
         { "220", OPTION_VAL_220_RO },
         { "230", OPTION_VAL_230_RO },
         { "240", OPTION_VAL_240_RO },
         { "250", OPTION_VAL_250_RO },
         { "260", OPTION_VAL_260_RO },
         { "270", OPTION_VAL_270_RO },
         { "280", OPTION_VAL_280_RO },
         { "290", OPTION_VAL_290_RO },
         { "300", OPTION_VAL_300_RO },
         { "310", OPTION_VAL_310_RO },
         { "320", OPTION_VAL_320_RO },
         { "330", OPTION_VAL_330_RO },
         { "340", OPTION_VAL_340_RO },
         { "350", OPTION_VAL_350_RO },
         { "360", OPTION_VAL_360_RO },
         { "370", OPTION_VAL_370_RO },
         { "380", OPTION_VAL_380_RO },
         { "390", OPTION_VAL_390_RO },
         { "400", OPTION_VAL_400_RO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_RO,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_RO,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_RO,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_RO,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_RO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_RO  },
         { "20",  OPTION_VAL_20_RO  },
         { "30",  OPTION_VAL_30_RO  },
         { "40",  OPTION_VAL_40_RO  },
         { "50",  OPTION_VAL_50_RO  },
         { "60",  OPTION_VAL_60_RO  },
         { "70",  OPTION_VAL_70_RO  },
         { "80",  OPTION_VAL_80_RO  },
         { "90",  OPTION_VAL_90_RO  },
         { "100", OPTION_VAL_100_RO },
         { "110", OPTION_VAL_110_RO },
         { "120", OPTION_VAL_120_RO },
         { "130", OPTION_VAL_130_RO },
         { "140", OPTION_VAL_140_RO },
         { "150", OPTION_VAL_150_RO },
         { "160", OPTION_VAL_160_RO },
         { "170", OPTION_VAL_170_RO },
         { "180", OPTION_VAL_180_RO },
         { "190", OPTION_VAL_190_RO },
         { "200", OPTION_VAL_200_RO },
         { "210", OPTION_VAL_210_RO },
         { "220", OPTION_VAL_220_RO },
         { "230", OPTION_VAL_230_RO },
         { "240", OPTION_VAL_240_RO },
         { "250", OPTION_VAL_250_RO },
         { "260", OPTION_VAL_260_RO },
         { "270", OPTION_VAL_270_RO },
         { "280", OPTION_VAL_280_RO },
         { "290", OPTION_VAL_290_RO },
         { "300", OPTION_VAL_300_RO },
         { "310", OPTION_VAL_310_RO },
         { "320", OPTION_VAL_320_RO },
         { "330", OPTION_VAL_330_RO },
         { "340", OPTION_VAL_340_RO },
         { "350", OPTION_VAL_350_RO },
         { "360", OPTION_VAL_360_RO },
         { "370", OPTION_VAL_370_RO },
         { "380", OPTION_VAL_380_RO },
         { "390", OPTION_VAL_390_RO },
         { "400", OPTION_VAL_400_RO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_RO,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_RO,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_RO,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_RO  },
         { "20",  OPTION_VAL_20_RO  },
         { "30",  OPTION_VAL_30_RO  },
         { "40",  OPTION_VAL_40_RO  },
         { "50",  OPTION_VAL_50_RO  },
         { "60",  OPTION_VAL_60_RO  },
         { "70",  OPTION_VAL_70_RO  },
         { "80",  OPTION_VAL_80_RO  },
         { "90",  OPTION_VAL_90_RO  },
         { "100", OPTION_VAL_100_RO },
         { "110", OPTION_VAL_110_RO },
         { "120", OPTION_VAL_120_RO },
         { "130", OPTION_VAL_130_RO },
         { "140", OPTION_VAL_140_RO },
         { "150", OPTION_VAL_150_RO },
         { "160", OPTION_VAL_160_RO },
         { "170", OPTION_VAL_170_RO },
         { "180", OPTION_VAL_180_RO },
         { "190", OPTION_VAL_190_RO },
         { "200", OPTION_VAL_200_RO },
         { "210", OPTION_VAL_210_RO },
         { "220", OPTION_VAL_220_RO },
         { "230", OPTION_VAL_230_RO },
         { "240", OPTION_VAL_240_RO },
         { "250", OPTION_VAL_250_RO },
         { "260", OPTION_VAL_260_RO },
         { "270", OPTION_VAL_270_RO },
         { "280", OPTION_VAL_280_RO },
         { "290", OPTION_VAL_290_RO },
         { "300", OPTION_VAL_300_RO },
         { "310", OPTION_VAL_310_RO },
         { "320", OPTION_VAL_320_RO },
         { "330", OPTION_VAL_330_RO },
         { "340", OPTION_VAL_340_RO },
         { "350", OPTION_VAL_350_RO },
         { "360", OPTION_VAL_360_RO },
         { "370", OPTION_VAL_370_RO },
         { "380", OPTION_VAL_380_RO },
         { "390", OPTION_VAL_390_RO },
         { "400", OPTION_VAL_400_RO },
         { "410", OPTION_VAL_410_RO },
         { "420", OPTION_VAL_420_RO },
         { "430", OPTION_VAL_430_RO },
         { "440", OPTION_VAL_440_RO },
         { "450", OPTION_VAL_450_RO },
         { "460", OPTION_VAL_460_RO },
         { "470", OPTION_VAL_470_RO },
         { "480", OPTION_VAL_480_RO },
         { "490", OPTION_VAL_490_RO },
         { "500", OPTION_VAL_500_RO },
         { "510", OPTION_VAL_510_RO },
         { "520", OPTION_VAL_520_RO },
         { "530", OPTION_VAL_530_RO },
         { "540", OPTION_VAL_540_RO },
         { "550", OPTION_VAL_550_RO },
         { "560", OPTION_VAL_560_RO },
         { "570", OPTION_VAL_570_RO },
         { "580", OPTION_VAL_580_RO },
         { "590", OPTION_VAL_590_RO },
         { "600", OPTION_VAL_600_RO },
         { "610", OPTION_VAL_610_RO },
         { "620", OPTION_VAL_620_RO },
         { "630", OPTION_VAL_630_RO },
         { "640", OPTION_VAL_640_RO },
         { "650", OPTION_VAL_650_RO },
         { "660", OPTION_VAL_660_RO },
         { "670", OPTION_VAL_670_RO },
         { "680", OPTION_VAL_680_RO },
         { "690", OPTION_VAL_690_RO },
         { "700", OPTION_VAL_700_RO },
         { "710", OPTION_VAL_710_RO },
         { "720", OPTION_VAL_720_RO },
         { "730", OPTION_VAL_730_RO },
         { "740", OPTION_VAL_740_RO },
         { "750", OPTION_VAL_750_RO },
         { "760", OPTION_VAL_760_RO },
         { "770", OPTION_VAL_770_RO },
         { "780", OPTION_VAL_780_RO },
         { "790", OPTION_VAL_790_RO },
         { "800", OPTION_VAL_800_RO },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_RO,
      BSNES_PPU_FAST_LABEL_CAT_RO,
      BSNES_PPU_FAST_INFO_0_RO,
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
      BSNES_PPU_DEINTERLACE_LABEL_RO,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_RO,
      BSNES_PPU_DEINTERLACE_INFO_0_RO,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_RO,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_RO,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_RO,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_RO,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_RO,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_RO,
      BSNES_MODE7_SCALE_LABEL_CAT_RO,
      BSNES_MODE7_SCALE_INFO_0_RO,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_RO  },
         { "2x", OPTION_VAL_2X_RO  },
         { "3x", OPTION_VAL_3X_RO  },
         { "4x", OPTION_VAL_4X_RO  },
         { "5x", OPTION_VAL_5X_RO },
         { "6x", OPTION_VAL_6X_RO },
         { "7x", OPTION_VAL_7X_RO },
         { "8x", OPTION_VAL_8X_RO },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_RO,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_RO,
      BSNES_MODE7_PERSPECTIVE_INFO_0_RO,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_RO,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_RO,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_RO,
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
      BSNES_MODE7_MOSAIC_LABEL_RO,
      BSNES_MODE7_MOSAIC_LABEL_CAT_RO,
      BSNES_MODE7_MOSAIC_INFO_0_RO,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_RO,
      BSNES_DSP_FAST_LABEL_CAT_RO,
      BSNES_DSP_FAST_INFO_0_RO,
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
      BSNES_DSP_CUBIC_LABEL_RO,
      BSNES_DSP_CUBIC_LABEL_CAT_RO,
      BSNES_DSP_CUBIC_INFO_0_RO,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_RO,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_RO,
      BSNES_DSP_ECHO_SHADOW_INFO_0_RO,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_RO,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_RO,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_RO,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_RO,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_RO,
      NULL,
      BSNES_SGB_BIOS_INFO_0_RO,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_RO   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_RO },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_RO,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_RO,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_RO  },
         { "2",   OPTION_VAL_2_RO },
         { "3",   OPTION_VAL_3_RO },
         { "4",   OPTION_VAL_4_RO },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_RO,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_RO,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_RO,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_RO,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_RO,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_RO,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ro = {
   option_cats_ro,
   option_defs_ro
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_VIDEO_LABEL_RU "Видео"
#define CATEGORY_VIDEO_INFO_0_RU "Изменить настройки вывода изображения."
#define CATEGORY_AUDIO_LABEL_RU "Аудио"
#define CATEGORY_AUDIO_INFO_0_RU "Изменить настройки вывода звука."
#define CATEGORY_MODE7_LABEL_RU NULL
#define CATEGORY_MODE7_INFO_0_RU NULL
#define CATEGORY_SGB_LABEL_RU NULL
#define CATEGORY_SGB_INFO_0_RU NULL
#define CATEGORY_LIGHTGUN_LABEL_RU "Световой пистолет"
#define CATEGORY_LIGHTGUN_INFO_0_RU NULL
#define CATEGORY_OVERCLOCK_LABEL_RU NULL
#define CATEGORY_OVERCLOCK_INFO_0_RU NULL
#define CATEGORY_HACK_LABEL_RU "Хаки эмуляции"
#define CATEGORY_HACK_INFO_0_RU NULL
#define BSNES_ASPECT_RATIO_LABEL_RU NULL
#define BSNES_ASPECT_RATIO_INFO_0_RU "Выбор предпочтительного соотношения сторон контента. Учитывается только при установке соотношения сторон RetroArch на 'Core Provided' в настройках видео."
#define OPTION_VAL_AUTO_RU "Авто"
#define OPTION_VAL_8_7_RU NULL
#define OPTION_VAL_4_3_RU NULL
#define OPTION_VAL_NTSC_RU NULL
#define OPTION_VAL_PAL_RU NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_RU "Обрезать вылеты развёртки"
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_RU NULL
#define OPTION_VAL_OFF_RU NULL
#define BSNES_BLUR_EMULATION_LABEL_RU NULL
#define BSNES_BLUR_EMULATION_INFO_0_RU NULL
#define BSNES_HOTFIXES_LABEL_RU NULL
#define BSNES_HOTFIXES_INFO_0_RU NULL
#define BSNES_ENTROPY_LABEL_RU NULL
#define BSNES_ENTROPY_INFO_0_RU NULL
#define OPTION_VAL_LOW_RU "Низкое"
#define OPTION_VAL_HIGH_RU "Высокое"
#define OPTION_VAL_NONE_RU "Отключено"
#define BSNES_CPU_OVERCLOCK_LABEL_RU NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_RU NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_RU NULL
#define OPTION_VAL_10_RU NULL
#define OPTION_VAL_20_RU NULL
#define OPTION_VAL_30_RU NULL
#define OPTION_VAL_40_RU NULL
#define OPTION_VAL_50_RU NULL
#define OPTION_VAL_60_RU NULL
#define OPTION_VAL_70_RU NULL
#define OPTION_VAL_80_RU NULL
#define OPTION_VAL_90_RU NULL
#define OPTION_VAL_100_RU NULL
#define OPTION_VAL_110_RU NULL
#define OPTION_VAL_120_RU NULL
#define OPTION_VAL_130_RU NULL
#define OPTION_VAL_140_RU NULL
#define OPTION_VAL_150_RU NULL
#define OPTION_VAL_160_RU NULL
#define OPTION_VAL_170_RU NULL
#define OPTION_VAL_180_RU NULL
#define OPTION_VAL_190_RU NULL
#define OPTION_VAL_200_RU NULL
#define OPTION_VAL_210_RU NULL
#define OPTION_VAL_220_RU NULL
#define OPTION_VAL_230_RU NULL
#define OPTION_VAL_240_RU NULL
#define OPTION_VAL_250_RU NULL
#define OPTION_VAL_260_RU NULL
#define OPTION_VAL_270_RU NULL
#define OPTION_VAL_280_RU NULL
#define OPTION_VAL_290_RU NULL
#define OPTION_VAL_300_RU NULL
#define OPTION_VAL_310_RU NULL
#define OPTION_VAL_320_RU NULL
#define OPTION_VAL_330_RU NULL
#define OPTION_VAL_340_RU NULL
#define OPTION_VAL_350_RU NULL
#define OPTION_VAL_360_RU NULL
#define OPTION_VAL_370_RU NULL
#define OPTION_VAL_380_RU NULL
#define OPTION_VAL_390_RU NULL
#define OPTION_VAL_400_RU NULL
#define BSNES_CPU_FASTMATH_LABEL_RU NULL
#define BSNES_CPU_FASTMATH_INFO_0_RU NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_RU NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_RU NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_RU NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_RU NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_RU NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_RU NULL
#define OPTION_VAL_410_RU NULL
#define OPTION_VAL_420_RU NULL
#define OPTION_VAL_430_RU NULL
#define OPTION_VAL_440_RU NULL
#define OPTION_VAL_450_RU NULL
#define OPTION_VAL_460_RU NULL
#define OPTION_VAL_470_RU NULL
#define OPTION_VAL_480_RU NULL
#define OPTION_VAL_490_RU NULL
#define OPTION_VAL_500_RU NULL
#define OPTION_VAL_510_RU NULL
#define OPTION_VAL_520_RU NULL
#define OPTION_VAL_530_RU NULL
#define OPTION_VAL_540_RU NULL
#define OPTION_VAL_550_RU NULL
#define OPTION_VAL_560_RU NULL
#define OPTION_VAL_570_RU NULL
#define OPTION_VAL_580_RU NULL
#define OPTION_VAL_590_RU NULL
#define OPTION_VAL_600_RU NULL
#define OPTION_VAL_610_RU NULL
#define OPTION_VAL_620_RU NULL
#define OPTION_VAL_630_RU NULL
#define OPTION_VAL_640_RU NULL
#define OPTION_VAL_650_RU NULL
#define OPTION_VAL_660_RU NULL
#define OPTION_VAL_670_RU NULL
#define OPTION_VAL_680_RU NULL
#define OPTION_VAL_690_RU NULL
#define OPTION_VAL_700_RU NULL
#define OPTION_VAL_710_RU NULL
#define OPTION_VAL_720_RU NULL
#define OPTION_VAL_730_RU NULL
#define OPTION_VAL_740_RU NULL
#define OPTION_VAL_750_RU NULL
#define OPTION_VAL_760_RU NULL
#define OPTION_VAL_770_RU NULL
#define OPTION_VAL_780_RU NULL
#define OPTION_VAL_790_RU NULL
#define OPTION_VAL_800_RU NULL
#define BSNES_PPU_FAST_LABEL_RU NULL
#define BSNES_PPU_FAST_LABEL_CAT_RU NULL
#define BSNES_PPU_FAST_INFO_0_RU NULL
#define BSNES_PPU_DEINTERLACE_LABEL_RU NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_RU NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_RU NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_RU NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_RU NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_RU NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_RU NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_RU NULL
#define BSNES_MODE7_SCALE_LABEL_RU NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_RU "Масштаб"
#define BSNES_MODE7_SCALE_INFO_0_RU NULL
#define OPTION_VAL_1X_RU NULL
#define OPTION_VAL_2X_RU NULL
#define OPTION_VAL_3X_RU NULL
#define OPTION_VAL_4X_RU NULL
#define OPTION_VAL_5X_RU NULL
#define OPTION_VAL_6X_RU NULL
#define OPTION_VAL_7X_RU NULL
#define OPTION_VAL_8X_RU NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_RU NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_RU NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_RU NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_RU NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_RU NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_RU NULL
#define BSNES_MODE7_MOSAIC_LABEL_RU NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_RU NULL
#define BSNES_MODE7_MOSAIC_INFO_0_RU NULL
#define BSNES_DSP_FAST_LABEL_RU NULL
#define BSNES_DSP_FAST_LABEL_CAT_RU NULL
#define BSNES_DSP_FAST_INFO_0_RU NULL
#define BSNES_DSP_CUBIC_LABEL_RU NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_RU NULL
#define BSNES_DSP_CUBIC_INFO_0_RU NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_RU NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_RU NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_RU NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_RU NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_RU NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_RU NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_RU NULL
#define BSNES_SGB_BIOS_LABEL_RU NULL
#define BSNES_SGB_BIOS_INFO_0_RU NULL
#define OPTION_VAL_SGB1_SFC_RU NULL
#define OPTION_VAL_SGB2_SFC_RU NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_RU NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_RU NULL
#define OPTION_VAL_1_RU NULL
#define OPTION_VAL_2_RU NULL
#define OPTION_VAL_3_RU NULL
#define OPTION_VAL_4_RU NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_RU NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_RU NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_RU NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_RU NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_RU NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_RU NULL

struct retro_core_option_v2_category option_cats_ru[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RU,
      CATEGORY_VIDEO_INFO_0_RU
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_RU,
      CATEGORY_AUDIO_INFO_0_RU
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_RU,
      CATEGORY_MODE7_INFO_0_RU
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_RU,
      CATEGORY_SGB_INFO_0_RU
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_RU,
      CATEGORY_LIGHTGUN_INFO_0_RU
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_RU,
      CATEGORY_OVERCLOCK_INFO_0_RU
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_RU,
      CATEGORY_HACK_INFO_0_RU
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_RU,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_RU,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_RU },
         { "8:7",  OPTION_VAL_8_7_RU },
         { "4:3",  OPTION_VAL_4_3_RU },
         { "NTSC", OPTION_VAL_NTSC_RU },
         { "PAL",  OPTION_VAL_PAL_RU },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_RU,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_RU,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_RU },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_RU,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_RU,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_RU,
      NULL,
      BSNES_HOTFIXES_INFO_0_RU,
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
      BSNES_ENTROPY_LABEL_RU,
      NULL,
      BSNES_ENTROPY_INFO_0_RU,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_RU },
         { "High", OPTION_VAL_HIGH_RU },
         { "None", OPTION_VAL_NONE_RU },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_RU,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_RU,
      BSNES_CPU_OVERCLOCK_INFO_0_RU,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_RU  },
         { "20",  OPTION_VAL_20_RU  },
         { "30",  OPTION_VAL_30_RU  },
         { "40",  OPTION_VAL_40_RU  },
         { "50",  OPTION_VAL_50_RU  },
         { "60",  OPTION_VAL_60_RU  },
         { "70",  OPTION_VAL_70_RU  },
         { "80",  OPTION_VAL_80_RU  },
         { "90",  OPTION_VAL_90_RU  },
         { "100", OPTION_VAL_100_RU },
         { "110", OPTION_VAL_110_RU },
         { "120", OPTION_VAL_120_RU },
         { "130", OPTION_VAL_130_RU },
         { "140", OPTION_VAL_140_RU },
         { "150", OPTION_VAL_150_RU },
         { "160", OPTION_VAL_160_RU },
         { "170", OPTION_VAL_170_RU },
         { "180", OPTION_VAL_180_RU },
         { "190", OPTION_VAL_190_RU },
         { "200", OPTION_VAL_200_RU },
         { "210", OPTION_VAL_210_RU },
         { "220", OPTION_VAL_220_RU },
         { "230", OPTION_VAL_230_RU },
         { "240", OPTION_VAL_240_RU },
         { "250", OPTION_VAL_250_RU },
         { "260", OPTION_VAL_260_RU },
         { "270", OPTION_VAL_270_RU },
         { "280", OPTION_VAL_280_RU },
         { "290", OPTION_VAL_290_RU },
         { "300", OPTION_VAL_300_RU },
         { "310", OPTION_VAL_310_RU },
         { "320", OPTION_VAL_320_RU },
         { "330", OPTION_VAL_330_RU },
         { "340", OPTION_VAL_340_RU },
         { "350", OPTION_VAL_350_RU },
         { "360", OPTION_VAL_360_RU },
         { "370", OPTION_VAL_370_RU },
         { "380", OPTION_VAL_380_RU },
         { "390", OPTION_VAL_390_RU },
         { "400", OPTION_VAL_400_RU },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_RU,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_RU,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_RU,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_RU,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_RU,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_RU  },
         { "20",  OPTION_VAL_20_RU  },
         { "30",  OPTION_VAL_30_RU  },
         { "40",  OPTION_VAL_40_RU  },
         { "50",  OPTION_VAL_50_RU  },
         { "60",  OPTION_VAL_60_RU  },
         { "70",  OPTION_VAL_70_RU  },
         { "80",  OPTION_VAL_80_RU  },
         { "90",  OPTION_VAL_90_RU  },
         { "100", OPTION_VAL_100_RU },
         { "110", OPTION_VAL_110_RU },
         { "120", OPTION_VAL_120_RU },
         { "130", OPTION_VAL_130_RU },
         { "140", OPTION_VAL_140_RU },
         { "150", OPTION_VAL_150_RU },
         { "160", OPTION_VAL_160_RU },
         { "170", OPTION_VAL_170_RU },
         { "180", OPTION_VAL_180_RU },
         { "190", OPTION_VAL_190_RU },
         { "200", OPTION_VAL_200_RU },
         { "210", OPTION_VAL_210_RU },
         { "220", OPTION_VAL_220_RU },
         { "230", OPTION_VAL_230_RU },
         { "240", OPTION_VAL_240_RU },
         { "250", OPTION_VAL_250_RU },
         { "260", OPTION_VAL_260_RU },
         { "270", OPTION_VAL_270_RU },
         { "280", OPTION_VAL_280_RU },
         { "290", OPTION_VAL_290_RU },
         { "300", OPTION_VAL_300_RU },
         { "310", OPTION_VAL_310_RU },
         { "320", OPTION_VAL_320_RU },
         { "330", OPTION_VAL_330_RU },
         { "340", OPTION_VAL_340_RU },
         { "350", OPTION_VAL_350_RU },
         { "360", OPTION_VAL_360_RU },
         { "370", OPTION_VAL_370_RU },
         { "380", OPTION_VAL_380_RU },
         { "390", OPTION_VAL_390_RU },
         { "400", OPTION_VAL_400_RU },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_RU,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_RU,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_RU,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_RU  },
         { "20",  OPTION_VAL_20_RU  },
         { "30",  OPTION_VAL_30_RU  },
         { "40",  OPTION_VAL_40_RU  },
         { "50",  OPTION_VAL_50_RU  },
         { "60",  OPTION_VAL_60_RU  },
         { "70",  OPTION_VAL_70_RU  },
         { "80",  OPTION_VAL_80_RU  },
         { "90",  OPTION_VAL_90_RU  },
         { "100", OPTION_VAL_100_RU },
         { "110", OPTION_VAL_110_RU },
         { "120", OPTION_VAL_120_RU },
         { "130", OPTION_VAL_130_RU },
         { "140", OPTION_VAL_140_RU },
         { "150", OPTION_VAL_150_RU },
         { "160", OPTION_VAL_160_RU },
         { "170", OPTION_VAL_170_RU },
         { "180", OPTION_VAL_180_RU },
         { "190", OPTION_VAL_190_RU },
         { "200", OPTION_VAL_200_RU },
         { "210", OPTION_VAL_210_RU },
         { "220", OPTION_VAL_220_RU },
         { "230", OPTION_VAL_230_RU },
         { "240", OPTION_VAL_240_RU },
         { "250", OPTION_VAL_250_RU },
         { "260", OPTION_VAL_260_RU },
         { "270", OPTION_VAL_270_RU },
         { "280", OPTION_VAL_280_RU },
         { "290", OPTION_VAL_290_RU },
         { "300", OPTION_VAL_300_RU },
         { "310", OPTION_VAL_310_RU },
         { "320", OPTION_VAL_320_RU },
         { "330", OPTION_VAL_330_RU },
         { "340", OPTION_VAL_340_RU },
         { "350", OPTION_VAL_350_RU },
         { "360", OPTION_VAL_360_RU },
         { "370", OPTION_VAL_370_RU },
         { "380", OPTION_VAL_380_RU },
         { "390", OPTION_VAL_390_RU },
         { "400", OPTION_VAL_400_RU },
         { "410", OPTION_VAL_410_RU },
         { "420", OPTION_VAL_420_RU },
         { "430", OPTION_VAL_430_RU },
         { "440", OPTION_VAL_440_RU },
         { "450", OPTION_VAL_450_RU },
         { "460", OPTION_VAL_460_RU },
         { "470", OPTION_VAL_470_RU },
         { "480", OPTION_VAL_480_RU },
         { "490", OPTION_VAL_490_RU },
         { "500", OPTION_VAL_500_RU },
         { "510", OPTION_VAL_510_RU },
         { "520", OPTION_VAL_520_RU },
         { "530", OPTION_VAL_530_RU },
         { "540", OPTION_VAL_540_RU },
         { "550", OPTION_VAL_550_RU },
         { "560", OPTION_VAL_560_RU },
         { "570", OPTION_VAL_570_RU },
         { "580", OPTION_VAL_580_RU },
         { "590", OPTION_VAL_590_RU },
         { "600", OPTION_VAL_600_RU },
         { "610", OPTION_VAL_610_RU },
         { "620", OPTION_VAL_620_RU },
         { "630", OPTION_VAL_630_RU },
         { "640", OPTION_VAL_640_RU },
         { "650", OPTION_VAL_650_RU },
         { "660", OPTION_VAL_660_RU },
         { "670", OPTION_VAL_670_RU },
         { "680", OPTION_VAL_680_RU },
         { "690", OPTION_VAL_690_RU },
         { "700", OPTION_VAL_700_RU },
         { "710", OPTION_VAL_710_RU },
         { "720", OPTION_VAL_720_RU },
         { "730", OPTION_VAL_730_RU },
         { "740", OPTION_VAL_740_RU },
         { "750", OPTION_VAL_750_RU },
         { "760", OPTION_VAL_760_RU },
         { "770", OPTION_VAL_770_RU },
         { "780", OPTION_VAL_780_RU },
         { "790", OPTION_VAL_790_RU },
         { "800", OPTION_VAL_800_RU },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_RU,
      BSNES_PPU_FAST_LABEL_CAT_RU,
      BSNES_PPU_FAST_INFO_0_RU,
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
      BSNES_PPU_DEINTERLACE_LABEL_RU,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_RU,
      BSNES_PPU_DEINTERLACE_INFO_0_RU,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_RU,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_RU,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_RU,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_RU,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_RU,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_RU,
      BSNES_MODE7_SCALE_LABEL_CAT_RU,
      BSNES_MODE7_SCALE_INFO_0_RU,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_RU  },
         { "2x", OPTION_VAL_2X_RU  },
         { "3x", OPTION_VAL_3X_RU  },
         { "4x", OPTION_VAL_4X_RU  },
         { "5x", OPTION_VAL_5X_RU },
         { "6x", OPTION_VAL_6X_RU },
         { "7x", OPTION_VAL_7X_RU },
         { "8x", OPTION_VAL_8X_RU },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_RU,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_RU,
      BSNES_MODE7_PERSPECTIVE_INFO_0_RU,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_RU,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_RU,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_RU,
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
      BSNES_MODE7_MOSAIC_LABEL_RU,
      BSNES_MODE7_MOSAIC_LABEL_CAT_RU,
      BSNES_MODE7_MOSAIC_INFO_0_RU,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_RU,
      BSNES_DSP_FAST_LABEL_CAT_RU,
      BSNES_DSP_FAST_INFO_0_RU,
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
      BSNES_DSP_CUBIC_LABEL_RU,
      BSNES_DSP_CUBIC_LABEL_CAT_RU,
      BSNES_DSP_CUBIC_INFO_0_RU,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_RU,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_RU,
      BSNES_DSP_ECHO_SHADOW_INFO_0_RU,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_RU,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_RU,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_RU,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_RU,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_RU,
      NULL,
      BSNES_SGB_BIOS_INFO_0_RU,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_RU   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_RU },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_RU,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_RU,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_RU  },
         { "2",   OPTION_VAL_2_RU },
         { "3",   OPTION_VAL_3_RU },
         { "4",   OPTION_VAL_4_RU },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_RU,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_RU,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_RU,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_RU,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_RU,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_RU,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SI */

#define CATEGORY_VIDEO_LABEL_SI NULL
#define CATEGORY_VIDEO_INFO_0_SI NULL
#define CATEGORY_AUDIO_LABEL_SI NULL
#define CATEGORY_AUDIO_INFO_0_SI NULL
#define CATEGORY_MODE7_LABEL_SI NULL
#define CATEGORY_MODE7_INFO_0_SI NULL
#define CATEGORY_SGB_LABEL_SI NULL
#define CATEGORY_SGB_INFO_0_SI NULL
#define CATEGORY_LIGHTGUN_LABEL_SI NULL
#define CATEGORY_LIGHTGUN_INFO_0_SI NULL
#define CATEGORY_OVERCLOCK_LABEL_SI NULL
#define CATEGORY_OVERCLOCK_INFO_0_SI NULL
#define CATEGORY_HACK_LABEL_SI NULL
#define CATEGORY_HACK_INFO_0_SI NULL
#define BSNES_ASPECT_RATIO_LABEL_SI NULL
#define BSNES_ASPECT_RATIO_INFO_0_SI NULL
#define OPTION_VAL_AUTO_SI NULL
#define OPTION_VAL_8_7_SI NULL
#define OPTION_VAL_4_3_SI NULL
#define OPTION_VAL_NTSC_SI NULL
#define OPTION_VAL_PAL_SI NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_SI NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_SI NULL
#define OPTION_VAL_OFF_SI NULL
#define BSNES_BLUR_EMULATION_LABEL_SI NULL
#define BSNES_BLUR_EMULATION_INFO_0_SI NULL
#define BSNES_HOTFIXES_LABEL_SI NULL
#define BSNES_HOTFIXES_INFO_0_SI NULL
#define BSNES_ENTROPY_LABEL_SI NULL
#define BSNES_ENTROPY_INFO_0_SI NULL
#define OPTION_VAL_LOW_SI NULL
#define OPTION_VAL_HIGH_SI NULL
#define OPTION_VAL_NONE_SI NULL
#define BSNES_CPU_OVERCLOCK_LABEL_SI NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_SI NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_SI NULL
#define OPTION_VAL_10_SI NULL
#define OPTION_VAL_20_SI NULL
#define OPTION_VAL_30_SI NULL
#define OPTION_VAL_40_SI NULL
#define OPTION_VAL_50_SI NULL
#define OPTION_VAL_60_SI NULL
#define OPTION_VAL_70_SI NULL
#define OPTION_VAL_80_SI NULL
#define OPTION_VAL_90_SI NULL
#define OPTION_VAL_100_SI NULL
#define OPTION_VAL_110_SI NULL
#define OPTION_VAL_120_SI NULL
#define OPTION_VAL_130_SI NULL
#define OPTION_VAL_140_SI NULL
#define OPTION_VAL_150_SI NULL
#define OPTION_VAL_160_SI NULL
#define OPTION_VAL_170_SI NULL
#define OPTION_VAL_180_SI NULL
#define OPTION_VAL_190_SI NULL
#define OPTION_VAL_200_SI NULL
#define OPTION_VAL_210_SI NULL
#define OPTION_VAL_220_SI NULL
#define OPTION_VAL_230_SI NULL
#define OPTION_VAL_240_SI NULL
#define OPTION_VAL_250_SI NULL
#define OPTION_VAL_260_SI NULL
#define OPTION_VAL_270_SI NULL
#define OPTION_VAL_280_SI NULL
#define OPTION_VAL_290_SI NULL
#define OPTION_VAL_300_SI NULL
#define OPTION_VAL_310_SI NULL
#define OPTION_VAL_320_SI NULL
#define OPTION_VAL_330_SI NULL
#define OPTION_VAL_340_SI NULL
#define OPTION_VAL_350_SI NULL
#define OPTION_VAL_360_SI NULL
#define OPTION_VAL_370_SI NULL
#define OPTION_VAL_380_SI NULL
#define OPTION_VAL_390_SI NULL
#define OPTION_VAL_400_SI NULL
#define BSNES_CPU_FASTMATH_LABEL_SI NULL
#define BSNES_CPU_FASTMATH_INFO_0_SI NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_SI NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_SI NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_SI NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_SI NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_SI NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_SI NULL
#define OPTION_VAL_410_SI NULL
#define OPTION_VAL_420_SI NULL
#define OPTION_VAL_430_SI NULL
#define OPTION_VAL_440_SI NULL
#define OPTION_VAL_450_SI NULL
#define OPTION_VAL_460_SI NULL
#define OPTION_VAL_470_SI NULL
#define OPTION_VAL_480_SI NULL
#define OPTION_VAL_490_SI NULL
#define OPTION_VAL_500_SI NULL
#define OPTION_VAL_510_SI NULL
#define OPTION_VAL_520_SI NULL
#define OPTION_VAL_530_SI NULL
#define OPTION_VAL_540_SI NULL
#define OPTION_VAL_550_SI NULL
#define OPTION_VAL_560_SI NULL
#define OPTION_VAL_570_SI NULL
#define OPTION_VAL_580_SI NULL
#define OPTION_VAL_590_SI NULL
#define OPTION_VAL_600_SI NULL
#define OPTION_VAL_610_SI NULL
#define OPTION_VAL_620_SI NULL
#define OPTION_VAL_630_SI NULL
#define OPTION_VAL_640_SI NULL
#define OPTION_VAL_650_SI NULL
#define OPTION_VAL_660_SI NULL
#define OPTION_VAL_670_SI NULL
#define OPTION_VAL_680_SI NULL
#define OPTION_VAL_690_SI NULL
#define OPTION_VAL_700_SI NULL
#define OPTION_VAL_710_SI NULL
#define OPTION_VAL_720_SI NULL
#define OPTION_VAL_730_SI NULL
#define OPTION_VAL_740_SI NULL
#define OPTION_VAL_750_SI NULL
#define OPTION_VAL_760_SI NULL
#define OPTION_VAL_770_SI NULL
#define OPTION_VAL_780_SI NULL
#define OPTION_VAL_790_SI NULL
#define OPTION_VAL_800_SI NULL
#define BSNES_PPU_FAST_LABEL_SI NULL
#define BSNES_PPU_FAST_LABEL_CAT_SI NULL
#define BSNES_PPU_FAST_INFO_0_SI NULL
#define BSNES_PPU_DEINTERLACE_LABEL_SI NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_SI NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_SI NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_SI NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_SI NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_SI NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_SI NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_SI NULL
#define BSNES_MODE7_SCALE_LABEL_SI NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_SI NULL
#define BSNES_MODE7_SCALE_INFO_0_SI NULL
#define OPTION_VAL_1X_SI NULL
#define OPTION_VAL_2X_SI NULL
#define OPTION_VAL_3X_SI NULL
#define OPTION_VAL_4X_SI NULL
#define OPTION_VAL_5X_SI NULL
#define OPTION_VAL_6X_SI NULL
#define OPTION_VAL_7X_SI NULL
#define OPTION_VAL_8X_SI NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_SI NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_SI NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_SI NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_SI NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_SI NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_SI NULL
#define BSNES_MODE7_MOSAIC_LABEL_SI NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_SI NULL
#define BSNES_MODE7_MOSAIC_INFO_0_SI NULL
#define BSNES_DSP_FAST_LABEL_SI NULL
#define BSNES_DSP_FAST_LABEL_CAT_SI NULL
#define BSNES_DSP_FAST_INFO_0_SI NULL
#define BSNES_DSP_CUBIC_LABEL_SI NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_SI NULL
#define BSNES_DSP_CUBIC_INFO_0_SI NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_SI NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_SI NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_SI NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_SI NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_SI NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_SI NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_SI NULL
#define BSNES_SGB_BIOS_LABEL_SI NULL
#define BSNES_SGB_BIOS_INFO_0_SI NULL
#define OPTION_VAL_SGB1_SFC_SI NULL
#define OPTION_VAL_SGB2_SFC_SI NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_SI NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_SI NULL
#define OPTION_VAL_1_SI NULL
#define OPTION_VAL_2_SI NULL
#define OPTION_VAL_3_SI NULL
#define OPTION_VAL_4_SI NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_SI NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_SI NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_SI NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_SI NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_SI NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_SI NULL

struct retro_core_option_v2_category option_cats_si[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SI,
      CATEGORY_VIDEO_INFO_0_SI
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SI,
      CATEGORY_AUDIO_INFO_0_SI
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_SI,
      CATEGORY_MODE7_INFO_0_SI
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_SI,
      CATEGORY_SGB_INFO_0_SI
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_SI,
      CATEGORY_LIGHTGUN_INFO_0_SI
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_SI,
      CATEGORY_OVERCLOCK_INFO_0_SI
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_SI,
      CATEGORY_HACK_INFO_0_SI
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_si[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_SI,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_SI,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_SI },
         { "8:7",  OPTION_VAL_8_7_SI },
         { "4:3",  OPTION_VAL_4_3_SI },
         { "NTSC", OPTION_VAL_NTSC_SI },
         { "PAL",  OPTION_VAL_PAL_SI },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_SI,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_SI,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_SI },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_SI,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_SI,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_SI,
      NULL,
      BSNES_HOTFIXES_INFO_0_SI,
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
      BSNES_ENTROPY_LABEL_SI,
      NULL,
      BSNES_ENTROPY_INFO_0_SI,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_SI },
         { "High", OPTION_VAL_HIGH_SI },
         { "None", OPTION_VAL_NONE_SI },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_SI,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_SI,
      BSNES_CPU_OVERCLOCK_INFO_0_SI,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SI  },
         { "20",  OPTION_VAL_20_SI  },
         { "30",  OPTION_VAL_30_SI  },
         { "40",  OPTION_VAL_40_SI  },
         { "50",  OPTION_VAL_50_SI  },
         { "60",  OPTION_VAL_60_SI  },
         { "70",  OPTION_VAL_70_SI  },
         { "80",  OPTION_VAL_80_SI  },
         { "90",  OPTION_VAL_90_SI  },
         { "100", OPTION_VAL_100_SI },
         { "110", OPTION_VAL_110_SI },
         { "120", OPTION_VAL_120_SI },
         { "130", OPTION_VAL_130_SI },
         { "140", OPTION_VAL_140_SI },
         { "150", OPTION_VAL_150_SI },
         { "160", OPTION_VAL_160_SI },
         { "170", OPTION_VAL_170_SI },
         { "180", OPTION_VAL_180_SI },
         { "190", OPTION_VAL_190_SI },
         { "200", OPTION_VAL_200_SI },
         { "210", OPTION_VAL_210_SI },
         { "220", OPTION_VAL_220_SI },
         { "230", OPTION_VAL_230_SI },
         { "240", OPTION_VAL_240_SI },
         { "250", OPTION_VAL_250_SI },
         { "260", OPTION_VAL_260_SI },
         { "270", OPTION_VAL_270_SI },
         { "280", OPTION_VAL_280_SI },
         { "290", OPTION_VAL_290_SI },
         { "300", OPTION_VAL_300_SI },
         { "310", OPTION_VAL_310_SI },
         { "320", OPTION_VAL_320_SI },
         { "330", OPTION_VAL_330_SI },
         { "340", OPTION_VAL_340_SI },
         { "350", OPTION_VAL_350_SI },
         { "360", OPTION_VAL_360_SI },
         { "370", OPTION_VAL_370_SI },
         { "380", OPTION_VAL_380_SI },
         { "390", OPTION_VAL_390_SI },
         { "400", OPTION_VAL_400_SI },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_SI,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_SI,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_SI,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_SI,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_SI,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SI  },
         { "20",  OPTION_VAL_20_SI  },
         { "30",  OPTION_VAL_30_SI  },
         { "40",  OPTION_VAL_40_SI  },
         { "50",  OPTION_VAL_50_SI  },
         { "60",  OPTION_VAL_60_SI  },
         { "70",  OPTION_VAL_70_SI  },
         { "80",  OPTION_VAL_80_SI  },
         { "90",  OPTION_VAL_90_SI  },
         { "100", OPTION_VAL_100_SI },
         { "110", OPTION_VAL_110_SI },
         { "120", OPTION_VAL_120_SI },
         { "130", OPTION_VAL_130_SI },
         { "140", OPTION_VAL_140_SI },
         { "150", OPTION_VAL_150_SI },
         { "160", OPTION_VAL_160_SI },
         { "170", OPTION_VAL_170_SI },
         { "180", OPTION_VAL_180_SI },
         { "190", OPTION_VAL_190_SI },
         { "200", OPTION_VAL_200_SI },
         { "210", OPTION_VAL_210_SI },
         { "220", OPTION_VAL_220_SI },
         { "230", OPTION_VAL_230_SI },
         { "240", OPTION_VAL_240_SI },
         { "250", OPTION_VAL_250_SI },
         { "260", OPTION_VAL_260_SI },
         { "270", OPTION_VAL_270_SI },
         { "280", OPTION_VAL_280_SI },
         { "290", OPTION_VAL_290_SI },
         { "300", OPTION_VAL_300_SI },
         { "310", OPTION_VAL_310_SI },
         { "320", OPTION_VAL_320_SI },
         { "330", OPTION_VAL_330_SI },
         { "340", OPTION_VAL_340_SI },
         { "350", OPTION_VAL_350_SI },
         { "360", OPTION_VAL_360_SI },
         { "370", OPTION_VAL_370_SI },
         { "380", OPTION_VAL_380_SI },
         { "390", OPTION_VAL_390_SI },
         { "400", OPTION_VAL_400_SI },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_SI,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_SI,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_SI,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SI  },
         { "20",  OPTION_VAL_20_SI  },
         { "30",  OPTION_VAL_30_SI  },
         { "40",  OPTION_VAL_40_SI  },
         { "50",  OPTION_VAL_50_SI  },
         { "60",  OPTION_VAL_60_SI  },
         { "70",  OPTION_VAL_70_SI  },
         { "80",  OPTION_VAL_80_SI  },
         { "90",  OPTION_VAL_90_SI  },
         { "100", OPTION_VAL_100_SI },
         { "110", OPTION_VAL_110_SI },
         { "120", OPTION_VAL_120_SI },
         { "130", OPTION_VAL_130_SI },
         { "140", OPTION_VAL_140_SI },
         { "150", OPTION_VAL_150_SI },
         { "160", OPTION_VAL_160_SI },
         { "170", OPTION_VAL_170_SI },
         { "180", OPTION_VAL_180_SI },
         { "190", OPTION_VAL_190_SI },
         { "200", OPTION_VAL_200_SI },
         { "210", OPTION_VAL_210_SI },
         { "220", OPTION_VAL_220_SI },
         { "230", OPTION_VAL_230_SI },
         { "240", OPTION_VAL_240_SI },
         { "250", OPTION_VAL_250_SI },
         { "260", OPTION_VAL_260_SI },
         { "270", OPTION_VAL_270_SI },
         { "280", OPTION_VAL_280_SI },
         { "290", OPTION_VAL_290_SI },
         { "300", OPTION_VAL_300_SI },
         { "310", OPTION_VAL_310_SI },
         { "320", OPTION_VAL_320_SI },
         { "330", OPTION_VAL_330_SI },
         { "340", OPTION_VAL_340_SI },
         { "350", OPTION_VAL_350_SI },
         { "360", OPTION_VAL_360_SI },
         { "370", OPTION_VAL_370_SI },
         { "380", OPTION_VAL_380_SI },
         { "390", OPTION_VAL_390_SI },
         { "400", OPTION_VAL_400_SI },
         { "410", OPTION_VAL_410_SI },
         { "420", OPTION_VAL_420_SI },
         { "430", OPTION_VAL_430_SI },
         { "440", OPTION_VAL_440_SI },
         { "450", OPTION_VAL_450_SI },
         { "460", OPTION_VAL_460_SI },
         { "470", OPTION_VAL_470_SI },
         { "480", OPTION_VAL_480_SI },
         { "490", OPTION_VAL_490_SI },
         { "500", OPTION_VAL_500_SI },
         { "510", OPTION_VAL_510_SI },
         { "520", OPTION_VAL_520_SI },
         { "530", OPTION_VAL_530_SI },
         { "540", OPTION_VAL_540_SI },
         { "550", OPTION_VAL_550_SI },
         { "560", OPTION_VAL_560_SI },
         { "570", OPTION_VAL_570_SI },
         { "580", OPTION_VAL_580_SI },
         { "590", OPTION_VAL_590_SI },
         { "600", OPTION_VAL_600_SI },
         { "610", OPTION_VAL_610_SI },
         { "620", OPTION_VAL_620_SI },
         { "630", OPTION_VAL_630_SI },
         { "640", OPTION_VAL_640_SI },
         { "650", OPTION_VAL_650_SI },
         { "660", OPTION_VAL_660_SI },
         { "670", OPTION_VAL_670_SI },
         { "680", OPTION_VAL_680_SI },
         { "690", OPTION_VAL_690_SI },
         { "700", OPTION_VAL_700_SI },
         { "710", OPTION_VAL_710_SI },
         { "720", OPTION_VAL_720_SI },
         { "730", OPTION_VAL_730_SI },
         { "740", OPTION_VAL_740_SI },
         { "750", OPTION_VAL_750_SI },
         { "760", OPTION_VAL_760_SI },
         { "770", OPTION_VAL_770_SI },
         { "780", OPTION_VAL_780_SI },
         { "790", OPTION_VAL_790_SI },
         { "800", OPTION_VAL_800_SI },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_SI,
      BSNES_PPU_FAST_LABEL_CAT_SI,
      BSNES_PPU_FAST_INFO_0_SI,
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
      BSNES_PPU_DEINTERLACE_LABEL_SI,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_SI,
      BSNES_PPU_DEINTERLACE_INFO_0_SI,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_SI,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_SI,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_SI,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_SI,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_SI,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_SI,
      BSNES_MODE7_SCALE_LABEL_CAT_SI,
      BSNES_MODE7_SCALE_INFO_0_SI,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_SI  },
         { "2x", OPTION_VAL_2X_SI  },
         { "3x", OPTION_VAL_3X_SI  },
         { "4x", OPTION_VAL_4X_SI  },
         { "5x", OPTION_VAL_5X_SI },
         { "6x", OPTION_VAL_6X_SI },
         { "7x", OPTION_VAL_7X_SI },
         { "8x", OPTION_VAL_8X_SI },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_SI,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_SI,
      BSNES_MODE7_PERSPECTIVE_INFO_0_SI,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_SI,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_SI,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_SI,
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
      BSNES_MODE7_MOSAIC_LABEL_SI,
      BSNES_MODE7_MOSAIC_LABEL_CAT_SI,
      BSNES_MODE7_MOSAIC_INFO_0_SI,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_SI,
      BSNES_DSP_FAST_LABEL_CAT_SI,
      BSNES_DSP_FAST_INFO_0_SI,
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
      BSNES_DSP_CUBIC_LABEL_SI,
      BSNES_DSP_CUBIC_LABEL_CAT_SI,
      BSNES_DSP_CUBIC_INFO_0_SI,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_SI,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_SI,
      BSNES_DSP_ECHO_SHADOW_INFO_0_SI,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_SI,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_SI,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_SI,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_SI,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_SI,
      NULL,
      BSNES_SGB_BIOS_INFO_0_SI,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_SI   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_SI },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_SI,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_SI,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_SI  },
         { "2",   OPTION_VAL_2_SI },
         { "3",   OPTION_VAL_3_SI },
         { "4",   OPTION_VAL_4_SI },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_SI,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_SI,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_SI,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_SI,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_SI,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_SI,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_si = {
   option_cats_si,
   option_defs_si
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_VIDEO_LABEL_SK NULL
#define CATEGORY_VIDEO_INFO_0_SK "Zmena nastavení video výstupu."
#define CATEGORY_AUDIO_LABEL_SK "Zvuk"
#define CATEGORY_AUDIO_INFO_0_SK "Zmena nastavení audio výstupu."
#define CATEGORY_MODE7_LABEL_SK NULL
#define CATEGORY_MODE7_INFO_0_SK NULL
#define CATEGORY_SGB_LABEL_SK NULL
#define CATEGORY_SGB_INFO_0_SK NULL
#define CATEGORY_LIGHTGUN_LABEL_SK NULL
#define CATEGORY_LIGHTGUN_INFO_0_SK NULL
#define CATEGORY_OVERCLOCK_LABEL_SK NULL
#define CATEGORY_OVERCLOCK_INFO_0_SK NULL
#define CATEGORY_HACK_LABEL_SK NULL
#define CATEGORY_HACK_INFO_0_SK NULL
#define BSNES_ASPECT_RATIO_LABEL_SK NULL
#define BSNES_ASPECT_RATIO_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_8_7_SK NULL
#define OPTION_VAL_4_3_SK NULL
#define OPTION_VAL_NTSC_SK NULL
#define OPTION_VAL_PAL_SK NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_SK NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_SK NULL
#define OPTION_VAL_OFF_SK NULL
#define BSNES_BLUR_EMULATION_LABEL_SK NULL
#define BSNES_BLUR_EMULATION_INFO_0_SK NULL
#define BSNES_HOTFIXES_LABEL_SK NULL
#define BSNES_HOTFIXES_INFO_0_SK NULL
#define BSNES_ENTROPY_LABEL_SK NULL
#define BSNES_ENTROPY_INFO_0_SK NULL
#define OPTION_VAL_LOW_SK NULL
#define OPTION_VAL_HIGH_SK NULL
#define OPTION_VAL_NONE_SK "Žiadne"
#define BSNES_CPU_OVERCLOCK_LABEL_SK NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_SK NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_SK NULL
#define OPTION_VAL_10_SK NULL
#define OPTION_VAL_20_SK NULL
#define OPTION_VAL_30_SK NULL
#define OPTION_VAL_40_SK NULL
#define OPTION_VAL_50_SK NULL
#define OPTION_VAL_60_SK NULL
#define OPTION_VAL_70_SK NULL
#define OPTION_VAL_80_SK NULL
#define OPTION_VAL_90_SK NULL
#define OPTION_VAL_100_SK NULL
#define OPTION_VAL_110_SK NULL
#define OPTION_VAL_120_SK NULL
#define OPTION_VAL_130_SK NULL
#define OPTION_VAL_140_SK NULL
#define OPTION_VAL_150_SK NULL
#define OPTION_VAL_160_SK NULL
#define OPTION_VAL_170_SK NULL
#define OPTION_VAL_180_SK NULL
#define OPTION_VAL_190_SK NULL
#define OPTION_VAL_200_SK NULL
#define OPTION_VAL_210_SK NULL
#define OPTION_VAL_220_SK NULL
#define OPTION_VAL_230_SK NULL
#define OPTION_VAL_240_SK NULL
#define OPTION_VAL_250_SK NULL
#define OPTION_VAL_260_SK NULL
#define OPTION_VAL_270_SK NULL
#define OPTION_VAL_280_SK NULL
#define OPTION_VAL_290_SK NULL
#define OPTION_VAL_300_SK NULL
#define OPTION_VAL_310_SK NULL
#define OPTION_VAL_320_SK NULL
#define OPTION_VAL_330_SK NULL
#define OPTION_VAL_340_SK NULL
#define OPTION_VAL_350_SK NULL
#define OPTION_VAL_360_SK NULL
#define OPTION_VAL_370_SK NULL
#define OPTION_VAL_380_SK NULL
#define OPTION_VAL_390_SK NULL
#define OPTION_VAL_400_SK NULL
#define BSNES_CPU_FASTMATH_LABEL_SK NULL
#define BSNES_CPU_FASTMATH_INFO_0_SK NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_SK NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_SK NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_SK NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_SK NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_SK NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_SK NULL
#define OPTION_VAL_410_SK NULL
#define OPTION_VAL_420_SK NULL
#define OPTION_VAL_430_SK NULL
#define OPTION_VAL_440_SK NULL
#define OPTION_VAL_450_SK NULL
#define OPTION_VAL_460_SK NULL
#define OPTION_VAL_470_SK NULL
#define OPTION_VAL_480_SK NULL
#define OPTION_VAL_490_SK NULL
#define OPTION_VAL_500_SK NULL
#define OPTION_VAL_510_SK NULL
#define OPTION_VAL_520_SK NULL
#define OPTION_VAL_530_SK NULL
#define OPTION_VAL_540_SK NULL
#define OPTION_VAL_550_SK NULL
#define OPTION_VAL_560_SK NULL
#define OPTION_VAL_570_SK NULL
#define OPTION_VAL_580_SK NULL
#define OPTION_VAL_590_SK NULL
#define OPTION_VAL_600_SK NULL
#define OPTION_VAL_610_SK NULL
#define OPTION_VAL_620_SK NULL
#define OPTION_VAL_630_SK NULL
#define OPTION_VAL_640_SK NULL
#define OPTION_VAL_650_SK NULL
#define OPTION_VAL_660_SK NULL
#define OPTION_VAL_670_SK NULL
#define OPTION_VAL_680_SK NULL
#define OPTION_VAL_690_SK NULL
#define OPTION_VAL_700_SK NULL
#define OPTION_VAL_710_SK NULL
#define OPTION_VAL_720_SK NULL
#define OPTION_VAL_730_SK NULL
#define OPTION_VAL_740_SK NULL
#define OPTION_VAL_750_SK NULL
#define OPTION_VAL_760_SK NULL
#define OPTION_VAL_770_SK NULL
#define OPTION_VAL_780_SK NULL
#define OPTION_VAL_790_SK NULL
#define OPTION_VAL_800_SK NULL
#define BSNES_PPU_FAST_LABEL_SK NULL
#define BSNES_PPU_FAST_LABEL_CAT_SK NULL
#define BSNES_PPU_FAST_INFO_0_SK NULL
#define BSNES_PPU_DEINTERLACE_LABEL_SK NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_SK NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_SK NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_SK NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_SK NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_SK NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_SK NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_SK NULL
#define BSNES_MODE7_SCALE_LABEL_SK NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_SK "Škálovať"
#define BSNES_MODE7_SCALE_INFO_0_SK NULL
#define OPTION_VAL_1X_SK NULL
#define OPTION_VAL_2X_SK NULL
#define OPTION_VAL_3X_SK NULL
#define OPTION_VAL_4X_SK NULL
#define OPTION_VAL_5X_SK NULL
#define OPTION_VAL_6X_SK NULL
#define OPTION_VAL_7X_SK NULL
#define OPTION_VAL_8X_SK NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_SK NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_SK NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_SK NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_SK NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_SK NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_SK NULL
#define BSNES_MODE7_MOSAIC_LABEL_SK NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_SK NULL
#define BSNES_MODE7_MOSAIC_INFO_0_SK NULL
#define BSNES_DSP_FAST_LABEL_SK NULL
#define BSNES_DSP_FAST_LABEL_CAT_SK NULL
#define BSNES_DSP_FAST_INFO_0_SK NULL
#define BSNES_DSP_CUBIC_LABEL_SK NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_SK NULL
#define BSNES_DSP_CUBIC_INFO_0_SK NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_SK NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_SK NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_SK NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_SK NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_SK NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_SK NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_SK NULL
#define BSNES_SGB_BIOS_LABEL_SK NULL
#define BSNES_SGB_BIOS_INFO_0_SK NULL
#define OPTION_VAL_SGB1_SFC_SK NULL
#define OPTION_VAL_SGB2_SFC_SK NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_SK NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_SK NULL
#define OPTION_VAL_1_SK NULL
#define OPTION_VAL_2_SK NULL
#define OPTION_VAL_3_SK NULL
#define OPTION_VAL_4_SK NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_SK NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_SK NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_SK NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_SK NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_SK NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_SK NULL

struct retro_core_option_v2_category option_cats_sk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SK,
      CATEGORY_VIDEO_INFO_0_SK
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SK,
      CATEGORY_AUDIO_INFO_0_SK
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_SK,
      CATEGORY_MODE7_INFO_0_SK
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_SK,
      CATEGORY_SGB_INFO_0_SK
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_SK,
      CATEGORY_LIGHTGUN_INFO_0_SK
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_SK,
      CATEGORY_OVERCLOCK_INFO_0_SK
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_SK,
      CATEGORY_HACK_INFO_0_SK
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_SK,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_SK,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_SK },
         { "8:7",  OPTION_VAL_8_7_SK },
         { "4:3",  OPTION_VAL_4_3_SK },
         { "NTSC", OPTION_VAL_NTSC_SK },
         { "PAL",  OPTION_VAL_PAL_SK },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_SK,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_SK,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_SK },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_SK,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_SK,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_SK,
      NULL,
      BSNES_HOTFIXES_INFO_0_SK,
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
      BSNES_ENTROPY_LABEL_SK,
      NULL,
      BSNES_ENTROPY_INFO_0_SK,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_SK },
         { "High", OPTION_VAL_HIGH_SK },
         { "None", OPTION_VAL_NONE_SK },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_SK,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_SK,
      BSNES_CPU_OVERCLOCK_INFO_0_SK,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SK  },
         { "20",  OPTION_VAL_20_SK  },
         { "30",  OPTION_VAL_30_SK  },
         { "40",  OPTION_VAL_40_SK  },
         { "50",  OPTION_VAL_50_SK  },
         { "60",  OPTION_VAL_60_SK  },
         { "70",  OPTION_VAL_70_SK  },
         { "80",  OPTION_VAL_80_SK  },
         { "90",  OPTION_VAL_90_SK  },
         { "100", OPTION_VAL_100_SK },
         { "110", OPTION_VAL_110_SK },
         { "120", OPTION_VAL_120_SK },
         { "130", OPTION_VAL_130_SK },
         { "140", OPTION_VAL_140_SK },
         { "150", OPTION_VAL_150_SK },
         { "160", OPTION_VAL_160_SK },
         { "170", OPTION_VAL_170_SK },
         { "180", OPTION_VAL_180_SK },
         { "190", OPTION_VAL_190_SK },
         { "200", OPTION_VAL_200_SK },
         { "210", OPTION_VAL_210_SK },
         { "220", OPTION_VAL_220_SK },
         { "230", OPTION_VAL_230_SK },
         { "240", OPTION_VAL_240_SK },
         { "250", OPTION_VAL_250_SK },
         { "260", OPTION_VAL_260_SK },
         { "270", OPTION_VAL_270_SK },
         { "280", OPTION_VAL_280_SK },
         { "290", OPTION_VAL_290_SK },
         { "300", OPTION_VAL_300_SK },
         { "310", OPTION_VAL_310_SK },
         { "320", OPTION_VAL_320_SK },
         { "330", OPTION_VAL_330_SK },
         { "340", OPTION_VAL_340_SK },
         { "350", OPTION_VAL_350_SK },
         { "360", OPTION_VAL_360_SK },
         { "370", OPTION_VAL_370_SK },
         { "380", OPTION_VAL_380_SK },
         { "390", OPTION_VAL_390_SK },
         { "400", OPTION_VAL_400_SK },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_SK,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_SK,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_SK,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_SK,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_SK,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SK  },
         { "20",  OPTION_VAL_20_SK  },
         { "30",  OPTION_VAL_30_SK  },
         { "40",  OPTION_VAL_40_SK  },
         { "50",  OPTION_VAL_50_SK  },
         { "60",  OPTION_VAL_60_SK  },
         { "70",  OPTION_VAL_70_SK  },
         { "80",  OPTION_VAL_80_SK  },
         { "90",  OPTION_VAL_90_SK  },
         { "100", OPTION_VAL_100_SK },
         { "110", OPTION_VAL_110_SK },
         { "120", OPTION_VAL_120_SK },
         { "130", OPTION_VAL_130_SK },
         { "140", OPTION_VAL_140_SK },
         { "150", OPTION_VAL_150_SK },
         { "160", OPTION_VAL_160_SK },
         { "170", OPTION_VAL_170_SK },
         { "180", OPTION_VAL_180_SK },
         { "190", OPTION_VAL_190_SK },
         { "200", OPTION_VAL_200_SK },
         { "210", OPTION_VAL_210_SK },
         { "220", OPTION_VAL_220_SK },
         { "230", OPTION_VAL_230_SK },
         { "240", OPTION_VAL_240_SK },
         { "250", OPTION_VAL_250_SK },
         { "260", OPTION_VAL_260_SK },
         { "270", OPTION_VAL_270_SK },
         { "280", OPTION_VAL_280_SK },
         { "290", OPTION_VAL_290_SK },
         { "300", OPTION_VAL_300_SK },
         { "310", OPTION_VAL_310_SK },
         { "320", OPTION_VAL_320_SK },
         { "330", OPTION_VAL_330_SK },
         { "340", OPTION_VAL_340_SK },
         { "350", OPTION_VAL_350_SK },
         { "360", OPTION_VAL_360_SK },
         { "370", OPTION_VAL_370_SK },
         { "380", OPTION_VAL_380_SK },
         { "390", OPTION_VAL_390_SK },
         { "400", OPTION_VAL_400_SK },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_SK,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_SK,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_SK,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SK  },
         { "20",  OPTION_VAL_20_SK  },
         { "30",  OPTION_VAL_30_SK  },
         { "40",  OPTION_VAL_40_SK  },
         { "50",  OPTION_VAL_50_SK  },
         { "60",  OPTION_VAL_60_SK  },
         { "70",  OPTION_VAL_70_SK  },
         { "80",  OPTION_VAL_80_SK  },
         { "90",  OPTION_VAL_90_SK  },
         { "100", OPTION_VAL_100_SK },
         { "110", OPTION_VAL_110_SK },
         { "120", OPTION_VAL_120_SK },
         { "130", OPTION_VAL_130_SK },
         { "140", OPTION_VAL_140_SK },
         { "150", OPTION_VAL_150_SK },
         { "160", OPTION_VAL_160_SK },
         { "170", OPTION_VAL_170_SK },
         { "180", OPTION_VAL_180_SK },
         { "190", OPTION_VAL_190_SK },
         { "200", OPTION_VAL_200_SK },
         { "210", OPTION_VAL_210_SK },
         { "220", OPTION_VAL_220_SK },
         { "230", OPTION_VAL_230_SK },
         { "240", OPTION_VAL_240_SK },
         { "250", OPTION_VAL_250_SK },
         { "260", OPTION_VAL_260_SK },
         { "270", OPTION_VAL_270_SK },
         { "280", OPTION_VAL_280_SK },
         { "290", OPTION_VAL_290_SK },
         { "300", OPTION_VAL_300_SK },
         { "310", OPTION_VAL_310_SK },
         { "320", OPTION_VAL_320_SK },
         { "330", OPTION_VAL_330_SK },
         { "340", OPTION_VAL_340_SK },
         { "350", OPTION_VAL_350_SK },
         { "360", OPTION_VAL_360_SK },
         { "370", OPTION_VAL_370_SK },
         { "380", OPTION_VAL_380_SK },
         { "390", OPTION_VAL_390_SK },
         { "400", OPTION_VAL_400_SK },
         { "410", OPTION_VAL_410_SK },
         { "420", OPTION_VAL_420_SK },
         { "430", OPTION_VAL_430_SK },
         { "440", OPTION_VAL_440_SK },
         { "450", OPTION_VAL_450_SK },
         { "460", OPTION_VAL_460_SK },
         { "470", OPTION_VAL_470_SK },
         { "480", OPTION_VAL_480_SK },
         { "490", OPTION_VAL_490_SK },
         { "500", OPTION_VAL_500_SK },
         { "510", OPTION_VAL_510_SK },
         { "520", OPTION_VAL_520_SK },
         { "530", OPTION_VAL_530_SK },
         { "540", OPTION_VAL_540_SK },
         { "550", OPTION_VAL_550_SK },
         { "560", OPTION_VAL_560_SK },
         { "570", OPTION_VAL_570_SK },
         { "580", OPTION_VAL_580_SK },
         { "590", OPTION_VAL_590_SK },
         { "600", OPTION_VAL_600_SK },
         { "610", OPTION_VAL_610_SK },
         { "620", OPTION_VAL_620_SK },
         { "630", OPTION_VAL_630_SK },
         { "640", OPTION_VAL_640_SK },
         { "650", OPTION_VAL_650_SK },
         { "660", OPTION_VAL_660_SK },
         { "670", OPTION_VAL_670_SK },
         { "680", OPTION_VAL_680_SK },
         { "690", OPTION_VAL_690_SK },
         { "700", OPTION_VAL_700_SK },
         { "710", OPTION_VAL_710_SK },
         { "720", OPTION_VAL_720_SK },
         { "730", OPTION_VAL_730_SK },
         { "740", OPTION_VAL_740_SK },
         { "750", OPTION_VAL_750_SK },
         { "760", OPTION_VAL_760_SK },
         { "770", OPTION_VAL_770_SK },
         { "780", OPTION_VAL_780_SK },
         { "790", OPTION_VAL_790_SK },
         { "800", OPTION_VAL_800_SK },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_SK,
      BSNES_PPU_FAST_LABEL_CAT_SK,
      BSNES_PPU_FAST_INFO_0_SK,
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
      BSNES_PPU_DEINTERLACE_LABEL_SK,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_SK,
      BSNES_PPU_DEINTERLACE_INFO_0_SK,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_SK,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_SK,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_SK,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_SK,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_SK,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_SK,
      BSNES_MODE7_SCALE_LABEL_CAT_SK,
      BSNES_MODE7_SCALE_INFO_0_SK,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_SK  },
         { "2x", OPTION_VAL_2X_SK  },
         { "3x", OPTION_VAL_3X_SK  },
         { "4x", OPTION_VAL_4X_SK  },
         { "5x", OPTION_VAL_5X_SK },
         { "6x", OPTION_VAL_6X_SK },
         { "7x", OPTION_VAL_7X_SK },
         { "8x", OPTION_VAL_8X_SK },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_SK,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_SK,
      BSNES_MODE7_PERSPECTIVE_INFO_0_SK,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_SK,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_SK,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_SK,
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
      BSNES_MODE7_MOSAIC_LABEL_SK,
      BSNES_MODE7_MOSAIC_LABEL_CAT_SK,
      BSNES_MODE7_MOSAIC_INFO_0_SK,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_SK,
      BSNES_DSP_FAST_LABEL_CAT_SK,
      BSNES_DSP_FAST_INFO_0_SK,
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
      BSNES_DSP_CUBIC_LABEL_SK,
      BSNES_DSP_CUBIC_LABEL_CAT_SK,
      BSNES_DSP_CUBIC_INFO_0_SK,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_SK,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_SK,
      BSNES_DSP_ECHO_SHADOW_INFO_0_SK,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_SK,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_SK,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_SK,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_SK,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_SK,
      NULL,
      BSNES_SGB_BIOS_INFO_0_SK,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_SK   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_SK },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_SK,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_SK,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_SK  },
         { "2",   OPTION_VAL_2_SK },
         { "3",   OPTION_VAL_3_SK },
         { "4",   OPTION_VAL_4_SK },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_SK,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_SK,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_SK,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_SK,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_SK,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_SK,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define CATEGORY_VIDEO_LABEL_SR NULL
#define CATEGORY_VIDEO_INFO_0_SR "Izmeni podešavanja video izlaza."
#define CATEGORY_AUDIO_LABEL_SR "Zvuk"
#define CATEGORY_AUDIO_INFO_0_SR "Izmeni podešavanja zvuka."
#define CATEGORY_MODE7_LABEL_SR NULL
#define CATEGORY_MODE7_INFO_0_SR NULL
#define CATEGORY_SGB_LABEL_SR NULL
#define CATEGORY_SGB_INFO_0_SR NULL
#define CATEGORY_LIGHTGUN_LABEL_SR NULL
#define CATEGORY_LIGHTGUN_INFO_0_SR NULL
#define CATEGORY_OVERCLOCK_LABEL_SR NULL
#define CATEGORY_OVERCLOCK_INFO_0_SR NULL
#define CATEGORY_HACK_LABEL_SR NULL
#define CATEGORY_HACK_INFO_0_SR NULL
#define BSNES_ASPECT_RATIO_LABEL_SR NULL
#define BSNES_ASPECT_RATIO_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define OPTION_VAL_8_7_SR NULL
#define OPTION_VAL_4_3_SR NULL
#define OPTION_VAL_NTSC_SR NULL
#define OPTION_VAL_PAL_SR NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_SR NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_SR NULL
#define OPTION_VAL_OFF_SR NULL
#define BSNES_BLUR_EMULATION_LABEL_SR NULL
#define BSNES_BLUR_EMULATION_INFO_0_SR NULL
#define BSNES_HOTFIXES_LABEL_SR NULL
#define BSNES_HOTFIXES_INFO_0_SR NULL
#define BSNES_ENTROPY_LABEL_SR NULL
#define BSNES_ENTROPY_INFO_0_SR NULL
#define OPTION_VAL_LOW_SR NULL
#define OPTION_VAL_HIGH_SR NULL
#define OPTION_VAL_NONE_SR NULL
#define BSNES_CPU_OVERCLOCK_LABEL_SR NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_SR NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_SR NULL
#define OPTION_VAL_10_SR NULL
#define OPTION_VAL_20_SR NULL
#define OPTION_VAL_30_SR NULL
#define OPTION_VAL_40_SR NULL
#define OPTION_VAL_50_SR NULL
#define OPTION_VAL_60_SR NULL
#define OPTION_VAL_70_SR NULL
#define OPTION_VAL_80_SR NULL
#define OPTION_VAL_90_SR NULL
#define OPTION_VAL_100_SR NULL
#define OPTION_VAL_110_SR NULL
#define OPTION_VAL_120_SR NULL
#define OPTION_VAL_130_SR NULL
#define OPTION_VAL_140_SR NULL
#define OPTION_VAL_150_SR NULL
#define OPTION_VAL_160_SR NULL
#define OPTION_VAL_170_SR NULL
#define OPTION_VAL_180_SR NULL
#define OPTION_VAL_190_SR NULL
#define OPTION_VAL_200_SR NULL
#define OPTION_VAL_210_SR NULL
#define OPTION_VAL_220_SR NULL
#define OPTION_VAL_230_SR NULL
#define OPTION_VAL_240_SR NULL
#define OPTION_VAL_250_SR NULL
#define OPTION_VAL_260_SR NULL
#define OPTION_VAL_270_SR NULL
#define OPTION_VAL_280_SR NULL
#define OPTION_VAL_290_SR NULL
#define OPTION_VAL_300_SR NULL
#define OPTION_VAL_310_SR NULL
#define OPTION_VAL_320_SR NULL
#define OPTION_VAL_330_SR NULL
#define OPTION_VAL_340_SR NULL
#define OPTION_VAL_350_SR NULL
#define OPTION_VAL_360_SR NULL
#define OPTION_VAL_370_SR NULL
#define OPTION_VAL_380_SR NULL
#define OPTION_VAL_390_SR NULL
#define OPTION_VAL_400_SR NULL
#define BSNES_CPU_FASTMATH_LABEL_SR NULL
#define BSNES_CPU_FASTMATH_INFO_0_SR NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_SR NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_SR NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_SR NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_SR NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_SR NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_SR NULL
#define OPTION_VAL_410_SR NULL
#define OPTION_VAL_420_SR NULL
#define OPTION_VAL_430_SR NULL
#define OPTION_VAL_440_SR NULL
#define OPTION_VAL_450_SR NULL
#define OPTION_VAL_460_SR NULL
#define OPTION_VAL_470_SR NULL
#define OPTION_VAL_480_SR NULL
#define OPTION_VAL_490_SR NULL
#define OPTION_VAL_500_SR NULL
#define OPTION_VAL_510_SR NULL
#define OPTION_VAL_520_SR NULL
#define OPTION_VAL_530_SR NULL
#define OPTION_VAL_540_SR NULL
#define OPTION_VAL_550_SR NULL
#define OPTION_VAL_560_SR NULL
#define OPTION_VAL_570_SR NULL
#define OPTION_VAL_580_SR NULL
#define OPTION_VAL_590_SR NULL
#define OPTION_VAL_600_SR NULL
#define OPTION_VAL_610_SR NULL
#define OPTION_VAL_620_SR NULL
#define OPTION_VAL_630_SR NULL
#define OPTION_VAL_640_SR NULL
#define OPTION_VAL_650_SR NULL
#define OPTION_VAL_660_SR NULL
#define OPTION_VAL_670_SR NULL
#define OPTION_VAL_680_SR NULL
#define OPTION_VAL_690_SR NULL
#define OPTION_VAL_700_SR NULL
#define OPTION_VAL_710_SR NULL
#define OPTION_VAL_720_SR NULL
#define OPTION_VAL_730_SR NULL
#define OPTION_VAL_740_SR NULL
#define OPTION_VAL_750_SR NULL
#define OPTION_VAL_760_SR NULL
#define OPTION_VAL_770_SR NULL
#define OPTION_VAL_780_SR NULL
#define OPTION_VAL_790_SR NULL
#define OPTION_VAL_800_SR NULL
#define BSNES_PPU_FAST_LABEL_SR NULL
#define BSNES_PPU_FAST_LABEL_CAT_SR NULL
#define BSNES_PPU_FAST_INFO_0_SR NULL
#define BSNES_PPU_DEINTERLACE_LABEL_SR NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_SR NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_SR NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_SR NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_SR NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_SR NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_SR NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_SR NULL
#define BSNES_MODE7_SCALE_LABEL_SR NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_SR NULL
#define BSNES_MODE7_SCALE_INFO_0_SR NULL
#define OPTION_VAL_1X_SR NULL
#define OPTION_VAL_2X_SR NULL
#define OPTION_VAL_3X_SR NULL
#define OPTION_VAL_4X_SR NULL
#define OPTION_VAL_5X_SR NULL
#define OPTION_VAL_6X_SR NULL
#define OPTION_VAL_7X_SR NULL
#define OPTION_VAL_8X_SR NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_SR NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_SR NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_SR NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_SR NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_SR NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_SR NULL
#define BSNES_MODE7_MOSAIC_LABEL_SR NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_SR NULL
#define BSNES_MODE7_MOSAIC_INFO_0_SR NULL
#define BSNES_DSP_FAST_LABEL_SR NULL
#define BSNES_DSP_FAST_LABEL_CAT_SR NULL
#define BSNES_DSP_FAST_INFO_0_SR NULL
#define BSNES_DSP_CUBIC_LABEL_SR NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_SR NULL
#define BSNES_DSP_CUBIC_INFO_0_SR NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_SR NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_SR NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_SR NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_SR NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_SR NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_SR NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_SR NULL
#define BSNES_SGB_BIOS_LABEL_SR NULL
#define BSNES_SGB_BIOS_INFO_0_SR NULL
#define OPTION_VAL_SGB1_SFC_SR NULL
#define OPTION_VAL_SGB2_SFC_SR NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_SR NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_SR NULL
#define OPTION_VAL_1_SR NULL
#define OPTION_VAL_2_SR NULL
#define OPTION_VAL_3_SR NULL
#define OPTION_VAL_4_SR NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_SR NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_SR NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_SR NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_SR NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_SR NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SR,
      CATEGORY_VIDEO_INFO_0_SR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SR,
      CATEGORY_AUDIO_INFO_0_SR
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_SR,
      CATEGORY_MODE7_INFO_0_SR
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_SR,
      CATEGORY_SGB_INFO_0_SR
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_SR,
      CATEGORY_LIGHTGUN_INFO_0_SR
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_SR,
      CATEGORY_OVERCLOCK_INFO_0_SR
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_SR,
      CATEGORY_HACK_INFO_0_SR
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_SR,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_SR,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_SR },
         { "8:7",  OPTION_VAL_8_7_SR },
         { "4:3",  OPTION_VAL_4_3_SR },
         { "NTSC", OPTION_VAL_NTSC_SR },
         { "PAL",  OPTION_VAL_PAL_SR },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_SR,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_SR,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_SR },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_SR,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_SR,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_SR,
      NULL,
      BSNES_HOTFIXES_INFO_0_SR,
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
      BSNES_ENTROPY_LABEL_SR,
      NULL,
      BSNES_ENTROPY_INFO_0_SR,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_SR },
         { "High", OPTION_VAL_HIGH_SR },
         { "None", OPTION_VAL_NONE_SR },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_SR,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_SR,
      BSNES_CPU_OVERCLOCK_INFO_0_SR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SR  },
         { "20",  OPTION_VAL_20_SR  },
         { "30",  OPTION_VAL_30_SR  },
         { "40",  OPTION_VAL_40_SR  },
         { "50",  OPTION_VAL_50_SR  },
         { "60",  OPTION_VAL_60_SR  },
         { "70",  OPTION_VAL_70_SR  },
         { "80",  OPTION_VAL_80_SR  },
         { "90",  OPTION_VAL_90_SR  },
         { "100", OPTION_VAL_100_SR },
         { "110", OPTION_VAL_110_SR },
         { "120", OPTION_VAL_120_SR },
         { "130", OPTION_VAL_130_SR },
         { "140", OPTION_VAL_140_SR },
         { "150", OPTION_VAL_150_SR },
         { "160", OPTION_VAL_160_SR },
         { "170", OPTION_VAL_170_SR },
         { "180", OPTION_VAL_180_SR },
         { "190", OPTION_VAL_190_SR },
         { "200", OPTION_VAL_200_SR },
         { "210", OPTION_VAL_210_SR },
         { "220", OPTION_VAL_220_SR },
         { "230", OPTION_VAL_230_SR },
         { "240", OPTION_VAL_240_SR },
         { "250", OPTION_VAL_250_SR },
         { "260", OPTION_VAL_260_SR },
         { "270", OPTION_VAL_270_SR },
         { "280", OPTION_VAL_280_SR },
         { "290", OPTION_VAL_290_SR },
         { "300", OPTION_VAL_300_SR },
         { "310", OPTION_VAL_310_SR },
         { "320", OPTION_VAL_320_SR },
         { "330", OPTION_VAL_330_SR },
         { "340", OPTION_VAL_340_SR },
         { "350", OPTION_VAL_350_SR },
         { "360", OPTION_VAL_360_SR },
         { "370", OPTION_VAL_370_SR },
         { "380", OPTION_VAL_380_SR },
         { "390", OPTION_VAL_390_SR },
         { "400", OPTION_VAL_400_SR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_SR,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_SR,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_SR,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_SR,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_SR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SR  },
         { "20",  OPTION_VAL_20_SR  },
         { "30",  OPTION_VAL_30_SR  },
         { "40",  OPTION_VAL_40_SR  },
         { "50",  OPTION_VAL_50_SR  },
         { "60",  OPTION_VAL_60_SR  },
         { "70",  OPTION_VAL_70_SR  },
         { "80",  OPTION_VAL_80_SR  },
         { "90",  OPTION_VAL_90_SR  },
         { "100", OPTION_VAL_100_SR },
         { "110", OPTION_VAL_110_SR },
         { "120", OPTION_VAL_120_SR },
         { "130", OPTION_VAL_130_SR },
         { "140", OPTION_VAL_140_SR },
         { "150", OPTION_VAL_150_SR },
         { "160", OPTION_VAL_160_SR },
         { "170", OPTION_VAL_170_SR },
         { "180", OPTION_VAL_180_SR },
         { "190", OPTION_VAL_190_SR },
         { "200", OPTION_VAL_200_SR },
         { "210", OPTION_VAL_210_SR },
         { "220", OPTION_VAL_220_SR },
         { "230", OPTION_VAL_230_SR },
         { "240", OPTION_VAL_240_SR },
         { "250", OPTION_VAL_250_SR },
         { "260", OPTION_VAL_260_SR },
         { "270", OPTION_VAL_270_SR },
         { "280", OPTION_VAL_280_SR },
         { "290", OPTION_VAL_290_SR },
         { "300", OPTION_VAL_300_SR },
         { "310", OPTION_VAL_310_SR },
         { "320", OPTION_VAL_320_SR },
         { "330", OPTION_VAL_330_SR },
         { "340", OPTION_VAL_340_SR },
         { "350", OPTION_VAL_350_SR },
         { "360", OPTION_VAL_360_SR },
         { "370", OPTION_VAL_370_SR },
         { "380", OPTION_VAL_380_SR },
         { "390", OPTION_VAL_390_SR },
         { "400", OPTION_VAL_400_SR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_SR,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_SR,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_SR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SR  },
         { "20",  OPTION_VAL_20_SR  },
         { "30",  OPTION_VAL_30_SR  },
         { "40",  OPTION_VAL_40_SR  },
         { "50",  OPTION_VAL_50_SR  },
         { "60",  OPTION_VAL_60_SR  },
         { "70",  OPTION_VAL_70_SR  },
         { "80",  OPTION_VAL_80_SR  },
         { "90",  OPTION_VAL_90_SR  },
         { "100", OPTION_VAL_100_SR },
         { "110", OPTION_VAL_110_SR },
         { "120", OPTION_VAL_120_SR },
         { "130", OPTION_VAL_130_SR },
         { "140", OPTION_VAL_140_SR },
         { "150", OPTION_VAL_150_SR },
         { "160", OPTION_VAL_160_SR },
         { "170", OPTION_VAL_170_SR },
         { "180", OPTION_VAL_180_SR },
         { "190", OPTION_VAL_190_SR },
         { "200", OPTION_VAL_200_SR },
         { "210", OPTION_VAL_210_SR },
         { "220", OPTION_VAL_220_SR },
         { "230", OPTION_VAL_230_SR },
         { "240", OPTION_VAL_240_SR },
         { "250", OPTION_VAL_250_SR },
         { "260", OPTION_VAL_260_SR },
         { "270", OPTION_VAL_270_SR },
         { "280", OPTION_VAL_280_SR },
         { "290", OPTION_VAL_290_SR },
         { "300", OPTION_VAL_300_SR },
         { "310", OPTION_VAL_310_SR },
         { "320", OPTION_VAL_320_SR },
         { "330", OPTION_VAL_330_SR },
         { "340", OPTION_VAL_340_SR },
         { "350", OPTION_VAL_350_SR },
         { "360", OPTION_VAL_360_SR },
         { "370", OPTION_VAL_370_SR },
         { "380", OPTION_VAL_380_SR },
         { "390", OPTION_VAL_390_SR },
         { "400", OPTION_VAL_400_SR },
         { "410", OPTION_VAL_410_SR },
         { "420", OPTION_VAL_420_SR },
         { "430", OPTION_VAL_430_SR },
         { "440", OPTION_VAL_440_SR },
         { "450", OPTION_VAL_450_SR },
         { "460", OPTION_VAL_460_SR },
         { "470", OPTION_VAL_470_SR },
         { "480", OPTION_VAL_480_SR },
         { "490", OPTION_VAL_490_SR },
         { "500", OPTION_VAL_500_SR },
         { "510", OPTION_VAL_510_SR },
         { "520", OPTION_VAL_520_SR },
         { "530", OPTION_VAL_530_SR },
         { "540", OPTION_VAL_540_SR },
         { "550", OPTION_VAL_550_SR },
         { "560", OPTION_VAL_560_SR },
         { "570", OPTION_VAL_570_SR },
         { "580", OPTION_VAL_580_SR },
         { "590", OPTION_VAL_590_SR },
         { "600", OPTION_VAL_600_SR },
         { "610", OPTION_VAL_610_SR },
         { "620", OPTION_VAL_620_SR },
         { "630", OPTION_VAL_630_SR },
         { "640", OPTION_VAL_640_SR },
         { "650", OPTION_VAL_650_SR },
         { "660", OPTION_VAL_660_SR },
         { "670", OPTION_VAL_670_SR },
         { "680", OPTION_VAL_680_SR },
         { "690", OPTION_VAL_690_SR },
         { "700", OPTION_VAL_700_SR },
         { "710", OPTION_VAL_710_SR },
         { "720", OPTION_VAL_720_SR },
         { "730", OPTION_VAL_730_SR },
         { "740", OPTION_VAL_740_SR },
         { "750", OPTION_VAL_750_SR },
         { "760", OPTION_VAL_760_SR },
         { "770", OPTION_VAL_770_SR },
         { "780", OPTION_VAL_780_SR },
         { "790", OPTION_VAL_790_SR },
         { "800", OPTION_VAL_800_SR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_SR,
      BSNES_PPU_FAST_LABEL_CAT_SR,
      BSNES_PPU_FAST_INFO_0_SR,
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
      BSNES_PPU_DEINTERLACE_LABEL_SR,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_SR,
      BSNES_PPU_DEINTERLACE_INFO_0_SR,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_SR,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_SR,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_SR,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_SR,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_SR,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_SR,
      BSNES_MODE7_SCALE_LABEL_CAT_SR,
      BSNES_MODE7_SCALE_INFO_0_SR,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_SR  },
         { "2x", OPTION_VAL_2X_SR  },
         { "3x", OPTION_VAL_3X_SR  },
         { "4x", OPTION_VAL_4X_SR  },
         { "5x", OPTION_VAL_5X_SR },
         { "6x", OPTION_VAL_6X_SR },
         { "7x", OPTION_VAL_7X_SR },
         { "8x", OPTION_VAL_8X_SR },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_SR,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_SR,
      BSNES_MODE7_PERSPECTIVE_INFO_0_SR,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_SR,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_SR,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_SR,
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
      BSNES_MODE7_MOSAIC_LABEL_SR,
      BSNES_MODE7_MOSAIC_LABEL_CAT_SR,
      BSNES_MODE7_MOSAIC_INFO_0_SR,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_SR,
      BSNES_DSP_FAST_LABEL_CAT_SR,
      BSNES_DSP_FAST_INFO_0_SR,
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
      BSNES_DSP_CUBIC_LABEL_SR,
      BSNES_DSP_CUBIC_LABEL_CAT_SR,
      BSNES_DSP_CUBIC_INFO_0_SR,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_SR,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_SR,
      BSNES_DSP_ECHO_SHADOW_INFO_0_SR,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_SR,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_SR,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_SR,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_SR,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_SR,
      NULL,
      BSNES_SGB_BIOS_INFO_0_SR,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_SR   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_SR },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_SR,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_SR,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_SR  },
         { "2",   OPTION_VAL_2_SR },
         { "3",   OPTION_VAL_3_SR },
         { "4",   OPTION_VAL_4_SR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_SR,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_SR,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_SR,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_SR,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_SR,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_SR,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define CATEGORY_VIDEO_LABEL_SV "Bild"
#define CATEGORY_VIDEO_INFO_0_SV "Ändra bildinställningar."
#define CATEGORY_AUDIO_LABEL_SV "Ljud"
#define CATEGORY_AUDIO_INFO_0_SV "Ändra ljudinställningar."
#define CATEGORY_MODE7_LABEL_SV NULL
#define CATEGORY_MODE7_INFO_0_SV NULL
#define CATEGORY_SGB_LABEL_SV NULL
#define CATEGORY_SGB_INFO_0_SV NULL
#define CATEGORY_LIGHTGUN_LABEL_SV NULL
#define CATEGORY_LIGHTGUN_INFO_0_SV NULL
#define CATEGORY_OVERCLOCK_LABEL_SV NULL
#define CATEGORY_OVERCLOCK_INFO_0_SV NULL
#define CATEGORY_HACK_LABEL_SV NULL
#define CATEGORY_HACK_INFO_0_SV NULL
#define BSNES_ASPECT_RATIO_LABEL_SV NULL
#define BSNES_ASPECT_RATIO_INFO_0_SV NULL
#define OPTION_VAL_AUTO_SV "Automatiskt"
#define OPTION_VAL_8_7_SV NULL
#define OPTION_VAL_4_3_SV NULL
#define OPTION_VAL_NTSC_SV NULL
#define OPTION_VAL_PAL_SV NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_SV NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_SV NULL
#define OPTION_VAL_OFF_SV "8 pixlar"
#define BSNES_BLUR_EMULATION_LABEL_SV NULL
#define BSNES_BLUR_EMULATION_INFO_0_SV NULL
#define BSNES_HOTFIXES_LABEL_SV NULL
#define BSNES_HOTFIXES_INFO_0_SV NULL
#define BSNES_ENTROPY_LABEL_SV NULL
#define BSNES_ENTROPY_INFO_0_SV NULL
#define OPTION_VAL_LOW_SV "Låg"
#define OPTION_VAL_HIGH_SV "Hög"
#define OPTION_VAL_NONE_SV "Ingen"
#define BSNES_CPU_OVERCLOCK_LABEL_SV NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_SV NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_SV NULL
#define OPTION_VAL_10_SV NULL
#define OPTION_VAL_20_SV NULL
#define OPTION_VAL_30_SV NULL
#define OPTION_VAL_40_SV NULL
#define OPTION_VAL_50_SV NULL
#define OPTION_VAL_60_SV NULL
#define OPTION_VAL_70_SV NULL
#define OPTION_VAL_80_SV NULL
#define OPTION_VAL_90_SV NULL
#define OPTION_VAL_100_SV NULL
#define OPTION_VAL_110_SV NULL
#define OPTION_VAL_120_SV NULL
#define OPTION_VAL_130_SV NULL
#define OPTION_VAL_140_SV NULL
#define OPTION_VAL_150_SV NULL
#define OPTION_VAL_160_SV NULL
#define OPTION_VAL_170_SV NULL
#define OPTION_VAL_180_SV NULL
#define OPTION_VAL_190_SV NULL
#define OPTION_VAL_200_SV NULL
#define OPTION_VAL_210_SV NULL
#define OPTION_VAL_220_SV NULL
#define OPTION_VAL_230_SV NULL
#define OPTION_VAL_240_SV NULL
#define OPTION_VAL_250_SV NULL
#define OPTION_VAL_260_SV NULL
#define OPTION_VAL_270_SV NULL
#define OPTION_VAL_280_SV NULL
#define OPTION_VAL_290_SV NULL
#define OPTION_VAL_300_SV NULL
#define OPTION_VAL_310_SV NULL
#define OPTION_VAL_320_SV NULL
#define OPTION_VAL_330_SV NULL
#define OPTION_VAL_340_SV NULL
#define OPTION_VAL_350_SV NULL
#define OPTION_VAL_360_SV NULL
#define OPTION_VAL_370_SV NULL
#define OPTION_VAL_380_SV NULL
#define OPTION_VAL_390_SV NULL
#define OPTION_VAL_400_SV NULL
#define BSNES_CPU_FASTMATH_LABEL_SV NULL
#define BSNES_CPU_FASTMATH_INFO_0_SV NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_SV NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_SV NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_SV NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_SV NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_SV NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_SV NULL
#define OPTION_VAL_410_SV NULL
#define OPTION_VAL_420_SV NULL
#define OPTION_VAL_430_SV NULL
#define OPTION_VAL_440_SV NULL
#define OPTION_VAL_450_SV NULL
#define OPTION_VAL_460_SV NULL
#define OPTION_VAL_470_SV NULL
#define OPTION_VAL_480_SV NULL
#define OPTION_VAL_490_SV NULL
#define OPTION_VAL_500_SV NULL
#define OPTION_VAL_510_SV NULL
#define OPTION_VAL_520_SV NULL
#define OPTION_VAL_530_SV NULL
#define OPTION_VAL_540_SV NULL
#define OPTION_VAL_550_SV NULL
#define OPTION_VAL_560_SV NULL
#define OPTION_VAL_570_SV NULL
#define OPTION_VAL_580_SV NULL
#define OPTION_VAL_590_SV NULL
#define OPTION_VAL_600_SV NULL
#define OPTION_VAL_610_SV NULL
#define OPTION_VAL_620_SV NULL
#define OPTION_VAL_630_SV NULL
#define OPTION_VAL_640_SV NULL
#define OPTION_VAL_650_SV NULL
#define OPTION_VAL_660_SV NULL
#define OPTION_VAL_670_SV NULL
#define OPTION_VAL_680_SV NULL
#define OPTION_VAL_690_SV NULL
#define OPTION_VAL_700_SV NULL
#define OPTION_VAL_710_SV NULL
#define OPTION_VAL_720_SV NULL
#define OPTION_VAL_730_SV NULL
#define OPTION_VAL_740_SV NULL
#define OPTION_VAL_750_SV NULL
#define OPTION_VAL_760_SV NULL
#define OPTION_VAL_770_SV NULL
#define OPTION_VAL_780_SV NULL
#define OPTION_VAL_790_SV NULL
#define OPTION_VAL_800_SV NULL
#define BSNES_PPU_FAST_LABEL_SV NULL
#define BSNES_PPU_FAST_LABEL_CAT_SV NULL
#define BSNES_PPU_FAST_INFO_0_SV NULL
#define BSNES_PPU_DEINTERLACE_LABEL_SV NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_SV NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_SV NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_SV NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_SV NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_SV NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_SV NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_SV NULL
#define BSNES_MODE7_SCALE_LABEL_SV NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_SV NULL
#define BSNES_MODE7_SCALE_INFO_0_SV NULL
#define OPTION_VAL_1X_SV NULL
#define OPTION_VAL_2X_SV NULL
#define OPTION_VAL_3X_SV NULL
#define OPTION_VAL_4X_SV NULL
#define OPTION_VAL_5X_SV NULL
#define OPTION_VAL_6X_SV NULL
#define OPTION_VAL_7X_SV NULL
#define OPTION_VAL_8X_SV NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_SV NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_SV NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_SV NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_SV NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_SV NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_SV NULL
#define BSNES_MODE7_MOSAIC_LABEL_SV NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_SV NULL
#define BSNES_MODE7_MOSAIC_INFO_0_SV NULL
#define BSNES_DSP_FAST_LABEL_SV NULL
#define BSNES_DSP_FAST_LABEL_CAT_SV NULL
#define BSNES_DSP_FAST_INFO_0_SV NULL
#define BSNES_DSP_CUBIC_LABEL_SV NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_SV NULL
#define BSNES_DSP_CUBIC_INFO_0_SV NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_SV NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_SV NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_SV NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_SV NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_SV NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_SV NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_SV NULL
#define BSNES_SGB_BIOS_LABEL_SV NULL
#define BSNES_SGB_BIOS_INFO_0_SV NULL
#define OPTION_VAL_SGB1_SFC_SV NULL
#define OPTION_VAL_SGB2_SFC_SV NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_SV NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_SV NULL
#define OPTION_VAL_1_SV NULL
#define OPTION_VAL_2_SV NULL
#define OPTION_VAL_3_SV NULL
#define OPTION_VAL_4_SV NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_SV NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_SV NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_SV NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_SV NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_SV NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_SV NULL

struct retro_core_option_v2_category option_cats_sv[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SV,
      CATEGORY_VIDEO_INFO_0_SV
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SV,
      CATEGORY_AUDIO_INFO_0_SV
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_SV,
      CATEGORY_MODE7_INFO_0_SV
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_SV,
      CATEGORY_SGB_INFO_0_SV
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_SV,
      CATEGORY_LIGHTGUN_INFO_0_SV
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_SV,
      CATEGORY_OVERCLOCK_INFO_0_SV
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_SV,
      CATEGORY_HACK_INFO_0_SV
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_SV,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_SV,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_SV },
         { "8:7",  OPTION_VAL_8_7_SV },
         { "4:3",  OPTION_VAL_4_3_SV },
         { "NTSC", OPTION_VAL_NTSC_SV },
         { "PAL",  OPTION_VAL_PAL_SV },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_SV,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_SV,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_SV },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_SV,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_SV,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_SV,
      NULL,
      BSNES_HOTFIXES_INFO_0_SV,
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
      BSNES_ENTROPY_LABEL_SV,
      NULL,
      BSNES_ENTROPY_INFO_0_SV,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_SV },
         { "High", OPTION_VAL_HIGH_SV },
         { "None", OPTION_VAL_NONE_SV },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_SV,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_SV,
      BSNES_CPU_OVERCLOCK_INFO_0_SV,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SV  },
         { "20",  OPTION_VAL_20_SV  },
         { "30",  OPTION_VAL_30_SV  },
         { "40",  OPTION_VAL_40_SV  },
         { "50",  OPTION_VAL_50_SV  },
         { "60",  OPTION_VAL_60_SV  },
         { "70",  OPTION_VAL_70_SV  },
         { "80",  OPTION_VAL_80_SV  },
         { "90",  OPTION_VAL_90_SV  },
         { "100", OPTION_VAL_100_SV },
         { "110", OPTION_VAL_110_SV },
         { "120", OPTION_VAL_120_SV },
         { "130", OPTION_VAL_130_SV },
         { "140", OPTION_VAL_140_SV },
         { "150", OPTION_VAL_150_SV },
         { "160", OPTION_VAL_160_SV },
         { "170", OPTION_VAL_170_SV },
         { "180", OPTION_VAL_180_SV },
         { "190", OPTION_VAL_190_SV },
         { "200", OPTION_VAL_200_SV },
         { "210", OPTION_VAL_210_SV },
         { "220", OPTION_VAL_220_SV },
         { "230", OPTION_VAL_230_SV },
         { "240", OPTION_VAL_240_SV },
         { "250", OPTION_VAL_250_SV },
         { "260", OPTION_VAL_260_SV },
         { "270", OPTION_VAL_270_SV },
         { "280", OPTION_VAL_280_SV },
         { "290", OPTION_VAL_290_SV },
         { "300", OPTION_VAL_300_SV },
         { "310", OPTION_VAL_310_SV },
         { "320", OPTION_VAL_320_SV },
         { "330", OPTION_VAL_330_SV },
         { "340", OPTION_VAL_340_SV },
         { "350", OPTION_VAL_350_SV },
         { "360", OPTION_VAL_360_SV },
         { "370", OPTION_VAL_370_SV },
         { "380", OPTION_VAL_380_SV },
         { "390", OPTION_VAL_390_SV },
         { "400", OPTION_VAL_400_SV },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_SV,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_SV,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_SV,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_SV,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_SV,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SV  },
         { "20",  OPTION_VAL_20_SV  },
         { "30",  OPTION_VAL_30_SV  },
         { "40",  OPTION_VAL_40_SV  },
         { "50",  OPTION_VAL_50_SV  },
         { "60",  OPTION_VAL_60_SV  },
         { "70",  OPTION_VAL_70_SV  },
         { "80",  OPTION_VAL_80_SV  },
         { "90",  OPTION_VAL_90_SV  },
         { "100", OPTION_VAL_100_SV },
         { "110", OPTION_VAL_110_SV },
         { "120", OPTION_VAL_120_SV },
         { "130", OPTION_VAL_130_SV },
         { "140", OPTION_VAL_140_SV },
         { "150", OPTION_VAL_150_SV },
         { "160", OPTION_VAL_160_SV },
         { "170", OPTION_VAL_170_SV },
         { "180", OPTION_VAL_180_SV },
         { "190", OPTION_VAL_190_SV },
         { "200", OPTION_VAL_200_SV },
         { "210", OPTION_VAL_210_SV },
         { "220", OPTION_VAL_220_SV },
         { "230", OPTION_VAL_230_SV },
         { "240", OPTION_VAL_240_SV },
         { "250", OPTION_VAL_250_SV },
         { "260", OPTION_VAL_260_SV },
         { "270", OPTION_VAL_270_SV },
         { "280", OPTION_VAL_280_SV },
         { "290", OPTION_VAL_290_SV },
         { "300", OPTION_VAL_300_SV },
         { "310", OPTION_VAL_310_SV },
         { "320", OPTION_VAL_320_SV },
         { "330", OPTION_VAL_330_SV },
         { "340", OPTION_VAL_340_SV },
         { "350", OPTION_VAL_350_SV },
         { "360", OPTION_VAL_360_SV },
         { "370", OPTION_VAL_370_SV },
         { "380", OPTION_VAL_380_SV },
         { "390", OPTION_VAL_390_SV },
         { "400", OPTION_VAL_400_SV },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_SV,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_SV,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_SV,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_SV  },
         { "20",  OPTION_VAL_20_SV  },
         { "30",  OPTION_VAL_30_SV  },
         { "40",  OPTION_VAL_40_SV  },
         { "50",  OPTION_VAL_50_SV  },
         { "60",  OPTION_VAL_60_SV  },
         { "70",  OPTION_VAL_70_SV  },
         { "80",  OPTION_VAL_80_SV  },
         { "90",  OPTION_VAL_90_SV  },
         { "100", OPTION_VAL_100_SV },
         { "110", OPTION_VAL_110_SV },
         { "120", OPTION_VAL_120_SV },
         { "130", OPTION_VAL_130_SV },
         { "140", OPTION_VAL_140_SV },
         { "150", OPTION_VAL_150_SV },
         { "160", OPTION_VAL_160_SV },
         { "170", OPTION_VAL_170_SV },
         { "180", OPTION_VAL_180_SV },
         { "190", OPTION_VAL_190_SV },
         { "200", OPTION_VAL_200_SV },
         { "210", OPTION_VAL_210_SV },
         { "220", OPTION_VAL_220_SV },
         { "230", OPTION_VAL_230_SV },
         { "240", OPTION_VAL_240_SV },
         { "250", OPTION_VAL_250_SV },
         { "260", OPTION_VAL_260_SV },
         { "270", OPTION_VAL_270_SV },
         { "280", OPTION_VAL_280_SV },
         { "290", OPTION_VAL_290_SV },
         { "300", OPTION_VAL_300_SV },
         { "310", OPTION_VAL_310_SV },
         { "320", OPTION_VAL_320_SV },
         { "330", OPTION_VAL_330_SV },
         { "340", OPTION_VAL_340_SV },
         { "350", OPTION_VAL_350_SV },
         { "360", OPTION_VAL_360_SV },
         { "370", OPTION_VAL_370_SV },
         { "380", OPTION_VAL_380_SV },
         { "390", OPTION_VAL_390_SV },
         { "400", OPTION_VAL_400_SV },
         { "410", OPTION_VAL_410_SV },
         { "420", OPTION_VAL_420_SV },
         { "430", OPTION_VAL_430_SV },
         { "440", OPTION_VAL_440_SV },
         { "450", OPTION_VAL_450_SV },
         { "460", OPTION_VAL_460_SV },
         { "470", OPTION_VAL_470_SV },
         { "480", OPTION_VAL_480_SV },
         { "490", OPTION_VAL_490_SV },
         { "500", OPTION_VAL_500_SV },
         { "510", OPTION_VAL_510_SV },
         { "520", OPTION_VAL_520_SV },
         { "530", OPTION_VAL_530_SV },
         { "540", OPTION_VAL_540_SV },
         { "550", OPTION_VAL_550_SV },
         { "560", OPTION_VAL_560_SV },
         { "570", OPTION_VAL_570_SV },
         { "580", OPTION_VAL_580_SV },
         { "590", OPTION_VAL_590_SV },
         { "600", OPTION_VAL_600_SV },
         { "610", OPTION_VAL_610_SV },
         { "620", OPTION_VAL_620_SV },
         { "630", OPTION_VAL_630_SV },
         { "640", OPTION_VAL_640_SV },
         { "650", OPTION_VAL_650_SV },
         { "660", OPTION_VAL_660_SV },
         { "670", OPTION_VAL_670_SV },
         { "680", OPTION_VAL_680_SV },
         { "690", OPTION_VAL_690_SV },
         { "700", OPTION_VAL_700_SV },
         { "710", OPTION_VAL_710_SV },
         { "720", OPTION_VAL_720_SV },
         { "730", OPTION_VAL_730_SV },
         { "740", OPTION_VAL_740_SV },
         { "750", OPTION_VAL_750_SV },
         { "760", OPTION_VAL_760_SV },
         { "770", OPTION_VAL_770_SV },
         { "780", OPTION_VAL_780_SV },
         { "790", OPTION_VAL_790_SV },
         { "800", OPTION_VAL_800_SV },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_SV,
      BSNES_PPU_FAST_LABEL_CAT_SV,
      BSNES_PPU_FAST_INFO_0_SV,
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
      BSNES_PPU_DEINTERLACE_LABEL_SV,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_SV,
      BSNES_PPU_DEINTERLACE_INFO_0_SV,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_SV,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_SV,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_SV,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_SV,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_SV,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_SV,
      BSNES_MODE7_SCALE_LABEL_CAT_SV,
      BSNES_MODE7_SCALE_INFO_0_SV,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_SV  },
         { "2x", OPTION_VAL_2X_SV  },
         { "3x", OPTION_VAL_3X_SV  },
         { "4x", OPTION_VAL_4X_SV  },
         { "5x", OPTION_VAL_5X_SV },
         { "6x", OPTION_VAL_6X_SV },
         { "7x", OPTION_VAL_7X_SV },
         { "8x", OPTION_VAL_8X_SV },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_SV,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_SV,
      BSNES_MODE7_PERSPECTIVE_INFO_0_SV,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_SV,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_SV,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_SV,
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
      BSNES_MODE7_MOSAIC_LABEL_SV,
      BSNES_MODE7_MOSAIC_LABEL_CAT_SV,
      BSNES_MODE7_MOSAIC_INFO_0_SV,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_SV,
      BSNES_DSP_FAST_LABEL_CAT_SV,
      BSNES_DSP_FAST_INFO_0_SV,
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
      BSNES_DSP_CUBIC_LABEL_SV,
      BSNES_DSP_CUBIC_LABEL_CAT_SV,
      BSNES_DSP_CUBIC_INFO_0_SV,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_SV,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_SV,
      BSNES_DSP_ECHO_SHADOW_INFO_0_SV,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_SV,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_SV,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_SV,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_SV,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_SV,
      NULL,
      BSNES_SGB_BIOS_INFO_0_SV,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_SV   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_SV },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_SV,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_SV,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_SV  },
         { "2",   OPTION_VAL_2_SV },
         { "3",   OPTION_VAL_3_SV },
         { "4",   OPTION_VAL_4_SV },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_SV,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_SV,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_SV,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_SV,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_SV,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_SV,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define CATEGORY_VIDEO_LABEL_TR NULL
#define CATEGORY_VIDEO_INFO_0_TR "Video çıkış ayarlarını değiştir."
#define CATEGORY_AUDIO_LABEL_TR "Ses"
#define CATEGORY_AUDIO_INFO_0_TR "Ses çıkışı ayarlarını değiştir."
#define CATEGORY_MODE7_LABEL_TR NULL
#define CATEGORY_MODE7_INFO_0_TR "Mode 7 grafik taklidi ile ilgili ayarları değiştirin."
#define CATEGORY_SGB_LABEL_TR NULL
#define CATEGORY_SGB_INFO_0_TR "Super Game Boy taklidi ile ilgili ayarları değiştirin."
#define CATEGORY_LIGHTGUN_LABEL_TR NULL
#define CATEGORY_LIGHTGUN_INFO_0_TR "(dokunmatik ekran) light gun ayarlarını değiştirin."
#define CATEGORY_OVERCLOCK_LABEL_TR "Aşırı/Düşük Hız Aşırtma"
#define CATEGORY_OVERCLOCK_INFO_0_TR "Taklit edilmiş donanımın hızını değiştirin."
#define CATEGORY_HACK_LABEL_TR "Emülatör Geliştirmeleri"
#define CATEGORY_HACK_INFO_0_TR "Taklit etme geliştirmeleri ve düzeltmeler uygulayın."
#define BSNES_ASPECT_RATIO_LABEL_TR "Tercih Edilen En Boy Oranı"
#define BSNES_ASPECT_RATIO_INFO_0_TR "Tercih edilen içerik en boy oranını seçin. Bu, yalnızca RetroArch en boy oranı Video ayarlarında 'Çekirdek Tarafından Sağlanan' olarak ayarlandığında uygulanacaktır."
#define OPTION_VAL_AUTO_TR "Otomatik"
#define OPTION_VAL_8_7_TR "Mükemmel Piksel"
#define OPTION_VAL_4_3_TR NULL
#define OPTION_VAL_NTSC_TR NULL
#define OPTION_VAL_PAL_TR NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_TR "Aşırı Taramayı Kırp"
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_TR "Genellikle oyunlar tarafından kullanılmayan ve standart tanımlı bir televizyonun çerçevesiyle gizlenen ekranın üst ve alt kısmındaki kenarlıkları kaldırın."
#define OPTION_VAL_OFF_TR "8 Piksel"
#define BSNES_BLUR_EMULATION_LABEL_TR "Bulanıklık Taklidi"
#define BSNES_BLUR_EMULATION_INFO_0_TR "Yatay olarak bitişik pikselleri bulanıklaştırarak SDTV'lerin sınırlı yatay çözünürlüğünü taklit edin. Bazı oyunlar şeffaflık efektini taklit etmek için buna bağlıdır."
#define BSNES_HOTFIXES_LABEL_TR "Düzeltmeler"
#define BSNES_HOTFIXES_INFO_0_TR "Ticari olarak lisanslanmış ve resmi olarak piyasaya sürülen yazılımlar bile bazen hatalarla birlikte gönderilir. Bu seçenek, gerçek donanımda bile meydana gelen belirli sorunları düzeltecektir."
#define BSNES_ENTROPY_LABEL_TR "Entropi (rastgeleleştirme)"
#define BSNES_ENTROPY_INFO_0_TR "Bellek ve kayıtların rastgelelik düzeyini seçin. Yok olarak ayarlanırsa, tüm bellek ve kayıtlar başlangıçta sabit değerlere başlatılır. Düşük rastgeleleştirme, gerçek bir sistemin en doğru temsilini sağlar. Mümkün olduğunca yüksek rasgele yapar."
#define OPTION_VAL_LOW_TR "Düşük"
#define OPTION_VAL_HIGH_TR "Yüksek"
#define OPTION_VAL_NONE_TR "Yok"
#define BSNES_CPU_OVERCLOCK_LABEL_TR "Hız Aşırtma - CPU"
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_TR NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_TR "CPU hızını aşırtın veya düşürün. Bu değeri %100'ün üzerine ayarlamak, yükleme sürelerini azaltabilir ve yavaşlamayı ortadan kaldırabilir. Bazı oyunların çökmesine veya başka sorunların ortaya çıkmasına neden olabileceğinden dikkatli kullanın."
#define OPTION_VAL_10_TR "%10"
#define OPTION_VAL_20_TR "%20"
#define OPTION_VAL_30_TR "%30"
#define OPTION_VAL_40_TR "%40"
#define OPTION_VAL_50_TR "%50"
#define OPTION_VAL_60_TR "%60"
#define OPTION_VAL_70_TR "%70"
#define OPTION_VAL_80_TR "%80"
#define OPTION_VAL_90_TR "%90"
#define OPTION_VAL_100_TR "%100 (Varsayılan)"
#define OPTION_VAL_110_TR "%110"
#define OPTION_VAL_120_TR "%120"
#define OPTION_VAL_130_TR "%130"
#define OPTION_VAL_140_TR "%140"
#define OPTION_VAL_150_TR "%150"
#define OPTION_VAL_160_TR "%160"
#define OPTION_VAL_170_TR "%170"
#define OPTION_VAL_180_TR "%180"
#define OPTION_VAL_190_TR "%190"
#define OPTION_VAL_200_TR "%200"
#define OPTION_VAL_210_TR "%210"
#define OPTION_VAL_220_TR "%220"
#define OPTION_VAL_230_TR "%230"
#define OPTION_VAL_240_TR "%240"
#define OPTION_VAL_250_TR "%250"
#define OPTION_VAL_260_TR "%260"
#define OPTION_VAL_270_TR "%270"
#define OPTION_VAL_280_TR "%280"
#define OPTION_VAL_290_TR "%290"
#define OPTION_VAL_300_TR "%300"
#define OPTION_VAL_310_TR "%310"
#define OPTION_VAL_320_TR "%320"
#define OPTION_VAL_330_TR "%330"
#define OPTION_VAL_340_TR "%340"
#define OPTION_VAL_350_TR "%350"
#define OPTION_VAL_360_TR "%360"
#define OPTION_VAL_370_TR "%370"
#define OPTION_VAL_380_TR "%380"
#define OPTION_VAL_390_TR "%390"
#define OPTION_VAL_400_TR "%400"
#define BSNES_CPU_FASTMATH_LABEL_TR "CPU Hızlı Hesaplama"
#define BSNES_CPU_FASTMATH_INFO_0_TR "Hesaplama sonuçlarını hemen sağlayın. CPU çarpma ve bölme işleminin gerçek bir SNES'te tamamlanması zaman alır. Daha eski emulatörler bu gecikmeleri taklit etmedi ve bu nedenle bazı eski ROM geliştiricileri matematik işlemlerinin tamamlanmasını beklemez ve bu kesmeye ihtiyaç duyar."
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_TR "Hız Aşırtma - SA-1 Yardımcı İşlemci"
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_TR "SA-1 Yardımcı İşlemci"
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_TR "Super Accelerator 1 (SA-1) yongasında hız aşırtma veya hız düşürme yapın. Bu değeri %100'ün üzerine ayarlamak, SA-1 yongasını destekleyen oyunlarda performansı iyileştirebilir. Bazı oyunların çökmesine veya başka sorunların ortaya çıkmasına neden olabileceğinden dikkatli kullanın."
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_TR "Hız Aşırtma - SuperFX Yardımcı İşlemci"
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_TR "SuperFX Yardımcı İşlemci"
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_TR "SuperFX yardımcı işlemcisinde hız aşırtma veya hız düşürme yapın. Bu değeri %100'ün üzerine ayarlamak, SuperFX'i destekleyen oyunlarda performansı iyileştirebilir. Bazı oyunların çökmesine veya başka sorunların ortaya çıkmasına neden olabileceğinden dikkatli kullanın."
#define OPTION_VAL_410_TR "%410"
#define OPTION_VAL_420_TR "%420"
#define OPTION_VAL_430_TR "%430"
#define OPTION_VAL_440_TR "%440"
#define OPTION_VAL_450_TR "%450"
#define OPTION_VAL_460_TR "%460"
#define OPTION_VAL_470_TR "%470"
#define OPTION_VAL_480_TR "%480"
#define OPTION_VAL_490_TR "%490"
#define OPTION_VAL_500_TR "%500"
#define OPTION_VAL_510_TR "%510"
#define OPTION_VAL_520_TR "%520"
#define OPTION_VAL_530_TR "%530"
#define OPTION_VAL_540_TR "%540"
#define OPTION_VAL_550_TR "%550"
#define OPTION_VAL_560_TR "%560"
#define OPTION_VAL_570_TR "%570"
#define OPTION_VAL_580_TR "%580"
#define OPTION_VAL_590_TR "%590"
#define OPTION_VAL_600_TR "%600"
#define OPTION_VAL_610_TR "%610"
#define OPTION_VAL_620_TR "%620"
#define OPTION_VAL_630_TR "%630"
#define OPTION_VAL_640_TR "%640"
#define OPTION_VAL_650_TR "%650"
#define OPTION_VAL_660_TR "%660"
#define OPTION_VAL_670_TR "%670"
#define OPTION_VAL_680_TR "%680"
#define OPTION_VAL_690_TR "%690"
#define OPTION_VAL_700_TR "%700"
#define OPTION_VAL_710_TR "%710"
#define OPTION_VAL_720_TR "%720"
#define OPTION_VAL_730_TR "%730"
#define OPTION_VAL_740_TR "%740"
#define OPTION_VAL_750_TR "%750"
#define OPTION_VAL_760_TR "%760"
#define OPTION_VAL_770_TR "%770"
#define OPTION_VAL_780_TR "%780"
#define OPTION_VAL_790_TR "%790"
#define OPTION_VAL_800_TR "%800"
#define BSNES_PPU_FAST_LABEL_TR "PPU (Video) - Hızlı Kip"
#define BSNES_PPU_FAST_LABEL_CAT_TR "PPU - Hızlı Kip"
#define BSNES_PPU_FAST_INFO_0_TR "Küçük bir doğruluk düşüşü pahasına PPU'nun daha hızlı taklit etmesini sağlayın. Bunu açık bırakmanız önerilir."
#define BSNES_PPU_DEINTERLACE_LABEL_TR "PPU (Video) - Görüntü Ayrıştırma"
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_TR "PPU - Görüntü Ayrıştırma"
#define BSNES_PPU_DEINTERLACE_INFO_0_TR "Dahili olarak 480p'de görüntüleyerek tüm oyunları görüntüleri ayrıştırın. Performans olumsuz etkisi neredeyse yok, bu yüzden bunu açık bırakmanız önerilir."
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_TR "PPU (Video) - Hareket Sınırı Yok"
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_TR "PPU - Hareket Sınırı Yok"
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_TR "Ekranda aynı anda çizilebilecek karakter sayısındaki herhangi bir sınırı kaldırın. Bazı oyunlarda sorunlara neden olabilir."
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_TR "PPU (Video) - VRAM Engelleme Yok"
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_TR "VRAM engellemenin taklit edilmediği eski ZSNES ve Snes9x sürümlerinde bir hatayı taklit edin. Birkaç eski ROM geliştirmesi bu davranışa dayanıyordu ve bu etkinleştirilmezse grafikleri yanlış oluşturacaktır. Bu seçenek son derece önemlidir ve PPU hızına zarar verir, bu nedenle bu çekirdekle uyumlu olmayan bir oyun oynamanız gerekmedikçe devre dışı bırakılması önerilir."
#define BSNES_MODE7_SCALE_LABEL_TR "HD Mode 7 - Ölçek"
#define BSNES_MODE7_SCALE_LABEL_CAT_TR "Ölçek"
#define BSNES_MODE7_SCALE_INFO_0_TR "Belirli oyunlarda kullanılan Mode 7 grafiklerinin yatay ve dikey çözünürlüğünü artırın."
#define OPTION_VAL_1X_TR NULL
#define OPTION_VAL_2X_TR NULL
#define OPTION_VAL_3X_TR NULL
#define OPTION_VAL_4X_TR NULL
#define OPTION_VAL_5X_TR NULL
#define OPTION_VAL_6X_TR NULL
#define OPTION_VAL_7X_TR NULL
#define OPTION_VAL_8X_TR NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_TR "HD Mode 7 - Perspektif Düzeltme"
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_TR "Perspektif Düzeltme"
#define BSNES_MODE7_PERSPECTIVE_INFO_0_TR "SNES tarafından kullanılan tam sayı hesaplamasının bazı sınırlamaları etrafında çalışarak belirli oyunlarda kullanılan Mode 7 grafiklerinin perspektifini düzeltin."
#define BSNES_MODE7_SUPERSAMPLE_LABEL_TR "HD Mode 7 - Süper Örnekleme"
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_TR "Süper Örnekleme"
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_TR "Belirli oyunlarda kullanılan Mode 7 grafiklerini örnekleyin. Daha yüksek Mode 7 ölçek etkeniyle birleştiğinde, kenar yumuşatmaya benzer bir etki üretir."
#define BSNES_MODE7_MOSAIC_LABEL_TR "HD Mode 7 - HD->SD Mozaik"
#define BSNES_MODE7_MOSAIC_LABEL_CAT_TR "HD->SD Mozaik"
#define BSNES_MODE7_MOSAIC_INFO_0_TR "Mode 7 grafiklerini yükseltirken bile mozaik etkisini gösterin."
#define BSNES_DSP_FAST_LABEL_TR "DSP (Ses) - Hızlı Kip"
#define BSNES_DSP_FAST_LABEL_CAT_TR "DSP - Hızlı Kip"
#define BSNES_DSP_FAST_INFO_0_TR "Küçük bir doğruluk düşüşü pahasına DSP'nin daha hızlı taklit etmesini sağlayın. Bunu açık bırakmanız önerilir."
#define BSNES_DSP_CUBIC_LABEL_TR "DSP (Ses) - Kübik İnterpolasyon"
#define BSNES_DSP_CUBIC_LABEL_CAT_TR "DSP - Kübik İnterpolasyon"
#define BSNES_DSP_CUBIC_INFO_0_TR "Yüksek aralığı daha fazla koruyarak sese kübik enterpolasyon uygulayın."
#define BSNES_DSP_ECHO_SHADOW_LABEL_TR "DSP (Ses) - Echo Shadow RAM"
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_TR NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_TR "Echo RAM'in APU RAM'den ayrı olarak ele alındığı ZSNES'te bir hatayı taklit edin. Super Mario World için ve birçok eski ROM düzeltmesi, bu davranışa dayanıyordu ve bu olmadan çöküyordu. Bu seçenek son derece gereksizdir ve gerekmedikçe etkinleştirilmemelidir."
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_TR "Yardımcı İşlemciler - Hızlı Kip"
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_TR "Küçük bir doğruluk düşüşü pahasına yardımcı işlemcileri daha hızlı taklit etmesini sağlayın. Bunu açık bırakmanız önerilir."
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_TR "Yardımcı İşlemciler - HLE Tercih Edin"
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_TR "Bu seçenek etkinleştirildiğinde, mevcut olduğunda her zaman daha az doğru HLE taklidi kullanılacaktır. Devre dışı bırakılırsa, HLE yalnızca LLE üretici yazılımı eksik olduğunda kullanılacaktır."
#define BSNES_SGB_BIOS_LABEL_TR "Tercih Edilen Super Game Boy BIOS (Yeniden Başlatılmalı)"
#define BSNES_SGB_BIOS_INFO_0_TR "Uyumlu oyunlarla kullanılmak üzere tercih edilen Super Game Boy BIOS'u seçin."
#define OPTION_VAL_SGB1_SFC_TR NULL
#define OPTION_VAL_SGB2_SFC_TR NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_TR "Dahili Önden Git"
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_TR "Sistemi önceden taklit edin ve giriş gecikmesini azaltmak için geri alın. Çok yüksek sistem gereksinimlerine sahiptir."
#define OPTION_VAL_1_TR "1 kare"
#define OPTION_VAL_2_TR "2 kare"
#define OPTION_VAL_3_TR "3 kare"
#define OPTION_VAL_4_TR "4 kare"
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_TR "Dokunmatik Ekran Light Gun"
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_TR "Dokunmatik ekranlı cihazlar için Super Scope girişini etkinleştirin."
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_TR "Super Scope Ters Tetik Düğmeleri"
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_TR "Dokunmatik ekranda light gun ile Super Scope tetikleyicisini ve imleç düğmelerini ters çevirin."
#define BSNES_HIDE_SGB_BORDER_LABEL_TR "SGB ​​Sınırını Gizle"
#define BSNES_HIDE_SGB_BORDER_INFO_0_TR "Super Game Boy oyunları oynarken sınırı gizleyin. Yalnızca 'Aşırı Taramayı Kırp' seçeneği etkinleştirildiğinde çalışır."

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_TR,
      CATEGORY_VIDEO_INFO_0_TR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_TR,
      CATEGORY_AUDIO_INFO_0_TR
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_TR,
      CATEGORY_MODE7_INFO_0_TR
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_TR,
      CATEGORY_SGB_INFO_0_TR
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_TR,
      CATEGORY_LIGHTGUN_INFO_0_TR
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_TR,
      CATEGORY_OVERCLOCK_INFO_0_TR
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_TR,
      CATEGORY_HACK_INFO_0_TR
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_TR,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_TR,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_TR },
         { "8:7",  OPTION_VAL_8_7_TR },
         { "4:3",  OPTION_VAL_4_3_TR },
         { "NTSC", OPTION_VAL_NTSC_TR },
         { "PAL",  OPTION_VAL_PAL_TR },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_TR,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_TR,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_TR },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_TR,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_TR,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_TR,
      NULL,
      BSNES_HOTFIXES_INFO_0_TR,
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
      BSNES_ENTROPY_LABEL_TR,
      NULL,
      BSNES_ENTROPY_INFO_0_TR,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_TR },
         { "High", OPTION_VAL_HIGH_TR },
         { "None", OPTION_VAL_NONE_TR },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_TR,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_TR,
      BSNES_CPU_OVERCLOCK_INFO_0_TR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_TR  },
         { "20",  OPTION_VAL_20_TR  },
         { "30",  OPTION_VAL_30_TR  },
         { "40",  OPTION_VAL_40_TR  },
         { "50",  OPTION_VAL_50_TR  },
         { "60",  OPTION_VAL_60_TR  },
         { "70",  OPTION_VAL_70_TR  },
         { "80",  OPTION_VAL_80_TR  },
         { "90",  OPTION_VAL_90_TR  },
         { "100", OPTION_VAL_100_TR },
         { "110", OPTION_VAL_110_TR },
         { "120", OPTION_VAL_120_TR },
         { "130", OPTION_VAL_130_TR },
         { "140", OPTION_VAL_140_TR },
         { "150", OPTION_VAL_150_TR },
         { "160", OPTION_VAL_160_TR },
         { "170", OPTION_VAL_170_TR },
         { "180", OPTION_VAL_180_TR },
         { "190", OPTION_VAL_190_TR },
         { "200", OPTION_VAL_200_TR },
         { "210", OPTION_VAL_210_TR },
         { "220", OPTION_VAL_220_TR },
         { "230", OPTION_VAL_230_TR },
         { "240", OPTION_VAL_240_TR },
         { "250", OPTION_VAL_250_TR },
         { "260", OPTION_VAL_260_TR },
         { "270", OPTION_VAL_270_TR },
         { "280", OPTION_VAL_280_TR },
         { "290", OPTION_VAL_290_TR },
         { "300", OPTION_VAL_300_TR },
         { "310", OPTION_VAL_310_TR },
         { "320", OPTION_VAL_320_TR },
         { "330", OPTION_VAL_330_TR },
         { "340", OPTION_VAL_340_TR },
         { "350", OPTION_VAL_350_TR },
         { "360", OPTION_VAL_360_TR },
         { "370", OPTION_VAL_370_TR },
         { "380", OPTION_VAL_380_TR },
         { "390", OPTION_VAL_390_TR },
         { "400", OPTION_VAL_400_TR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_TR,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_TR,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_TR,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_TR,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_TR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_TR  },
         { "20",  OPTION_VAL_20_TR  },
         { "30",  OPTION_VAL_30_TR  },
         { "40",  OPTION_VAL_40_TR  },
         { "50",  OPTION_VAL_50_TR  },
         { "60",  OPTION_VAL_60_TR  },
         { "70",  OPTION_VAL_70_TR  },
         { "80",  OPTION_VAL_80_TR  },
         { "90",  OPTION_VAL_90_TR  },
         { "100", OPTION_VAL_100_TR },
         { "110", OPTION_VAL_110_TR },
         { "120", OPTION_VAL_120_TR },
         { "130", OPTION_VAL_130_TR },
         { "140", OPTION_VAL_140_TR },
         { "150", OPTION_VAL_150_TR },
         { "160", OPTION_VAL_160_TR },
         { "170", OPTION_VAL_170_TR },
         { "180", OPTION_VAL_180_TR },
         { "190", OPTION_VAL_190_TR },
         { "200", OPTION_VAL_200_TR },
         { "210", OPTION_VAL_210_TR },
         { "220", OPTION_VAL_220_TR },
         { "230", OPTION_VAL_230_TR },
         { "240", OPTION_VAL_240_TR },
         { "250", OPTION_VAL_250_TR },
         { "260", OPTION_VAL_260_TR },
         { "270", OPTION_VAL_270_TR },
         { "280", OPTION_VAL_280_TR },
         { "290", OPTION_VAL_290_TR },
         { "300", OPTION_VAL_300_TR },
         { "310", OPTION_VAL_310_TR },
         { "320", OPTION_VAL_320_TR },
         { "330", OPTION_VAL_330_TR },
         { "340", OPTION_VAL_340_TR },
         { "350", OPTION_VAL_350_TR },
         { "360", OPTION_VAL_360_TR },
         { "370", OPTION_VAL_370_TR },
         { "380", OPTION_VAL_380_TR },
         { "390", OPTION_VAL_390_TR },
         { "400", OPTION_VAL_400_TR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_TR,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_TR,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_TR,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_TR  },
         { "20",  OPTION_VAL_20_TR  },
         { "30",  OPTION_VAL_30_TR  },
         { "40",  OPTION_VAL_40_TR  },
         { "50",  OPTION_VAL_50_TR  },
         { "60",  OPTION_VAL_60_TR  },
         { "70",  OPTION_VAL_70_TR  },
         { "80",  OPTION_VAL_80_TR  },
         { "90",  OPTION_VAL_90_TR  },
         { "100", OPTION_VAL_100_TR },
         { "110", OPTION_VAL_110_TR },
         { "120", OPTION_VAL_120_TR },
         { "130", OPTION_VAL_130_TR },
         { "140", OPTION_VAL_140_TR },
         { "150", OPTION_VAL_150_TR },
         { "160", OPTION_VAL_160_TR },
         { "170", OPTION_VAL_170_TR },
         { "180", OPTION_VAL_180_TR },
         { "190", OPTION_VAL_190_TR },
         { "200", OPTION_VAL_200_TR },
         { "210", OPTION_VAL_210_TR },
         { "220", OPTION_VAL_220_TR },
         { "230", OPTION_VAL_230_TR },
         { "240", OPTION_VAL_240_TR },
         { "250", OPTION_VAL_250_TR },
         { "260", OPTION_VAL_260_TR },
         { "270", OPTION_VAL_270_TR },
         { "280", OPTION_VAL_280_TR },
         { "290", OPTION_VAL_290_TR },
         { "300", OPTION_VAL_300_TR },
         { "310", OPTION_VAL_310_TR },
         { "320", OPTION_VAL_320_TR },
         { "330", OPTION_VAL_330_TR },
         { "340", OPTION_VAL_340_TR },
         { "350", OPTION_VAL_350_TR },
         { "360", OPTION_VAL_360_TR },
         { "370", OPTION_VAL_370_TR },
         { "380", OPTION_VAL_380_TR },
         { "390", OPTION_VAL_390_TR },
         { "400", OPTION_VAL_400_TR },
         { "410", OPTION_VAL_410_TR },
         { "420", OPTION_VAL_420_TR },
         { "430", OPTION_VAL_430_TR },
         { "440", OPTION_VAL_440_TR },
         { "450", OPTION_VAL_450_TR },
         { "460", OPTION_VAL_460_TR },
         { "470", OPTION_VAL_470_TR },
         { "480", OPTION_VAL_480_TR },
         { "490", OPTION_VAL_490_TR },
         { "500", OPTION_VAL_500_TR },
         { "510", OPTION_VAL_510_TR },
         { "520", OPTION_VAL_520_TR },
         { "530", OPTION_VAL_530_TR },
         { "540", OPTION_VAL_540_TR },
         { "550", OPTION_VAL_550_TR },
         { "560", OPTION_VAL_560_TR },
         { "570", OPTION_VAL_570_TR },
         { "580", OPTION_VAL_580_TR },
         { "590", OPTION_VAL_590_TR },
         { "600", OPTION_VAL_600_TR },
         { "610", OPTION_VAL_610_TR },
         { "620", OPTION_VAL_620_TR },
         { "630", OPTION_VAL_630_TR },
         { "640", OPTION_VAL_640_TR },
         { "650", OPTION_VAL_650_TR },
         { "660", OPTION_VAL_660_TR },
         { "670", OPTION_VAL_670_TR },
         { "680", OPTION_VAL_680_TR },
         { "690", OPTION_VAL_690_TR },
         { "700", OPTION_VAL_700_TR },
         { "710", OPTION_VAL_710_TR },
         { "720", OPTION_VAL_720_TR },
         { "730", OPTION_VAL_730_TR },
         { "740", OPTION_VAL_740_TR },
         { "750", OPTION_VAL_750_TR },
         { "760", OPTION_VAL_760_TR },
         { "770", OPTION_VAL_770_TR },
         { "780", OPTION_VAL_780_TR },
         { "790", OPTION_VAL_790_TR },
         { "800", OPTION_VAL_800_TR },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_TR,
      BSNES_PPU_FAST_LABEL_CAT_TR,
      BSNES_PPU_FAST_INFO_0_TR,
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
      BSNES_PPU_DEINTERLACE_LABEL_TR,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_TR,
      BSNES_PPU_DEINTERLACE_INFO_0_TR,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_TR,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_TR,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_TR,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_TR,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_TR,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_TR,
      BSNES_MODE7_SCALE_LABEL_CAT_TR,
      BSNES_MODE7_SCALE_INFO_0_TR,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_TR  },
         { "2x", OPTION_VAL_2X_TR  },
         { "3x", OPTION_VAL_3X_TR  },
         { "4x", OPTION_VAL_4X_TR  },
         { "5x", OPTION_VAL_5X_TR },
         { "6x", OPTION_VAL_6X_TR },
         { "7x", OPTION_VAL_7X_TR },
         { "8x", OPTION_VAL_8X_TR },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_TR,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_TR,
      BSNES_MODE7_PERSPECTIVE_INFO_0_TR,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_TR,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_TR,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_TR,
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
      BSNES_MODE7_MOSAIC_LABEL_TR,
      BSNES_MODE7_MOSAIC_LABEL_CAT_TR,
      BSNES_MODE7_MOSAIC_INFO_0_TR,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_TR,
      BSNES_DSP_FAST_LABEL_CAT_TR,
      BSNES_DSP_FAST_INFO_0_TR,
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
      BSNES_DSP_CUBIC_LABEL_TR,
      BSNES_DSP_CUBIC_LABEL_CAT_TR,
      BSNES_DSP_CUBIC_INFO_0_TR,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_TR,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_TR,
      BSNES_DSP_ECHO_SHADOW_INFO_0_TR,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_TR,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_TR,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_TR,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_TR,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_TR,
      NULL,
      BSNES_SGB_BIOS_INFO_0_TR,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_TR   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_TR },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_TR,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_TR,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_TR  },
         { "2",   OPTION_VAL_2_TR },
         { "3",   OPTION_VAL_3_TR },
         { "4",   OPTION_VAL_4_TR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_TR,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_TR,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_TR,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_TR,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_TR,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_TR,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_UK */

#define CATEGORY_VIDEO_LABEL_UK "Відео"
#define CATEGORY_VIDEO_INFO_0_UK "Змінити налаштування виводу відео."
#define CATEGORY_AUDIO_LABEL_UK "Аудіо"
#define CATEGORY_AUDIO_INFO_0_UK "Змінити налаштування виводу звуку."
#define CATEGORY_MODE7_LABEL_UK NULL
#define CATEGORY_MODE7_INFO_0_UK NULL
#define CATEGORY_SGB_LABEL_UK NULL
#define CATEGORY_SGB_INFO_0_UK NULL
#define CATEGORY_LIGHTGUN_LABEL_UK NULL
#define CATEGORY_LIGHTGUN_INFO_0_UK NULL
#define CATEGORY_OVERCLOCK_LABEL_UK NULL
#define CATEGORY_OVERCLOCK_INFO_0_UK NULL
#define CATEGORY_HACK_LABEL_UK "Гаки емуляції"
#define CATEGORY_HACK_INFO_0_UK NULL
#define BSNES_ASPECT_RATIO_LABEL_UK NULL
#define BSNES_ASPECT_RATIO_INFO_0_UK NULL
#define OPTION_VAL_AUTO_UK "Авто"
#define OPTION_VAL_8_7_UK NULL
#define OPTION_VAL_4_3_UK NULL
#define OPTION_VAL_NTSC_UK NULL
#define OPTION_VAL_PAL_UK NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_UK NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_UK NULL
#define OPTION_VAL_OFF_UK NULL
#define BSNES_BLUR_EMULATION_LABEL_UK NULL
#define BSNES_BLUR_EMULATION_INFO_0_UK NULL
#define BSNES_HOTFIXES_LABEL_UK NULL
#define BSNES_HOTFIXES_INFO_0_UK NULL
#define BSNES_ENTROPY_LABEL_UK NULL
#define BSNES_ENTROPY_INFO_0_UK NULL
#define OPTION_VAL_LOW_UK NULL
#define OPTION_VAL_HIGH_UK NULL
#define OPTION_VAL_NONE_UK NULL
#define BSNES_CPU_OVERCLOCK_LABEL_UK NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_UK NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_UK NULL
#define OPTION_VAL_10_UK NULL
#define OPTION_VAL_20_UK NULL
#define OPTION_VAL_30_UK NULL
#define OPTION_VAL_40_UK NULL
#define OPTION_VAL_50_UK NULL
#define OPTION_VAL_60_UK NULL
#define OPTION_VAL_70_UK NULL
#define OPTION_VAL_80_UK NULL
#define OPTION_VAL_90_UK NULL
#define OPTION_VAL_100_UK NULL
#define OPTION_VAL_110_UK NULL
#define OPTION_VAL_120_UK NULL
#define OPTION_VAL_130_UK NULL
#define OPTION_VAL_140_UK NULL
#define OPTION_VAL_150_UK NULL
#define OPTION_VAL_160_UK NULL
#define OPTION_VAL_170_UK NULL
#define OPTION_VAL_180_UK NULL
#define OPTION_VAL_190_UK NULL
#define OPTION_VAL_200_UK NULL
#define OPTION_VAL_210_UK NULL
#define OPTION_VAL_220_UK NULL
#define OPTION_VAL_230_UK NULL
#define OPTION_VAL_240_UK NULL
#define OPTION_VAL_250_UK NULL
#define OPTION_VAL_260_UK NULL
#define OPTION_VAL_270_UK NULL
#define OPTION_VAL_280_UK NULL
#define OPTION_VAL_290_UK NULL
#define OPTION_VAL_300_UK NULL
#define OPTION_VAL_310_UK NULL
#define OPTION_VAL_320_UK NULL
#define OPTION_VAL_330_UK NULL
#define OPTION_VAL_340_UK NULL
#define OPTION_VAL_350_UK NULL
#define OPTION_VAL_360_UK NULL
#define OPTION_VAL_370_UK NULL
#define OPTION_VAL_380_UK NULL
#define OPTION_VAL_390_UK NULL
#define OPTION_VAL_400_UK NULL
#define BSNES_CPU_FASTMATH_LABEL_UK NULL
#define BSNES_CPU_FASTMATH_INFO_0_UK NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_UK NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_UK NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_UK NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_UK NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_UK NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_UK NULL
#define OPTION_VAL_410_UK NULL
#define OPTION_VAL_420_UK NULL
#define OPTION_VAL_430_UK NULL
#define OPTION_VAL_440_UK NULL
#define OPTION_VAL_450_UK NULL
#define OPTION_VAL_460_UK NULL
#define OPTION_VAL_470_UK NULL
#define OPTION_VAL_480_UK NULL
#define OPTION_VAL_490_UK NULL
#define OPTION_VAL_500_UK NULL
#define OPTION_VAL_510_UK NULL
#define OPTION_VAL_520_UK NULL
#define OPTION_VAL_530_UK NULL
#define OPTION_VAL_540_UK NULL
#define OPTION_VAL_550_UK NULL
#define OPTION_VAL_560_UK NULL
#define OPTION_VAL_570_UK NULL
#define OPTION_VAL_580_UK NULL
#define OPTION_VAL_590_UK NULL
#define OPTION_VAL_600_UK NULL
#define OPTION_VAL_610_UK NULL
#define OPTION_VAL_620_UK NULL
#define OPTION_VAL_630_UK NULL
#define OPTION_VAL_640_UK NULL
#define OPTION_VAL_650_UK NULL
#define OPTION_VAL_660_UK NULL
#define OPTION_VAL_670_UK NULL
#define OPTION_VAL_680_UK NULL
#define OPTION_VAL_690_UK NULL
#define OPTION_VAL_700_UK NULL
#define OPTION_VAL_710_UK NULL
#define OPTION_VAL_720_UK NULL
#define OPTION_VAL_730_UK NULL
#define OPTION_VAL_740_UK NULL
#define OPTION_VAL_750_UK NULL
#define OPTION_VAL_760_UK NULL
#define OPTION_VAL_770_UK NULL
#define OPTION_VAL_780_UK NULL
#define OPTION_VAL_790_UK NULL
#define OPTION_VAL_800_UK NULL
#define BSNES_PPU_FAST_LABEL_UK NULL
#define BSNES_PPU_FAST_LABEL_CAT_UK NULL
#define BSNES_PPU_FAST_INFO_0_UK NULL
#define BSNES_PPU_DEINTERLACE_LABEL_UK NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_UK NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_UK NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_UK NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_UK NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_UK NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_UK NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_UK NULL
#define BSNES_MODE7_SCALE_LABEL_UK NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_UK "Масштаб"
#define BSNES_MODE7_SCALE_INFO_0_UK NULL
#define OPTION_VAL_1X_UK NULL
#define OPTION_VAL_2X_UK NULL
#define OPTION_VAL_3X_UK NULL
#define OPTION_VAL_4X_UK NULL
#define OPTION_VAL_5X_UK NULL
#define OPTION_VAL_6X_UK NULL
#define OPTION_VAL_7X_UK NULL
#define OPTION_VAL_8X_UK NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_UK NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_UK NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_UK NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_UK NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_UK NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_UK NULL
#define BSNES_MODE7_MOSAIC_LABEL_UK NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_UK NULL
#define BSNES_MODE7_MOSAIC_INFO_0_UK NULL
#define BSNES_DSP_FAST_LABEL_UK NULL
#define BSNES_DSP_FAST_LABEL_CAT_UK NULL
#define BSNES_DSP_FAST_INFO_0_UK NULL
#define BSNES_DSP_CUBIC_LABEL_UK NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_UK NULL
#define BSNES_DSP_CUBIC_INFO_0_UK NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_UK NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_UK NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_UK NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_UK NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_UK NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_UK NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_UK NULL
#define BSNES_SGB_BIOS_LABEL_UK NULL
#define BSNES_SGB_BIOS_INFO_0_UK NULL
#define OPTION_VAL_SGB1_SFC_UK NULL
#define OPTION_VAL_SGB2_SFC_UK NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_UK NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_UK NULL
#define OPTION_VAL_1_UK NULL
#define OPTION_VAL_2_UK NULL
#define OPTION_VAL_3_UK NULL
#define OPTION_VAL_4_UK NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_UK NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_UK NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_UK NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_UK NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_UK NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_UK,
      CATEGORY_VIDEO_INFO_0_UK
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_UK,
      CATEGORY_AUDIO_INFO_0_UK
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_UK,
      CATEGORY_MODE7_INFO_0_UK
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_UK,
      CATEGORY_SGB_INFO_0_UK
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_UK,
      CATEGORY_LIGHTGUN_INFO_0_UK
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_UK,
      CATEGORY_OVERCLOCK_INFO_0_UK
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_UK,
      CATEGORY_HACK_INFO_0_UK
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_UK,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_UK,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_UK },
         { "8:7",  OPTION_VAL_8_7_UK },
         { "4:3",  OPTION_VAL_4_3_UK },
         { "NTSC", OPTION_VAL_NTSC_UK },
         { "PAL",  OPTION_VAL_PAL_UK },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_UK,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_UK,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_UK },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_UK,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_UK,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_UK,
      NULL,
      BSNES_HOTFIXES_INFO_0_UK,
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
      BSNES_ENTROPY_LABEL_UK,
      NULL,
      BSNES_ENTROPY_INFO_0_UK,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_UK },
         { "High", OPTION_VAL_HIGH_UK },
         { "None", OPTION_VAL_NONE_UK },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_UK,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_UK,
      BSNES_CPU_OVERCLOCK_INFO_0_UK,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_UK  },
         { "20",  OPTION_VAL_20_UK  },
         { "30",  OPTION_VAL_30_UK  },
         { "40",  OPTION_VAL_40_UK  },
         { "50",  OPTION_VAL_50_UK  },
         { "60",  OPTION_VAL_60_UK  },
         { "70",  OPTION_VAL_70_UK  },
         { "80",  OPTION_VAL_80_UK  },
         { "90",  OPTION_VAL_90_UK  },
         { "100", OPTION_VAL_100_UK },
         { "110", OPTION_VAL_110_UK },
         { "120", OPTION_VAL_120_UK },
         { "130", OPTION_VAL_130_UK },
         { "140", OPTION_VAL_140_UK },
         { "150", OPTION_VAL_150_UK },
         { "160", OPTION_VAL_160_UK },
         { "170", OPTION_VAL_170_UK },
         { "180", OPTION_VAL_180_UK },
         { "190", OPTION_VAL_190_UK },
         { "200", OPTION_VAL_200_UK },
         { "210", OPTION_VAL_210_UK },
         { "220", OPTION_VAL_220_UK },
         { "230", OPTION_VAL_230_UK },
         { "240", OPTION_VAL_240_UK },
         { "250", OPTION_VAL_250_UK },
         { "260", OPTION_VAL_260_UK },
         { "270", OPTION_VAL_270_UK },
         { "280", OPTION_VAL_280_UK },
         { "290", OPTION_VAL_290_UK },
         { "300", OPTION_VAL_300_UK },
         { "310", OPTION_VAL_310_UK },
         { "320", OPTION_VAL_320_UK },
         { "330", OPTION_VAL_330_UK },
         { "340", OPTION_VAL_340_UK },
         { "350", OPTION_VAL_350_UK },
         { "360", OPTION_VAL_360_UK },
         { "370", OPTION_VAL_370_UK },
         { "380", OPTION_VAL_380_UK },
         { "390", OPTION_VAL_390_UK },
         { "400", OPTION_VAL_400_UK },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_UK,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_UK,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_UK,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_UK,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_UK,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_UK  },
         { "20",  OPTION_VAL_20_UK  },
         { "30",  OPTION_VAL_30_UK  },
         { "40",  OPTION_VAL_40_UK  },
         { "50",  OPTION_VAL_50_UK  },
         { "60",  OPTION_VAL_60_UK  },
         { "70",  OPTION_VAL_70_UK  },
         { "80",  OPTION_VAL_80_UK  },
         { "90",  OPTION_VAL_90_UK  },
         { "100", OPTION_VAL_100_UK },
         { "110", OPTION_VAL_110_UK },
         { "120", OPTION_VAL_120_UK },
         { "130", OPTION_VAL_130_UK },
         { "140", OPTION_VAL_140_UK },
         { "150", OPTION_VAL_150_UK },
         { "160", OPTION_VAL_160_UK },
         { "170", OPTION_VAL_170_UK },
         { "180", OPTION_VAL_180_UK },
         { "190", OPTION_VAL_190_UK },
         { "200", OPTION_VAL_200_UK },
         { "210", OPTION_VAL_210_UK },
         { "220", OPTION_VAL_220_UK },
         { "230", OPTION_VAL_230_UK },
         { "240", OPTION_VAL_240_UK },
         { "250", OPTION_VAL_250_UK },
         { "260", OPTION_VAL_260_UK },
         { "270", OPTION_VAL_270_UK },
         { "280", OPTION_VAL_280_UK },
         { "290", OPTION_VAL_290_UK },
         { "300", OPTION_VAL_300_UK },
         { "310", OPTION_VAL_310_UK },
         { "320", OPTION_VAL_320_UK },
         { "330", OPTION_VAL_330_UK },
         { "340", OPTION_VAL_340_UK },
         { "350", OPTION_VAL_350_UK },
         { "360", OPTION_VAL_360_UK },
         { "370", OPTION_VAL_370_UK },
         { "380", OPTION_VAL_380_UK },
         { "390", OPTION_VAL_390_UK },
         { "400", OPTION_VAL_400_UK },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_UK,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_UK,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_UK,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_UK  },
         { "20",  OPTION_VAL_20_UK  },
         { "30",  OPTION_VAL_30_UK  },
         { "40",  OPTION_VAL_40_UK  },
         { "50",  OPTION_VAL_50_UK  },
         { "60",  OPTION_VAL_60_UK  },
         { "70",  OPTION_VAL_70_UK  },
         { "80",  OPTION_VAL_80_UK  },
         { "90",  OPTION_VAL_90_UK  },
         { "100", OPTION_VAL_100_UK },
         { "110", OPTION_VAL_110_UK },
         { "120", OPTION_VAL_120_UK },
         { "130", OPTION_VAL_130_UK },
         { "140", OPTION_VAL_140_UK },
         { "150", OPTION_VAL_150_UK },
         { "160", OPTION_VAL_160_UK },
         { "170", OPTION_VAL_170_UK },
         { "180", OPTION_VAL_180_UK },
         { "190", OPTION_VAL_190_UK },
         { "200", OPTION_VAL_200_UK },
         { "210", OPTION_VAL_210_UK },
         { "220", OPTION_VAL_220_UK },
         { "230", OPTION_VAL_230_UK },
         { "240", OPTION_VAL_240_UK },
         { "250", OPTION_VAL_250_UK },
         { "260", OPTION_VAL_260_UK },
         { "270", OPTION_VAL_270_UK },
         { "280", OPTION_VAL_280_UK },
         { "290", OPTION_VAL_290_UK },
         { "300", OPTION_VAL_300_UK },
         { "310", OPTION_VAL_310_UK },
         { "320", OPTION_VAL_320_UK },
         { "330", OPTION_VAL_330_UK },
         { "340", OPTION_VAL_340_UK },
         { "350", OPTION_VAL_350_UK },
         { "360", OPTION_VAL_360_UK },
         { "370", OPTION_VAL_370_UK },
         { "380", OPTION_VAL_380_UK },
         { "390", OPTION_VAL_390_UK },
         { "400", OPTION_VAL_400_UK },
         { "410", OPTION_VAL_410_UK },
         { "420", OPTION_VAL_420_UK },
         { "430", OPTION_VAL_430_UK },
         { "440", OPTION_VAL_440_UK },
         { "450", OPTION_VAL_450_UK },
         { "460", OPTION_VAL_460_UK },
         { "470", OPTION_VAL_470_UK },
         { "480", OPTION_VAL_480_UK },
         { "490", OPTION_VAL_490_UK },
         { "500", OPTION_VAL_500_UK },
         { "510", OPTION_VAL_510_UK },
         { "520", OPTION_VAL_520_UK },
         { "530", OPTION_VAL_530_UK },
         { "540", OPTION_VAL_540_UK },
         { "550", OPTION_VAL_550_UK },
         { "560", OPTION_VAL_560_UK },
         { "570", OPTION_VAL_570_UK },
         { "580", OPTION_VAL_580_UK },
         { "590", OPTION_VAL_590_UK },
         { "600", OPTION_VAL_600_UK },
         { "610", OPTION_VAL_610_UK },
         { "620", OPTION_VAL_620_UK },
         { "630", OPTION_VAL_630_UK },
         { "640", OPTION_VAL_640_UK },
         { "650", OPTION_VAL_650_UK },
         { "660", OPTION_VAL_660_UK },
         { "670", OPTION_VAL_670_UK },
         { "680", OPTION_VAL_680_UK },
         { "690", OPTION_VAL_690_UK },
         { "700", OPTION_VAL_700_UK },
         { "710", OPTION_VAL_710_UK },
         { "720", OPTION_VAL_720_UK },
         { "730", OPTION_VAL_730_UK },
         { "740", OPTION_VAL_740_UK },
         { "750", OPTION_VAL_750_UK },
         { "760", OPTION_VAL_760_UK },
         { "770", OPTION_VAL_770_UK },
         { "780", OPTION_VAL_780_UK },
         { "790", OPTION_VAL_790_UK },
         { "800", OPTION_VAL_800_UK },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_UK,
      BSNES_PPU_FAST_LABEL_CAT_UK,
      BSNES_PPU_FAST_INFO_0_UK,
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
      BSNES_PPU_DEINTERLACE_LABEL_UK,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_UK,
      BSNES_PPU_DEINTERLACE_INFO_0_UK,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_UK,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_UK,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_UK,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_UK,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_UK,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_UK,
      BSNES_MODE7_SCALE_LABEL_CAT_UK,
      BSNES_MODE7_SCALE_INFO_0_UK,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_UK  },
         { "2x", OPTION_VAL_2X_UK  },
         { "3x", OPTION_VAL_3X_UK  },
         { "4x", OPTION_VAL_4X_UK  },
         { "5x", OPTION_VAL_5X_UK },
         { "6x", OPTION_VAL_6X_UK },
         { "7x", OPTION_VAL_7X_UK },
         { "8x", OPTION_VAL_8X_UK },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_UK,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_UK,
      BSNES_MODE7_PERSPECTIVE_INFO_0_UK,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_UK,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_UK,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_UK,
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
      BSNES_MODE7_MOSAIC_LABEL_UK,
      BSNES_MODE7_MOSAIC_LABEL_CAT_UK,
      BSNES_MODE7_MOSAIC_INFO_0_UK,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_UK,
      BSNES_DSP_FAST_LABEL_CAT_UK,
      BSNES_DSP_FAST_INFO_0_UK,
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
      BSNES_DSP_CUBIC_LABEL_UK,
      BSNES_DSP_CUBIC_LABEL_CAT_UK,
      BSNES_DSP_CUBIC_INFO_0_UK,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_UK,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_UK,
      BSNES_DSP_ECHO_SHADOW_INFO_0_UK,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_UK,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_UK,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_UK,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_UK,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_UK,
      NULL,
      BSNES_SGB_BIOS_INFO_0_UK,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_UK   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_UK },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_UK,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_UK,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_UK  },
         { "2",   OPTION_VAL_2_UK },
         { "3",   OPTION_VAL_3_UK },
         { "4",   OPTION_VAL_4_UK },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_UK,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_UK,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_UK,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_UK,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_UK,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_UK,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VAL */

#define CATEGORY_VIDEO_LABEL_VAL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_VAL "Canvia els ajustos d'eixida de vídeo."
#define CATEGORY_AUDIO_LABEL_VAL "Àudio"
#define CATEGORY_AUDIO_INFO_0_VAL "Canvia els ajustos d'eixida d'àudio."
#define CATEGORY_MODE7_LABEL_VAL NULL
#define CATEGORY_MODE7_INFO_0_VAL NULL
#define CATEGORY_SGB_LABEL_VAL NULL
#define CATEGORY_SGB_INFO_0_VAL NULL
#define CATEGORY_LIGHTGUN_LABEL_VAL NULL
#define CATEGORY_LIGHTGUN_INFO_0_VAL NULL
#define CATEGORY_OVERCLOCK_LABEL_VAL NULL
#define CATEGORY_OVERCLOCK_INFO_0_VAL NULL
#define CATEGORY_HACK_LABEL_VAL NULL
#define CATEGORY_HACK_INFO_0_VAL NULL
#define BSNES_ASPECT_RATIO_LABEL_VAL NULL
#define BSNES_ASPECT_RATIO_INFO_0_VAL NULL
#define OPTION_VAL_AUTO_VAL NULL
#define OPTION_VAL_8_7_VAL NULL
#define OPTION_VAL_4_3_VAL NULL
#define OPTION_VAL_NTSC_VAL NULL
#define OPTION_VAL_PAL_VAL NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_VAL NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_VAL NULL
#define OPTION_VAL_OFF_VAL NULL
#define BSNES_BLUR_EMULATION_LABEL_VAL NULL
#define BSNES_BLUR_EMULATION_INFO_0_VAL NULL
#define BSNES_HOTFIXES_LABEL_VAL NULL
#define BSNES_HOTFIXES_INFO_0_VAL NULL
#define BSNES_ENTROPY_LABEL_VAL NULL
#define BSNES_ENTROPY_INFO_0_VAL NULL
#define OPTION_VAL_LOW_VAL NULL
#define OPTION_VAL_HIGH_VAL NULL
#define OPTION_VAL_NONE_VAL "Cap"
#define BSNES_CPU_OVERCLOCK_LABEL_VAL NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_VAL NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_VAL NULL
#define OPTION_VAL_10_VAL NULL
#define OPTION_VAL_20_VAL NULL
#define OPTION_VAL_30_VAL NULL
#define OPTION_VAL_40_VAL NULL
#define OPTION_VAL_50_VAL NULL
#define OPTION_VAL_60_VAL NULL
#define OPTION_VAL_70_VAL NULL
#define OPTION_VAL_80_VAL NULL
#define OPTION_VAL_90_VAL NULL
#define OPTION_VAL_100_VAL NULL
#define OPTION_VAL_110_VAL NULL
#define OPTION_VAL_120_VAL NULL
#define OPTION_VAL_130_VAL NULL
#define OPTION_VAL_140_VAL NULL
#define OPTION_VAL_150_VAL NULL
#define OPTION_VAL_160_VAL NULL
#define OPTION_VAL_170_VAL NULL
#define OPTION_VAL_180_VAL NULL
#define OPTION_VAL_190_VAL NULL
#define OPTION_VAL_200_VAL NULL
#define OPTION_VAL_210_VAL NULL
#define OPTION_VAL_220_VAL NULL
#define OPTION_VAL_230_VAL NULL
#define OPTION_VAL_240_VAL NULL
#define OPTION_VAL_250_VAL NULL
#define OPTION_VAL_260_VAL NULL
#define OPTION_VAL_270_VAL NULL
#define OPTION_VAL_280_VAL NULL
#define OPTION_VAL_290_VAL NULL
#define OPTION_VAL_300_VAL NULL
#define OPTION_VAL_310_VAL NULL
#define OPTION_VAL_320_VAL NULL
#define OPTION_VAL_330_VAL NULL
#define OPTION_VAL_340_VAL NULL
#define OPTION_VAL_350_VAL NULL
#define OPTION_VAL_360_VAL NULL
#define OPTION_VAL_370_VAL NULL
#define OPTION_VAL_380_VAL NULL
#define OPTION_VAL_390_VAL NULL
#define OPTION_VAL_400_VAL NULL
#define BSNES_CPU_FASTMATH_LABEL_VAL NULL
#define BSNES_CPU_FASTMATH_INFO_0_VAL NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_VAL NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_VAL NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_VAL NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_VAL NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_VAL NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_VAL NULL
#define OPTION_VAL_410_VAL NULL
#define OPTION_VAL_420_VAL NULL
#define OPTION_VAL_430_VAL NULL
#define OPTION_VAL_440_VAL NULL
#define OPTION_VAL_450_VAL NULL
#define OPTION_VAL_460_VAL NULL
#define OPTION_VAL_470_VAL NULL
#define OPTION_VAL_480_VAL NULL
#define OPTION_VAL_490_VAL NULL
#define OPTION_VAL_500_VAL NULL
#define OPTION_VAL_510_VAL NULL
#define OPTION_VAL_520_VAL NULL
#define OPTION_VAL_530_VAL NULL
#define OPTION_VAL_540_VAL NULL
#define OPTION_VAL_550_VAL NULL
#define OPTION_VAL_560_VAL NULL
#define OPTION_VAL_570_VAL NULL
#define OPTION_VAL_580_VAL NULL
#define OPTION_VAL_590_VAL NULL
#define OPTION_VAL_600_VAL NULL
#define OPTION_VAL_610_VAL NULL
#define OPTION_VAL_620_VAL NULL
#define OPTION_VAL_630_VAL NULL
#define OPTION_VAL_640_VAL NULL
#define OPTION_VAL_650_VAL NULL
#define OPTION_VAL_660_VAL NULL
#define OPTION_VAL_670_VAL NULL
#define OPTION_VAL_680_VAL NULL
#define OPTION_VAL_690_VAL NULL
#define OPTION_VAL_700_VAL NULL
#define OPTION_VAL_710_VAL NULL
#define OPTION_VAL_720_VAL NULL
#define OPTION_VAL_730_VAL NULL
#define OPTION_VAL_740_VAL NULL
#define OPTION_VAL_750_VAL NULL
#define OPTION_VAL_760_VAL NULL
#define OPTION_VAL_770_VAL NULL
#define OPTION_VAL_780_VAL NULL
#define OPTION_VAL_790_VAL NULL
#define OPTION_VAL_800_VAL NULL
#define BSNES_PPU_FAST_LABEL_VAL NULL
#define BSNES_PPU_FAST_LABEL_CAT_VAL NULL
#define BSNES_PPU_FAST_INFO_0_VAL NULL
#define BSNES_PPU_DEINTERLACE_LABEL_VAL NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_VAL NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_VAL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_VAL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_VAL NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_VAL NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_VAL NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_VAL NULL
#define BSNES_MODE7_SCALE_LABEL_VAL NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_VAL NULL
#define BSNES_MODE7_SCALE_INFO_0_VAL NULL
#define OPTION_VAL_1X_VAL NULL
#define OPTION_VAL_2X_VAL NULL
#define OPTION_VAL_3X_VAL NULL
#define OPTION_VAL_4X_VAL NULL
#define OPTION_VAL_5X_VAL NULL
#define OPTION_VAL_6X_VAL NULL
#define OPTION_VAL_7X_VAL NULL
#define OPTION_VAL_8X_VAL NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_VAL NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_VAL NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_VAL NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_VAL NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_VAL NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_VAL NULL
#define BSNES_MODE7_MOSAIC_LABEL_VAL NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_VAL NULL
#define BSNES_MODE7_MOSAIC_INFO_0_VAL NULL
#define BSNES_DSP_FAST_LABEL_VAL NULL
#define BSNES_DSP_FAST_LABEL_CAT_VAL NULL
#define BSNES_DSP_FAST_INFO_0_VAL NULL
#define BSNES_DSP_CUBIC_LABEL_VAL NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_VAL NULL
#define BSNES_DSP_CUBIC_INFO_0_VAL NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_VAL NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_VAL NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_VAL NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_VAL NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_VAL NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_VAL NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_VAL NULL
#define BSNES_SGB_BIOS_LABEL_VAL NULL
#define BSNES_SGB_BIOS_INFO_0_VAL NULL
#define OPTION_VAL_SGB1_SFC_VAL NULL
#define OPTION_VAL_SGB2_SFC_VAL NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_VAL NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_VAL NULL
#define OPTION_VAL_1_VAL NULL
#define OPTION_VAL_2_VAL NULL
#define OPTION_VAL_3_VAL NULL
#define OPTION_VAL_4_VAL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_VAL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_VAL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_VAL NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_VAL NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_VAL NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_VAL NULL

struct retro_core_option_v2_category option_cats_val[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_VAL,
      CATEGORY_VIDEO_INFO_0_VAL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_VAL,
      CATEGORY_AUDIO_INFO_0_VAL
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_VAL,
      CATEGORY_MODE7_INFO_0_VAL
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_VAL,
      CATEGORY_SGB_INFO_0_VAL
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_VAL,
      CATEGORY_LIGHTGUN_INFO_0_VAL
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_VAL,
      CATEGORY_OVERCLOCK_INFO_0_VAL
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_VAL,
      CATEGORY_HACK_INFO_0_VAL
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_val[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_VAL,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_VAL,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_VAL },
         { "8:7",  OPTION_VAL_8_7_VAL },
         { "4:3",  OPTION_VAL_4_3_VAL },
         { "NTSC", OPTION_VAL_NTSC_VAL },
         { "PAL",  OPTION_VAL_PAL_VAL },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_VAL,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_VAL,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_VAL },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_VAL,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_VAL,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_VAL,
      NULL,
      BSNES_HOTFIXES_INFO_0_VAL,
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
      BSNES_ENTROPY_LABEL_VAL,
      NULL,
      BSNES_ENTROPY_INFO_0_VAL,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_VAL },
         { "High", OPTION_VAL_HIGH_VAL },
         { "None", OPTION_VAL_NONE_VAL },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_VAL,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_VAL,
      BSNES_CPU_OVERCLOCK_INFO_0_VAL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_VAL  },
         { "20",  OPTION_VAL_20_VAL  },
         { "30",  OPTION_VAL_30_VAL  },
         { "40",  OPTION_VAL_40_VAL  },
         { "50",  OPTION_VAL_50_VAL  },
         { "60",  OPTION_VAL_60_VAL  },
         { "70",  OPTION_VAL_70_VAL  },
         { "80",  OPTION_VAL_80_VAL  },
         { "90",  OPTION_VAL_90_VAL  },
         { "100", OPTION_VAL_100_VAL },
         { "110", OPTION_VAL_110_VAL },
         { "120", OPTION_VAL_120_VAL },
         { "130", OPTION_VAL_130_VAL },
         { "140", OPTION_VAL_140_VAL },
         { "150", OPTION_VAL_150_VAL },
         { "160", OPTION_VAL_160_VAL },
         { "170", OPTION_VAL_170_VAL },
         { "180", OPTION_VAL_180_VAL },
         { "190", OPTION_VAL_190_VAL },
         { "200", OPTION_VAL_200_VAL },
         { "210", OPTION_VAL_210_VAL },
         { "220", OPTION_VAL_220_VAL },
         { "230", OPTION_VAL_230_VAL },
         { "240", OPTION_VAL_240_VAL },
         { "250", OPTION_VAL_250_VAL },
         { "260", OPTION_VAL_260_VAL },
         { "270", OPTION_VAL_270_VAL },
         { "280", OPTION_VAL_280_VAL },
         { "290", OPTION_VAL_290_VAL },
         { "300", OPTION_VAL_300_VAL },
         { "310", OPTION_VAL_310_VAL },
         { "320", OPTION_VAL_320_VAL },
         { "330", OPTION_VAL_330_VAL },
         { "340", OPTION_VAL_340_VAL },
         { "350", OPTION_VAL_350_VAL },
         { "360", OPTION_VAL_360_VAL },
         { "370", OPTION_VAL_370_VAL },
         { "380", OPTION_VAL_380_VAL },
         { "390", OPTION_VAL_390_VAL },
         { "400", OPTION_VAL_400_VAL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_VAL,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_VAL,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_VAL,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_VAL,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_VAL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_VAL  },
         { "20",  OPTION_VAL_20_VAL  },
         { "30",  OPTION_VAL_30_VAL  },
         { "40",  OPTION_VAL_40_VAL  },
         { "50",  OPTION_VAL_50_VAL  },
         { "60",  OPTION_VAL_60_VAL  },
         { "70",  OPTION_VAL_70_VAL  },
         { "80",  OPTION_VAL_80_VAL  },
         { "90",  OPTION_VAL_90_VAL  },
         { "100", OPTION_VAL_100_VAL },
         { "110", OPTION_VAL_110_VAL },
         { "120", OPTION_VAL_120_VAL },
         { "130", OPTION_VAL_130_VAL },
         { "140", OPTION_VAL_140_VAL },
         { "150", OPTION_VAL_150_VAL },
         { "160", OPTION_VAL_160_VAL },
         { "170", OPTION_VAL_170_VAL },
         { "180", OPTION_VAL_180_VAL },
         { "190", OPTION_VAL_190_VAL },
         { "200", OPTION_VAL_200_VAL },
         { "210", OPTION_VAL_210_VAL },
         { "220", OPTION_VAL_220_VAL },
         { "230", OPTION_VAL_230_VAL },
         { "240", OPTION_VAL_240_VAL },
         { "250", OPTION_VAL_250_VAL },
         { "260", OPTION_VAL_260_VAL },
         { "270", OPTION_VAL_270_VAL },
         { "280", OPTION_VAL_280_VAL },
         { "290", OPTION_VAL_290_VAL },
         { "300", OPTION_VAL_300_VAL },
         { "310", OPTION_VAL_310_VAL },
         { "320", OPTION_VAL_320_VAL },
         { "330", OPTION_VAL_330_VAL },
         { "340", OPTION_VAL_340_VAL },
         { "350", OPTION_VAL_350_VAL },
         { "360", OPTION_VAL_360_VAL },
         { "370", OPTION_VAL_370_VAL },
         { "380", OPTION_VAL_380_VAL },
         { "390", OPTION_VAL_390_VAL },
         { "400", OPTION_VAL_400_VAL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_VAL,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_VAL,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_VAL,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_VAL  },
         { "20",  OPTION_VAL_20_VAL  },
         { "30",  OPTION_VAL_30_VAL  },
         { "40",  OPTION_VAL_40_VAL  },
         { "50",  OPTION_VAL_50_VAL  },
         { "60",  OPTION_VAL_60_VAL  },
         { "70",  OPTION_VAL_70_VAL  },
         { "80",  OPTION_VAL_80_VAL  },
         { "90",  OPTION_VAL_90_VAL  },
         { "100", OPTION_VAL_100_VAL },
         { "110", OPTION_VAL_110_VAL },
         { "120", OPTION_VAL_120_VAL },
         { "130", OPTION_VAL_130_VAL },
         { "140", OPTION_VAL_140_VAL },
         { "150", OPTION_VAL_150_VAL },
         { "160", OPTION_VAL_160_VAL },
         { "170", OPTION_VAL_170_VAL },
         { "180", OPTION_VAL_180_VAL },
         { "190", OPTION_VAL_190_VAL },
         { "200", OPTION_VAL_200_VAL },
         { "210", OPTION_VAL_210_VAL },
         { "220", OPTION_VAL_220_VAL },
         { "230", OPTION_VAL_230_VAL },
         { "240", OPTION_VAL_240_VAL },
         { "250", OPTION_VAL_250_VAL },
         { "260", OPTION_VAL_260_VAL },
         { "270", OPTION_VAL_270_VAL },
         { "280", OPTION_VAL_280_VAL },
         { "290", OPTION_VAL_290_VAL },
         { "300", OPTION_VAL_300_VAL },
         { "310", OPTION_VAL_310_VAL },
         { "320", OPTION_VAL_320_VAL },
         { "330", OPTION_VAL_330_VAL },
         { "340", OPTION_VAL_340_VAL },
         { "350", OPTION_VAL_350_VAL },
         { "360", OPTION_VAL_360_VAL },
         { "370", OPTION_VAL_370_VAL },
         { "380", OPTION_VAL_380_VAL },
         { "390", OPTION_VAL_390_VAL },
         { "400", OPTION_VAL_400_VAL },
         { "410", OPTION_VAL_410_VAL },
         { "420", OPTION_VAL_420_VAL },
         { "430", OPTION_VAL_430_VAL },
         { "440", OPTION_VAL_440_VAL },
         { "450", OPTION_VAL_450_VAL },
         { "460", OPTION_VAL_460_VAL },
         { "470", OPTION_VAL_470_VAL },
         { "480", OPTION_VAL_480_VAL },
         { "490", OPTION_VAL_490_VAL },
         { "500", OPTION_VAL_500_VAL },
         { "510", OPTION_VAL_510_VAL },
         { "520", OPTION_VAL_520_VAL },
         { "530", OPTION_VAL_530_VAL },
         { "540", OPTION_VAL_540_VAL },
         { "550", OPTION_VAL_550_VAL },
         { "560", OPTION_VAL_560_VAL },
         { "570", OPTION_VAL_570_VAL },
         { "580", OPTION_VAL_580_VAL },
         { "590", OPTION_VAL_590_VAL },
         { "600", OPTION_VAL_600_VAL },
         { "610", OPTION_VAL_610_VAL },
         { "620", OPTION_VAL_620_VAL },
         { "630", OPTION_VAL_630_VAL },
         { "640", OPTION_VAL_640_VAL },
         { "650", OPTION_VAL_650_VAL },
         { "660", OPTION_VAL_660_VAL },
         { "670", OPTION_VAL_670_VAL },
         { "680", OPTION_VAL_680_VAL },
         { "690", OPTION_VAL_690_VAL },
         { "700", OPTION_VAL_700_VAL },
         { "710", OPTION_VAL_710_VAL },
         { "720", OPTION_VAL_720_VAL },
         { "730", OPTION_VAL_730_VAL },
         { "740", OPTION_VAL_740_VAL },
         { "750", OPTION_VAL_750_VAL },
         { "760", OPTION_VAL_760_VAL },
         { "770", OPTION_VAL_770_VAL },
         { "780", OPTION_VAL_780_VAL },
         { "790", OPTION_VAL_790_VAL },
         { "800", OPTION_VAL_800_VAL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_VAL,
      BSNES_PPU_FAST_LABEL_CAT_VAL,
      BSNES_PPU_FAST_INFO_0_VAL,
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
      BSNES_PPU_DEINTERLACE_LABEL_VAL,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_VAL,
      BSNES_PPU_DEINTERLACE_INFO_0_VAL,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_VAL,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_VAL,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_VAL,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_VAL,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_VAL,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_VAL,
      BSNES_MODE7_SCALE_LABEL_CAT_VAL,
      BSNES_MODE7_SCALE_INFO_0_VAL,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_VAL  },
         { "2x", OPTION_VAL_2X_VAL  },
         { "3x", OPTION_VAL_3X_VAL  },
         { "4x", OPTION_VAL_4X_VAL  },
         { "5x", OPTION_VAL_5X_VAL },
         { "6x", OPTION_VAL_6X_VAL },
         { "7x", OPTION_VAL_7X_VAL },
         { "8x", OPTION_VAL_8X_VAL },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_VAL,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_VAL,
      BSNES_MODE7_PERSPECTIVE_INFO_0_VAL,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_VAL,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_VAL,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_VAL,
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
      BSNES_MODE7_MOSAIC_LABEL_VAL,
      BSNES_MODE7_MOSAIC_LABEL_CAT_VAL,
      BSNES_MODE7_MOSAIC_INFO_0_VAL,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_VAL,
      BSNES_DSP_FAST_LABEL_CAT_VAL,
      BSNES_DSP_FAST_INFO_0_VAL,
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
      BSNES_DSP_CUBIC_LABEL_VAL,
      BSNES_DSP_CUBIC_LABEL_CAT_VAL,
      BSNES_DSP_CUBIC_INFO_0_VAL,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_VAL,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_VAL,
      BSNES_DSP_ECHO_SHADOW_INFO_0_VAL,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_VAL,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_VAL,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_VAL,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_VAL,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_VAL,
      NULL,
      BSNES_SGB_BIOS_INFO_0_VAL,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_VAL   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_VAL },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_VAL,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_VAL,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_VAL  },
         { "2",   OPTION_VAL_2_VAL },
         { "3",   OPTION_VAL_3_VAL },
         { "4",   OPTION_VAL_4_VAL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_VAL,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_VAL,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_VAL,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_VAL,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_VAL,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_VAL,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_val = {
   option_cats_val,
   option_defs_val
};

/* RETRO_LANGUAGE_VN */

#define CATEGORY_VIDEO_LABEL_VN "Hình ảnh"
#define CATEGORY_VIDEO_INFO_0_VN "Điều chỉnh thiết lập cho video ra."
#define CATEGORY_AUDIO_LABEL_VN "Âm thanh"
#define CATEGORY_AUDIO_INFO_0_VN "Điều chỉnh thiết lập cho âm thanh ra."
#define CATEGORY_MODE7_LABEL_VN NULL
#define CATEGORY_MODE7_INFO_0_VN NULL
#define CATEGORY_SGB_LABEL_VN NULL
#define CATEGORY_SGB_INFO_0_VN NULL
#define CATEGORY_LIGHTGUN_LABEL_VN NULL
#define CATEGORY_LIGHTGUN_INFO_0_VN NULL
#define CATEGORY_OVERCLOCK_LABEL_VN NULL
#define CATEGORY_OVERCLOCK_INFO_0_VN NULL
#define CATEGORY_HACK_LABEL_VN NULL
#define CATEGORY_HACK_INFO_0_VN NULL
#define BSNES_ASPECT_RATIO_LABEL_VN NULL
#define BSNES_ASPECT_RATIO_INFO_0_VN NULL
#define OPTION_VAL_AUTO_VN "Tự động"
#define OPTION_VAL_8_7_VN NULL
#define OPTION_VAL_4_3_VN NULL
#define OPTION_VAL_NTSC_VN NULL
#define OPTION_VAL_PAL_VN NULL
#define BSNES_PPU_SHOW_OVERSCAN_LABEL_VN NULL
#define BSNES_PPU_SHOW_OVERSCAN_INFO_0_VN NULL
#define OPTION_VAL_OFF_VN NULL
#define BSNES_BLUR_EMULATION_LABEL_VN NULL
#define BSNES_BLUR_EMULATION_INFO_0_VN NULL
#define BSNES_HOTFIXES_LABEL_VN NULL
#define BSNES_HOTFIXES_INFO_0_VN NULL
#define BSNES_ENTROPY_LABEL_VN NULL
#define BSNES_ENTROPY_INFO_0_VN NULL
#define OPTION_VAL_LOW_VN NULL
#define OPTION_VAL_HIGH_VN NULL
#define OPTION_VAL_NONE_VN NULL
#define BSNES_CPU_OVERCLOCK_LABEL_VN NULL
#define BSNES_CPU_OVERCLOCK_LABEL_CAT_VN NULL
#define BSNES_CPU_OVERCLOCK_INFO_0_VN NULL
#define OPTION_VAL_10_VN NULL
#define OPTION_VAL_20_VN NULL
#define OPTION_VAL_30_VN NULL
#define OPTION_VAL_40_VN NULL
#define OPTION_VAL_50_VN NULL
#define OPTION_VAL_60_VN NULL
#define OPTION_VAL_70_VN NULL
#define OPTION_VAL_80_VN NULL
#define OPTION_VAL_90_VN NULL
#define OPTION_VAL_100_VN NULL
#define OPTION_VAL_110_VN NULL
#define OPTION_VAL_120_VN NULL
#define OPTION_VAL_130_VN NULL
#define OPTION_VAL_140_VN NULL
#define OPTION_VAL_150_VN NULL
#define OPTION_VAL_160_VN NULL
#define OPTION_VAL_170_VN NULL
#define OPTION_VAL_180_VN NULL
#define OPTION_VAL_190_VN NULL
#define OPTION_VAL_200_VN NULL
#define OPTION_VAL_210_VN NULL
#define OPTION_VAL_220_VN NULL
#define OPTION_VAL_230_VN NULL
#define OPTION_VAL_240_VN NULL
#define OPTION_VAL_250_VN NULL
#define OPTION_VAL_260_VN NULL
#define OPTION_VAL_270_VN NULL
#define OPTION_VAL_280_VN NULL
#define OPTION_VAL_290_VN NULL
#define OPTION_VAL_300_VN NULL
#define OPTION_VAL_310_VN NULL
#define OPTION_VAL_320_VN NULL
#define OPTION_VAL_330_VN NULL
#define OPTION_VAL_340_VN NULL
#define OPTION_VAL_350_VN NULL
#define OPTION_VAL_360_VN NULL
#define OPTION_VAL_370_VN NULL
#define OPTION_VAL_380_VN NULL
#define OPTION_VAL_390_VN NULL
#define OPTION_VAL_400_VN NULL
#define BSNES_CPU_FASTMATH_LABEL_VN NULL
#define BSNES_CPU_FASTMATH_INFO_0_VN NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_VN NULL
#define BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_VN NULL
#define BSNES_CPU_SA1_OVERCLOCK_INFO_0_VN NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_VN NULL
#define BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_VN NULL
#define BSNES_CPU_SFX_OVERCLOCK_INFO_0_VN NULL
#define OPTION_VAL_410_VN NULL
#define OPTION_VAL_420_VN NULL
#define OPTION_VAL_430_VN NULL
#define OPTION_VAL_440_VN NULL
#define OPTION_VAL_450_VN NULL
#define OPTION_VAL_460_VN NULL
#define OPTION_VAL_470_VN NULL
#define OPTION_VAL_480_VN NULL
#define OPTION_VAL_490_VN NULL
#define OPTION_VAL_500_VN NULL
#define OPTION_VAL_510_VN NULL
#define OPTION_VAL_520_VN NULL
#define OPTION_VAL_530_VN NULL
#define OPTION_VAL_540_VN NULL
#define OPTION_VAL_550_VN NULL
#define OPTION_VAL_560_VN NULL
#define OPTION_VAL_570_VN NULL
#define OPTION_VAL_580_VN NULL
#define OPTION_VAL_590_VN NULL
#define OPTION_VAL_600_VN NULL
#define OPTION_VAL_610_VN NULL
#define OPTION_VAL_620_VN NULL
#define OPTION_VAL_630_VN NULL
#define OPTION_VAL_640_VN NULL
#define OPTION_VAL_650_VN NULL
#define OPTION_VAL_660_VN NULL
#define OPTION_VAL_670_VN NULL
#define OPTION_VAL_680_VN NULL
#define OPTION_VAL_690_VN NULL
#define OPTION_VAL_700_VN NULL
#define OPTION_VAL_710_VN NULL
#define OPTION_VAL_720_VN NULL
#define OPTION_VAL_730_VN NULL
#define OPTION_VAL_740_VN NULL
#define OPTION_VAL_750_VN NULL
#define OPTION_VAL_760_VN NULL
#define OPTION_VAL_770_VN NULL
#define OPTION_VAL_780_VN NULL
#define OPTION_VAL_790_VN NULL
#define OPTION_VAL_800_VN NULL
#define BSNES_PPU_FAST_LABEL_VN NULL
#define BSNES_PPU_FAST_LABEL_CAT_VN NULL
#define BSNES_PPU_FAST_INFO_0_VN NULL
#define BSNES_PPU_DEINTERLACE_LABEL_VN NULL
#define BSNES_PPU_DEINTERLACE_LABEL_CAT_VN NULL
#define BSNES_PPU_DEINTERLACE_INFO_0_VN NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_VN NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_VN NULL
#define BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_VN NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_LABEL_VN NULL
#define BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_VN NULL
#define BSNES_MODE7_SCALE_LABEL_VN NULL
#define BSNES_MODE7_SCALE_LABEL_CAT_VN NULL
#define BSNES_MODE7_SCALE_INFO_0_VN NULL
#define OPTION_VAL_1X_VN NULL
#define OPTION_VAL_2X_VN NULL
#define OPTION_VAL_3X_VN NULL
#define OPTION_VAL_4X_VN NULL
#define OPTION_VAL_5X_VN NULL
#define OPTION_VAL_6X_VN NULL
#define OPTION_VAL_7X_VN NULL
#define OPTION_VAL_8X_VN NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_VN NULL
#define BSNES_MODE7_PERSPECTIVE_LABEL_CAT_VN NULL
#define BSNES_MODE7_PERSPECTIVE_INFO_0_VN NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_VN NULL
#define BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_VN NULL
#define BSNES_MODE7_SUPERSAMPLE_INFO_0_VN NULL
#define BSNES_MODE7_MOSAIC_LABEL_VN NULL
#define BSNES_MODE7_MOSAIC_LABEL_CAT_VN NULL
#define BSNES_MODE7_MOSAIC_INFO_0_VN NULL
#define BSNES_DSP_FAST_LABEL_VN NULL
#define BSNES_DSP_FAST_LABEL_CAT_VN NULL
#define BSNES_DSP_FAST_INFO_0_VN NULL
#define BSNES_DSP_CUBIC_LABEL_VN NULL
#define BSNES_DSP_CUBIC_LABEL_CAT_VN NULL
#define BSNES_DSP_CUBIC_INFO_0_VN NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_VN NULL
#define BSNES_DSP_ECHO_SHADOW_LABEL_CAT_VN NULL
#define BSNES_DSP_ECHO_SHADOW_INFO_0_VN NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_VN NULL
#define BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_VN NULL
#define BSNES_COPROCESSOR_PREFER_HLE_LABEL_VN NULL
#define BSNES_COPROCESSOR_PREFER_HLE_INFO_0_VN NULL
#define BSNES_SGB_BIOS_LABEL_VN NULL
#define BSNES_SGB_BIOS_INFO_0_VN NULL
#define OPTION_VAL_SGB1_SFC_VN NULL
#define OPTION_VAL_SGB2_SFC_VN NULL
#define BSNES_RUN_AHEAD_FRAMES_LABEL_VN NULL
#define BSNES_RUN_AHEAD_FRAMES_INFO_0_VN NULL
#define OPTION_VAL_1_VN NULL
#define OPTION_VAL_2_VN NULL
#define OPTION_VAL_3_VN NULL
#define OPTION_VAL_4_VN NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_VN NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_VN NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_VN NULL
#define BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_VN NULL
#define BSNES_HIDE_SGB_BORDER_LABEL_VN NULL
#define BSNES_HIDE_SGB_BORDER_INFO_0_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_VN,
      CATEGORY_VIDEO_INFO_0_VN
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_VN,
      CATEGORY_AUDIO_INFO_0_VN
   },
   {
      "mode7",
      CATEGORY_MODE7_LABEL_VN,
      CATEGORY_MODE7_INFO_0_VN
   },
   {
      "sgb",
      CATEGORY_SGB_LABEL_VN,
      CATEGORY_SGB_INFO_0_VN
   },
   {
      "lightgun",
      CATEGORY_LIGHTGUN_LABEL_VN,
      CATEGORY_LIGHTGUN_INFO_0_VN
   },
   {
      "overclock",
      CATEGORY_OVERCLOCK_LABEL_VN,
      CATEGORY_OVERCLOCK_INFO_0_VN
   },
   {
      "hack",
      CATEGORY_HACK_LABEL_VN,
      CATEGORY_HACK_INFO_0_VN
   },

   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "bsnes_aspect_ratio",
      BSNES_ASPECT_RATIO_LABEL_VN,
      NULL,
      BSNES_ASPECT_RATIO_INFO_0_VN,
      NULL,
      "video",
      {
         { "Auto", OPTION_VAL_AUTO_VN },
         { "8:7",  OPTION_VAL_8_7_VN },
         { "4:3",  OPTION_VAL_4_3_VN },
         { "NTSC", OPTION_VAL_NTSC_VN },
         { "PAL",  OPTION_VAL_PAL_VN },
         { NULL, NULL },
      },
      "Auto"
   },
   {
      "bsnes_ppu_show_overscan",
      BSNES_PPU_SHOW_OVERSCAN_LABEL_VN,
      NULL,
      BSNES_PPU_SHOW_OVERSCAN_INFO_0_VN,
      NULL,
      "video",
      {
         { "OFF", OPTION_VAL_OFF_VN },
         { "ON",  "disabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_blur_emulation",
      BSNES_BLUR_EMULATION_LABEL_VN,
      NULL,
      BSNES_BLUR_EMULATION_INFO_0_VN,
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
      "bsnes_hotfixes",
      BSNES_HOTFIXES_LABEL_VN,
      NULL,
      BSNES_HOTFIXES_INFO_0_VN,
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
      BSNES_ENTROPY_LABEL_VN,
      NULL,
      BSNES_ENTROPY_INFO_0_VN,
      NULL,
      NULL,
      {
         { "Low",  OPTION_VAL_LOW_VN },
         { "High", OPTION_VAL_HIGH_VN },
         { "None", OPTION_VAL_NONE_VN },
         { NULL, NULL },
      },
      "Low"
   },
   {
      "bsnes_cpu_overclock",
      BSNES_CPU_OVERCLOCK_LABEL_VN,
      BSNES_CPU_OVERCLOCK_LABEL_CAT_VN,
      BSNES_CPU_OVERCLOCK_INFO_0_VN,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_VN  },
         { "20",  OPTION_VAL_20_VN  },
         { "30",  OPTION_VAL_30_VN  },
         { "40",  OPTION_VAL_40_VN  },
         { "50",  OPTION_VAL_50_VN  },
         { "60",  OPTION_VAL_60_VN  },
         { "70",  OPTION_VAL_70_VN  },
         { "80",  OPTION_VAL_80_VN  },
         { "90",  OPTION_VAL_90_VN  },
         { "100", OPTION_VAL_100_VN },
         { "110", OPTION_VAL_110_VN },
         { "120", OPTION_VAL_120_VN },
         { "130", OPTION_VAL_130_VN },
         { "140", OPTION_VAL_140_VN },
         { "150", OPTION_VAL_150_VN },
         { "160", OPTION_VAL_160_VN },
         { "170", OPTION_VAL_170_VN },
         { "180", OPTION_VAL_180_VN },
         { "190", OPTION_VAL_190_VN },
         { "200", OPTION_VAL_200_VN },
         { "210", OPTION_VAL_210_VN },
         { "220", OPTION_VAL_220_VN },
         { "230", OPTION_VAL_230_VN },
         { "240", OPTION_VAL_240_VN },
         { "250", OPTION_VAL_250_VN },
         { "260", OPTION_VAL_260_VN },
         { "270", OPTION_VAL_270_VN },
         { "280", OPTION_VAL_280_VN },
         { "290", OPTION_VAL_290_VN },
         { "300", OPTION_VAL_300_VN },
         { "310", OPTION_VAL_310_VN },
         { "320", OPTION_VAL_320_VN },
         { "330", OPTION_VAL_330_VN },
         { "340", OPTION_VAL_340_VN },
         { "350", OPTION_VAL_350_VN },
         { "360", OPTION_VAL_360_VN },
         { "370", OPTION_VAL_370_VN },
         { "380", OPTION_VAL_380_VN },
         { "390", OPTION_VAL_390_VN },
         { "400", OPTION_VAL_400_VN },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_fastmath",
      BSNES_CPU_FASTMATH_LABEL_VN,
      NULL,
      BSNES_CPU_FASTMATH_INFO_0_VN,
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
      "bsnes_cpu_sa1_overclock",
      BSNES_CPU_SA1_OVERCLOCK_LABEL_VN,
      BSNES_CPU_SA1_OVERCLOCK_LABEL_CAT_VN,
      BSNES_CPU_SA1_OVERCLOCK_INFO_0_VN,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_VN  },
         { "20",  OPTION_VAL_20_VN  },
         { "30",  OPTION_VAL_30_VN  },
         { "40",  OPTION_VAL_40_VN  },
         { "50",  OPTION_VAL_50_VN  },
         { "60",  OPTION_VAL_60_VN  },
         { "70",  OPTION_VAL_70_VN  },
         { "80",  OPTION_VAL_80_VN  },
         { "90",  OPTION_VAL_90_VN  },
         { "100", OPTION_VAL_100_VN },
         { "110", OPTION_VAL_110_VN },
         { "120", OPTION_VAL_120_VN },
         { "130", OPTION_VAL_130_VN },
         { "140", OPTION_VAL_140_VN },
         { "150", OPTION_VAL_150_VN },
         { "160", OPTION_VAL_160_VN },
         { "170", OPTION_VAL_170_VN },
         { "180", OPTION_VAL_180_VN },
         { "190", OPTION_VAL_190_VN },
         { "200", OPTION_VAL_200_VN },
         { "210", OPTION_VAL_210_VN },
         { "220", OPTION_VAL_220_VN },
         { "230", OPTION_VAL_230_VN },
         { "240", OPTION_VAL_240_VN },
         { "250", OPTION_VAL_250_VN },
         { "260", OPTION_VAL_260_VN },
         { "270", OPTION_VAL_270_VN },
         { "280", OPTION_VAL_280_VN },
         { "290", OPTION_VAL_290_VN },
         { "300", OPTION_VAL_300_VN },
         { "310", OPTION_VAL_310_VN },
         { "320", OPTION_VAL_320_VN },
         { "330", OPTION_VAL_330_VN },
         { "340", OPTION_VAL_340_VN },
         { "350", OPTION_VAL_350_VN },
         { "360", OPTION_VAL_360_VN },
         { "370", OPTION_VAL_370_VN },
         { "380", OPTION_VAL_380_VN },
         { "390", OPTION_VAL_390_VN },
         { "400", OPTION_VAL_400_VN },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_cpu_sfx_overclock",
      BSNES_CPU_SFX_OVERCLOCK_LABEL_VN,
      BSNES_CPU_SFX_OVERCLOCK_LABEL_CAT_VN,
      BSNES_CPU_SFX_OVERCLOCK_INFO_0_VN,
      NULL,
      "overclock",
      {
         { "10",  OPTION_VAL_10_VN  },
         { "20",  OPTION_VAL_20_VN  },
         { "30",  OPTION_VAL_30_VN  },
         { "40",  OPTION_VAL_40_VN  },
         { "50",  OPTION_VAL_50_VN  },
         { "60",  OPTION_VAL_60_VN  },
         { "70",  OPTION_VAL_70_VN  },
         { "80",  OPTION_VAL_80_VN  },
         { "90",  OPTION_VAL_90_VN  },
         { "100", OPTION_VAL_100_VN },
         { "110", OPTION_VAL_110_VN },
         { "120", OPTION_VAL_120_VN },
         { "130", OPTION_VAL_130_VN },
         { "140", OPTION_VAL_140_VN },
         { "150", OPTION_VAL_150_VN },
         { "160", OPTION_VAL_160_VN },
         { "170", OPTION_VAL_170_VN },
         { "180", OPTION_VAL_180_VN },
         { "190", OPTION_VAL_190_VN },
         { "200", OPTION_VAL_200_VN },
         { "210", OPTION_VAL_210_VN },
         { "220", OPTION_VAL_220_VN },
         { "230", OPTION_VAL_230_VN },
         { "240", OPTION_VAL_240_VN },
         { "250", OPTION_VAL_250_VN },
         { "260", OPTION_VAL_260_VN },
         { "270", OPTION_VAL_270_VN },
         { "280", OPTION_VAL_280_VN },
         { "290", OPTION_VAL_290_VN },
         { "300", OPTION_VAL_300_VN },
         { "310", OPTION_VAL_310_VN },
         { "320", OPTION_VAL_320_VN },
         { "330", OPTION_VAL_330_VN },
         { "340", OPTION_VAL_340_VN },
         { "350", OPTION_VAL_350_VN },
         { "360", OPTION_VAL_360_VN },
         { "370", OPTION_VAL_370_VN },
         { "380", OPTION_VAL_380_VN },
         { "390", OPTION_VAL_390_VN },
         { "400", OPTION_VAL_400_VN },
         { "410", OPTION_VAL_410_VN },
         { "420", OPTION_VAL_420_VN },
         { "430", OPTION_VAL_430_VN },
         { "440", OPTION_VAL_440_VN },
         { "450", OPTION_VAL_450_VN },
         { "460", OPTION_VAL_460_VN },
         { "470", OPTION_VAL_470_VN },
         { "480", OPTION_VAL_480_VN },
         { "490", OPTION_VAL_490_VN },
         { "500", OPTION_VAL_500_VN },
         { "510", OPTION_VAL_510_VN },
         { "520", OPTION_VAL_520_VN },
         { "530", OPTION_VAL_530_VN },
         { "540", OPTION_VAL_540_VN },
         { "550", OPTION_VAL_550_VN },
         { "560", OPTION_VAL_560_VN },
         { "570", OPTION_VAL_570_VN },
         { "580", OPTION_VAL_580_VN },
         { "590", OPTION_VAL_590_VN },
         { "600", OPTION_VAL_600_VN },
         { "610", OPTION_VAL_610_VN },
         { "620", OPTION_VAL_620_VN },
         { "630", OPTION_VAL_630_VN },
         { "640", OPTION_VAL_640_VN },
         { "650", OPTION_VAL_650_VN },
         { "660", OPTION_VAL_660_VN },
         { "670", OPTION_VAL_670_VN },
         { "680", OPTION_VAL_680_VN },
         { "690", OPTION_VAL_690_VN },
         { "700", OPTION_VAL_700_VN },
         { "710", OPTION_VAL_710_VN },
         { "720", OPTION_VAL_720_VN },
         { "730", OPTION_VAL_730_VN },
         { "740", OPTION_VAL_740_VN },
         { "750", OPTION_VAL_750_VN },
         { "760", OPTION_VAL_760_VN },
         { "770", OPTION_VAL_770_VN },
         { "780", OPTION_VAL_780_VN },
         { "790", OPTION_VAL_790_VN },
         { "800", OPTION_VAL_800_VN },
         { NULL, NULL },
      },
      "100"
   },
   {
      "bsnes_ppu_fast",
      BSNES_PPU_FAST_LABEL_VN,
      BSNES_PPU_FAST_LABEL_CAT_VN,
      BSNES_PPU_FAST_INFO_0_VN,
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
      BSNES_PPU_DEINTERLACE_LABEL_VN,
      BSNES_PPU_DEINTERLACE_LABEL_CAT_VN,
      BSNES_PPU_DEINTERLACE_INFO_0_VN,
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
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_VN,
      BSNES_PPU_NO_SPRITE_LIMIT_LABEL_CAT_VN,
      BSNES_PPU_NO_SPRITE_LIMIT_INFO_0_VN,
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
      BSNES_PPU_NO_VRAM_BLOCKING_LABEL_VN,
      NULL,
      BSNES_PPU_NO_VRAM_BLOCKING_INFO_0_VN,
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
      "bsnes_mode7_scale",
      BSNES_MODE7_SCALE_LABEL_VN,
      BSNES_MODE7_SCALE_LABEL_CAT_VN,
      BSNES_MODE7_SCALE_INFO_0_VN,
      NULL,
      "mode7",
      {
         { "1x", OPTION_VAL_1X_VN  },
         { "2x", OPTION_VAL_2X_VN  },
         { "3x", OPTION_VAL_3X_VN  },
         { "4x", OPTION_VAL_4X_VN  },
         { "5x", OPTION_VAL_5X_VN },
         { "6x", OPTION_VAL_6X_VN },
         { "7x", OPTION_VAL_7X_VN },
         { "8x", OPTION_VAL_8X_VN },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "bsnes_mode7_perspective",
      BSNES_MODE7_PERSPECTIVE_LABEL_VN,
      BSNES_MODE7_PERSPECTIVE_LABEL_CAT_VN,
      BSNES_MODE7_PERSPECTIVE_INFO_0_VN,
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
      BSNES_MODE7_SUPERSAMPLE_LABEL_VN,
      BSNES_MODE7_SUPERSAMPLE_LABEL_CAT_VN,
      BSNES_MODE7_SUPERSAMPLE_INFO_0_VN,
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
      BSNES_MODE7_MOSAIC_LABEL_VN,
      BSNES_MODE7_MOSAIC_LABEL_CAT_VN,
      BSNES_MODE7_MOSAIC_INFO_0_VN,
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
      "bsnes_dsp_fast",
      BSNES_DSP_FAST_LABEL_VN,
      BSNES_DSP_FAST_LABEL_CAT_VN,
      BSNES_DSP_FAST_INFO_0_VN,
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
      BSNES_DSP_CUBIC_LABEL_VN,
      BSNES_DSP_CUBIC_LABEL_CAT_VN,
      BSNES_DSP_CUBIC_INFO_0_VN,
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
      BSNES_DSP_ECHO_SHADOW_LABEL_VN,
      BSNES_DSP_ECHO_SHADOW_LABEL_CAT_VN,
      BSNES_DSP_ECHO_SHADOW_INFO_0_VN,
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
      "bsnes_coprocessor_delayed_sync",
      BSNES_COPROCESSOR_DELAYED_SYNC_LABEL_VN,
      NULL,
      BSNES_COPROCESSOR_DELAYED_SYNC_INFO_0_VN,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_coprocessor_prefer_hle",
      BSNES_COPROCESSOR_PREFER_HLE_LABEL_VN,
      NULL,
      BSNES_COPROCESSOR_PREFER_HLE_INFO_0_VN,
      NULL,
      NULL,
      {
         { "ON",  "enabled"  },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "bsnes_sgb_bios",
      BSNES_SGB_BIOS_LABEL_VN,
      NULL,
      BSNES_SGB_BIOS_INFO_0_VN,
      NULL,
      "sgb",
      {
         { "SGB1.sfc", OPTION_VAL_SGB1_SFC_VN   },
         { "SGB2.sfc", OPTION_VAL_SGB2_SFC_VN },
         { NULL, NULL },
      },
      "SGB1.sfc"
   },
   {
      "bsnes_run_ahead_frames",
      BSNES_RUN_AHEAD_FRAMES_LABEL_VN,
      NULL,
      BSNES_RUN_AHEAD_FRAMES_INFO_0_VN,
      NULL,
      NULL,
      {
         { "OFF", "disabled" },
         { "1",   OPTION_VAL_1_VN  },
         { "2",   OPTION_VAL_2_VN },
         { "3",   OPTION_VAL_3_VN },
         { "4",   OPTION_VAL_4_VN },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_touchscreen_lightgun",
      BSNES_TOUCHSCREEN_LIGHTGUN_LABEL_VN,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_INFO_0_VN,
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
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_LABEL_VN,
      NULL,
      BSNES_TOUCHSCREEN_LIGHTGUN_SUPERSCOPE_REVERSE_INFO_0_VN,
      NULL,
      "lightgun",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "bsnes_hide_sgb_border",
      BSNES_HIDE_SGB_BORDER_LABEL_VN,
      NULL,
      BSNES_HIDE_SGB_BORDER_INFO_0_VN,
      NULL,
      "sgb",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled"  },
         { NULL, NULL },
      },
      "OFF"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif