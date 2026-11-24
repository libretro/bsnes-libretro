name := bsnes_libretro
local := false
openmp := true
flags += -Wno-narrowing -Wno-multichar -g -fPIC

ifeq ($(platform), ios-arm64)
	flags += -fPIC -miphoneos-version-min=11.0 -Wno-error=implicit-function-declaration -DHAVE_POSIX_MEMALIGN
	options += -dynamiclib
else ifeq ($(platform), tvos-arm64)
	flags += -fPIC -mtvos-version-min=11.0 -Wno-error=implicit-function-declaration -DHAVE_POSIX_MEMALIGN
	options += -dynamiclib
else ifeq ($(platform), libnx)
	flags += -march=armv8-a+crc -mtune=cortex-a57 -mtp=soft -mcpu=cortex-a57+crc+fp+simd -DHAVE_POSIX_MEMALIGN
	flags += -O2 -ftree-vectorize -ffast-math -funsafe-math-optimizations -fPIE -I$(PORTLIBS)/include/ -I$(LIBNX)/include/ -ffunction-sections -fdata-sections -ftls-model=local-exec
	flags += -D__SWITCH__=1 -D__aarch64__=1 -DSWITCH -DHAVE_LIBNX
	name := bsnes_libretro_libnx
else ifeq ($(platform), libounce)
	name := bsnes_libretro_libounce
	flags += -D__SWITCH__=1 -D__aarch64__=1
endif

objects := libretro program $(objects)
objects := $(patsubst %,obj/%.o,$(objects))

ifeq ($(platform), libounce)
	flags := $(filter-out -march=native -fopenmp,$(flags))
	options := $(filter-out -fopenmp,$(options))
	include $(DEVKITPRO)/libounce/switch2_rules

	compiler := $(CXX)
	options += $(LDFLAGS) $(LIBS)
endif

obj/libretro.o: target-libretro/libretro.cpp
obj/program.o:  target-libretro/program.cpp

all: $(objects)
ifneq ($(filter $(platform),linux bsd unix unix-armv7-hardfloat-neon),)
	$(strip $(compiler) -o out/bsnes_libretro.so -shared $(objects) -Wl,--no-undefined -Wl,--version-script=target-libretro/link.T -lgomp -Wl,-Bdynamic $(options))
else ifeq ($(platform),haiku)
	$(strip $(compiler) -o out/bsnes_libretro.so -shared $(objects) -Wl,--no-undefined -Wl,--version-script=target-libretro/link.T -lgomp -Wl,-Bdynamic $(options))
else ifeq ($(platform),windows)
	$(strip $(compiler) -o out/bsnes_libretro.dll -shared $(objects) -Wl,--no-undefined -Wl,--version-script=target-libretro/link.T -lgomp -Wl,-Bdynamic $(options))
else ifeq ($(platform),libnx)
	$(strip $(AR) rcs out/bsnes_libretro_libnx.a $(objects))
else ifeq ($(platform),libounce)
	$(strip $(compiler) -o out/bsnes_libretro_libounce.elf -shared $(objects) -Wl,-soname,bsnes_libretro_libounce.nro -Wl,--version-script=target-libretro/link.T $(options))
	$(strip $(DEVKITPRO)/tools/bin/elf2nro out/bsnes_libretro_libounce.elf out/bsnes_libretro_libounce.nro)
else ifeq ($(platform),macos)
	$(strip $(compiler) -o out/bsnes_libretro.dylib -shared $(objects) -lpthread -ldl)
else ifeq ($(platform),ios-arm64)
	$(strip c++ -arch arm64 -marm -miphoneos-version-min=11.0 -isysroot $(shell xcodebuild -version -sdk iphoneos Path) -o out/bsnes_libretro_ios.dylib -shared $(objects) -lpthread -ldl)
else ifeq ($(platform), tvos-arm64)
	$(strip c++ -arch arm64 -marm -mtvos-version-min=11.0 -isysroot $(shell xcodebuild -version -sdk appletvos Path) -o out/bsnes_libretro_tvos.dylib -shared $(objects) -lpthread -ldl)
endif
