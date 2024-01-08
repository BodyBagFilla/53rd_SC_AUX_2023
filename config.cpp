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
			"H_HelmetCrew_B",
			"53rd_HelmetCrew_B",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {"53rd_Weapons"};
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