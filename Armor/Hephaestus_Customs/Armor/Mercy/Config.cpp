class CfgPatches {
	class 53rd_Custom_Armor_Mercy
	{
			units[] = 
			{};
			weapons[] = 
			{};
			requiredVersion = 0.100000;
			requiredAddons[] = 
			{
				"A3_Characters_F_Enoch"
			};
			addonRootClass="A3_Characters_F_Enoch";
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
/////////////////// ARMOR ///////////////////////
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
		displayName = "[53rd] Mercy Base";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_base_F";
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
	class 53rd_Mercy_SN: 53rd_U_Base_uniform
	{
		author="Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Winter Mercy";
		picture="\A3\characters_f\data\ui\icon_U_BasicMercy_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Winter.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Snow_Camo_Test";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Mercy_WD: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Woodland Mercy";
		picture="\A3\characters_f\data\ui\icon_U_BasicMercy_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Woodland.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Woodland_Camo_Test";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Mercy_UB: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Urban Mercy";
		picture="\A3\characters_f\data\ui\icon_U_BasicMercy_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Urban.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Urban_Camo_Test";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Mercy_DS: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Desert Mercy";
		picture="\A3\characters_f\data\ui\icon_U_BasicMercy_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Desert.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Desert_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Desert_Camo_Test";
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
		};
	};
	class 53rd_Snow_Camo_Test: 53rd_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Winter Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Winter.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Mercy_SN";
	};
	class 53rd_Woodland_Camo_Test: 53rd_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Woodland Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Mercy_WD";
	};
	class 53rd_Urban_Camo_Test: 53rd_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Urban Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Mercy_UB";
	};
	class 53rd_Desert_Camo_Test: 53rd_base_F
	{
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Desert Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Mercy\53rd_Mercy_Armor_Desert.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Mercy_DS";
	};

};