enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

#include "Main\_macros\main.hpp"
#include "_macros\main.hpp"
#include "Ammo\cfgMagazineWells.hpp"
#include "XTD.hpp"

class CfgPatches //This configures the identification of the pbo to the game
{
	class 53rd_Weapons
	{
		units[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Core"};
		author[] = {"Frakenburg"};
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
			"53rd_UNSC_br55_gl",
			"53rd_UNSC_Bulldog",
			"53rd_UNSC_CR77",
			"53rd_UNSC_MA5C",
			"53rd_UNSC_MA5B",
			"53rd_UNSC_MA5BGL",
			"53rd_UNSC_MA5CGL",
			"53rd_UNSC_MA5A",
			"53rd_UNSC_MA5AGL",
			"53rd_UNSC_MMG",
			"53rd_UNSC_M45",
			"53rd_UNSC_ARM37",
			"53rd_UNSC_M6C",
			"53rd_UNSC_M6G",
			"53rd_UNSC_M392",
			"53rd_UNSC_CM12",
			"53rd_UNSC_Commando",
			"53rd_UNSC_SRS99_Fang",
			"53rd_UNSC_SRS99_AM",
			"53rd_M6G_Riot_Shield",
			"53rd_Bulldog_Riot_Shield",
			"53rd_M7_Riot_Shield",
			"53rd_M6C_Riot_Shield",
			"53rd_M247H_Etilka",
			"53rd_GRL_45",
			"53rd_SAS10",
			"53rd_UNSC_M41-SSR",
			"53rd_UNSC_M73H"
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

class ThrowMuzzle;

class CfgWeapons
{
	//class TCF_M73H;
	class OPTRE_M41_SSR;
	class optre_hgun_sas10_F;
	class MA_GRL_45;
	class OPTRE_M247H_Etilka;
	class OPTRE_M7_Folded;
	class OPTRE_Bulldog_Riot_Shield;
	class OPTRE_M7_Riot_Shield;
	class OPTRE_M6C_Riot_Shield;
	class OPTRE_CQS48S_Chihuahua_Automatic;
	class OPTRE_M6G_Riot_Shield {
		class WeaponSlotsInfo;
	};
	class OPTRE_SRS99C {
		class WeaponSlotsInfo;
	};
	class TCF_AR0M37 {
		class WeaponSlotsInfo;
	};
	class TCF_AR0M37_GL {
		class WeaponSlotsInfo;
	};
	class TCF_AR0M37_SHT {
		class WeaponSlotsInfo;
	};
	class TCF_DMR0M37 {
		class WeaponSlotsInfo;
	};
	class TCF_ARM37 {
		class WeaponSlotsInfo;
	};
	class TCF_ARM37_DMR {
	};
	class TCF_ARM37_SHT {
		class WeaponSlotsInfo;
	};
	class TCF_ARM37_GL {
		class WeaponSlotsInfo;
	};
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
	class OPTRE_M7 {
		class FullAuto;
	};
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
	class OPTRE_M6B
	{
		class WeaponSlotsInfo;
		class Single;
	};
	class OPTRE_M6D {
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
	class 19_UNSC_br55_gl;
	class 19_UNSC_M392;
	class Dmns_CM_12;
	class OPTRE_Commando_Black;
	class OPTRE_CQS48_Bulldog_Automatic;
	class TCF_CR77;
	class OPTRE_MA5C;
	class OPTRE_MA5B;
	class OPTRE_MA5BGL;
	class OPTRE_MA5CGL;
	class 19_UNSC_MA5A;
	class 19_UNSC_MA5A_gl;
	class MMG_02_black_F;
	class OPTRE_M45;
	class 19_UNSC_M7_Side;
	class 19_UNSC_SRS99AM;
	class OPTRE_SRS99D {
		class WeaponSlotsInfo;
	};
		/////////////    53rd Weapons   ///////////////////

	//////ARs (MA5 and MA32/MA37)
	class 53rd_UNSC_MA5A : 19_UNSC_MA5A
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA5A";
		baseWeapon = "53rd_UNSC_MA5A";
		cursor = "OPTRE_MA5";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor", "19_UNSC_MA5A_Suppressor"};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"19_UNSC_MA5A_smartlink"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"TCF_Rifle_Flashlight_IR",
					"19_UNSC_MA5A_LAM"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	class 53rd_UNSC_MA5AGL : 19_UNSC_MA5A_gl
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA5AGL";
		baseWeapon = "53rd_UNSC_MA5AGL";
		cursor = "OPTRE_MA5";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"19_UNSC_MA5A_smartlink"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"TCF_Rifle_Flashlight_IR",
					"19_UNSC_MA5A_LAM"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	//done
	class 53rd_UNSC_MA5B : OPTRE_MA5B
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA5B";
		baseWeapon = "53rd_UNSC_MA5B";
		cursor = "OPTRE_MA5";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"TCF_MA5_SmartLink_v2",
					"TCF_MA5_SmartLink_legacy",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5_BUIS"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	//done
	class 53rd_UNSC_MA5BGL : OPTRE_MA5BGL
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA5BGL";
		baseWeapon = "53rd_UNSC_MA5BGL";
		cursor = "OPTRE_MA5";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"TCF_MA5_SmartLink_v2",
					"TCF_MA5_SmartLink_legacy",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5_BUIS"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	class 53rd_UNSC_MA5C : OPTRE_MA5C
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA5C";
		baseWeapon = "53rd_UNSC_MA5C";
		cursor = "OPTRE_MA5";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"TCF_MA5C_SmartLink_v2",
					"TCF_MA5C_SmartLink_legacy",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	//done
	class 53rd_UNSC_MA5CGL : OPTRE_MA5CGL
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA5CGL";
		baseWeapon = "53rd_UNSC_MA5CGL";
		cursor = "OPTRE_MA5";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"TCF_MA5C_SmartLink_v2",
					"TCF_MA5C_SmartLink_legacy",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	//done
	class 53rd_MA32 : OPTRE_MA32
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA32A";
		baseWeapon = "53rd_MA32";
		cursor = "OPTRE_MA37";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA37KSuppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "TCF_M393_EOTECH_v2",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"OPTRE_MA5_BUIS",
				"optic_MRCO",
					"ACE_optic_MRCO_2D" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	//done
	class 53rd_MA32GL : OPTRE_MA32GL
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA32A + GL";
		baseWeapon = "53rd_MA32GL";
		cursor = "OPTRE_MA37";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA37KSuppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "TCF_M393_EOTECH_v2",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"OPTRE_MA5_BUIS",
				"optic_MRCO",
					"ACE_optic_MRCO_2D" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	//done
	class 53rd_MA37 : OPTRE_MA37
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA37A";
		baseWeapon = "53rd_MA37";
		cursor = "OPTRE_MA37";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA37KSuppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "OPTRE_MA37_Smartlink_Scope", "OPTRE_MA5_BUIS" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	//done
	class 53rd_MA37GL : OPTRE_MA37GL
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA37A + GL";
		baseWeapon = "53rd_MA37GL";
		cursor = "OPTRE_MA37";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA37KSuppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "OPTRE_MA37_Smartlink_Scope", "OPTRE_MA5_BUIS" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};


	//////BRs (55 and 55HB)
	class 53rd_UNSC_br55 : 19_UNSC_br55
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] BR-55";
		baseWeapon = "53rd_UNSC_br55";
		cursor = "OPTRE_BR55";
		magazines[] = {"53rd_36Rnd_95x40_Mag"};
		magazineWell[] = { "53rd_Magwell_BR" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] +=
				{
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
						"OPTRE_M393_EOTECH",
						"Optre_Recon_Sight",
						"Optre_Recon_Sight_Red",
						"Optre_Recon_Sight_Green",
					"optic_Hamr",
						"optic_MRCO",
						"ACE_optic_MRCO_2D",
						"19_UNSC_evosd",
						"19_UNSC_evo",
						"optic_ERCO_blk_F"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] +=
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {
					"19_UNSC_BR55_LAM"
				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{				
				compatibleItems[] = {};
			};
		};
	};
	class 53rd_UNSC_br55_gl : 19_UNSC_br55_gl
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] BR55/GL";
		baseWeapon = "53rd_UNSC_br55_gl";
		cursor = "OPTRE_BR55";
		magazines[] = {"53rd_36Rnd_95x40_Mag"};
		magazineWell[] = {"53rd_Magwell_BRHB"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] +=
				{
					"OPTRE_BR45_Scope", 
						"OPTRE_M393_EOTECH",
						"Optre_Recon_Sight",
						"Optre_Recon_Sight_Red",
						"Optre_Recon_Sight_Green",
					"OPTRE_BR55HB_Scope",
					"optic_Hamr",
						"optic_MRCO",
						"ACE_optic_MRCO_2D",
						"19_UNSC_evosd",
						"19_UNSC_evo",
						"optic_ERCO_blk_F"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] +=
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {
					"19_UNSC_BR55_LAM"
				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	//done
	class 53rd_UNSC_br55_HB : 19_UNSC_br55_HB
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] BR55-HB";
		baseWeapon = "53rd_UNSC_br55_HB";
		cursor = "OPTRE_BR55";
		magazines[] = {"53rd_36Rnd_95x40_Mag"};
		magazineWell[] = {"53rd_Magwell_BRHB"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] +=
				{
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
						"OPTRE_M393_EOTECH",
						"Optre_Recon_Sight",
						"Optre_Recon_Sight_Red",
						"Optre_Recon_Sight_Green",
					"optic_Hamr",
						"optic_MRCO",
						"ACE_optic_MRCO_2D",
						"19_UNSC_evosd",
						"19_UNSC_evo",
						"optic_ERCO_blk_F"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] +=
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot

