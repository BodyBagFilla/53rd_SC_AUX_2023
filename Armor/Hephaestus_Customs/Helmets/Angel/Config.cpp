class CfgPatches {
	class 53rd_Custom_Armor_Angel
	{
			units[] = 
			{

			};
			weapons[] = 
			{

				"53rd_Angel_Helmet_Urban_No_Visor",
				"53rd_Angel_Helmet_Urban_Visor",
				"53rd_Angel_Helmet_Woodland_No_Visor",
				"53rd_Angel_Helmet_Woodland_Visor",
				"53rd_Angel_Helmet_Desert_No_Visor",
				"53rd_Angel_Helmet_Desert_Visor",
				"53rd_Angel_Helmet_Winter_No_Visor",
				"53rd_Angel_Helmet_Winter_Visor",
			};
			requiredVersion = 0.100000;
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
		picture="\A3\characters_f\Data\UI\icon_H_Angel_blk_CA.paa";
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
	class 53rd_Angel_Helmet_Urban_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Angel Helmet (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Angel_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Angel\53rd_Angel_Helmet_Urban.paa"
		};
	};
	class 53rd_Angel_Helmet_Urban_Visor: 53rd_Base_headgear
	{
		author="Cherri&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Angel Helmet (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Angel_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Angel\53rd_Angel_Helmet_Urban.paa"
		};
	};
	//Woodland
	class 53rd_Angel_Helmet_Woodland_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Angel Helmet (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Angel_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Angel\53rd_Angel_Helmet_Woodland.paa"
		};
	};
	class 53rd_Angel_Helmet_Woodland_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Angel Helmet (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Angel_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Angel\53rd_Angel_Helmet_Woodland.paa"
		};
	};
	//Desert
	class 53rd_Angel_Helmet_Desert_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Angel Helmet (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Angel_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Angel\53rd_Angel_Helmet_Desert.paa"
		};
	};
	class 53rd_Angel_Helmet_Desert_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Angel Helmet (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Angel_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Angel\53rd_Angel_Helmet_Desert.paa"
		};
	};
	//Winter
	class 53rd_Angel_Helmet_Winter_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Angel Helmet (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Angel_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Angel\53rd_Angel_Helmet_Winter.paa"
		};
	};
	class 53rd_Angel_Helmet_Winter_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Angel Helmet (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Angel_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Angel\53rd_Angel_Helmet_Winter.paa"
		};
	};
};