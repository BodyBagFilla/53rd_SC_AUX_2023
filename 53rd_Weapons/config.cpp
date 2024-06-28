enum {
DESTRUCTENGINE 																					= 2,
DESTRUCTDEFAULT 																				= 6,
DESTRUCTWRECK 																					= 7,
DESTRUCTTREE 																					= 3,
DESTRUCTTENT 																					= 4,
STABILIZEDINAXISX 																				= 1,
STABILIZEDINAXESXYZ 																			= 4,
STABILIZEDINAXISY 																				= 2,
STABILIZEDINAXESBOTH 																			= 3,
DESTRUCTNO 																						= 0,
STABILIZEDINAXESNONE 																			= 0,
DESTRUCTMAN 																					= 5,
DESTRUCTBUILDING 																				= 1,
};

#include "Main\_macros\main.hpp"
#include "_macros\main.hpp"

class CfgPatches //This configures the identification of the pbo to the game
{
	class 53rd_Weapons
	{
		units[] 																				= {""};
		requiredVersion 																		= 0.1;
		requiredAddons[] 																		= {"OPTRE_Core"};
		author[] 																				= {"Frakenburg"};
		weapons[] = 
		{
			"53rd_MA37",
			"53rd_MA37GL",
			"53rd_MA32",
			"53rd_MA32GL",
			"53rd_m6_carbine", 
			"53rd_M247_hmg", 
			"53rd_M33", 
			"53rd_M73H", 
			"53rd_AR0M37", 
			"53rd_AR0M37_M420", 
			"53rd_AR0M37_M45U",
			"53rd_DMR0M37", 
			"OPTRE_M301X", 
			"Throw",
			"53rd_UNSC_M90",
			"53rd_UNSC_br55_HB",
			"53rd_UNSC_br55_HB_gl",
			"53rd_UNSC_br55",
			"53rd_UNSC_Bulldog",
			"53rd_UNSC_CR77",
			"53rd_UNSC_MA5C",
			"53rd_UNSC_MA5B",
			"53rd_UNSC_MA5BGL",
			"53rd_UNSC_MA5CGL",
			"53rd_UNSC_MMG",
			"53rd_UNSC_M45",
		};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class WeaponSlotsInfo;
class UnderBarrelSlot;
class Grenadelauncher;
class TCF_AR0M37;
class TCF_AR0M37_GL;
class TCF_AR0M37_SHT;
class TCF_DMR0M37;	
class ThrowMuzzle;

class CfgWeapons
{
	class OPTRE_MachineGun_Base;
	class OPTRE_M73
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_M247
	{
		class WeaponSlotsInfo;
	};
	class TCF_M33_T
	{
		class WeaponSlotsInfo;
	};
	class pdw2000_base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class UBS_F;
	class OPTRE_M7;
	class weapon_AMRAAMLauncher;
	class weapon_BIM9xLauncher;
	class weapon_AGM_65Launcher;
	class weapon_HARMLauncher;
	class DMR_04_base_F;
	//Base Weapons
	class OPTRE_MA37
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_MA32
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_MA37GL
	{
		class WeaponSlotsInfo;
	};
	class 19_UNSC_M7;
	class OPTRE_MA32GL
	{
		class WeaponSlotsInfo;
	};
	class 19_UNSC_M90;
	class 19_UNSC_br55_HB;
	class 19_UNSC_br55_HB_gl;
	class 19_UNSC_br55;
	class OPTRE_CQS48_Bulldog_Automatic;
	class TCF_CR77;
	class OPTRE_MA5C;
	class OPTRE_MA5B;
	class OPTRE_MA5BGL;
	class OPTRE_MA5CGL;
	class MMG_02_black_F;
	class OPTRE_M45;
/////////////    53rd Weapons   ///////////////////
	class 53rd_UNSC_M90: 19_UNSC_M90
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] M90 Shotgun";
		baseWeapon="53rd_UNSC_M90";
		cursor="19_UNSC_M90";
		magazines[]=
		{
		"12Rnd_8Gauge",
		"12Rnd_8Gauge_slug",
		"12Rnd_8Gauge_slug_tracer",
		};
    };
	class 53rd_UNSC_br55_HB: 19_UNSC_br55_HB
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] BR55-HB";
		baseWeapon="53rd_UNSC_br55_HB";
		cursor="19_UNSC_br55_HB";
		magazines[]=
		{
		"36Rnd_95x40_ap_br_55",
		"36Rnd_95x40_ap_br_55_tracer",
		"36Rnd_95x40_br_55",
		"36Rnd_95x40_br_55_tracer",
		"36Rnd_95x40_slap_br_55",
		"36Rnd_95x40_slap_br_55_tracer",
		"TCF_36Rnd_95x40_Mag_JHP",
		"TCF_36Rnd_95x40_Mag_JHPT",
		"OPTRE_36Rnd_95x40_Mag",
		"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
		"OPTRE_36Rnd_95x40_Mag_Tracer",
		"TCF_36Rnd_95x40_Mag_SS",
		};
    };
	class 53rd_UNSC_br55_HB_gl: 19_UNSC_br55_HB_gl
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] BR55-HB/GL";
		baseWeapon="53rd_UNSC_br55_HB_gl";
		cursor="19_UNSC_br55_HB_gl";
		magazines[]=
		{
		"36Rnd_95x40_ap_br_55",
		"36Rnd_95x40_ap_br_55_tracer",
		"36Rnd_95x40_br_55",
		"36Rnd_95x40_br_55_tracer",
		"36Rnd_95x40_slap_br_55",
		"36Rnd_95x40_slap_br_55_tracer",
		"TCF_36Rnd_95x40_Mag_JHP",
		"TCF_36Rnd_95x40_Mag_JHPT",
		"OPTRE_36Rnd_95x40_Mag",
		"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
		"OPTRE_36Rnd_95x40_Mag_Tracer",
		"TCF_36Rnd_95x40_Mag_SS",
		};
    };
	class 53rd_UNSC_br55: 19_UNSC_br55
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] BR-55";
		baseWeapon="53rd_UNSC_br55";
		cursor="19_UNSC_br55";
		magazines[]=
		{
		"36Rnd_95x40_ap_br_55",
		"36Rnd_95x40_ap_br_55_tracer",
		"36Rnd_95x40_br_55",
		"36Rnd_95x40_br_55_tracer",
		"36Rnd_95x40_slap_br_55",
		"36Rnd_95x40_slap_br_55_tracer",
		"TCF_36Rnd_95x40_Mag_JHP",
		"TCF_36Rnd_95x40_Mag_JHPT",
		"OPTRE_36Rnd_95x40_Mag",
		"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
		"OPTRE_36Rnd_95x40_Mag_Tracer",
		"TCF_36Rnd_95x40_Mag_SS",
		};
    };
	class 53rd_UNSC_Bulldog: OPTRE_CQS48_Bulldog_Automatic
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] Bulldog Combat Shotgun";
		baseWeapon="53rd_UNSC_Bulldog";
		cursor="OPTRE_CQS48_Bulldog_Automatic";
		magazines[]=
		{
		"OPTRE_12Rnd_12Gauge_Pellets",
		"OPTRE_12Rnd_12Gauge_Pellets_Tracer",
		"OPTRE_12Rnd_12Gauge_Smoke",
		"OPTRE_12Rnd_12Gauge_Smoke_Tracer",
		};
    };
	class 53rd_UNSC_CR77: TCF_CR77
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] CR-77 Marksmen Rifle";
		baseWeapon="53rd_UNSC_CR77";
		cursor="TCF_CR77";
		magazines[]=
		{
		"TCF_20Rnd_86x70_Mag_AP",
		"TCF_20Rnd_86x70_Mag_APT",
		"TCF_20Rnd_86x70_Mag_JHP",
		"TCF_20Rnd_86x70_Mag_JHPT",
		"TCF_20Rnd_86x70_Mag",
		"TCF_20Rnd_86x70_Mag_Tracer",
		"TCF_20Rnd_86x70_Mag_SLAP",
		"TCF_20Rnd_86x70_Mag_SLAPT",
		"TCF_20Rnd_86x70_Mag_SS",
		"TCF_20Rnd_86x70_Mag_SST",
		"OPTRE_25Rnd_762x51_AP_Mag",
		"OPTRE_25Rnd_762x51_AP_Mag_Tracer",
		"OPTRE_25Rnd_762x51_Mag",
		"OPTRE_25Rnd_762x51_Mag_Tracer_Yellow",
		"OPTRE_25Rnd_762x51_Mag_Tracer",
		"TCF_32Rnd_762x51_Mag_AP",
		"TCF_32Rnd_762x51_Mag_APT",
		"TCF_32Rnd_762x51_Mag_JHP",
		"TCF_32Rnd_762x51_Mag_JHPT",
		"TCF_32Rnd_762x51_Mag_SS",
		};
    };
	class 53rd_UNSC_MA5C: OPTRE_MA5C
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA5C";
		baseWeapon="53rd_UNSC_MA5C";
		cursor="OPTRE_MA5C";
		magazines[]=
		{
		    "OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST"
		};
    };
	class 53rd_UNSC_MA5B: OPTRE_MA5B
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA5BGL";
		baseWeapon="53rd_UNSC_MA5B";
		cursor="OPTRE_MA5B";
		magazines[]=
		{
		    "OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST"
		};
    };
	class 53rd_UNSC_MA5BGL: OPTRE_MA5BGL
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA5BGL";
		baseWeapon="53rd_UNSC_MA5BGL";
		cursor="OPTRE_MA5BGL";
		magazines[]=
		{
		    "OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST",
		};
    };
	class 53rd_UNSC_MA5CGL: OPTRE_MA5CGL
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA5CGL";
		baseWeapon="53rd_UNSC_MA5CGL";
		cursor="OPTRE_MA5CGL";
		magazines[]=
		{
         	"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST",
		};
    };
	class 53rd_UNSC_MMG: MMG_02_black_F
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] Lapua MG";
		baseWeapon="53rd_UNSC_MMG";
		cursor="MMG_02_black_F";
		magazines[]=
		{
		"130Rnd_338_Mag",
		"OPTRE_100Rnd_95x40_Box",
		"OPTRE_100Rnd_95x40_Box_Tracer",
		"TCF_100Rnd_95x40_Box_JHP",
		"TCF_100Rnd_95x40_Box_JHPT",
		"TCF_100Rnd_95x40_Box_SS",
		"TCF_100Rnd_95x40_Box_SST",
		"OPTRE_200Rnd_95x40_Box",
		"OPTRE_200Rnd_95x40_Box_Tracer",
		"TCF_200Rnd_95x40_Box_JHP",
		"TCF_200Rnd_95x40_Box_JHPT",
		"TCF_200Rnd_95x40_Box_SS",
		"TCF_200Rnd_95x40_Box_SST",
		};
    };
	class 53rd_UNSC_M45: OPTRE_M45
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] M45";
		baseWeapon="53rd_UNSC_M45";
		cursor="OPTRE_M45";
		magazines[]=
		{
			"OPTRE_6Rnd_8Gauge_Pellets",
			"OPTRE_6Rnd_8Gauge_Slugs",
			"TCF_6Rnd_8Gauge_Beanbag",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_12Rnd_8Gauge_Pellets",
		};
    };
