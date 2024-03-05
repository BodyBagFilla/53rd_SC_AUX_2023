class CfgPatches {
	class 53rd_Atlas_Camo_Armor_Rifleman
	{
			units[] = 
			{

			};
			weapons[] = 
			{
			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};
#include "..\..\xtdGear.hpp"	
class cfgWeapons
{
	/////HELMETS/////
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
	class 53rd_A_Base_headgear: HaloInf_Marine_WDL_headgear
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
					armor=50;
					explosionShielding = 3;
					passThrough=0.3;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=50;
					explosionShielding = 3;
					passThrough=0.3;
				};
				class Neck
				{
					armor=50;
					hitpointName="HitNeck";
					explosionShielding = 3;
					passThrough=0.1;
				};
			};
		};
	};
	class 53rd_A_Base_NV_headgear: HaloInf_Marine_WDL_NV_headgear
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Base CH252 Visor ";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
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
					armor=50;
					explosionShielding = 3;
					passThrough=0.3;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=50;
					explosionShielding = 3;
					passThrough=0.3;
				};
				class Neck
				{
					armor=50;
					hitpointName="HitNeck";
					explosionShielding = 3;
					passThrough=0.1;
				};
			};
		};
	};
	/////HELMETS/////
	class 53rd_A_Rifleman_Helmet_Urban_No_Visor: 53rd_A_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Helmet (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Helmet_Urban.paa"
		};
	};
	class 53rd_A_Rifleman_Helmet_Urban_Visor: 53rd_A_Base_headgear
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Helmet (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Helmet_Urban.paa"
		};
	};
	//Woodland
	class 53rd_A_Rifleman_Helmet_Woodland_No_Visor: 53rd_A_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Helmet (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Helmet_Woodland.paa"
		};
	};
	class 53rd_A_Rifleman_Helmet_Woodland_Visor: 53rd_A_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Helmet (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Helmet_Woodland.paa"
		};
	};
	//Desert
	class 53rd_A_Rifleman_Helmet_Desert_No_Visor: 53rd_A_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Helmet (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Helmet_Desert.paa"
		};
	};
	class 53rd_A_Rifleman_Helmet_Desert_Visor: 53rd_A_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Helmet (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Helmet_Desert.paa"
		};
	};
	//Winter
	class 53rd_A_Rifleman_Helmet_Winter_No_Visor: 53rd_A_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Helmet (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Helmet_Winter.paa"
		};
	};
	class 53rd_A_Rifleman_Helmet_Winter_Visor: 53rd_A_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Helmet (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Helmet_Winter.paa"
		};
	};
	
///////////////ARMOR///////////
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
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName = "[53rd] Atlas Rifleman Base";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_Unit_Base";
			containerClass="Supply100";
			mass=80;
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
		};
	};
	
	class 53rd_A_Rifleman_SN: 53rd_U_Base_uniform
	{
		author="Body";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Winter Rifleman";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Winter_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Winter_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_A_Snow_Camo_Rifleman";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_A_Rifleman_WD: 53rd_U_Base_uniform
	{
		author="Body";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Woodland Rifleman";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Woodland_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Woodland_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_A_Woodland_Camo_Rifleman";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_A_Rifleman_UB: 53rd_U_Base_uniform
	{
		author="Body";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Urban Rifleman";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Urban_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Urban_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_A_Urban_Camo_Rifleman";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_A_Rifleman_DS: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Desert Rifleman";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Desert_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Desert_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_A_Desert_Camo_Rifleman";
			containerClass="Supply90";
			mass=80;
		};
	};
};
class CfgVehicles
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class haloinfmar_U_WDL_uniform: Uniform_Base
	{
		class ItemInfo;
	};
	class 53rd_base_F: haloinfmar_U_WDL_uniform
	{
		displayName = "[53rd] Atlas Uniform Base";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_Unit_Base";
			containerClass="Supply100";
			mass=80;
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
		};
	};
	
	class 53rd_A_Snow_Camo_Rifleman: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Winter Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Winter_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_A_Rifleman_SN";
	};
	class 53rd_A_Woodland_Camo_Rifleman: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Woodland Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Woodland_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_A_Rifleman_WD";
	};
	class 53rd_A_Urban_Camo_Rifleman: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Urban Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Urban_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_A_Rifleman_UB";
	};
	class 53rd_A_Desert_Camo_Rifleman: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Desert Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_top_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Desert_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_A_Rifleman_DS";
	};

};