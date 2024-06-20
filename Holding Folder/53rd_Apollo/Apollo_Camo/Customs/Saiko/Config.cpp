class CfgPatches
{
	class 53rd_Custom_Armor_Saiko
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class cfgWeapons
{
	class ItemCore;
	class ItemInfo;
	class HaloInf_Marine_WDL_headgear: ItemCore
	{
	 class ItemInfo;
	};
	class HaloInf_Marine_WDL_NV_headgear: ItemCore
	{
	 class ItemInfo;
	};
	class 53rd_Base_headgear: HaloInf_Marine_WDL_headgear
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Base CH252";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Halo_marine_02\helmet\textures\halo_marine_02_helmet_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=38;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=38;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=38;
					passThrough=0.1;
				};
			};
		};
	};
	class 53rd_Base_NV_headgear: HaloInf_Marine_WDL_NV_headgear
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Base CH252 Visor ";
		picture="\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"Halo_marine_02\helmet\textures\Halo_marine_02_Helmet_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"Halo_marine_02\helmet\textures\halo_marine_02_helmet_green_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=38;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=38;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=38;
					passThrough=0.1;
				};
			};
		};
	};
	/////HELMETS/////
	class 53rd_Saiko_Helmet_Urban_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="53rd Aux Team";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Custom (Saiko / Urban / No Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Helmet_Urban.paa"
		};
	};
	class 53rd_Saiko_Helmet_Urban_Visor: 53rd_Base_headgear
	{
		author="53rd Aux Team";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Custom (Saiko / Urban / Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Helmet_Urban.paa"
		};
	};
	//Woodland
	class 53rd_Saiko_Helmet_Woodland_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Custom (Saiko / Woodland / No Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Helmet_Woodland.paa"
		};
	};
	class 53rd_Saiko_Helmet_Woodland_Visor: 53rd_Base_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Custom (Saiko / Woodland / Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Helmet_Woodland.paa"
		};
	};