//Working 5-21-2024	
	class 53rd_MA37: OPTRE_MA37
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA37A";
		baseWeapon="53rd_MA37";
		cursor="OPTRE_MA37";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST",
		};
    };
	class 53rd_MA37GL: OPTRE_MA37GL
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA37A + GL";
		baseWeapon="53rd_MA37GL";
		cursor="OPTRE_MA37";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST",
		};
    };
	class 53rd_MA32: OPTRE_MA32
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA32A";
		baseWeapon="53rd_MA32";
		cursor="OPTRE_MA32";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST",
		};
    };
	class 53rd_MA32GL: OPTRE_MA32GL
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA32A + GL";
		baseWeapon="53rd_MA32GL";
		cursor="OPTRE_MA37";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST",
		};
    };
	class 53rd_M247_hmg: OPTRE_M247
	{
		author="53rd SC";
		displayName="[53rd] M247 (HMG)";
		baseWeapon="Optre_M247_hmg";
		scope=2;
		picture="\TCF_WEAPONRY\Weapons\Icons\gpmg_icon.paa";
		model="\TCF_WEAPONRY\Weapons\Machineguns\M247GPMG\TCF_M247_GPMG.p3d";
		HUD_BulletInARows=2;
		HUD_TotalPosibleBullet=100;
		magazines[]=
		{
			"OPTRE_100Rnd_127x99_BOX_AP",
			"OPTRE_100Rnd_127x99_BOX_APT",
			"OPTRE_100Rnd_127x99_BOX_HE",
			"OPTRE_100Rnd_127x99_BOX_HET",
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_Nightstalker",
					"optic_tws_mg",
					"optic_SOS",
					"optic_MRCO",
					"optic_hamr",
					"optic_Arco_blk_F",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"acc_flashlight",
					"OPTRE_BMR_Laser",
					"optre_m12_laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
		initSpeed=1100;
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.097499996;
			dispersion=0.00105;
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=800;
			maxRangeProbab=0.0099999998;
		};
		descriptionShort="M247 HMG";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\MG\data\anim\OPTRE_M247_handanim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\M247_Spartan.rtm"
		};
	};
	class 53rd_m6_carbine: pdw2000_base_F
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		displayName = "[53rd] M6 Carbine";
		descriptionShort = "12.7x40mm Pistol Caliber Carbine";
		picture = "\A3\Weapons_F_gamma\Smgs\pdw2000\data\UI\gear_pdw2X_X_CA.paa";
		UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		model = "\A3\Weapons_F_gamma\Smgs\pdw2000\pdw2000_F.p3d";
		modelOptics = "-";		
		baseWeapon = "53rd_m6_carbine";
		cursor = "OPTRE_M6C";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_PistolODST";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_PistolODST";
		Eye = "OPTRE_EYE_HUD_AmmoCount_PistolSmart";
		scope = 2;
		magazines[] += 
		{
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag_Tracer",
			"TCF_8Rnd_127x40_Mag_AP",
			"TCF_8Rnd_127x40_Mag_APT",
			"TCF_8Rnd_127x40_Mag_HE",
			"TCF_8Rnd_127x40_Mag_HET",
			"TCF_8Rnd_127x40_Mag_HVAP",
			"TCF_8Rnd_127x40_Mag_HVAPT",
			"TCF_8Rnd_127x40_Mag_JHP",
			"TCF_8Rnd_127x40_Mag_JHPT",
			"TCF_8Rnd_127x40_Mag_SAPHE",
			"TCF_8Rnd_127x40_Mag_SAPHET",
			"TCF_8Rnd_127x40_Mag_SS",
			"TCF_8Rnd_127x40_Mag_SST",
			"TCF_8Rnd_127x40_Mag_NARQ",
			"TCF_8Rnd_127x40_Mag_NARQT",
			"TCF_8Rnd_127x40_Mag_FR",
			"TCF_8Rnd_127x40_Mag_FG",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag_Tracer",
			"TCF_12Rnd_127x40_Mag_AP",
			"TCF_12Rnd_127x40_Mag_APT",
			"TCF_12Rnd_127x40_Mag_HE",
			"TCF_12Rnd_127x40_Mag_HET",
			"TCF_12Rnd_127x40_Mag_HVAP",
			"TCF_12Rnd_127x40_Mag_HVAPT",
			"TCF_12Rnd_127x40_Mag_JHP",
			"TCF_12Rnd_127x40_Mag_JHPT",
			"TCF_12Rnd_127x40_Mag_SAPHE",
			"TCF_12Rnd_127x40_Mag_SAPHET",
			"TCF_12Rnd_127x40_Mag_SS",
			"TCF_12Rnd_127x40_Mag_SST",
			"TCF_12Rnd_127x40_Mag_NARQ",
			"TCF_12Rnd_127x40_Mag_NARQT",
			"TCF_16Rnd_127x40_Mag",
			"TCF_16Rnd_127x40_Mag_Tracer",
			"TCF_16Rnd_127x40_Mag_AP",
			"TCF_16Rnd_127x40_Mag_APT",
			"TCF_16Rnd_127x40_Mag_HE",
			"TCF_16Rnd_127x40_Mag_HET",
			"TCF_16Rnd_127x40_Mag_HVAP",
			"TCF_16Rnd_127x40_Mag_HVAPT",
			"TCF_16Rnd_127x40_Mag_JHP",
			"TCF_16Rnd_127x40_Mag_JHPT",
			"TCF_16Rnd_127x40_Mag_SAPHE",
			"TCF_16Rnd_127x40_Mag_SAPHET",
			"TCF_16Rnd_127x40_Mag_SS",
			"TCF_16Rnd_127x40_Mag_SST",
			"TCF_16Rnd_127x40_Mag_NARQ",
			"TCF_16Rnd_127x40_Mag_NARQT"
		};
				
		reloadAction = "GestureReloadSMG_03";
		recoil = "recoil_pdw";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound","CompSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",1.0,1,200};
				closure2[] = {"",1.0,1,200};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class CompSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.054499999;
			recoil = "recoil_single_pdw";
			recoilProne = "recoil_single_prone_pdw";
			dispersion = 0.0020300001;
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 350;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = 
				{
					"OPTRE_M6_silencer"
				};
				iconPosition[]={0.1,0.41};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = 
				{
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m6c_scope"
				};
				iconPosition[]={0.40000001,0.31999999};
				iconScale=0.15000001;
			};
			class PointerSlot
			{
			};
			mass = 30;
		};
		inertia = 0.2;
		aimTransitionSpeed = 1.5;
		dexterity = 1.8;
		initSpeed = 600;
		class ItemInfo
		{
			priority=2;
		};
	};
	class 53rd_MASR: DMR_04_base_F
	{
		author = "Operative Peroski";
		_generalMacro = "srifle_DMR_04_F";
		scope= 2;
		model = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\DMR_04_F.p3d";
		dexterity = 1.6799999;
		displayName = "[53rd] MASR-1";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\Data\UI\gear_DMR_04_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "$STR_A3_CfgWeapons_srifle_DMR_04_F1";
		inertia = 0.60000002;
		aimTransitionSpeed = 0.80000001;
		magazines[] = 
		{ 
			"OPTRE_4Rnd_145x114_APFSDS_Mag",
			"OPTRE_4Rnd_145x114_HVAP_Mag",
			"OPTRE_4Rnd_145x114_HEDP_Mag",
			"21st_10Rnd_145x114_APFSDS_Mag",
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
		};
		class ItemInfo
		{
			priority=1;
		};
	};
	class 53rd_M33: TCF_M33_T
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		baseWeapon = "53rd_M33";
		scope = 2;
		displayName = "[53rd] M33 (SAW)";
		model = "\TCF_WEAPONRY\Weapons\Machineguns\M33\TCF_M33_T.p3d";
		mass = 75;
		reloadAction = "GestureReloadSPAR_01";
		picture = "\TCF_WEAPONRY\Weapons\Machineguns\CM12\CM12_Icon.paa";
		UiPicture = "\TCF_WEAPONRY\Weapons\Machineguns\CM12\CM12_Icon.paa";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\Anim\mmg_01.rtm"};
		muzzles[] = {"this"};
		cursor = "OPTRE_M73";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\MachineGun\MG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_LMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_LMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_LMG";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 150;
		magazines[] = 
		{
			"TCF_Gamma_762_mag",
			"TCF_Gamma_762_mag_Tracer",
			"TCF_762_jhp_mag",
			"TCF_762_jhp_mag_tracer",
			"TCF_762_slap_mag",
			"TCF_762_slap_mag_tracer",
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				inkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = 
				{
                    "OPTRE_srs99d_suppressor"
				};
				iconPosition[] = {0,0.4};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleitems[] = 
				{
					"optic_Nightstalker",
					"optic_tws_mg",
					"optic_SOS",
					"optic_MRCO",
					"optic_hamr",
					"optic_Arco_blk_F",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH"
				};
				iconPosition[] = {0.5,0.3};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] =
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser",
                    "optre_m12_laser"
                };
				iconPosition[] = {0.2,0.4};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = 
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class 53rd_M73H: OPTRE_M73
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\MG\data\anim\OPTRE_M73_handanim.rtm","Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\M73_1_Spartan.rtm"};
		model = "\OPTRE_Weapons\MG\M73.p3d";
		displayName = "[53rd] M73H Medium Machine Gun";
		descriptionShort = "UNSC Medium Machine Gun";
		magazines[] = 
		{
			"OPTRE_150Rnd_95x60_Box_JHP",
			"OPTRE_150Rnd_95x60_Box_HPSAP",
			"OPTRE_150Rnd_95x60_Box_JHPT",
			"OPTRE_150Rnd_95x60_Box_HPSAPT"
		};
		magazineWell[] = {};
		baseWeapon = "OPTRE_M73";
		cursor = "OPTRE_M73";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 150;
		class GunParticles
		{
			class EffectShotCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = 
				{
                    "optre_m7_silencer",
					"OPTRE_srs99d_suppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = 
				{
					"optic_Nightstalker",
					"optic_tws_mg",
					"optic_SOS",
					"optic_MRCO",
					"optic_hamr",
					"optic_Arco_blk_F",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"OPTRE_M73_SmartLink"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = 
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class 53rd_AR0M37: TCF_AR0M37
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		displayname = "[53rd] ARO-M37";
		baseweapon = "53rd_AR0M37";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		recoil = "recoil_trg21";
		magazines[] += 
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST"
		};
		magazineWell[] += {};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = 
				{
					"OPTRE_MA5Suppressor",
					"OPTRE_M6_silencer",
					"optre_m7_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = 
				{					
					"optic_Nightstalker",
					"optic_tws_mg",
					"optic_SOS",
					"optic_MRCO",
					"optic_hamr",
					"optic_Arco_blk_F",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"optic_ico_01_black_f"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = 
				{
					"acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser",
                    "optre_m12_laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
		modes[] = {"FullAuto","Single","close","short","medium","far"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-01.ogg","db8",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-02.ogg","db8",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-03.ogg","db8",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-04.ogg","db8",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-05.ogg","db8",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-06.ogg","db8",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-07.ogg","db8",1,2000};
				begin8[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-08.ogg","db8",1,2000};
				begin9[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-09.ogg","db8",1,2000};
				begin10[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-10.ogg","db8",1,2000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075;
			dispersion = 0.00075;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-01.ogg","db8",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-02.ogg","db8",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-03.ogg","db8",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-04.ogg","db8",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-05.ogg","db8",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-06.ogg","db8",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-07.ogg","db8",1,2000};
				begin8[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-08.ogg","db8",1,2000};
				begin9[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-09.ogg","db8",1,2000};
				begin10[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-10.ogg","db8",1,2000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075;
			dispersion = 0.00085;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.04;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 10;
	};
	class 53rd_AR0M37_M420: TCF_AR0M37_GL
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		displayname = "[53rd] ARO-M37 M420";
		baseweapon = "53rd_AR0M37_M420";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		recoil = "recoil_trg21";
		magazines[] += 
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST"
		};
		magazineWell[] += {};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = 
				{
					"OPTRE_MA5Suppressor",
					"OPTRE_M6_silencer",
					"optre_m7_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = 
				{					
					"optic_Nightstalker",
					"optic_tws_mg",
					"optic_SOS",
					"optic_MRCO",
					"optic_hamr",
					"optic_Arco_blk_F",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"optic_ico_01_black_f"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = 
				{
					"acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser",
                    "optre_m12_laser"
				};
			};
		};
		modes[] = {"FullAuto","Single","close","short","medium","far"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-01.ogg","db8",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-02.ogg","db8",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-03.ogg","db8",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-04.ogg","db8",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-05.ogg","db8",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-06.ogg","db8",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-07.ogg","db8",1,2000};
				begin8[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-08.ogg","db8",1,2000};
				begin9[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-09.ogg","db8",1,2000};
				begin10[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-10.ogg","db8",1,2000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075;
			dispersion = 0.00075;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-01.ogg","db8",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-02.ogg","db8",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-03.ogg","db8",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-04.ogg","db8",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-05.ogg","db8",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-06.ogg","db8",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-07.ogg","db8",1,2000};
				begin8[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-08.ogg","db8",1,2000};
				begin9[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-09.ogg","db8",1,2000};
				begin10[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-10.ogg","db8",1,2000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075;
			dispersion = 0.00085;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.04;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 10;
	};
	class 53rd_AR0M37_M45U: TCF_AR0M37_SHT
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		displayname = "[53rd] ARO-M37 M45U";
		baseweapon = "53rd_AR0M37_M45U";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		recoil = "recoil_trg21";
		magazines[] += 
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST"
		};
		magazineWell[] += {};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = 
				{
					"OPTRE_MA5Suppressor",
					"OPTRE_M6_silencer",
					"optre_m7_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = 
				{					
					"optic_Nightstalker",
					"optic_tws_mg",
					"optic_SOS",
					"optic_MRCO",
					"optic_hamr",
					"optic_Arco_blk_F",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"optic_ico_01_black_f"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = 
				{
					"acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser",
                    "optre_m12_laser"
				};
			};
		};
		modes[] = {"FullAuto","Single","close","short","medium","far"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-01.ogg","db8",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-02.ogg","db8",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-03.ogg","db8",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-04.ogg","db8",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-05.ogg","db8",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-06.ogg","db8",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-07.ogg","db8",1,2000};
				begin8[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-08.ogg","db8",1,2000};
				begin9[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-09.ogg","db8",1,2000};
				begin10[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-10.ogg","db8",1,2000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075;
			dispersion = 0.00075;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-01.ogg","db8",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-02.ogg","db8",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-03.ogg","db8",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-04.ogg","db8",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-05.ogg","db8",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-06.ogg","db8",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-07.ogg","db8",1,2000};
				begin8[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-08.ogg","db8",1,2000};
				begin9[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-09.ogg","db8",1,2000};
				begin10[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-10.ogg","db8",1,2000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075;
			dispersion = 0.00085;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.04;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 10;
	};
	class 53rd_DMR0M37: TCF_DMR0M37
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		displayname = "[53rd] DRO-M37";
		baseweapon = "53rd_DMR0M37";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 32;
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		recoil = "recoil_trg21";
		magazines[] += 
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST"
		};
		magazineWell[] += {};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = 
				{
					"OPTRE_MA5Suppressor",
					"OPTRE_M6_silencer",
					"optre_m7_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = 
				{					
					"optic_Nightstalker",
					"optic_tws_mg",
					"optic_SOS",
					"optic_MRCO",
					"optic_hamr",
					"optic_Arco_blk_F",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"optic_ico_01_black_f"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = 
				{
					"acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser",
                    "optre_m12_laser"
				};
			};
		};
		modes[] = {"FullAuto","Single","close","short","medium","far"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-01.ogg","db8",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-02.ogg","db8",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-03.ogg","db8",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-04.ogg","db8",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-05.ogg","db8",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-06.ogg","db8",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-07.ogg","db8",1,2000};
				begin8[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-08.ogg","db8",1,2000};
				begin9[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-09.ogg","db8",1,2000};
				begin10[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-10.ogg","db8",1,2000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075;
			dispersion = 0.00075;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-01.ogg","db8",1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-02.ogg","db8",1,2000};
				begin3[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-03.ogg","db8",1,2000};
				begin4[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-04.ogg","db8",1,2000};
				begin5[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-05.ogg","db8",1,2000};
				begin6[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-06.ogg","db8",1,2000};
				begin7[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-07.ogg","db8",1,2000};
				begin8[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-08.ogg","db8",1,2000};
				begin9[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-09.ogg","db8",1,2000};
				begin10[] = {"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-10.ogg","db8",1,2000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075;
			dispersion = 0.00085;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.04;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 10;
	};
	class 53rd_M7: 19_UNSC_M7
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		displayName = "[53rd] M7 Caseless SMG";
		baseweapon = "53rd_M7";
		recoil = "recoil_M7X";
		class Single;
		class FullAuto;
		magazines[] += 
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag_Tracer",
			"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow",
			"TCF_60Rnd_5x23mm_Mag_FMJ",
			"TCF_60Rnd_5x23mm_Mag_FMJT",
			"TCF_60Rnd_5x23mm_Mag_HV",
			"TCF_60Rnd_5x23mm_Mag_HVT",
			"TCF_60Rnd_5x23mm_Mag_JHP",
			"TCF_60Rnd_5x23mm_Mag_JHPT",
			"TCF_60Rnd_5x23mm_Mag_SS",
			"TCF_60Rnd_5x23mm_Mag_SST",
			"OPTRE_48Rnd_5x23mm_Mag",
			"OPTRE_48Rnd_5x23mm_Mag_Tracer",
			"OPTRE_48Rnd_5x23mm_Mag_Tracer_Yellow",
			"TCF_48Rnd_5x23mm_Mag_FMJ",
			"TCF_48Rnd_5x23mm_Mag_FMJT",
			"TCF_48Rnd_5x23mm_Mag_HV",
			"TCF_48Rnd_5x23mm_Mag_HVT",
			"TCF_48Rnd_5x23mm_Mag_JHP",
			"TCF_48Rnd_5x23mm_Mag_JHPT",
			"TCF_48Rnd_5x23mm_Mag_SS",
			"TCF_48Rnd_5x23mm_Mag_SST"
		};
		magazineWell[] = {};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = 
				{
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_l",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer",
					"OPTRE_M393_Suppressor",
					"OPTRE_M12_Suppressor",
					"OPTRE_MA37KSuppressor",
					"OPTRE_M6C_compensator"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = 
				{
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m6c_scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = 
				{
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_Flashlight",
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Laser",
					"OPTRE_M12_Laser",
					"OPTRE_M45_Flashlight_green",
					"OPTRE_M45_Flashlight_blue",
					"OPTRE_DMR_Light",
					"OPTRE_M6C_Laser",
					"OPTRE_M6G_Flashlight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	class 53rd_M7_Folded: 53rd_M7
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		displayName = "[53rd] M7 Caseless SMG (Folded)";
		descriptionShort = "UNSC M7X SMG (Folded)";
		baseweapon = "53rd_M7_Folded";
		handAnim[] = {"OFP2_ManSkeleton"};
		reloadAction = "GestureReloadPistol";
		type = 2;
		class Single: Single
		{
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
		};
		class FullAuto: FullAuto
		{
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = 
				{
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_l",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer",
					"OPTRE_M393_Suppressor",
					"OPTRE_M12_Suppressor",
					"OPTRE_MA37KSuppressor",
					"OPTRE_M6C_compensator"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = 
				{
					"optic_aco_grn",
					"optic_aco",
					"optic_holosight_blk_f",
					"optic_yorris",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m6c_scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = 
				{
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_Flashlight",
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Laser",
					"OPTRE_M12_Laser",
					"OPTRE_M45_Flashlight_green",
					"OPTRE_M45_Flashlight_blue",
					"OPTRE_DMR_Light",
					"OPTRE_M6C_Laser",
					"OPTRE_M6G_Flashlight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	class OPTRE_M301X: UGL_F
	{
		magazines[] =
		{
			"UGL_8Gauge_Pellet",
			"UGL_8Gauge_Slug",
			"UGL_8Gauge_Beanbag",
			"UGL_FlareBlue_F",
			"3Rnd_UGL_8Gauge_Pellet",
			"3Rnd_UGL_8Gauge_Slug",
			"3Rnd_UGL_8Gauge_Beanbag",
			"3Rnd_UGL_FlareBlue_F",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"53rd_1Rnd_HE",
			"53rd_3Rnd_HE",
			"53rd_1Rnd_Frag",
			"53rd_3Rnd_Frag",
			"53rd_1Rnd_HEDP",
			"53rd_1Rnd_HEAT",
			"53rd_1Rnd_thermobaric",
			"53rd_1Rnd_9bang",
			"53rd_1Rnd_ANM14"
		};
	};
	class Throw : Grenadelauncher
	{
		muzzles[] +=
		{
			"C7_Muzzle",
			"C12_Muzzle",
			"C168_Muzzle",
			"9bang_Muzzle",			
			"ANM14_Muzzle",
			"M9_Frag_Muzzle",
			"Thermobaric_Grenade_Muzzle",
			"Bubble_Shield_Muzzle"			
		};
		class C7_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"c7_remote_throwable_Mag"};
        };
        class C12_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"c12_remote_throwable_Mag"};
		};
		class C168_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"C168_Mag"};
		};
        class 9bang_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"9bang_Mag"};
		};
		class ANM14_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"ANM14_Thermite_Grenade_Mag"};
		};   
		class M9_Frag_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"M9_Frag_Mag"};
		};  
		class Thermobaric_Grenade_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"Thermobaric_Grenade_Mag"};
		};       
		class Bubble_Shield_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"Bubble_Shield_Mag"};
		};
    };
};