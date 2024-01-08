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
		hiddenSelectionsTextures[]=
		{
		"53rd_SC_aux\Vehicles\Oryx\Oryx_Armor.paa",
		"53rd_SC_aux\Vehicles\Oryx\Oryx_Hull.paa",
		"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
		"53rd_SC_aux\Vehicles\Oryx\Oryx_Turret.paa",
		"53rd_SC_aux\Vehicles\Oryx\Oryx_MG.paa",
		"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Oryx\Oryx_Armor.paa",
					"53rd_SC_aux\Vehicles\Oryx\Oryx_Hull.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"53rd_SC_aux\Vehicles\Oryx\Oryx_Turret.paa",
					"53rd_SC_aux\Vehicles\Oryx\Oryx_MG.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
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
		hiddenSelectionsTextures[]=
		{
		"53rd_SC_aux\Vehicles\Oryx\Oryx_Armor.paa",
		"53rd_SC_aux\Vehicles\Oryx\Oryx_Hull.paa",
		"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
		"53rd_SC_aux\Vehicles\Oryx\Oryx_Turret.paa",
		"53rd_SC_aux\Vehicles\Oryx\Oryx_MG.paa",
		"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
		};
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