/// https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide ///
/// Equipment list macros definition ///

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgPatches {
	class 53rd_Hogs {
		units[] = {"53rd_M12_FAV_APC","53rd_M813_TT","53rd_M12A1_LRV","53rd_M12_LRV","53rd_M12_FAV","53rd_M12G1_LRV","53rd_M12R_AA","53rd_M914_RV","53rd_ONI_M12","53rd_ONI_M12R","53rd_M12G1_ONI_LRV","53rd_M12R_AA","53rd_ONI_M914","53rd_ONI_M1813","53rd_ONI_M12_Recon","53rd_CORP_M12","53rd_CORP_M12R","53rd_M12G1_CORP_LRV","53rd_CORP_M914","53rd_CORP_M1813","53rd_CORP_M12_Recon"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class OPTRE_M12_FAV_APC;
	class 53rd_M12_FAV_APC: OPTRE_M12_FAV_APC
	{
		displayName="[53rd] M12 APC Warthog";
		author="53rd Aux Team";
		dlc = "53rd";
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
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_APCBar.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_APCBay.paa",
			"",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Interior.paa"

		};
	};
	class OPTRE_M813_TT;
	class 53rd_M813_TT: OPTRE_M813_TT
	{
		dlc = "53rd";
		displayName="[53rd] M813 Transport Warthog";
		author="53rd Aux Team";
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
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_APCBar.paa",
			"",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Interior.paa"
		};
	};
	class OPTRE_M12A1_LRV;
	class 53rd_M12A1_LRV: OPTRE_M12A1_LRV
	{
		dlc = "53rd";
		displayName="[53rd] M12A1 AT Warthog";
		author="53rd Aux Team";
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
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_LAAG.paa",
			"",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Interior.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",

		};
	};

	class OPTRE_M12_FAV;
	class 53rd_M12_FAV: OPTRE_M12_FAV
	{
		dlc = "53rd";
		displayName="[53rd] M12 Recon Warthog";
		author="53rd Aux Team";
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
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Interior.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa"
		};
	};

	class OPTRE_M12_LRV;
	class 53rd_M12_LRV: OPTRE_M12_LRV
	{
		dlc = "53rd";
		displayName="[53rd] M12 LAAG Warthog";
		author="53rd Aux Team";
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
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_LAAG.paa",
			"",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Interior.paa",
			"",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
		};
	};
	class OPTRE_M12G1_LRV;
	class 53rd_M12G1_LRV: OPTRE_M12G1_LRV
	{
		dlc = "53rd";
		displayName="[53rd] M12G1 Gauss Warthog";
		author="53rd Aux Team";
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
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Gauss.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_LAAG.paa",
			"",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Interior.paa"
		};
	};
	

	class OPTRE_M12R_AA;
	class 53rd_M12R_AA: OPTRE_M12R_AA
	{
		dlc = "53rd";
		displayName="[53rd] M12 AA Warthog";
		author="53rd Aux Team";
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
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_AA.paa",
			"",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Interior.paa"
		};
	};

	class OPTRE_M914_RV;
	class 53rd_M914_RV: OPTRE_M914_RV
	{
		dlc = "53rd";
		displayName="[53rd] M914 RV Warthog";
		author="53rd Aux Team";
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
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"",
			"53rd_sc_aux\Vehicles\Warthog\53rd_Warthog_Interior.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa"
		};
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;

		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
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
                class 53rd_Speedbag
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };      
	};
