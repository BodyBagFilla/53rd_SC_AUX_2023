class CfgPatches {
	class 53rd_Hephaestus_Camo_Armor_Rifleman
	{
			units[] = 
			{

			};
			weapons[] = 
			{
				"53rd_Rifleman_Helmet_Urban_No_Visor",
				"53rd_Rifleman_Helmet_Urban_Visor",
				"53rd_Rifleman_Helmet_Woodland_No_Visor",
				"53rd_Rifleman_Helmet_Woodland_Visor",
				"53rd_Rifleman_Helmet_Desert_No_Visor",
				"53rd_Rifleman_Helmet_Desert_Visor",
				"53rd_Rifleman_Helmet_Winter_No_Visor",
				"53rd_Rifleman_Helmet_Winter_Visor",
				"53rd_InvisVest",
			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};	
class cfgWeapons
{
	class ItemCore;
	class ItemInfo;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_WDL_Heavy;
	class VES_BDU_Evolved_Slim;
	class HeadgearItem;
	class MA_TGE_InvisVest
	{
	class Iteminfo;
	};
	class 53rd_InvisVest: MA_TGE_InvisVest
	{
		author="Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Invisible Vest";
		picture="\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model="\Halo_marine_02\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Invis Vest\Vest\null_CA.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\Halo_marine_02\null.p3d";
			vestType = "Rebreather";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=38;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=38;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=38;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=38;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=38;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=38;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=38;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=38;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	/////HELMETS/////
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
	class 53rd_Rifleman_Helmet_Urban_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Helmet_Urban.paa"
		};
	};
	class 53rd_Rifleman_Helmet_Urban_Visor: 53rd_Base_headgear
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Helmet_Urban.paa"
		};
	};
	//Woodland
	class 53rd_Rifleman_Helmet_Woodland_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Helmet_Woodland.paa"
		};
	};
	class 53rd_Rifleman_Helmet_Woodland_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Helmet_Woodland.paa"
		};
	};
	//Desert
	class 53rd_Rifleman_Helmet_Desert_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Helmet_Desert.paa"
		};
	};
	class 53rd_Rifleman_Helmet_Desert_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Helmet_Desert.paa"
		};
	};
	//Winter
	class 53rd_Rifleman_Helmet_Winter_No_Visor: 53rd_Base_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Helmet_Winter.paa"
		};
	};
	class 53rd_Rifleman_Helmet_Winter_Visor: 53rd_Base_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Helmet_Winter.paa"
		};
	};
////////////////////////ARMOR////////////////////////////////////////////////////////////
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class haloinfmar_U_WDL_uniform: Uniform_Base
	{
		class HitPoints;
		class ItemInfo;
	};
	class 53rd_U_Base_uniform: haloinfmar_U_WDL_uniform
	{
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName = "[53rd] Rifleman Base";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="53rd_U_Base_Rifleman_uniform";
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
	class 53rd_Rifleman_SN: 53rd_U_Base_uniform
	{
		author="Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Winter Rifleman";
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Winter_co.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Winter_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Snow_Camo_Rifleman";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Rifleman_WD: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Woodland Rifleman";
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Woodland_co.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Woodland_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Woodland_Camo_Rifleman";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Rifleman_UB: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Urban Rifleman";
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Urban_co.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Urban_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Urban_Camo_Rifleman";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Rifleman_DS: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Desert Rifleman";
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Desert_Camo_Top_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Desert_co.paa"
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
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Desert_Camo_Top_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Desert_co.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Desert_Camo_Rifleman";
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
		class 53rd_U_Base_Rifleman_uniform: HaloInf_Marine_WDL_F
		{
			scope=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Base Uniform";
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
		class 53rd_Snow_Camo_Rifleman: 53rd_U_Base_Rifleman_uniform
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
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Winter_co.paa"
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Rifleman_SN";
		};
		class 53rd_Woodland_Camo_Rifleman: 53rd_U_Base_Rifleman_uniform
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
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Woodland_co.paa",
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Woodland_co.paa"
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Rifleman_WD";
		};
		class 53rd_Urban_Camo_Rifleman: 53rd_U_Base_Rifleman_uniform
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
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Urban_co.paa",
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Urban_co.paa"
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Rifleman_UB";
		};
			class 53rd_Desert_Camo_Rifleman: 53rd_U_Base_Rifleman_uniform
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
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Desert_Camo_Top_co.paa",
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
				"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Desert_co.paa"
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Rifleman_DS";
		};

	};