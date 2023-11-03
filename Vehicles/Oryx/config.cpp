class CfgPatches {
	class 53rd_Loryx {
		units[] = {"53rd_Oryx","53rd_Oryx_50"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
    class OPTRE_M494;
	class 53rd_Oryx: OPTRE_M494
	{
		displayName="[53rd] M494 Oryx";
		author="53rd & Seven";
		dlc = "53rd";
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
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Oryx\oryx_armor_grey_co.paa",
					"53rd_SC_aux\Vehicles\Oryx\oryx_main_grey_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"53rd_SC_aux\Vehicles\Oryx\oryx_turret_grye_co.paa",
					"53rd_SC_aux\Vehicles\Oryx\Scorpion_mg_grey_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
			class colordes
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
			class colortund
			{
				displayName="White Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
			class colorjung
			{
				displayName="Green Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\Oryx\oryx_armor_grey_co.paa",
			"53rd_SC_aux\Vehicles\Oryx\oryx_main_grey_co.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
			"53rd_SC_aux\Vehicles\Oryx\oryx_turret_grye_co.paa",
			"53rd_SC_aux\Vehicles\Oryx\Scorpion_mg_grey_co.paa",
			"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
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
    class 53rd_Oryx_50:53rd_Oryx
    {
		displayName="[53rd] M494 Oryx 50mm";
		author="53rd & Seven";
		dlc = "53rd";
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
		class EventHandlers
		{
            Init = "(_this select 0) addWeaponTurret ['OPTRE_M230',[0]];(_this select 0) addMagazineTurret ['OPTRE_100Rnd_50mm_APFSDS',[0]];";
        };
    };
};