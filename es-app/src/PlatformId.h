#pragma once
#ifndef ES_APP_PLATFORM_ID_H
#define ES_APP_PLATFORM_ID_H

#include <string>
#include <map>

namespace PlatformIds
{
	enum PlatformId : unsigned int
	{
		PLATFORM_UNKNOWN = 0,

		THREEDO, // name can't start with a constant
		AMIGA,
		AMSTRAD_CPC,
		APPLE_II,
		ARCADE,
		ATARI_800,
		ATARI_2600,
		ATARI_5200,
		ATARI_7800,
		ATARI_LYNX,
		ATARI_ST, // Atari ST/STE/Falcon
		ATARI_JAGUAR,
		ATARI_JAGUAR_CD,
		ATARI_XE,
		COLECOVISION,
		COMMODORE_64,
		COMMODORE_VIC20,
		INTELLIVISION,
		MAC_OS,
		XBOX,
		XBOX_360,
		MSX,
		NEOGEO,
		NEOGEO_POCKET,
		NEOGEO_POCKET_COLOR,
		NINTENDO_3DS,
		NINTENDO_64,
		NINTENDO_64_DISK_DRIVE,
		NINTENDO_DS,
		FAMICOM_DISK_SYSTEM,
		NINTENDO_ENTERTAINMENT_SYSTEM,
		GAME_BOY,
		GAME_BOY_ADVANCE,
		GAME_BOY_COLOR,
		SUPER_GAME_BOY,
		NINTENDO_GAMECUBE,
		NINTENDO_WII,
		NINTENDO_WII_U,
		NINTENDO_SWITCH,
		NINTENDO_VIRTUAL_BOY,
		NINTENDO_GAME_AND_WATCH,
		PC,
		PC_88,
		PC_98,
		SEGA_32X,
		SEGA_CD,
		SEGA_DREAMCAST,
		SEGA_GAME_GEAR,
		SEGA_GENESIS,
		SEGA_MASTER_SYSTEM,
		SEGA_MEGA_DRIVE,
		SEGA_SATURN,
		SEGA_SG1000,
		PLAYSTATION,
		PLAYSTATION_2,
		PLAYSTATION_3,
		PLAYSTATION_4,
		PLAYSTATION_VITA,
		PLAYSTATION_PORTABLE,
		QUAKE,
		SUPER_NINTENDO,
		SNESMSU1,
		SCUMMVM,
		SHARP_X1,
		SHARP_X6800,
		TURBOGRAFX_16, // (aka PC Engine) HuCards only
		TURBOGRAFX_CD, // (aka PC Engine) CD-ROMs only
		WONDERSWAN,
		WONDERSWAN_COLOR,
		ZX_SPECTRUM,
		VIDEOPAC_ODYSSEY2,
		VECTREX,
		TRS80_COLOR_COMPUTER,
		TANDY,
		SUPERGRAFX,
		AMIGACD32,
		AMIGACDTV,
		ATOMISWAVE,
		CAVESTORY,
		GX4000,
		LUTRO,
		MOONLIGHT,
		MRBOOM,
		SONIC,
		CANNONBALL,
		NAOMI,
		NEOGEO_CD,
		PCFX,
		POKEMINI,
		PRBOOM,
		SATELLAVIEW,
		SUFAMITURBO,
		ZX81,
		TIC80,
		MODEL3,
		IMAGEVIEWER,
		CREATONIC_MEGA_DUCK,
		BITCORP_GAMATE,
		CASIO_PV1000,
		ENTEX_ADVENTURE_VISION,
		EPOCH_GAME_POCKET_COMPUTER,
		HARTUNG_GAMEMASTER,

		// Windows Specific
		VISUALPINBALL,
		FUTUREPINBALL,

		// Misc systems
		ARDUBOY,
		CHANNELF,
		ORICATMOS,
		THOMSON_TO_MO,
		SAMCOUPE,
		OPENBOR,
		UZEBOX,
		APPLE2GS,
		SPECTRAVIDEO,
		PALMOS,
		DAPHNE,
		AMERICANLASERGAMES,
		ACTIONMAX,
		SOLARUS,
		PICO8,
		WATARA_SUPERVISION,
		EMERSON_ARCADIA_2001,	

		VIC20,
		TI99,
		SUPER_CASSETTE_VISION,
		EASYRPG,
		COMMODORE_PET,
		ACORN_ATOM,
		ACORN_BBC_MICRO,
		ACORN_ELECTRON,		
		NOKIA_NGAGE,
		ASTROCADE,
		ARCHIMEDES,
		ADAM,
		FMTOWNS,		
		PHILIPS_CDI,
		SUPER_NINTENDO_MSU1,
		Z_MACHINE,
		LOWRES_NX,
		WASM4,
		VIRCON32,

		PLATFORM_IGNORE, // do not allow scraping for this system
		PLATFORM_COUNT
	};

	PlatformId		getPlatformId(const char* str);
	std::string		getPlatformName(PlatformId id);

	extern std::map<unsigned short, std::pair<std::string, std::string>> ArcadeSystems;
}

#endif // ES_APP_PLATFORM_ID_H
