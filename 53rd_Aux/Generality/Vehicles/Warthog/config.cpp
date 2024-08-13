
class CfgPatches {
	class 53rd_Hogs {
		units[] = 
		{
			"53rd_M12_FAV_APC",
			"53rd_M813_TT",
			"53rd_M12A1_LRV",
			"53rd_M12_LRV",
			"53rd_M12_FAV",
			"53rd_M12G1_LRV",
			"53rd_M12R_AA",
			"53rd_M914_RV",
			"53rd_M12G1_ONI_LRV",
			"53rd_M12R_AA"
		};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	
		class OPTRE_M12_FAV_APC;
		class OPTRE_M813_TT;
		class OPTRE_M12A1_LRV;
		class OPTRE_M12_FAV;
		class OPTRE_M12_LRV;
		class OPTRE_M12G1_LRV;
		class OPTRE_M12R_AA;
		class OPTRE_M914_RV;






	class 53rd_M12_FAV_APC: OPTRE_M12_FAV_APC
	{
		displayName="[53rd] Warthog (M12 APC)";
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
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_APCBar.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_APCBay.paa",
			"",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Interior.paa"

		};
	};

	class 53rd_M813_TT: OPTRE_M813_TT
	{
		displayName="[53rd] Warthog (M813 Transport)";
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
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_APCBar.paa",
			"",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Interior.paa"
		};
	};

	class 53rd_M12A1_LRV: OPTRE_M12A1_LRV
	{
		displayName="[53rd] Warthog (M12A1 AT)";
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
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_LAAG.paa",
			"",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Interior.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",

		};
	};

	class 53rd_M12_FAV: OPTRE_M12_FAV
	{
		displayName="[53rd] Warthog (M12 Recon)";
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
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Interior.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa"
		};
	};

	class 53rd_M12_LRV: OPTRE_M12_LRV
	{
		displayName="[53rd] Warthog (M12 LAAG)";
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
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_LAAG.paa",
			"",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Interior.paa",
			"",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
		};
	};

	class 53rd_M12G1_LRV: OPTRE_M12G1_LRV
	{
		displayName="[53rd] Warthog (M12G1 Gauss)";
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
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Gauss.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_LAAG.paa",
			"",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Interior.paa"
		};
	};
	
	class 53rd_M12R_AA: OPTRE_M12R_AA
	{
		displayName="[53rd] Warthog (M12 AA)";
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
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Hull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_AA.paa",
			"",
			"\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Interior.paa"
		};
	};

class 53rd_M914_RV: OPTRE_M914_RV {
    displayName = "[53rd] Warthog (M914 RV)";
    author = "53rd Aux Team";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    faction = "53rd_faction";
    editorCategory = "53rd_cat_faction";
    editorSubCategory = "53rd_Motor";
    crew = "53rd_crewman_unit";
    typicalCargo[] = {
        "53rd_crewman_unit"
    };
    hiddenSelectionsTextures[] = {
        "\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Hull.paa",
        "\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_UnderHull.paa",
        "",
        "\53rd_Aux\Generality\Vehicles\Warthog\53rd_Warthog_Interior.paa",
        "\OPTRE_Vehicles\warthog\data\net_ca.paa"
    };
    ace_rearm_defaultSupply = 1200;
    ace_refuel_fuelCargo = 1000;

    class TransportItems {
        class _xx_53rd_Copium {
            name = "53rd_Copium";
            count = 20;
        };
        class _xx_ITC_Land_B_AR2i_Packed {
            name = "ITC_Land_B_AR2i_Packed";
            count = 2;
        };
        class _xx_OPTRE_Biofoam {
            name = "OPTRE_Biofoam";
            count = 20;
        };
        class _xx_ChemicalDetector_01_watch_F {
            name = "ChemicalDetector_01_watch_F";
            count = 2;
        };
        class _xx_ACE_Chemlight_IR {
            name = "ACE_Chemlight_IR";
            count = 2;
        };
        class _xx_ACE_EntrenchingTool {
            name = "ACE_EntrenchingTool";
            count = 2;
        };
        class _xx_ACE_Fortify {
            name = "ACE_Fortify";
            count = 2;
        };
        class _xx_OPTRE_Smartfinder {
            name = "OPTRE_Smartfinder";
            count = 2;
        };
        class _xx_OPTRE_M8_Flare_Blue {
            name = "OPTRE_M8_Flare_Blue";
            count = 10;
        };
        class _xx_Toolkit {
            name = "Toolkit";
            count = 2;
        };
        class _xx_ACE_UAVBattery {
            name = "ACE_UAVBattery";
            count = 2;
        };
        class _xx_B_UavTerminal {
            name = "B_UavTerminal";
            count = 2;
        };
        class _xx_ACE_DefusalKit {
            name = "ACE_DefusalKit";
            count = 2;
        };
    };

    class TransportMagazines {
        class _xx_APERSMineDispenser_Mag {
            magazine = "APERSMineDispenser_Mag";
            count = 3;
        };
        class _xx_C7_Remote_Mag {
            magazine = "C7_Remote_Mag";
            count = 5;
        };
        class _xx_C12_Remote_Mag {
            magazine = "C12_Remote_Mag";
            count = 2;
        };
    };

    class TransportWeapons {};

    ace_cargo_space = 4;
    ace_cargo_hasCargo = 1;

    class ACE_Cargo 
	{
        class Cargo {
            class 53rd_Speedbag {
                type = "53rd_SupplyPod_Medical";
                amount = 1;
            };
        };
    };
};


};