class CfgPatches {
	class 53rd_Custom_Armor_Panzer
	{
			units[] = 
			{

			};
			weapons[] = 
			{
			"53rd_Panzer_Helmet_Urban",
			"53rd_Panzer_Helmet_Woodland",
			"53rd_Panzer_Helmet_Desert",
			"53rd_Panzer_Helmet_Winter",
			"53rd_Armor_Panzer_Winter",
			"53rd_Armor_Panzer_Woodland",
			"53rd_Armor_Panzer_Urban",
			"53rd_Armor_Panzer_Desert",
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
	class OPTRE_UNSC_CH252D_Helmet_Base: ItemCore
	{
	 class ItemInfo;
	};

	class 53rd_Base_Pilot_headgear: OPTRE_UNSC_CH252D_Helmet_Base
	{
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		author = "Article 2 Studios & Gamma";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
		model = "\OPTRE_UNSC_Units\Army\HRPilot_Helmet.p3d";
		displayName = "[53rd] Mark V/P Helmet";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\Pilot_Helmet_co.paa","OPTRE_UNSC_Units\Army\data\Pilot_Visor_co.paa"};
		optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\HRPilot_Helmet.p3d";
			mass = 40;
			modelSides[] = {6};
			passThrough = 0.1;
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\Pilot_Helmet_co.paa","OPTRE_UNSC_Units\Army\data\Pilot_Visor_co.paa"};
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

	//Urban	
	class 53rd_Panzer_Helmet_Urban: 53rd_Base_Pilot_headgear 
	{
		author="Frankie";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Custom (Panzer / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Heph.paa";
		model="\OPTRE_UNSC_Units\Army\HRPilot_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Pazner\53rd_Panzer_Helmet_Urban.paa",
			"53rd_Heph\Hephaestus_Customs\Helmets\Pazner\53rd_Panzer_Helmet_Visor.paa"
		};
	};
	//Woodland
	class 53rd_Panzer_Helmet_Woodland: 53rd_Base_Pilot_headgear 
	{
		author="Frankie";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Custom (Panzer / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Heph.paa";
		model="\OPTRE_UNSC_Units\Army\HRPilot_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Pazner\53rd_Panzer_Helmet_Woodland.paa",
			"53rd_Heph\Hephaestus_Customs\Helmets\Pazner\53rd_Panzer_Helmet_Visor.paa"
		};
	};

	//Winter
	class 53rd_Panzer_Helmet_Winter: 53rd_Base_Pilot_headgear 
	{
		author="Frankie";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Custom (Panzer / Winter)";
		picture="\53rd_sc_aux\tex\Arsenal\Heph.paa";
		model="\OPTRE_UNSC_Units\Army\HRPilot_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Pazner\53rd_Panzer_Helmet_Winter.paa",
			"53rd_Heph\Hephaestus_Customs\Helmets\Pazner\53rd_Panzer_Helmet_Visor.paa"
		};
	};	
	
	
	//Desert
	class 53rd_Panzer_Helmet_Desert: 53rd_Base_Pilot_headgear 
	{
		author="Frankie";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Custom (Panzer / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Heph.paa";
		model="\OPTRE_UNSC_Units\Army\HRPilot_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Helmets\Pazner\53rd_Panzer_Helmet_Desert.paa",
			"53rd_Heph\Hephaestus_Customs\Helmets\Pazner\53rd_Panzer_Helmet_Visor.paa"
		};
	};


/////////////////////ARMOR///////////////////////////
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
		displayName = "[53rd] Body Base";
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
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Heph\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter.paa"
		};
	};
	class 53rd_Armor_Panzer_Winter: 53rd_U_Base_uniform
	{
		author="Body";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Custom (Panzer / Winter)";
		picture="\53rd_sc_aux\tex\Arsenal\Heph.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Winter.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Winter.paa"
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
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Winter.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Snow_Camo_Panzer";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Armor_Panzer_Woodland: 53rd_U_Base_uniform
	{
		author="Body";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Custom (Panzer / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Heph.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Woodland.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Woodland.paa"
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
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Woodland.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Woodland_Camo_Panzer";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Armor_Panzer_Urban: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Custom (Panzer / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Heph.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Urban.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Urban.paa"
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
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Urban.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Urban_Camo_Panzer";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Armor_Panzer_Desert: 53rd_U_Base_uniform
	{
		author="53rd Mod Team";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Custom (Panzer / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Heph.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Desert.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Desert.paa"
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
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Desert.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Desert.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Desert_Camo_Panzer";
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
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Heph\Hephaestus_Camo\Grenadier\53rd_Grenadier_Armor_Winter.paa"
		};
	};
	class 53rd_Snow_Camo_Panzer: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
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
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Winter.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Winter.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Panzer_SN";
	};
		class 53rd_Woodland_Camo_Panzer: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
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
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Woodland.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Panzer_WD";
	};
		class 53rd_Urban_Camo_Panzer: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
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
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Urban.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Urban_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Panzer_UB";
	};
		class 53rd_Desert_Camo_Panzer: 53rd_base_F
	{
		scope=1;
		scopeArsenal=1;
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
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Top_Desert.paa",
			"53rd_Heph\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Desert_co.paa",
			"53rd_Heph\Hephaestus_Customs\Armor\Panzer\53rd_Panzer_Armor_Desert.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Panzer_DS";
	};
};