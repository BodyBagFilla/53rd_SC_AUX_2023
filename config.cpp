/// https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide ///
/// Equipment list macros definition ///

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

#include "Functions\CfgFunctions.hpp"
class CfgPatches {
	class black_body {
		units[] = 
        {
            "53rd_Bulldog_RV",
            "53rd_M1015_RV_mule",
			"53rd_Bulldog_Panzer",
			"53rd_HaloInf_ODST_F",
			"53rd_Bulldog_MG",
			"53rd_ATLAS_Dog",
			"53rd_Bulldog_Grey",
        };
		weapons[] = 
        {
			"53rd_MA37",
			"53rd_MA37GL",
			"53rd_MA32",
			"53rd_MA32GL",
			"H_HelmetCrew_B",
			"53rd_HelmetCrew_B",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class VES_CH252D;
	class VES_CH252D_dp;
	class OPTRE_UNSC_M52A_Armor_Base;
	class Hands;
	class Pelvis;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
    class VES_CH252A_dp;
	class OPTRE_UNSC_CH252D_Helmet_Base;
	class H_Booniehat_khk;
	class OPTRE_UNSC_PatrolCap_Army;
	class OPTRE_CPD_Cap;
	class haloinfodst_U_uniform;
	class Uniform_Base;
	class HaloInf_Marine_WDL_NV_headgear;
	class HaloInf_Marine_WDL_headgear;
	class TCF_Reach_Scout_Helmet;
	class OPTRE_M247;

	
//Stetson
    class ItemCore;
    class InventoryItem_Base_F;

    
    //Weapons
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
	class OPTRE_MA32GL
	{
		class WeaponSlotsInfo;
	};
    
    
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
			"TCF_32Rnd_762x51_Mag_SST"
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
			"TCF_32Rnd_762x51_Mag_SST"
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
			"TCF_32Rnd_762x51_Mag_SST"
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
			"TCF_32Rnd_762x51_Mag_SST"
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
			"OPTRE_100Rnd_127x99_BOX_HET"
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
					"OPTRE_M393_EOTECH"
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
};

class CfgVehicles
{ //Bulldog
    class Turrets;
	class MainTurret;
	class haloinf_ODST_Soldier_base_F;
	class haloinf_Marine_Soldier_base_F;
	class DMNS_Bulldog_FAV;
	class DMNS_Bulldog_LRV_AGL;
	class DMNS_Bulldog_LRV_MG
	{
		class Turrets
		{
			class MainTurret;
				// Turret properties and methods go here
		};
	};
	class 53rd_Bulldog_RV: DMNS_Bulldog_FAV
	{
		dlc = "53rd";
		displayName="[53rd] RV Bulldog";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\gey-bulldog.paa"
        };
        ace_repair_canRepair = 1;
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;
		class TransportBackpacks
		{
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
            item_xx(53rd_anprc152l,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
                class 53rd_Weapon_Resupply
                {
                    type = "53rd_Weapon_Resupply";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_MG: DMNS_Bulldog_LRV_MG
	{
		dlc = "53rd";
		displayName="[53rd] HMG Bulldog";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\grey-bulldog.paa"
        };
        ace_repair_canRepair = 1;
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				LODTurnedOut = 1100;
				LODTurnedIn= 1100;
				LODOpticsIn= 1100;
				LODOpticsOut= 1100;
				ejectDeadGunner = 1;
				minElev = -15;
				maxElev = 30; //45
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "OPTRE_Gunner_Gaus_Warthog"; //replace meeeeeeeeeeee
				gunnerInAction = "OPTRE_Gunner_Gaus_Warthog"; //replace meeeeeeeeeeee
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				hideWeaponsGunner = 0;
				soundServo[] = { "",0.01,1 };
				stabilizedInAxes = 3;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscWeaponZeroing";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "OtocHlaven";
				gunnerRightHandAnimName = "OtocHlaven";
				//gunnerRightLegAnimName = "OtocHlave";
                //gunnerLeftLegAnimName = "OtocHlave";
				memoryPointGun = "machinegun";
				weapons[] = { "DMNS_M41_LAAG" };
				magazines[] = { "DMNS_1000Rnd_127x99_M41","DMNS_1000Rnd_127x99_M41" };
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics= "gunnerview";
				gunnerOpticsShowCursor = 1;
				castGunnerShadow = 1;
				startEngine = 0;
				enableManualFire = 0;
				gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsModel = "a3\weapons_f\Reticle\optics_empty"; // for turned out position
				gunnerForceOptics = 0;
				hasGunner = 1;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
            item_xx(53rd_anprc152l,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
                class 53rd_Weapon_Resupply
                {
                    type = "53rd_Weapon_Resupply";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_ATLAS_Dog: DMNS_Bulldog_FAV
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (Atlas)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\Atlas_Dog_bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_Grey: DMNS_Bulldog_FAV
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (Grey)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\grey-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_Heph: DMNS_Bulldog_LRV_AGL
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (Heph)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\heph-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_1_3: DMNS_Bulldog_FAV
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (1-3)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\1-3-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_Panzer: DMNS_Bulldog_LRV_AGL
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (Panzer)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\moron-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_MedicLR_53rd,2);
		};
		class TransportItems
		{
            item_xx(ACE_PlasmaIV,20);
            item_xx(ACE_plasmaIV_500,20);
            item_xx(53rd_Copium,40);
            item_xx(ACE_Tourniquet,20);
            item_xx(ACE_splint,20);
            item_xx(53rd_r_biofoam,3);
            item_xx(53rd_r_medigel,3);
            item_xx(53rd_biofoam,50);
            item_xx(ACE_packingBandage,40);
            item_xx(ACE_elasticBandage,40);
            item_xx(ACE_epinephrine,10);
            item_xx(ACE_adenosine,10);
            item_xx(ACE_surgicalKit,2);
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		ace_medical_isMedicalVehicle=1;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
    };
	class OPTRE_M1015_mule_repair_ins;
	class 53rd_M1015_RV_mule: OPTRE_M1015_mule_repair_ins
	{
		dlc = "53rd";
		displayName="[53rd] M1015 RV Mule";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
        side=1;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Truck_02_kab_CO.paa",
            "53rd_SC_aux\tex\Truck_02_repair_CO.paa",
            "53rd_SC_aux\tex\Truck_02_int_CO.paa",
            "53rd_SC_aux\tex\Truck_02_chassis_CO.paa"
        };
        ace_repair_canRepair = 1;
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};     
        ace_cargo_space = 16;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };   
	};
};