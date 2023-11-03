class CfgPatches 
{
	class 53rd_Apollo_Gear
	{
			units[] = 
			{};
			weapons[] = 
			{};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};
#include "..\xtdGear.hpp"	
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
//////Base
	class 53rd_Apollo_Helmet_Base_Visor: HaloInf_Marine_WDL_headgear
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
	class 53rd_Apollo_Helmet_Base_NVisor: HaloInf_Marine_WDL_NV_headgear
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
///////////////////////////////Apollo Helmets/////////////////////////////////
	class 53rd_Apollo_Helmet_Urban_No_Visor: 53rd_Apollo_Helmet_Base_NVisor 
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Urban.paa"
		};
	};
	class 53rd_Apollo_Helmet_Urban_Visor: 53rd_Apollo_Helmet_Base_Visor 
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Urban.paa"
		};
	};
	//Woodland
	class 53rd_Apollo_Helmet_Woodland_No_Visor: 53rd_Apollo_Helmet_Base_NVisor 
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Woodland.paa"
		};
	};
	class 53rd_Apollo_Helmet_Woodland_Visor: 53rd_Apollo_Helmet_Base_Visor 
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Woodland.paa"
		};
	};
	//Desert
	class 53rd_Apollo_Helmet_Desert_No_Visor: 53rd_Apollo_Helmet_Base_NVisor 
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Desert.paa"
		};
	};
	class 53rd_Apollo_Helmet_Desert_Visor: 53rd_Apollo_Helmet_Base_Visor 
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Desert.paa"
		};
	};
	//Winter
	class 53rd_Apollo_Helmet_Winter_No_Visor: 53rd_Apollo_Helmet_Base_NVisor 
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Winter.paa"
		};
	};
	class 53rd_Apollo_Helmet_Winter_Visor: 53rd_Apollo_Helmet_Base_Visor 
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Winter.paa"
		};
	};
	//ARMOR
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
		displayName = "[53rd] Apollo Base";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_Apollo_base_F";
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
	class 53rd_Apollo_WT: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Winter";
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Winter.paa"
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Urban";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Apollo_UB: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Urban";
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Urban.paa"
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Urban";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Apollo_WD: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Woodland";
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Woodland.paa"
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Woodland";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Apollo_DS: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Desert";
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Desert.paa"
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Desert.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Desert";
			containerClass="Supply90";
			mass=80;
		};
	};
	//No Shoulders
	class 53rd_Apollo_UB_NS: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Urban (No Shoulders)";
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Urban_NS";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Apollo_WD_NS: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Woodland (No Shoulders)";
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Woodland_NS";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Apollo_DS_NS: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Desert (No Shoulders)";
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa"
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa",
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Desert_NS";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Apollo_WT_NS: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Winter (No Shoulders)";
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
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
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Winter_NS";
			containerClass="Supply90";
			mass=80;
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class haloinf_Marine_Soldier_base_F: B_Soldier_base_F{};
	class haloinfmar_U_WDL_uniform: haloinf_Marine_Soldier_base_F
	{
	class UniformItem;
	};
	class 53rd_Apollo_base_F: haloinfmar_U_WDL_uniform
	{
		displayName = "Apollo Uniform Base";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_U_Base_uniform";
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
	//Winter
	class 53rd_Apollo_Snow: 53rd_Apollo_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Snow";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Winter.paa"
		};
	};
	//Urban
	class 53rd_Apollo_Urban: 53rd_Apollo_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Urban";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_UB";
	};
	//Woodland
	class 53rd_Apollo_Woodland: 53rd_Apollo_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Woodland";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_WD";
	};
	//Desert
	class 53rd_Apollo_Desert: 53rd_Apollo_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Desert";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Desert.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_DS";
	};
	//No Shoulders
	class 53rd_Apollo_Urban_NS: 53rd_Apollo_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Urban (No Shoulders)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_UB_NS";
	};
	class 53rd_Apollo_Desert_NS: 53rd_Apollo_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Desert (No Shoulders)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_DS_NS";
	};
	class 53rd_Apollo_Woodland_NS: 53rd_Apollo_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Woodland (No Shoulders)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_WD_NS";
	};
	class 53rd_Apollo_Winter_NS: 53rd_Apollo_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Winter (No Shoulders)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_WT_NS";
	};
};