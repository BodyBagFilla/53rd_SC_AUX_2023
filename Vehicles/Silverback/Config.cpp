class CfgPatches
{
	class 53rd_Vehicles_Silverback
	{
		units[] =
		{
		"53rd_Silverback_FAV",
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicles
{
	 class DMNS_Silverback_base;
	 class DMNS_Silverback_LRV;
	 class DMNS_Silverback_FAV;
	 class 53rd_Silverback_FAV : DMNS_Silverback_FAV
		{
			displayName = "[53rd] Silverback (Unarmed)";
			author = "DemonicOnPc & Edited by Body";
			dlc = "53rd";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			faction="53rd_faction";
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_Motor";
			crew="53rd_crewman_unit";
			hiddenSelections[] =
			{
				"Camo1",
				"Camo2",
				"clan",
				"clan_text",
				"insignia",

				//Added Selections
				"_Ammobox",
				"_Axe",
				"_Cans",
				"_FireExtinguisher",
				"_Shovel"
			};
			hiddenSelectionsTextures[] = 
			{ 
				"53rd_SC_aux\Vehicles\Silverback\53rd_hull_co.paa",
				"53rd_SC_aux\Vehicles\Silverback\53rd_Hood_co.paa",
				"53rd_SC_aux\Vehicles\Silverback\53rd_Truck_Hull_co.paa",
			};
			class textureSources
			{
				class UNSC
				{
					displayName="UNSC";
					author="DemonicOnPc & edited by Body";
					textures[]=
					{
					"53rd_SC_aux\Vehicles\Silverback\53rd_hull_co.paa",
					"53rd_SC_aux\Vehicles\Silverback\53rd_Hood_co.paa",
					"53rd_SC_aux\Vehicles\Silverback\53rd_Truck_Hull_co.paa",
					};
				};
			};
			tf_range 											= 25000;
			tf_isolatedAmount									= .4;
			tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
			tf_hasLRradio	 									= 1;
			enableRadio											= 1;
		};
		class 53rd_Silverback_TOW : DMNS_Silverback_LRV
		{
			author = "DemonicOnPc & Body";
			model = "DMNS\DMNS_Soft\Silverback\Silverback_Armed_TOW.p3d";
			displayName = "[53rd] Silverback (TOW)";
			dlc = "53rd";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			faction="53rd_faction";
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_Motor";
			crew="53rd_crewman_unit";
			hiddenSelections[] =
			{
				"Camo1",
				"Camo2",
				"clan",
				"clan_text",
				"insignia",

				//Added Selections
				//"_Ammobox",
				//"_Axe",
				//"_Cans",
				//"_FireExtinguisher",
				//"_Shovel"
			};
			hiddenSelectionsTextures[] = 
			{ 				
				"53rd_SC_aux\Vehicles\Silverback\53rd_hull_co.paa",
				"53rd_SC_aux\Vehicles\Silverback\53rd_Hood_co.paa",
				"53rd_SC_aux\Vehicles\Silverback\53rd_Truck_Hull_co.paa",
			};
			class textureSources
			{
				class UNSC
				{
					displayName="UNSC";
					author="DemonicOnPc & edited by Body";
					textures[]=
					{
					"53rd_SC_aux\Vehicles\Silverback\53rd_hull_co.paa",
					"53rd_SC_aux\Vehicles\Silverback\53rd_Hood_co.paa",
					"53rd_SC_aux\Vehicles\Silverback\53rd_Truck_Hull_co.paa",
					};
				};
			};
		};
		class 53rd_Silverback_LRV : DMNS_Silverback_LRV
		{
		author = "DemonicOnPc & Body";
		displayName = "[53rd] Silverback (MG)";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		model = "DMNS\DMNS_Soft\Silverback\Silverback_Armed_MG.p3d";
		transportSoldier = 3;
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"clan",
			"clan_text",
			"insignia",

			//Added Selections
			//"_Ammobox",
			//"_Axe",
			//"_Cans",
			//"_FireExtinguisher",
			//"_Shovel"
		};
		hiddenSelectionsTextures[] = 
		{ 				
				"53rd_SC_aux\Vehicles\Silverback\53rd_hull_co.paa",
				"53rd_SC_aux\Vehicles\Silverback\53rd_Hood_co.paa",
				"53rd_SC_aux\Vehicles\Silverback\53rd_Truck_Hull_co.paa",
		};
		class textureSources
			{
				class UNSC
				{
					displayName="UNSC";
					author="DemonicOnPc & edited by Body";
					textures[]=
					{
						"53rd_SC_aux\Vehicles\Silverback\53rd_hull_co.paa",
						"53rd_SC_aux\Vehicles\Silverback\53rd_Hood_co.paa",
						"53rd_SC_aux\Vehicles\Silverback\53rd_Truck_Hull_co.paa",
					};
				};
			};
				
		};
};