class CfgPatches {
	class 53rd_Land_IFV {
		units[] = {"53rd_IFV76_A"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
	class B_APC_Wheeled_01_cannon_F;
	class 53rd_IFV76_A: B_APC_Wheeled_01_cannon_F
	{
		
		displayName="[53rd] AFV-35 Aardvark";
		author="Body";
		dlc = "53rd AUX";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_APC";
		armor=720;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.64999998;
		tf_range=10000;
		transportSoldier=15;
		crew="53rd_crewman_unit";
		TFAR_hasIntercom=1;
		waterResistanceCoef=0.050000001;
		class EventHandlers;
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class AnimationSources;
		class UserActions;
		class textureSources
		{	
			class ves_DGRY
			{
				author="Body";
				displayName="53rd Dark Grey";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\HoneyBadger\V_IFV76_BGRY_CO.paa",
					"53rd_SC_aux\Vehicles\HoneyBadger\V_IFV76_DGray_A_CO.paa",
					"53rd_SC_aux\Vehicles\HoneyBadger\V_IFV76_DGRY_T_CO.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
				};
			};
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DES_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DES_A_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DES_T_CO.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_WDL_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_WDL_A_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_WDL_T_CO.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\armor_f\data\cage_olive_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_JNG_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_JNG_A_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_JNG_T_CO.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\armor_f\data\cage_olive_CO.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_URB_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_URB_A_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_URB_T_CO.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_A_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_T_CO.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_FRS_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_FRS_A_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_FRS_T_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_TND_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_TND_A_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_TND_T_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DUN_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DUN_A_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DUN_T_CO.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_CLS_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_CLS_A_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_CLS_T_CO.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\armor_f\data\cage_olive_CO.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO.paa",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\armor_f\data\cage_olive_CO.paa"
				};
			};
			class Heph_14
			{
				author="Body";
				displayName="Hephaestus 1-4";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\HoneyBadger\V_IFV76_1-4_Body_CO.paa",
					"53rd_SC_aux\Vehicles\HoneyBadger\V_IFV76_DGray_A_CO.paa",
					"53rd_SC_aux\Vehicles\HoneyBadger\V_IFV76_T_1-4_CO.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\armor_f\data\cage_olive_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\HoneyBadger\V_IFV76_BGRY_CO.paa",
			"53rd_SC_aux\Vehicles\HoneyBadger\V_IFV76_DGray_A_CO.paa",
			"53rd_SC_aux\Vehicles\HoneyBadger\V_IFV76_DGRY_T_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\armor_f\data\cage_sand_CO.paa"
		};
		textureList[]=
		{
			"ves_desert",
			1,
			"ves_woodland",
			1,
			"ves_jungle",
			1,
			"ves_urban",
			1,
			"ves_black",
			1,
			"ves_frost",
			1,
			"ves_tundra",
			1,
			"ves_dunes",
			1,
			"ves_classic",
			1,
			"ves_olive",
			1
		};
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 4;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_Hardbox_Resupply_int
                {
                    type = "53rd_Hardbox_Resupply";
                    amount = 1;
                };
            };
        };
	};
};