////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////Vest//////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class haloinfmar_U_WDL_uniform: Uniform_Base
	{
		class ItemInfo;
	};
	class 53rd_U_Base_uniform: haloinfmar_U_WDL_uniform
	{
		scope = 1;
		scopeArsenal = 1;
		side = 1;
		displayName = "[53rd] Hephaestus Customs (Base)";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel = "-";
			uniformClass = "53rd_base_F";
			containerClass = "Supply100";
			mass = 80;
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa","53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa","53rd_Heph\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"};
	};
	class 53rd_Apollo_Woodland_Saiko: 53rd_U_Base_uniform
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		side = 1;
		allowedSlots[] = {901};
		displayName = "[53rd] Apollo Customs (Saiko / Woodland)";
		picture = "\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
			{
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"
			};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = 
			{
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"
			};
			uniformModel = "-";
			uniformClass = "53rd_Apollo_Saiko_Woodland_F";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class 53rd_Apollo_Saiko_Woodland_Camo: 53rd_U_Base_uniform
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		side = 1;
		allowedSlots[] = {901};
		displayName = "[53rd] Apollo Customs (Saiko / Woodland BDU)";
		picture = "\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
			{
			"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland_Camo.paa",
			"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland_Camo.paa",
			"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"
			};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = 
			{
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland_Camo.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland_Camo.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"
			};
			uniformModel = "-";
			uniformClass = "53rd_Apollo_Saiko_Woodland_Camo_2_F";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class 53rd_Apollo_Saiko_Woodland_Camo_3: 53rd_U_Base_uniform
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		side = 1;
		allowedSlots[] = {901};
		displayName = "[53rd] Apollo Customs (Saiko / Woodland BDU / Top)";
		picture = "\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
			{
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland_Camo.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"
			};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = 
			{
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland_Camo.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"
			};
			uniformModel = "-";
			uniformClass = "53rd_Apollo_Saiko_Woodland_Camo_3_F";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class 53rd_Apollo_Saiko_Woodland_Camo_4: 53rd_U_Base_uniform
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		side = 1;
		allowedSlots[] = {901};
		displayName = "[53rd] Apollo Customs (Saiko / Woodland BDU / Bottom)";
		picture = "\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
				{"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland_Camo.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"
				};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = 
				{
					"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
					"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland_Camo.paa",
					"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"
				};
			uniformModel = "-";
			uniformClass = "53rd_Apollo_Saiko_Woodland_Camo_4_F";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class 53rd_Apollo_Urban_Saiko: 53rd_U_Base_uniform
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		side = 1;
		allowedSlots[] = {901};
		displayName = "[53rd] Apollo Customs (Saiko / Urban)";
		picture = "\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
				{
					"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
					"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban.paa",
					"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"
				};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = 
				{
					"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
					"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban.paa",
					"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"
				};
			uniformModel = "-";
			uniformClass = "53rd_Apollo_Saiko_Urban_F";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class 53rd_Apollo_Saiko_Urban_Camo: 53rd_U_Base_uniform
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		side = 1;
		allowedSlots[] = {901};
		displayName = "[53rd] Apollo Customs (Saiko / Urban BDU)";
		picture = "\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
			{
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban_Camo.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"
			};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = 
				{
					"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban_Camo.paa",
					"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban_Camo.paa",
					"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"
				};
			uniformModel = "-";
			uniformClass = "53rd_Apollo_Saiko_Urban_Camo_2_F";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class 53rd_Apollo_Saiko_Urban_Camo_3: 53rd_U_Base_uniform
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		side = 1;
		allowedSlots[] = {901};
		displayName = "[53rd] Apollo Customs (Saiko / Urban BDU / Top)";
		picture = "\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
			{
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban_Camo.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"
			};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = 
			{
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban_Camo.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"
			};
			uniformModel = "-";
			uniformClass = "53rd_Apollo_Saiko_Urban_Camo_3_F";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class 53rd_Apollo_Saiko_Urban_Camo_4: 53rd_U_Base_uniform
	{
		author = "53rd Aux Team";
		scope = 2;
		scopeCurator = 0;
		scopeArsenal = 2;
		side = 1;
		allowedSlots[] = {901};
		displayName = "[53rd] Apollo Customs (Saiko / BDU / Bottom)";
		picture = "\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = 
			{
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"
			};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			hiddenSelectionsTextures[] = 
			{
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
				"53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban_Camo.paa",
				"\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"
			};
			uniformModel = "-";
			uniformClass = "53rd_Apollo_Saiko_Urban_Camo_4_F";
			containerClass = "Supply90";
			mass = 80;
		};
	};



};
class CfgVehicles
{
	class B_Soldier_base_F;
	class haloinf_Marine_Soldier_base_F: B_Soldier_base_F{};
	class HaloInf_Marine_WDL_F: haloinf_Marine_Soldier_base_F
	{
		class UniformItem;
	};
	class 53rd_base_F: HaloInf_Marine_WDL_F
	{
		displayName = "[53rd] Base Uniform";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel = "-";
			uniformClass = "53rd_Unit_Base";
			containerClass = "Supply100";
			mass = 80;
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa","53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa","53rd_Heph\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"};
	};
	class 53rd_Apollo_Saiko_Woodland_F: 53rd_base_F
	{
		scope = 1;
		scopeArsenal = 1;
		side = 1;
		displayName = "[53rd] Apollo Saiko Woodland #1";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland.paa","53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland.paa","\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "53rd_Apollo_Woodland_Saiko";
	};
	class 53rd_Apollo_Saiko_Woodland_Camo_2_F: 53rd_base_F
	{
		scope = 1;
		scopeArsenal = 1;
		side = 1;
		displayName = "[53rd] Apollo Saiko Woodland #2";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland_Camo.paa","53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland_Camo.paa","\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "53rd_Apollo_Saiko_Woodland_Camo";
	};
	class 53rd_Apollo_Saiko_Woodland_Camo_3_F: 53rd_base_F
	{
		scope = 1;
		scopeArsenal = 1;
		side = 1;
		displayName = "[53rd] Apollo Saiko Woodland #3";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland_Camo.paa","53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland.paa","\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "53rd_Apollo_Saiko_Woodland_Camo_3";
	};
	class 53rd_Apollo_Saiko_Woodland_Camo_4_F: 53rd_base_F
	{
		scope = 1;
		scopeArsenal = 1;
		side = 1;
		displayName = "[53rd] Apollo Saiko Woodland #4";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Woodland.paa","53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Woodland_Camo.paa","\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Woodland.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "53rd_Apollo_Saiko_Woodland_Camo_4";
	};
	class 53rd_Apollo_Saiko_Urban_F: 53rd_base_F
	{
		scope = 1;
		scopeArsenal = 1;
		side = 1;
		displayName = "[53rd] Apollo Saiko Urban #1";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban.paa","53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban.paa","\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "53rd_Apollo_Urban_Saiko";
	};
	class 53rd_Apollo_Saiko_Urban_Camo_2_F: 53rd_base_F
	{
		scope = 1;
		scopeArsenal = 1;
		side = 1;
		displayName = "[53rd] Apollo Saiko Urban #2";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban_Camo.paa","53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban_Camo.paa","\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "53rd_Apollo_Saiko_Urban_Camo";
	};
	class 53rd_Apollo_Saiko_Urban_Camo_3_F: 53rd_base_F
	{
		scope = 1;
		scopeArsenal = 1;
		side = 1;
		displayName = "[53rd] Apollo Saiko Urban #3";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban_Camo.paa","53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban.paa","\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "53rd_Apollo_Saiko_Urban_Camo_3";
	};
	class 53rd_Apollo_Saiko_Urban_Camo_4_F: 53rd_base_F
	{
		scope = 1;
		scopeArsenal = 1;
		side = 1;
		displayName = "[53rd] Apollo Saiko Urban #4";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"53rd_Apollo\Apollo_Camo\53rd_Apollo_Top_Urban.paa","53rd_Apollo\Apollo_Camo\53rd_Apollo_Pants_Urban_Camo.paa","\53rd_Apollo\Apollo_Camo\Customs\Saiko\53rd_Saiko_Armor_Urban.paa"};
		model = "\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass = "53rd_Apollo_Saiko_Urban_Camo_4";
	};
	
	
};

