#pragma once
#include <emulator/emulator.hpp>
#include <filter/filter.hpp>
#include <lzma/lzma.hpp>
#include <nall/directory.hpp>
#include <nall/instance.hpp>
#include <nall/decode/rle.hpp>
#include <nall/decode/zip.hpp>
#include <nall/encode/rle.hpp>
#include <nall/encode/zip.hpp>
#include <nall/hash/crc16.hpp>
#include "resources.hpp"

struct Program : Emulator::Platform
{
	Program(Emulator::Interface * emu);
	~Program();

	auto open(uint id, string name, vfs::file::mode mode, bool required) -> shared_pointer<vfs::file> override;
	auto load(uint id, string name, string type, vector<string> options = {}) -> Emulator::Platform::Load override;
	auto videoFrame(const uint16* data, uint pitch, uint width, uint height, uint scale) -> void override;
	auto audioFrame(const double* samples, uint channels) -> void override;
	auto inputPoll(uint port, uint device, uint input) -> int16 override;
	auto inputRumble(uint port, uint device, uint input, bool enable) -> void override;

	auto load() -> void;
	auto loadFile(string location) -> vector<uint8_t>;
	auto loadSuperFamicom(string location) -> bool;
	auto loadGameBoy(string location) -> bool;
	auto loadBSMemory(string location) -> bool;

	auto save() -> void;

	auto openRomSuperFamicom(string name, vfs::file::mode mode) -> shared_pointer<vfs::file>;
	auto openRomGameBoy(string name, vfs::file::mode mode) -> shared_pointer<vfs::file>;
	auto openRomBSMemory(string name, vfs::file::mode mode) -> shared_pointer<vfs::file>;

	auto hackPatchMemory(vector<uint8_t>& data) -> void;
	auto updateVideoPalette() -> void;

	string base_name;

	bool overscan{false};

public:
	struct Game {
		explicit operator bool() const { return (bool)location; }

		string option;
		string location;
		string manifest;
		Markup::Node document;
		boolean patched;
		boolean verified;
	};

	struct SuperFamicom : Game {
		string title;
		string region;
		vector<uint8_t> program;
		vector<uint8_t> data;
		vector<uint8_t> expansion;
		vector<uint8_t> firmware;
	} superFamicom;

	struct GameBoy : Game {
		vector<uint8_t> program;
	} gameBoy;

	struct BSMemory : Game {
		vector<uint8_t> program;
	} bsMemory;

	uint32_t palette[32768];
	uint32_t paletteDimmed[32768];
	uint32_t videoOut[2304*2160];

	Filter::Render filterRender;
	Filter::Size filterSize;

	double luminance{1.0};
	double saturation{1.0};
	double gamma{1.5};
};
