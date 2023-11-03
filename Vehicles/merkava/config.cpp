/* class CfgPatches {
	class 53rd_Merkava {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles {
 class B_MBT_01_TUSK_F;
    class 53rd_Merkava_BB: B_MBT_01_TUSK_F
	{
		displayName="[53rd] Mk4 Merkava";
		author="Seven";
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_MBT_01_TUSK_F.jpg";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportSoldier=15;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_IFV";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		hiddenSelectionsTextures[]=
		{
            "53rd_SC_aux\Vehicles\merkava\MBT_01_body_white_CO.paa",
            "53rd_SC_aux\Vehicles\merkava\MBT_01_tow_white_CO.paa",
            "53rd_SC_aux\Vehicles\merkava\mbt_addons_white_CO.paa",
            "53rd_SC_aux\Vehicles\merkava\camonet_NATO_Tundra_CO.paa"
		};
		class TextureSources
		{
			class 53rd_olive
			{
				displayName="Olive";
				author="Seven";
				textures[]=
				{
                    "A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",
                    "A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa",
                    "A3\Armor_F_Exp\MBT_01\data\mbt_addons_olive_CO.paa",
                    "a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
			};
			class 53rd_sand
			{
				displayName="Sand";
				author="Seven";
				textures[]=
				{
					"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",
					"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa",
					"a3\armor_f_epc\mbt_01\data\mbt_addons_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
			};
			class 53rd_winter
			{
				displayName="Winter";
				author="Seven";
				textures[]=
				{
                    "53rd_SC_aux\Vehicles\merkava\MBT_01_body_white_CO.paa",
                    "53rd_SC_aux\Vehicles\merkava\MBT_01_tow_white_CO.paa",
                    "53rd_SC_aux\Vehicles\merkava\mbt_addons_white_CO.paa",
					"53rd_SC_aux\Vehicles\merkava\camonet_NATO_Tundra_CO.paa"
				};
			};
        };
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class ACE_track
                {
                    type = "ACE_track";
                    amount = 1;
                };
                class 53rd_Hardbox_Resupply
                {
                    type = "53rd_Hardbox_Resupply";
                    amount = 1;
                };
            };
        };
	};
};