/*class CfgPatches {
	class 53rd_Custom_Armor_Ryu
	{
			units[] = 
			{

			};
			weapons[] = 
			{
				"53rd_Ryu_SN",
				"53rd_Ryu_WD",
				"53rd_Ryu_UB",
				"53rd_Ryu_DS",
				"53rd_Ryu_Helmet_Urban_No_Visor",
				"53rd_Ryu_Helmet_Urban_Visor",
				"53rd_Ryu_Helmet_Woodland_No_Visor",
				"53rd_Ryu_Helmet_Woodland_Visor",
				"53rd_Ryu_Helmet_Desert_No_Visor",
				"53rd_Ryu_Helmet_Desert_Visor",
				"53rd_Ryu_Helmet_Winter_No_Visor",
				"53rd_Ryu_Helmet_Winter_Visor",
			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};
#include "..\xtdGear.hpp"	
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
	/////HELMETS/////
	class 53rd_Ryu_Helmet_Urban_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ryu Helmet (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Ryu\53rd_Ryu_Helmet_Urban.paa"
		};
	};
	class 53rd_Ryu_Helmet_Urban_Visor: 53rd_Base_headgear
	{
		author="Cherri&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ryu Helmet (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Ryu\53rd_Ryu_Helmet_Urban.paa"
		};
	};
	//Woodland
	class 53rd_Ryu_Helmet_Woodland_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ryu Helmet (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Ryu\53rd_Ryu_Helmet_Woodland.paa"
		};
	};
	class 53rd_Ryu_Helmet_Woodland_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ryu Helmet (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Ryu\53rd_Ryu_Helmet_Woodland.paa"
		};
	};
	//Desert
	class 53rd_Ryu_Helmet_Desert_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ryu Helmet (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Ryu\53rd_Ryu_Helmet_Desert.paa"
		};
	};
	class 53rd_Ryu_Helmet_Desert_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ryu Helmet (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Ryu\53rd_Ryu_Helmet_Desert.paa"
		};
	};
	//Winter
	class 53rd_Ryu_Helmet_Winter_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ryu Helmet (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Ryu\53rd_Ryu_Helmet_Winter.paa"
		};
	};
	class 53rd_Ryu_Helmet_Winter_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ryu Helmet (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Ryu\53rd_Ryu_Helmet_Winter.paa"
		};
	};
	
	
	
//////////////VEST//////////////////////////////
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
		author="Body";
		scope=1;
		allowedSlots[]={901};
		displayName="[53rd] Rifleman Base ";
		picture="\A3\characters_f\data\ui\icon_U_BasicRyu_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Winter_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="HaloInf_Marine_WDL_F";
			containerClass="Supply100";
			mass=80;
		};
	};
	class 53rd_Ryu_SN: 53rd_U_Base_uniform
	{
		author="Scarecrow";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Winter Ryu";
		picture="\A3\characters_f\data\ui\icon_U_BasicRyu_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Winter.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Winter.paa"
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
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Winter.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Snow_Camo_Ryu";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Ryu_WD: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Woodland Ryu";
		picture="\A3\characters_f\data\ui\icon_U_BasicRyu_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Woodland.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Woodland.paa"
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
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Woodland.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Woodland_Camo_Ryu";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Ryu_UB: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Urban Ryu";
		picture="\A3\characters_f\data\ui\icon_U_BasicRyu_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Urban.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Urban.paa"
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
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Urban.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Urban_Camo_Ryu";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Ryu_DS: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[53rd] Desert Ryu";
		picture="\A3\characters_f\data\ui\icon_U_BasicRyu_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Desert.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Desert.paa"
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
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Desert.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Desert.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Desert_Camo_Ryu";
			containerClass="Supply90";
			mass=80;
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
		displayName="[53rd] Base Uniform";
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
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Heph\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
		};
	};
	class 53rd_Snow_Camo_Ryu: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Winter Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Winter.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Winter.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Ryu_SN";
	};
	class 53rd_Woodland_Camo_Ryu: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Woodland Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Woodland.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Ryu_WD";
	};
	class 53rd_Urban_Camo_Ryu: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Urban Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Urban.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Ryu_UB";
	};
	class 53rd_Desert_Camo_Ryu: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Desert Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Top_Desert.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Ryu\53rd_Ryu_Armor_Desert.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Ryu_DS";
	};

};