//ONI HOGS
	class 53rd_ONI_M12: 53rd_M12_LRV
	{
		dlc = "53rd";
		displayName="[ONI] M12 LAAG";
		author="Body";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_ONI";
		editorCategory = "53rd_ONI_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\ONI\M12_MG_ONI.paa",
			"53rd_SC_aux\tex\Hogs\ONI\M12HogMaav_extunder_ONI_co.paa",
			"53rd_SC_aux\tex\Hogs\ONI\M12_turret_ONI_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_ONI_M12R: OPTRE_M12R_AA
	{
		dlc = "53rd";
		displayName="[ONI] M12R AA";
		author="Body";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_ONI";
		editorCategory = "53rd_ONI_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\ONI\M12_MG_ONI.paa",
			"53rd_SC_aux\tex\Hogs\ONI\M12HogMaav_extunder_ONI_co.paa",
			"53rd_SC_aux\tex\Hogs\ONI\m79_turret_ONI_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_M12G1_ONI_LRV: OPTRE_M12G1_LRV
	{
		dlc = "53rd";
		displayName="[ONI] M12G1 Gauss Warthog";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_ONI";
		editorCategory = "53rd_ONI_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\ONI\M12_MG_ONI.paa",
			"53rd_SC_aux\tex\Hogs\ONI\M12HogMaav_extunder_ONI_co.paa",
			"53rd_SC_aux\tex\Hogs\ONI\m68_turret_ONI_co.paa",
			"53rd_SC_aux\tex\Hogs\ONI\M12_turret_ONI_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_ONI_M914: OPTRE_M914_RV
	{
		dlc = "53rd";
		displayName="[ONI] M914 RV";
		author="Body";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_ONI";
		editorCategory = "53rd_ONI_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\ONI\M12_MG_ONI.paa",
			"53rd_SC_aux\tex\Hogs\ONI\M12HogMaav_extunder_ONI_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
	};
	class 53rd_ONI_M1813: OPTRE_M813_TT
	{
		dlc = "53rd";
		displayName="[ONI] M1813 Transport";
		author="Body";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_ONI";
		editorCategory = "53rd_ONI_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\ONI\M12_MG_ONI.paa",
			"53rd_SC_aux\tex\Hogs\ONI\M12HogMaav_extunder_ONI_co.paa",
			"53rd_SC_aux\tex\Hogs\ONI\transp_lopo_ONI_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_ONI_M12_Recon: OPTRE_M12_FAV
	{
		dlc = "53rd";
		displayName="[ONI] M12 Recon";
		author="Body";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_ONI";
		editorCategory = "53rd_ONI_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\ONI\M12_MG_ONI.paa",
			"53rd_SC_aux\tex\Hogs\ONI\M12HogMaav_extunder_ONI_co.paa",
			"53rd_SC_aux\tex\Hogs\ONI\M12_turret_ONI_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	//CORP HOGS
	class 53rd_CORP_M12: 53rd_M12_LRV
	{
		dlc = "53rd";
		displayName="[CORP] M12 LAAG";
		author="Body";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Dortman";
		editorCategory = "53rd_Dortman_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\Corp\M12_Corp_Main_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\M12HogMaav_extunder_Corp_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\m12_turret_Corp_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_CORP_M12R: OPTRE_M12R_AA
	{
		dlc = "53rd";
		displayName="[CORP] M12R AA";
		author="Body";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Dortman";
		editorCategory = "53rd_Dortman_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\Corp\M12_Corp_Main_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\M12HogMaav_extunder_Corp_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\m79_turret_Corp_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_M12G1_CORP_LRV: OPTRE_M12G1_LRV
	{
		dlc = "53rd";
		displayName="[CORP] M12G1 Gauss Warthog";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Dortman";
		editorCategory = "53rd_Dortman_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\Corp\M12_Corp_Main_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\M12HogMaav_extunder_Corp_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\m68_turret_Corp_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\m12_turret_Corp_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_CORP_M914: OPTRE_M914_RV
	{
		dlc = "53rd";
		displayName="[CORP] M914 RV";
		author="Body";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Dortman";
		editorCategory = "53rd_Dortman_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\Corp\M12_Corp_Main_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\M12HogMaav_extunder_Corp_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_CORP_M1813: OPTRE_M813_TT
	{
		dlc = "53rd";
		displayName="[CORP] M1813 Transport";
		author="Body";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Dortman";
		editorCategory = "53rd_Dortman_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\Corp\M12_Corp_Main_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\M12HogMaav_extunder_Corp_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\transp_lopo_Corp_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
	class 53rd_CORP_M12_Recon: OPTRE_M12_FAV
	{
		dlc = "53rd";
		displayName="[CORP] M12 Recon";
		author="Body";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Dortman";
		editorCategory = "53rd_Dortman_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\Corp\M12_Corp_Main_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\M12HogMaav_extunder_Corp_co.paa",
			"53rd_SC_aux\tex\Hogs\Corp\m12_turret_Corp_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
	};
};
};