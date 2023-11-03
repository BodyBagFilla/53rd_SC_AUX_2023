class CfgPatches {
	class 53rd_Custom_Armor_Cherry
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
	class OPTRE_UNSC_Operator_Helmet;
	/////HELMETS/////
	class 53rd_OP_Cherry_UB: OPTRE_UNSC_Operator_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Urban)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Helmet_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Visor.paa",
			};
		};
	class 53rd_OP_Cherry_DS: OPTRE_UNSC_Operator_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Desert)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Helmet_Desert.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Visor.paa",
			};
		};
	class 53rd_OP_Cherry_WN: OPTRE_UNSC_Operator_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Winter)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Helmet_Winter.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Visor.paa",
			};
		};
	class 53rd_OP_Cherry_WD: OPTRE_UNSC_Operator_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Woodland)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Helmet_Woodland.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Visor.paa",
			};

		};
/////////////////// ARMOR ///////////////////////
	class UniformItem;
	class ItemCore;
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
		displayName = "[53rd] Cherry Base";
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
	class 53rd_Cherry_SN: 53rd_U_Base_uniform
	{
		author="Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Winter Cherry";
		picture="\A3\characters_f\data\ui\icon_U_BasicCherry_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Winter.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Snow_Camo_Test";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Cherry_WD: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Woodland Cherry";
		picture="\A3\characters_f\data\ui\icon_U_BasicCherry_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Woodland.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Woodland_Camo_Test";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Cherry_UB: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Urban Cherry";
		picture="\A3\characters_f\data\ui\icon_U_BasicCherry_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Urban.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Urban_Camo_Test";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Cherry_DS: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Desert Cherry";
		picture="\A3\characters_f\data\ui\icon_U_BasicCherry_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Desert.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Desert.paa",
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Winter.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Cherry_SN";
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Cherry_WD";
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Cherry_UB";
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
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Cherry\53rd_Cherry_Armor_Desert.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Cherry_DS";
	};

};