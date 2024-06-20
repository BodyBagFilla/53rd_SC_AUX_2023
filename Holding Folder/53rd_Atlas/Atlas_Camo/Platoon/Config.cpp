class CfgPatches {
	class 53rd_Atlas_Camo_Armor_Platoon
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
	class 53rd_AP_Base_headgear: HaloInf_Marine_WDL_headgear
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
	class 53rd_AP_Base_NV_headgear: HaloInf_Marine_WDL_NV_headgear
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Base CH252 Visor ";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
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
	class 53rd_A_P_Rifleman_Helmet_Urban_No_Visor: 53rd_AP_Base_NV_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P Helmet (Urban / No Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_Helmet_Urban.paa"
		};
	};
	class 53rd_A_P_Rifleman_Helmet_Urban_Visor: 53rd_AP_Base_headgear
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P Helmet (Urban / Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_Helmet_Urban.paa"
		};
	};
	//Woodland
	class 53rd_A_P_Rifleman_Helmet_Woodland_No_Visor: 53rd_AP_Base_NV_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P Helmet (Woodland / No Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_Helmet_Woodland.paa"
		};
	};
	class 53rd_A_P_Rifleman_Helmet_Woodland_Visor: 53rd_AP_Base_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P Helmet (Woodland / Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_Helmet_Woodland.paa"
		};
	};
	//Desert
	class 53rd_A_P_Rifleman_Helmet_Desert_No_Visor: 53rd_AP_Base_NV_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P Helmet (Desert / No Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_Helmet_Desert.paa"
		};
	};
	class 53rd_A_P_Rifleman_Helmet_Desert_Visor: 53rd_AP_Base_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P Helmet (Desert / Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_Helmet_Desert.paa"
		};
	};
	//Winter
	class 53rd_A_P_Rifleman_Helmet_Winter_No_Visor: 53rd_AP_Base_NV_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P Helmet (Winter / No Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_Helmet_Winter.paa"
		};
	};
	class 53rd_A_P_Rifleman_Helmet_Winter_Visor: 53rd_AP_Base_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P Helmet (Winter / Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_Helmet_Winter.paa"
		};
	};
	
	
	
	/////HELMETS/////
	class 53rd_A_P_M_Rifleman_Helmet_Urban_No_Visor: HaloInf_Marine_WDL_NV_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P M Helmet (Urban / No Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_M_Helmet_Urban.paa"
		};
	};
	class 53rd_A_P_M_Rifleman_Helmet_Urban_Visor: HaloInf_Marine_WDL_headgear
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P M Helmet (Urban / Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_M_Helmet_Urban.paa"
		};
	};
	//Woodland
	class 53rd_A_P_M_Rifleman_Helmet_Woodland_No_Visor: HaloInf_Marine_WDL_NV_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P M Helmet (Woodland / No Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_M_Helmet_Woodland.paa"
		};
	};
	class 53rd_A_P_M_Rifleman_Helmet_Woodland_Visor: HaloInf_Marine_WDL_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P M Helmet (Woodland / Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_M_Helmet_Woodland.paa"
		};
	};
	//Desert
	class 53rd_A_P_M_Rifleman_Helmet_Desert_No_Visor: HaloInf_Marine_WDL_NV_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P M Helmet (Desert / No Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_M_Helmet_Desert.paa"
		};
	};
	class 53rd_A_P_M_Rifleman_Helmet_Desert_Visor: HaloInf_Marine_WDL_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P M Helmet (Desert / Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_M_Helmet_Desert.paa"
		};
	};
	//Winter
	class 53rd_A_P_M_Rifleman_Helmet_Winter_No_Visor: HaloInf_Marine_WDL_NV_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P M Helmet (Winter / No Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_M_Helmet_Winter.paa"
		};
	};
	class 53rd_A_P_M_Rifleman_Helmet_Winter_Visor: HaloInf_Marine_WDL_headgear //works
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas P M Helmet (Winter / Visor)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_A_P_M_Helmet_Winter.paa"
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
		displayName = "[53rd] Atlas P Base";
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
			"53rd_HephHephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_HephHephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_HephHephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
		};
	};
	
	class 53rd_A_P_Rifleman_SN: 53rd_U_Base_uniform
	{
		author="Body";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas P Winter Rifleman";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Winter_co.paa"
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
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Winter_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_A_P_Snow_Camo_Rifleman";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_A_P_Rifleman_WD: 53rd_U_Base_uniform
	{
		author="Body";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas P Woodland Rifleman";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Woodland_co.paa"
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
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Woodland_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_A_P_Woodland_Camo_Rifleman";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_A_P_Rifleman_UB: 53rd_U_Base_uniform
	{
		author="Body";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas P Urban Rifleman";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Urban_co.paa"
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
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Urban_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_A_P_Urban_Camo_Rifleman";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_A_P_Rifleman_DS: 53rd_U_Base_uniform
	{
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas P Desert Rifleman";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Desert_co.paa"
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
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Desert_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_A_P_Desert_Camo_Rifleman";
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
		displayName = "[53rd] Atlas P Base Rifleman";
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
			"53rd_HephHephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_HephHephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_HephHephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter_co.paa"
		};
	};
	
////////////////////PLATOON ARMOR//////////////////////
	class 53rd_A_P_Snow_Camo_Rifleman: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas P Winter Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Winter_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_A_P_Rifleman_SN";
	};
	class 53rd_A_P_Woodland_Camo_Rifleman: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas P Woodland Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Woodland_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_A_P_Rifleman_WD";
	};
	class 53rd_A_P_Urban_Camo_Rifleman: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas P Urban Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Urban_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_A_P_Rifleman_UB";
	};
	class 53rd_A_P_Desert_Camo_Rifleman: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas P Desert Rifleman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_Camo\Platoon\53rd_P_top_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Atlas\Atlas_Camo\Rifleman\53rd_A_Rifleman_Armor_Desert_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_A_P_Rifleman_DS";
	};

};