			{
				compatibleItems[] = {
					"19_UNSC_BR55_LAM"
				};


			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	//done
	class 53rd_UNSC_br55_HB_gl : 19_UNSC_br55_HB_gl
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] BR55-HB/GL";
		baseWeapon = "53rd_UNSC_br55_HB_gl";
		cursor = "OPTRE_BR55";
		magazines[] = {"53rd_36Rnd_95x40_Mag"};
		magazineWell[] = {"53rd_Magwell_BRHB"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] +=
				{
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
						"OPTRE_M393_EOTECH",
						"Optre_Recon_Sight",
						"Optre_Recon_Sight_Red",
						"Optre_Recon_Sight_Green",
					"optic_Hamr",
						"optic_MRCO",
						"ACE_optic_MRCO_2D",
						"19_UNSC_evosd",
						"19_UNSC_evo",
						"optic_ERCO_blk_F"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] +=
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] +=
				{
						"19_UNSC_BR55_LAM"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};

	//////DMRs (CR-77, M392, ARM)
	
	class 53rd_UNSC_CR77 : TCF_CR77
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] CR-77 Marksmen Rifle";
		baseWeapon = "53rd_UNSC_CR77";
		cursor = "OPTRE_M392";
		magazines[] = {"53rd_36Rnd_95x40_Mag"};
		magazineWell[] = { "53rd_Magwell_BR" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"19_UNSC_evo",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"optic_ERCO_blk_F"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"OPTRE_m12_Laser",
					"OPTRE_DMR_Light"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk" };
			};
		};
	};
	class 53rd_UNSC_M392 : 19_UNSC_M392
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M392";
		baseWeapon = "53rd_UNSC_M392";
		cursor = "arifle";
		magazines[] = {"53rd_15Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_M392" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"19_UNSC_evosd",
					"19_UNSC_evo",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"optic_ERCO_blk_F"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser",
					"19_UNSC_MA5A_LAM"
				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{

			};
		};
	};
	class 53rd_UNSC_ARM37 : TCF_ARM37
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] ARM-37";
		baseWeapon = "53rd_UNSC_ARM37";
		cursor = "arifle";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"optic_ERCO_blk_F",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser",
					"TCF_Rifle_Flashlight_IR"
				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{

			};
		};
	};
	class 53rd_UNSC_ARM37_DMR : TCF_ARM37_DMR
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] ARM-37 DMR";
		baseWeapon = "53rd_UNSC_ARM37_DMR";
		cursor = "arifle";
		magazines[] = {"53rd_36Rnd_95x40_Mag"};
		magazineWell[] = { "53rd_Magwell_BRHB" };
		modes[] = { "Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"optic_ERCO_blk_F",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {
				"OPTRE_M12_Laser",
				"OPTRE_m12_Flashlight",
				"OPTRE_m12_Vis_Red_Laser",
				"TCF_Rifle_Flashlight_IR"
				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	class 53rd_UNSC_ARM37_GL : TCF_ARM37_GL
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] ARM-37 GL";
		baseWeapon = "53rd_UNSC_ARM37_GL";
		cursor = "arifle";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"optic_ERCO_blk_F",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {
				"OPTRE_M12_Laser",
				"OPTRE_m12_Flashlight",
				"OPTRE_m12_Vis_Red_Laser",
				"TCF_Rifle_Flashlight_IR"
				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{

			};
		};
	};
	class 53rd_UNSC_ARM37_SHT : TCF_ARM37_SHT
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] ARM-37 SHT";
		baseWeapon = "53rd_UNSC_ARM37_SHT";
		cursor = "arifle";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"optic_ERCO_blk_F",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {
				"OPTRE_M12_Laser",
				"OPTRE_m12_Flashlight",
				"OPTRE_m12_Vis_Red_Laser",
				"TCF_Rifle_Flashlight_IR"
				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{

			};
		};
	};
	class 53rd_UNSC_Commando : OPTRE_Commando_Black
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] Commando";
		baseWeapon = "53rd_UNSC_Commando";
		cursor = "OPTRE_M392";
		magazines[] = {"53rd_20Rnd_65x48_Mag"};
		magazineWell[] = { "53rd_Magwell_Commando" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"19_UNSC_evo",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"OPTRE_m12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser",
					"OPTRE_DMR_Light"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = { "bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk" };
			};
		};
	};

	//////Shotguns (M90, M45, Bulldog)
	class 53rd_UNSC_M90 : 19_UNSC_M90
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M90 Shotgun";
		baseWeapon = "53rd_UNSC_M90";
		cursor = "OPTRE_M45";
		magazines[] = {"53rd_6Rnd_8Gauge_Pellets"};
		magazineWell[] = { "53rd_Magwell_8Gauge" };
	};
	//done
	class 53rd_UNSC_M45 : OPTRE_M45
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M45";
		baseWeapon = "53rd_UNSC_M45";
		cursor = "OPTRE_M45";
		magazines[] = {"53rd_6Rnd_8Gauge_Pellets"};
		magazineWell[] = { "53rd_Magwell_8Gauge" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"TCF_muzzle_cylinder",
					"TCF_muzzle_IMP_CYL",
					"TCF_muzzle_Modified"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"OPTRE_M45_Flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] =
				{

				};
			};
		};
	};
	//done
	class 53rd_UNSC_Bulldog : OPTRE_CQS48_Bulldog_Automatic
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] Bulldog Combat Shotgun";
		baseWeapon = "53rd_UNSC_Bulldog";
		cursor = "OPTRE_M45";
		magazines[] = {"53rd_12Rnd_12Gauge_Pellets"};
		magazineWell[] = {"53rd_Magwell_12Gauge"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"OPTRE_M45_Flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] =
				{

				};
			};
		};
	};

	//////MGs (MMG, M247, M33
	class 53rd_UNSC_MMG : MMG_02_black_F
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] Lapua MG";
		baseWeapon = "53rd_UNSC_MMG";
		cursor = "OPTRE_M73";
		magazines[] =
		{
			"53rd_100Rnd_95x40_Box"
		};
		magazineWell[] = { "53rd_Magwell_Lapua" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"TCF_Rifle_Flashlight_IR"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] =
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
	};

	class 53rd_UNSC_M73H : OPTRE_M73
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M73H";
		baseWeapon = "53rd_UNSC_M73H";
		cursor = "OPTRE_M73";
		magazines[] =
		{
			"53rd_100Rnd_95x40_Box"
		};
		magazineWell[] = { "53rd_Magwell_Lapua" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"OPTRE_M73_SmartLink",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"TCF_Rifle_Flashlight_IR"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] =
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
	};

	class 53rd_M247_hmg : OPTRE_M247
	{
		author = "53rd SC";
		displayName = "[53rd] M247 (HMG)";
		baseWeapon = "Optre_M247_hmg";
		scope = 2;
		picture = "\TCF_WEAPONRY\Weapons\Icons\gpmg_icon.paa";
		model = "\TCF_WEAPONRY\Weapons\Machineguns\M247GPMG\TCF_M247_GPMG.p3d";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 100;
		magazines[] = { "53rd_100Rnd_762x51_Box" };
		magazineWell[] = {"53rd_Magwell_M247"};
		class GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"TCF_Rifle_Flashlight_IR"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] =
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
		initSpeed = 1100;
		modes[] =
		{
			"FullAuto"
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",
					1,
					1,
					2000
				};
				begin2[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",
					1,
					1,
					2000
				};
				soundBegin[] =
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
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.097499996;
			dispersion = 0.00105;
			minRange = 2;
			minRangeProbab = 0.0099999998;
			midRange = 200;
			midRangeProbab = 0.0099999998;
			maxRange = 800;
			maxRangeProbab = 0.0099999998;
		};
		descriptionShort = "M247 HMG";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\MG\data\anim\OPTRE_M247_handanim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\M247_Spartan.rtm"
		};
	};
	class 53rd_M33 : TCF_M33_T
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
		magazines[] = {"53rd_128Rnd_762x51_Drum"};
		magazineWell[] = { "53rd_Magwell_M33" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				inkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
				iconPosition[] = {0,0.4};
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
				};
				iconPosition[] = {0.5,0.3};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser"
				};
				iconPosition[] = {0.2,0.4};
			};
			class UnderBarrelSlot : UnderBarrelSlot
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
	class 53rd_UNSC_CM12 : Dmns_CM_12
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] CM-12";
		baseWeapon = "53rd_UNSC_CM12";
		cursor = "mg";
		magazines[] =
		{
			"53rd_100Rnd_95x40_Box"
		};
		magazineWell[] = { "53rd_Magwell_Lapua" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"TCF_Rifle_Flashlight_IR"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] =
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
	};
	class 53rd_M247H_Etilka : OPTRE_M247H_Etilka{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M247H Etilka";
		baseWeapon = "53rd_M247H_Etilka";
		cursor = "OPTRE_M41";
		magazines[] =
		{
			"OPTRE_200Rnd_127x99_M247H_Etilka"
		};
		magazineWell[] = {};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};

	//////SMGs (M7, M6 Carbine)
	class 53rd_m6_carbine : pdw2000_base_F
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
		magazines[] = { "53rd_16Rnd_127x40_Mag" };
		magazineWell[] = { "53rd_Magwell_M6Carbine" };

		reloadAction = "GestureReloadSMG_03";
		recoil = "recoil_pdw";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		modes[] =
		{
			"Single",
			"FullAuto"
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound","CompSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",1.0,1,200};
				closure2[] = {"",1.0,1,200};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound : BaseSoundModeType
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
			class SilencedSound : BaseSoundModeType
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
			class CompSound : BaseSoundModeType
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
		class FullAuto : Mode_FullAuto {
			sounds[] = { "StandardSound","SilencedSound","CompSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200 };
				soundBegin[] = { "begin1",1 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType
			{
				begin1[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600 };
				begin2[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600 };
				begin3[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600 };
				soundBegin[] = { "begin1",0.33,"begin2",0.33,"begin2",0.34 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class CompSound : BaseSoundModeType
			{
				begin1[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600 };
				begin2[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600 };
				begin3[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600 };
				soundBegin[] = { "begin1",0.33,"begin2",0.33,"begin3",0.34 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_pdw";
			recoilProne = "recoil_single_prone_pdw";
			dispersion = 0.0020300001;
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 50;
			midRangeProbab = 0.69999999;
			maxRange = 100;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M6_silencer"
				};
				iconPosition[] = {0.1,0.41};
				iconScale = 0.2;
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m6c_scope",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
				iconPosition[] = {0.40000001,0.31999999};
				iconScale = 0.15000001;
			};
			class PointerSlot
			{
				compatibleItems[] =
				{
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser"
				};
			};
			mass = 30;
		};
		inertia = 0.2;
		aimTransitionSpeed = 1.5;
		dexterity = 1.8;
		initSpeed = 600;
		class ItemInfo
		{
			priority = 2;
		};
	};
	class 53rd_M7 : 19_UNSC_M7
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
		magazines[] = { "53rd_60Rnd_5x23mm_Mag" };
		magazineWell[] = {"53rd_Magwell_M7"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = {"optre_m7_silencer"};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =		
				{"OPTRE_M7_Sight",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"19_UNSC_M7_optic"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};

	//////Snipers (MASR, SRS)
	class 53rd_MASR : DMR_04_base_F
	{
		author = "Operative Peroski";
		_generalMacro = "srifle_DMR_04_F";
		scope = 2;
		model = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\DMR_04_F.p3d";
		dexterity = 1.6799999;
		displayName = "[53rd] MASR-1";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\Data\UI\gear_DMR_04_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "$STR_A3_CfgWeapons_srifle_DMR_04_F1";
		inertia = 0.60000002;
		aimTransitionSpeed = 0.80000001;
		magazines[] = {"53rd_4Rnd_145x114_APFSDS_Mag"};
		magazineWell[] = { "53rd_Magwell_Snipers" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot
			{
				inkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
				iconPosition[] = { 0,0.4 };
			};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"optic_ERCO_blk_F",
					"OPTRE_SRM_Sight"
				};
				iconPosition[] = { 0.5,0.3 };
			};
			class PointerSlot
			{
				compatibleitems[] =
				{
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser"
				};
				iconPosition[] = { 0.2,0.4 };
			};
			class UnderBarrelSlot
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
		class ItemInfo
		{
			priority = 1;
		};
	};
	class 53rd_UNSC_SRS99_AM : 19_UNSC_SRS99AM
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] SRS-99AM";
		baseWeapon = "53rd_UNSC_SRS99_AM";
		cursor = "OPTRE_SRS99";
		magazines[] = {"53rd_4Rnd_145x114_APFSDS_Mag"};
		magazineWell[] = {"53rd_Magwell_Snipers"};
		maxZeroing = 2000;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot
			{
				compatibleItems[] =
				{
					
				};
			};
			class CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_SRS99_Scope",
					"OPTRE_SRS99C_Scope",
					"19_UNSC_SRS99AM_Scope",
				};
			};
			class PointerSlot
			{
				compatibleitems[] = {};

			};
			class UnderBarrelSlot
			{
				compatibleItems[] = {};
			};

		};
	};
	class 53rd_UNSC_SRS99_Fang : OPTRE_SRS99D
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] SRS-99 (Fang)";
		baseWeapon = "53rd_UNSC_SRS99_Fang";
		cursor = "OPTRE_SRS99";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"53rd_Weapons\SRS99 (NornFang)\Norn_MainBody_CO.paa","53rd_Weapons\SRS99 (NornFang)\Mag_CO.paa"};
		magazines[] = {"53rd_4Rnd_145x114_APFSDS_Mag"};
		magazineWell[] = {"53rd_Magwell_Snipers"};
		maxZeroing = 2000;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_SRS99D_Suppressor"
				};

			};
			class CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_SRS99_Scope",
					"OPTRE_SRS99C_Scope",
					"19_UNSC_SRS99AM_Scope",
					"optic_MRCO",
					"ACE_optic_MRCO_2D"
				};
			};
			class PointerSlot
			{
				compatibleitems[] = {};

			};
			class UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
			
		};
	};

	//////Pistols (M6C, M6G)
	class 53rd_UNSC_M6C : OPTRE_M6B
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M6C";
		baseWeapon = "53rd_UNSC_M6C";
		cursor = "OPTRE_M6B";
		magazines[] = {"53rd_12Rnd_127x40_Mag"};
		magazineWell[] = { "53rd_Magwell_M6C" };
		linkedItems[] = { "OPTRE_M6C_compensator", "OPTRE_M6C_Laser" };

		picture = "\OPTRE_weapons\pistol\icons\m6c_icon.paa";
		model = "\OPTRE_Weapons\Pistol\m6c.p3d";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\optre_weapons\pistol\data\m6c_m6c_co.paa" };

		class Single : Single {
			reloadTime = .1875;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = { "OPTRE_M6C_compensator", "OPTRE_M6_silencer"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = { "TCF_M6_Flashlight_IR", "OPTRE_M6C_Laser" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "OPTRE_M6C_Scope" };
			};
		};
	}
	class 53rd_UNSC_M6G : OPTRE_M6B
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M6G";
		baseWeapon = "53rd_UNSC_M6G";
		cursor = "OPTRE_M6B";
		magazines[] = {"53rd_8Rnd_127x40_Mag"};
		magazineWell[] = { "53rd_Magwell_M6G" };

		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";
		model = "\OPTRE_Weapons\Pistol\m6g.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\OPTRE_Weapons\Pistol\data\M6G_CO.paa" };
		picture = "\OPTRE_weapons\pistol\icons\m6g_icon.paa";


		class Single : Single {
			reloadTime = .25;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = { "OPTRE_M6_silencer" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = { "OPTRE_M6G_Laser", "OPTRE_M6G_Flashlight" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "OPTRE_M6G_Scope" };
			};

		};
	};
	class 53rd_UNSC_SAS10 : optre_hgun_sas10_F{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] SAS10";
		baseWeapon = "53rd_UNSC_SAS10";
		cursor = "OPTRE_M6G";
		//magazines[] = {""};
		//magazineWell[] = {""};
		maxZeroing = 2000;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_M12_Suppressor"
				};
			};
			class CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M7_Sight"
				};
			};
			class PointerSlot
			{
				compatibleitems[] = {};

			};
			class UnderBarrelSlot
			{
				compatibleItems[] = {};
			};

		};
	};

	//////Riot Shields
	//Mostly taken from OPTRE as we need to recreate the item entirely to customize magazines and magwells
	//Required for riot shields to be implemented properly
	class OPTRE_Riot_Shield_Icon_Attachments : UnderBarrelSlot
	{
		iconPinpoint = "center";
		iconPosition[] = { 1,0 };
		iconScale = 0.0099999998;
		iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
		class compatibleItems
		{
			OPTRE_Riot_Shield_Icon_A2S = 1;
			OPTRE_Riot_Shield_Icon_UNSC = 1;
			OPTRE_Riot_Shield_Icon_Police = 1;
			OPTRE_Riot_Shield_Icon_CMA = 1;
			OPTRE_Riot_Shield_Icon_MEU = 1;
			OPTRE_Riot_Shield_Icon_Fist = 1;
			OPTRE_Riot_Shield_Icon_Innie = 1;
			OPTRE_Riot_Shield_Icon_Jolly = 1;
			OPTRE_Riot_Shield_Icon_ODST = 1;
			OPTRE_Riot_Shield_Icon_ODSTBlue = 1;
			OPTRE_Riot_Shield_Icon_Virgil = 1;
		};
	};

	
	class 53rd_M6G_Riot_Shield : 53rd_UNSC_M6G
	{
		author = "53rd Aux Team";
		baseWeapon = "53rd_M6G_Riot_Shield";
		scope = 2;
		displayName = "[53rd] Riot Shield (M6G)";
		magazines[] = { "53rd_8Rnd_127x40_Mag" };
		magazineWell[] = { "53rd_Magwell_M6G" };

		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = { "OPTRE_M6_silencer" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = { "OPTRE_M6G_Laser", "OPTRE_M6G_Flashlight" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "OPTRE_M6G_Scope" };
			};
		};
		model = "\OPTRE_Weapons\RiotShield\riotshield_M6G.p3d";
		hiddenSelections[] =
		{
			"camoShield",
			"camoWindshield",
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"OPTRE_Weapons\RiotShield\data\Body_co.paa",
			"OPTRE_Weapons\riotshield\data\body_ca.paa",
			"\OPTRE_Weapons\Pistol\data\M6G_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"OPTRE_Weapons\RiotShield\data\body.rvmat",
			"OPTRE_Weapons\riotshield\data\glass.rvmat",
			"optre_weapons\pistol\data\m6g.rvmat"
		};
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\m6g_human.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\spartan\m6g_spartan.rtm"
		};
		type = 1;
		inertia = 0.5;
		dexterity = 1.25;
		class OpticsModes
		{
			class ironsight
			{
				cameraDir = "eye_dir";
				discreteDistance[] = { 100 };
				discreteDistanceCameraPoint[] =
				{
					"eye"
				};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 0;
				opticsPPEffects[] =
				{
					"",
					""
				};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
			class shieldView
			{
				cameraDir = "eye2_dir";
				discreteDistance[] = { 100 };
				discreteDistanceCameraPoint[] =
				{
					"eye2"
				};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye2";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] =
				{
					"",
					""
				};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class FlashLight
		{
			color[] = { 180,180,180 };
			ambient[] = { 0.89999998,0.89999998,0.89999998 };
			intensity = 750;
			size = 1;
			innerAngle = 5;
			outerAngle = 45;
			coneFadeCoef = 10;
			position = "flash_dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 150;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 100;
				hardLimitEnd = 170;
			};
			scale[] = { 0 };
		};
	};
	class 53rd_Bulldog_Riot_Shield : OPTRE_CQS48S_Chihuahua_Automatic
	{
		author = "53rd Aux Team";
		baseWeapon = "53rd_Bulldog_Riot_Shield";
		scope = 2;
		displayName = "[53rd] Riot Shield (Bulldog)";
		magazines[] = { "53rd_12Rnd_12Gauge_Pellets" };
		magazineWell[] = { "53rd_Magwell_12Gauge" };
		model = "\OPTRE_Weapons\RiotShield\riotshield_Bulldog.p3d";
		hiddenSelections[] =
		{
			"camoShield",
			"camoWindshield",
			"camoBody",
			"camoDecal"
		};
		hiddenSelectionsTextures[] =
		{
			"OPTRE_Weapons\RiotShield\data\Body_co.paa",
			"OPTRE_Weapons\riotshield\data\body_ca.paa",
			"\OPTRE_Weapons\bulldog\data\chihuahua\Body_co.paa",
			"\OPTRE_Weapons\bulldog\data\decal\cqs48as\DecalSheet_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"OPTRE_Weapons\RiotShield\data\body.rvmat",
			"OPTRE_Weapons\riotshield\data\glass.rvmat",
			"\OPTRE_Weapons\bulldog\data\chihuahua\body.rvmat",
			"\OPTRE_Weapons\bulldog\data\decal\cqs48as\decal.rvmat"
		};
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\bulldog_human.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\spartan\bulldog_spartan.rtm"
		};
		type = 1;
		inertia = 0.5;
		dexterity = 1.25;
		class OpticsModes
		{
			class ironsight
			{
				cameraDir = "eye_dir";
				discreteDistance[] = { 100 };
				discreteDistanceCameraPoint[] =
				{
					"eye"
				};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 0;
				opticsPPEffects[] =
				{
					"",
					""
				};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
			class shieldView
			{
				cameraDir = "eye2_dir";
				discreteDistance[] = { 100 };
				discreteDistanceCameraPoint[] =
				{
					"eye2"
				};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye2";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] =
				{
					"",
					""
				};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class FlashLight
		{
			color[] = { 180,180,180 };
			ambient[] = { 0.89999998,0.89999998,0.89999998 };
			intensity = 750;
			size = 1;
			innerAngle = 5;
			outerAngle = 45;
			coneFadeCoef = 10;
			position = "flash_dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 150;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 100;
				hardLimitEnd = 170;
			};
			scale[] = { 0 };
		};

		
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"OPTRE_M45_Flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] =
				{

				};
			};
		};
	};
	class 53rd_M7_Riot_Shield : OPTRE_M7
	{
		author = "53rd Aux Team";
		baseWeapon = "53rd_M7_Riot_Shield";
		scope = 2;
		displayName = "[53rd] Riot Shield (M7)";
		
		magazines[] = { "53rd_48Rnd_5x23mm_Mag" };
		magazineWell[] = { "53rd_Magwell_M7" };

		model = "\OPTRE_Weapons\RiotShield\riotshield_M7.p3d";
		hiddenSelections[] =
		{
			"camoShield",
			"camoWindshield",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"OPTRE_Weapons\RiotShield\data\Body_co.paa",
			"OPTRE_Weapons\riotshield\data\body_ca.paa",
			"OPTRE_Weapons\smg\data\m7_m7_co.paa",
			"OPTRE_Weapons\smg\data\m7_magazine_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"OPTRE_Weapons\RiotShield\data\body.rvmat",
			"OPTRE_Weapons\riotshield\data\glass.rvmat",
			"optre_weapons\smg\data\m7_m7.rvmat",
			"optre_weapons\smg\data\m7_magazine.rvmat"
		};
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\m7_human.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\spartan\m7_spartan.rtm"
		};
		type = 1;
		inertia = 0.5;
		dexterity = 1.25; 
		class OpticsModes
		{
			class ironsight
			{
				cameraDir = "eye_dir";
				discreteDistance[] = { 100 };
				discreteDistanceCameraPoint[] =
				{
					"eye"
				};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 0;
				opticsPPEffects[] =
				{
					"",
					""
				};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
			class shieldView
			{
				cameraDir = "eye2_dir";
				discreteDistance[] = { 100 };
				discreteDistanceCameraPoint[] =
				{
					"eye2"
				};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye2";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] =
				{
					"",
					""
				};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class FlashLight
		{
			color[] = { 180,180,180 };
			ambient[] = { 0.89999998,0.89999998,0.89999998 };
			intensity = 750;
			size = 1;
			innerAngle = 5;
			outerAngle = 45;
			coneFadeCoef = 10;
			position = "flash_dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 150;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 100;
				hardLimitEnd = 170;
			};
			scale[] = { 0 };
		};
		class close : FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.050000001;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 50;
			maxRangeProbab = 0.039999999;
			showToPlayer = 0;
		};
		class short : close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.039999999;
		};
		class medium : close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000001;
			midRange = 400;
			midRangeProbab = 0.60000002;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far : close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.039999999;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.0099999998;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 10;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "optre_m7_silencer" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "OPTRE_M7_Sight" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Laser",
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	class 53rd_M6C_Riot_Shield : 53rd_UNSC_M6C
	{
		author = "53rd Aux Team";
		baseWeapon = "53rd_M6C_Riot_Shield";
		scope = 2;
		displayName = "[53rd] Riot Shield (M6C)";
		magazines[] = { "53rd_12Rnd_127x40_Mag" };
		magazineWell[] = { "53rd_Magwell_M6C" };

		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = { "OPTRE_M6C_compensator", "OPTRE_M6_silencer" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = { "TCF_M6_Flashlight_IR", "OPTRE_M6C_Laser" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "OPTRE_M6C_Scope" };
			};
		};
		model = "\OPTRE_Weapons\RiotShield\riotshield_M6C.p3d";
		hiddenSelections[] =
		{
			"camoShield",
			"camoWindshield",
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"OPTRE_Weapons\RiotShield\data\Body_co.paa",
			"OPTRE_Weapons\riotshield\data\body_ca.paa",
			"\optre_weapons\pistol\data\m6c_m6c_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"OPTRE_Weapons\RiotShield\data\body.rvmat",
			"OPTRE_Weapons\riotshield\data\glass.rvmat",
			"optre_weapons\pistol\data\m6c_m6c.rvmat"
		};
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\m6c_human.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\spartan\m6c_spartan.rtm"
		};
		type = 1;
		inertia = 0.5;
		dexterity = 1.25;
		class OpticsModes
		{
			class ironsight
			{
				cameraDir = "eye_dir";
				discreteDistance[] = { 100 };
				discreteDistanceCameraPoint[] =
				{
					"eye"
				};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 0;
				opticsPPEffects[] =
				{
					"",
					""
				};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
			class shieldView
			{
				cameraDir = "eye2_dir";
				discreteDistance[] = { 100 };
				discreteDistanceCameraPoint[] =
				{
					"eye2"
				};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye2";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] =
				{
					"",
					""
				};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class FlashLight
		{
			color[] = { 180,180,180 };
			ambient[] = { 0.89999998,0.89999998,0.89999998 };
			intensity = 750;
			size = 1;
			innerAngle = 5;
			outerAngle = 45;
			coneFadeCoef = 10;
			position = "flash_dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 150;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 100;
				hardLimitEnd = 170;
			};
			scale[] = { 0 };
		};
	};



	// 
	//////NOT VISIBLE OR SOMETHING WRONG
	//Not visible
	class 53rd_M73H : OPTRE_M73
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
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"optre_m7_silencer",
					"OPTRE_srs99d_suppressor"
				};
			};
			class CowsSlot : CowsSlot
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
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
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
	//Not visible
	//done
	class 53rd_AR0M37 : TCF_AR0M37
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
		magazines[] = {};
		magazineWell[] = {"53rd_Magwell_AR0"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] =
				{
					"OPTRE_MA5Suppressor",
					"OPTRE_M6_silencer",
					"optre_m7_silencer"
				};
			};
			class CowsSlot : CowsSlot
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
			class PointerSlot : PointerSlot
			{
				compatibleItems[] =
				{
					"acc_pointer_ir",
					"acc_flashlight",
					"OPTRE_BMR_Laser",
					"optre_m12_laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
		modes[] = {"FullAuto","Single","close","short","medium","far"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound : BaseSoundModeType
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
			class SilencedSound : BaseSoundModeType
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
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound : BaseSoundModeType
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
			class SilencedSound : BaseSoundModeType
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
		class close : FullAuto
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
		class short : close
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
		class medium : close
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
		class far : close
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
	//Not visible
	//done
	class 53rd_AR0M37_M420 : TCF_AR0M37_GL
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
		magazines[] = {};
		magazineWell[] = { "53rd_Magwell_AR0" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] =
				{
					"OPTRE_MA5Suppressor",
					"OPTRE_M6_silencer",
					"optre_m7_silencer"
				};
			};
			class CowsSlot : CowsSlot
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
			class PointerSlot : PointerSlot
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
		class Single : Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound : BaseSoundModeType
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
			class SilencedSound : BaseSoundModeType
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
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound : BaseSoundModeType
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
			class SilencedSound : BaseSoundModeType
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
		class close : FullAuto
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
		class short : close
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
		class medium : close
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
		class far : close
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
	//Not visible
	//done
	class 53rd_AR0M37_M45U : TCF_AR0M37_SHT
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
		magazines[] = {};
		magazineWell[] = { "53rd_Magwell_AR0" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] =
				{
					"OPTRE_MA5Suppressor",
					"OPTRE_M6_silencer",
					"optre_m7_silencer"
				};
			};
			class CowsSlot : CowsSlot
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
			class PointerSlot : PointerSlot
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
		class Single : Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound : BaseSoundModeType
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
			class SilencedSound : BaseSoundModeType
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
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound : BaseSoundModeType
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
			class SilencedSound : BaseSoundModeType
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
		class close : FullAuto
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
		class short : close
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
		class medium : close
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
		class far : close
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
	//Not visible
	//done
	class 53rd_DMR0M37 : TCF_DMR0M37
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
		magazines[] = {};
		magazineWell[] = { "53rd_Magwell_AR0" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] =
				{
					"OPTRE_MA5Suppressor",
					"OPTRE_M6_silencer",
					"optre_m7_silencer"
				};
			};
			class CowsSlot : CowsSlot
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
			class PointerSlot : PointerSlot
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
		class Single : Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound : BaseSoundModeType
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
			class SilencedSound : BaseSoundModeType
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
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound : BaseSoundModeType
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
			class SilencedSound : BaseSoundModeType
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
		class close : FullAuto
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
		class short : close
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
		class medium : close
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
		class far : close
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


	
	
	//////UB Launchers
	class 53rd_GRL_45 : MA_GRL_45{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] GRL-45";
		baseWeapon = "53rd_GRL_45";
	};
	class 53rd_UNSC_M41_SSR : OPTRE_M41_SSR{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M41 SSR 'SPANKr'";
		baseWeapon = "53rd_UNSC_M41_SSR";
		magazines[] = {
			"53rd_M41_Twin_HEAT"
		};
		magazineWell[] = { "53rd_Magwell_SPANKr" };
	};
	class OPTRE_M301X : UGL_F
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
		magazineWell[] = {};
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
			magazines[] = { "c7_remote_throwable_Mag" };
		};
		class C12_Muzzle : ThrowMuzzle
		{
			reloadtime = 0;
			magazines[] = { "c12_remote_throwable_Mag" };
		};
		class C168_Muzzle : ThrowMuzzle
		{
			reloadtime = 0;
			magazines[] = { "C168_Mag" };
		};
		class 9bang_Muzzle : ThrowMuzzle
		{
			reloadtime = 0;
			magazines[] = {"9bang_Mag"};
		};
		class ANM14_Muzzle : ThrowMuzzle
		{
			reloadtime = 0;
			magazines[] = { "ANM14_Thermite_Grenade_Mag" };
		};
		class M9_Frag_Muzzle : ThrowMuzzle
		{
			reloadtime = 0;
			magazines[] = { "M9_Frag_Mag" };
		};
		class Thermobaric_Grenade_Muzzle : ThrowMuzzle
		{
			reloadtime = 0;
			magazines[] = { "Thermobaric_Grenade_Mag" };
		};
		class Bubble_Shield_Muzzle : ThrowMuzzle
		{
			reloadtime = 0;
			magazines[] = { "Bubble_Shield_Mag" };
		};
	};
};