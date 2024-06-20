class CfgPatches {
	class 53rd_MGS {
		units[] = {"53rd_MGS_01D","53rd_MGS_01E"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
	class B_AFV_Wheeled_01_up_cannon_F;
	class B_AFV_Wheeled_01_cannon_F;
	class 53rd_MGS_01D: B_AFV_Wheeled_01_cannon_F
    {
        displayName="[53rd] MGS-53D Cougar";
		author="53rd Aux Team";
        dlc = "53rd";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        editorCategory = "53rd_cat_faction";
        editorSubCategory = "53rd_IFV";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "camo3",
            "CamoNet",
            "CamoSlat"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Hull.paa",
            "53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Turret.paa",
            "53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Wheels.paa",
            "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
            "a3\Armor_F\Data\cage_olive_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "LM_OPCAN3.0\BLU\UNSC\VEH\MGS1.rvmat",
            "LM_OPCAN3.0\BLU\UNSC\VEH\MGS2.rvmat"
        };
        crew="53rd_crewman_unit";
        textureList[]=
        {
            "Army",
            1
        };
        class TextureSources
        {
            class Army
            {
                displayName="UNSC Army";
                author="$STR_A3_Bohemia_Interactive";
                textures[]=
                {
					"53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Hull.paa",
					"53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Turret.paa",
					"53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Wheels.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\camonet_NATO_Green_CO.paa",
                    "a3\Armor_F\Data\cage_olive_CO.paa"
                };
                factions[]=
                {
                    "53rd"
                };
            };
        };
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_Hardbox_Resupply
                {
                    type = "53rd_Hardbox_Resupply";
                    amount = 1;
                };
            };
        };
    };
    class 53rd_MGS_01E: B_AFV_Wheeled_01_up_cannon_F
    {
        displayName="[53rd] MGS-53E Cougar";
		author="53rd Aux Team";
        dlc = "53rd";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_IFV";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "CamoNet",
            "CamoSlat"
        };
        hiddenSelectionsTextures[]=
        {
             "53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Hull.paa",
            "53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Turret.paa",
            "53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Wheels.paa",
            "53rd_SC_aux\Vehicles\Timberwolf\53rd_Cougar_BoomGuard.paa",
            "53rd_SC_aux\Vehicles\Timberwolf\53rd_Cougar_Commander.paa",
            "53rd_SC_aux\Vehicles\Timberwolf\camonet_NATO_Green_CO.paa",
            "53rd_SC_aux\Vehicles\Timberwolf\53rd_Cougar_BoomGuard.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "LM_OPCAN3.0\BLU\UNSC\VEH\MGS1.rvmat",
            "LM_OPCAN3.0\BLU\UNSC\VEH\MGS2.rvmat"
        };
        crew="53rd_crewman_unit";
        textureList[]=
        {
            "Army",
            1
        };
        class TextureSources
        {
            class Army
            {
                displayName="UNSC Army";
                author="$STR_A3_Bohemia_Interactive";
                textures[]=
                {
					"53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Hull.paa",
					"53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Turret.paa",
					"53rd_sc_aux\Vehicles\Timberwolf\53rd_Cougar_Wheels.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\53rd_Cougar_BoomGuard.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\53rd_Cougar_Commander.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\camonet_NATO_Green_CO.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\53rd_Cougar_BoomGuard.paa"
                };
                factions[]=
                    {
                        "53rd"
                    };
            };
        };
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_Hardbox_Resupply
                {
                    type = "53rd_Hardbox_Resupply";
                    amount = 1;
                };
            };
        };
    };
};