class CfgPatches 
	{
		class 53rd_Spartan_Armor
		{
			units[] = 
			{
			};
			weapons[] = 
			{
				"53rd_FC_MJOLNIR_MKV_Helmet_RT",
				"53rd_MJOLNIR_MKV_Armor_RT",
				"53rd_GAIA_MKIV",
				"53rd_MKVB_Armor",
				"53rd_MA_MKVB_Helmet",
				"53rd_MA_GAIA_Helmet",
				"53rd_Mjolnir_ODST_Helmet",
				"53rd_Mjolnir_HR_EOD_Helmet",
				"53rd_HR_Scout_Helmet",
			};
			requiredVersion = 0.100000;
			requiredAddons[] = {"MA_Armor"};
		};
	}; 
#include "xtdGear.hpp"
class cfgWeapons
{
		class Body;
		class Pelvis;	
		class Abdomen;	
		class Diaphragm;
		class Chest;
		class Hands;
		class Arms;
		class Legs;
		class Neck;
		class Head;
		class Face;
		class VestItem;
		class ItemInfo;
		class HeadgearItem;
		class HitpointsProtectionInfo;
		class OPTRE_FC_MJOLNIR_MKV_Armor;
		class OPTRE_FC_MJOLNIR_MKV_Helmet;
		class UniformItem;
		class MA_M56_Scout_Helmet;
		class MA_M56A_Helmet;
		class MAPO_Mjolnir_HR_EOD_Helmet;
		class MA_Mjolnir_MKIV_Helmet;
		class MA_Mjolnir_MKVB_helmet;
		class MAPO_HR_Scout_Helmet;
		class MAPO_MKV_Helmet;
		class MAPO_Mjolnir_ODST_Helmet;
		class MA_M56E_Helmet;
		class MA_M56SR_Helmet;
		class MA_M56SH_Helmet;
		class MA_MKIV_Armor;
		class MA_MKVB_Armor;
		class TCF_Hazop_Helmet_dp;
		class TCF_Hazop_Helmet;
		
		//Base Class
		class 53rd_MJOLNIR_MkVArmor: OPTRE_FC_MJOLNIR_MKV_Armor
		{
			dlc="OPTRE";
			scope=1;
			scopeArsenal=1;
			scopeCurator=1;
			author="Vince5754 & Article 2 Studios";
			displayName="[53rd] MJOLNIR Mark V Armor";
			model="\OPTRE_FC_Units\Spartan\MKV_Armor_vince.p3d";
			picture="\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
			hiddenSelections[]=
			{
				"camo1",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_Knife1",
				"AP_SMG",
				"AP_Smoke",
				"AP_Sniper"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\spartan\data\mkv_armor_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\OPTRE_FC_Units\Spartan\MKV_Armor_vince.p3d";
				hiddenSelections[]=
				{
					"camo1",
					"AP_AR",
					"AP_BR",
					"AP_Frag",
					"AP_GL",
					"AP_Knife",
					"AP_Knife1",
					"AP_SMG",
					"AP_Smoke",
					"AP_Sniper"
				};
				hiddenSelectionsTextures[]=
				{
					"optre_fc_units\spartan\data\mkv_armor_co.paa"
				};
				containerClass="Supply160";
				mass=65;
				modelSides[]={6};
				class HitpointsProtectionInfo
				{
					class Neck
					{
						hitpointName="HitNeck";
						armor=45;
						passThrough=0.0099999998;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=45;
						passThrough=0.0099999998;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=45;
						passThrough=0.0099999998;
					};
					class Hands
					{
						hitpointName="HitHands";
						armor=45;
						passThrough=0.0099999998;
					};
					class Chest
					{
						hitpointName="HitChest";
						armor=45;
						passThrough=0.0099999998;
					};
					class Diaphragm
					{
						hitpointName="HitDiaphragm";
						armor=45;
						passThrough=0.0099999998;
					};
					class Abdomen
					{
						hitpointName="HitAbdomen";
						armor=45;
						passThrough=0.0099999998;
					};
					class Pelvis
					{
						hitpointName="HitPelvis";
						armor=45;
						passThrough=0.0099999998;
					};
					class Body
					{
						hitpointName="HitBody";
						passThrough=0.0099999998;
					};
				};
			};
		};
		//Helmet Base
		class 53rd_FC_MJOLNIR_MKV_Helmet: OPTRE_FC_MJOLNIR_MKV_Helmet
		{
			dlc="OPTRE";
			scope=1;
			scopeArsenal=1;
			scopeCurator=1;
			author="Vince5754 & Article 2 Studios";
			displayName="[53rd] MJOLNIR Mark V Helmet";
			picture="\OPTRE_FC_Units\Marines\data\h3_helmet_i_ca.paa";
			model="\OPTRE_FC_Units\Spartan\MKV_Helmet_vince.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\spartan\data\mkv_armor_co.paa",
				"optre_fc_units\spartan\data\mkv_armor_co.paa"
			};
			optreVarietys[]=
			{
				"_dp",
				"",
				"_broken"
			};
			optreHUDStyle="ODST_1";
			class ItemInfo: HeadgearItem
			{
				uniformModel="\OPTRE_FC_Units\Spartan\MKV_Helmet_vince.p3d";
				mass=30;
				modelSides[]={6};
				passThrough=0.015;
				hiddenSelections[]=
				{
					"camo",
					"camo1"
				};
				hiddenSelectionsTextures[]=
				{
					"optre_fc_units\spartan\data\mkv_armor_co.paa",
					"optre_fc_units\spartan\data\mkv_armor_co.paa"
				};
				class HitpointsProtectionInfo
				{
					class Head
					{
						hitpointName="HitHead";
						armor=100;
						passThrough=0.0099999998;
					};
					class Face
					{
						hitpointName="HitFace";
						armor=100;
						passThrough=0.0099999998;
					};
				};
			};
			subItems[]=
			{
				"Integrated_NVG_TI_1_F"
			};
		};
		class 53rd_FC_MJOLNIR_MKV_Helmet_dp: OPTRE_FC_MJOLNIR_MKV_Helmet
		{
			scope=1;
			scopeArsenal=1;
			scopeCurator=1;
			class ItemInfo: ItemInfo
			{
			};
		};
		
		//ARMOR
		class 53rd_GAIA_MKIV : MA_MKIV_Armor
		{
		scope=2;
		scopeArsenal=2;
		author="Misriah Armory";
		displayName="[53rd] MKIV Armor";
		model="MA_Armor_ORION\data\Vests\MKIV\MKIV_Spartan.p3d";
		picture="";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
			"camo3",
			"camo4",
		//	"mkvb_upper",
		//	"mkvb_lower",
	  	//	"mkiv_left",
		//	"mkiv_right"
		};
        hiddenSelectionsTextures[]=
		{
            "53rd_Armor\Spartan Armor\MKIV\MKIV_AUX_SPP_MKIV_Upper_Diffuse.paa",
			"53rd_Armor\Spartan Armor\MKIV\MKIV_AUX_SPP_MKIV_Lower_Diffuse.paa",
			"53rd_Armor\Spartan Armor\MKIV\MKIV_AUX_SPP_MKIV_Shoulders_Diffuse.paa",
			"53rd_Armor\Spartan Armor\MKIV\MKIV_AUX_SPP_MKIV_Shoulders_Diffuse.paa"
		};
		class ItemInfo: VestItem
			{
				vestType="Rebreather";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
					"camo3",
					"camo4",
				//	"mkvb_upper",
				//	"mkvb_lower",
				//	"mkiv_left",
				//	"mkiv_right"
				};
				hiddenSelectionsTextures[]=
				{
					"MA_Armor\data\Vests\MKIV\MKIV_Upper_CO.paa",
					"MA_Armor\data\Vests\MKIV\MKIV_Lower_CO.paa",
					"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
					"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa"
				};
				uniformModel="MA_Armor_ORION\data\Vests\MKIV\MKIV_Spartan.p3d";
				containerClass="Supply250";
				mass=20;
				passThrough=0.1;
				modelSides[]={6};
				class HitpointsProtectionInfo
				{
					class Neck
					{
						hitpointName="HitNeck";
						armor=30;
						passThrough=0.5;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=30;
						passThrough=0.5;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=35;
						passThrough=0.1;
					};
					class Hands
					{
						hitpointName="HitHands";
						armor=30;
						passThrough=0.1;
					};
					class Chest
					{
						hitpointName="HitChest";
						armor=45;
						passThrough=0.1;
					};
					class Diaphragm
					{
						hitpointName="HitDiaphragm";
						armor=40;
						passThrough=0.1;
					};
					class Abdomen
					{
						hitpointName="HitAbdomen";
						armor=40;
						passThrough=0.1;
					};
					class Pelvis
					{
						hitpointName="HitPelvis";
						armor=40;
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
		class 53rd_ECHO_MKVB_Armor: MA_MKVB_Armor
		{
		scope=2;
		scopeArsenal=2;
		author="Misriah Armory";
		displayName="[53rd] S-ECHO MKVB Armor";
		model="MA_Armor_ORION\data\Vests\MKVB\MKVB_Spartan.p3d";
		picture="";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "53rd_Armor\Spartan Armor\MKVB\Echo\Echo_White_MKV_Upper_CO.paa",
			"53rd_Armor\Spartan Armor\MKVB\Echo\Echo_White_MKV_Lower_CO.paa"
		};
		class ItemInfo: VestItem
			{
				vestType="Rebreather";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
				//	"mkvb_upper",
				//	"mkvb_lower"
				};
				hiddenSelectionsTextures[]=
				{
				"53rd_Armor\Spartan Armor\MKVB\Echo\Echo_White_MKV_Upper_CO.paa",
				"53rd_Armor\Spartan Armor\MKVB\Echo\Echo_White_MKV_Lower_CO.paa"
				};
				uniformModel="MA_Armor_ORION\data\Vests\MKVB\MKVB_Spartan.p3d";
				containerClass="Supply250";
				mass=20;
				passThrough=0.1;
				modelSides[]={6};
				class HitpointsProtectionInfo
				{
					class Neck
					{
						hitpointName="HitNeck";
						armor=30;
						passThrough=0.5;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=30;
						passThrough=0.5;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=35;
						passThrough=0.1;
					};
					class Hands
					{
						hitpointName="HitHands";
						armor=30;
						passThrough=0.1;
					};
					class Chest
					{
						hitpointName="HitChest";
						armor=45;
						passThrough=0.1;
					};
					class Diaphragm
					{
						hitpointName="HitDiaphragm";
						armor=40;
						passThrough=0.1;
					};
					class Abdomen
					{
						hitpointName="HitAbdomen";
						armor=40;
						passThrough=0.1;
					};
					class Pelvis
					{
						hitpointName="HitPelvis";
						armor=40;
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
		class 53rd_Sierra_MKVB_Armor: 53rd_ECHO_MKVB_Armor
		{
		scope=2;
		scopeArsenal=2;
		author="Misriah Armory";
		displayName="[53rd] S-Sierra MKVB Armor";
		model="MA_Armor_ORION\data\Vests\MKVB\MKVB_Spartan.p3d";
		picture="";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_White_MKV_Lower_CO.paa",
			"53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_White_MKV_Upper_CO.paa"
		};
		class ItemInfo: VestItem
			{
				vestType="Rebreather";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
				//	"mkvb_upper",
				//	"mkvb_lower"
				};
				hiddenSelectionsTextures[]=
				{
            "53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_White_MKV_Lower_CO.paa",
			"53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_White_MKV_Upper_CO.paa"
				};
				uniformModel="MA_Armor_ORION\data\Vests\MKVB\MKVB_Spartan.p3d";
				containerClass="Supply250";
				mass=20;
				passThrough=0.1;
				modelSides[]={6};
			};
		};
		class 53rd_OSCAR_MKVB_Armor: 53rd_ECHO_MKVB_Armor
		{
		scope=2;
		scopeArsenal=2;
		author="Misriah Armory";
		displayName="[53rd] S-OSCAR MKVB Armor";
		model="MA_Armor_ORION\data\Vests\MKVB\MKVB_Spartan.p3d";
		picture="";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "53rd_Armor\Spartan Armor\MKVB\Oscar\Oscar_White_MKV_Upper_CO.paa",
			"53rd_Armor\Spartan Armor\MKVB\Oscar\Oscar_White_MKV_Lower_CO.paa"
		};
		class ItemInfo: VestItem
			{
				vestType="Rebreather";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
				//	"mkvb_upper",
				//	"mkvb_lower"
				};
				hiddenSelectionsTextures[]=
				{
            "53rd_Armor\Spartan Armor\MKVB\Oscar\Oscar_White_MKV_Upper_CO.paa",
			"53rd_Armor\Spartan Armor\MKVB\Oscar\Oscar_White_MKV_Lower_CO.paa"
				};
				uniformModel="MA_Armor_ORION\data\Vests\MKVB\MKVB_Spartan.p3d";
				containerClass="Supply250";
				mass=20;
				passThrough=0.1;
				modelSides[]={6};
			};
		};
		class 53rd_Foxtrot_MKVB_Armor: 53rd_ECHO_MKVB_Armor
		{
		scope=2;
		scopeArsenal=2;
		author="Misriah Armory";
		displayName="[53rd] S-Foxtrot MKVB Armor";
		model="MA_Armor_ORION\data\Vests\MKVB\MKVB_Spartan.p3d";
		picture="";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "53rd_Armor\Spartan Armor\MKVB\Foxtrot\Foxtrot_White_MKV_Upper_CO.paa",
			"53rd_Armor\Spartan Armor\MKVB\Foxtrot\Foxtrot_White_MKV_Lower_CO.paa"
		};
		class ItemInfo: VestItem
			{
				vestType="Rebreather";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
				//	"mkvb_upper",
				//	"mkvb_lower"
				};
				hiddenSelectionsTextures[]=
				{
            "53rd_Armor\Spartan Armor\MKVB\Foxtrot\Foxtrot_White_MKV_Upper_CO.paa",
			"53rd_Armor\Spartan Armor\MKVB\Foxtrot\Foxtrot_White_MKV_Lower_CO.paa"
				};
				uniformModel="MA_Armor_ORION\data\Vests\MKVB\MKVB_Spartan.p3d";
				containerClass="Supply250";
				mass=20;
				passThrough=0.1;
				modelSides[]={6};
			};
		};
		class 53rd_MJOLNIR_MKV_Armor_RT: 53rd_MJOLNIR_MkVArmor
		{
			dlc="OPTRE";
			scope=2;
			scopeArsenal=2;
			author="Body,Vince5754 & Article 2 Studios";
			displayName="[53rd] MJOLNIR Mark V Armor [RT]";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_RT_co.paa"
			};
			class ItemInfo: ItemInfo
			{
				hiddenSelectionsTextures[]=
				{
					"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_RT_co.paa"
				};
			};
		};
		class 53rd_MJOLNIR_MKV_Armor_AL: 53rd_MJOLNIR_MkVArmor
		{
			dlc="OPTRE";
			scope=2;
			scopeArsenal=2;
			author="Body,Vince5754 & Article 2 Studios";
			displayName="[53rd] MJOLNIR Mark V Armor [130]";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Alice_co.paa"
			};
			class ItemInfo: ItemInfo
			{
				hiddenSelectionsTextures[]=
				{
					"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Alice_co.paa"
				};
			};
		};
		class 53rd_MJOLNIR_MKV_Armor_MS: 53rd_MJOLNIR_MkVArmor
		{
			dlc="OPTRE";
			scope=2;
			scopeArsenal=2;
			author="Body,Vince5754 & Article 2 Studios";
		displayName="[53rd] MJOLNIR Mark V Armor [096]";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Musa_co.paa"
			};
			class ItemInfo: ItemInfo
			{
				hiddenSelectionsTextures[]=
				{
					"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Musa_co.paa"
				};
			};
		};
		class 53rd_MJOLNIR_MKV_Armor_J: 53rd_MJOLNIR_MkVArmor
		{
			dlc="OPTRE";
			scope=2;
			scopeArsenal=2;
			author="Body,Vince5754 & Article 2 Studios";
			displayName="[53rd] MJOLNIR Mark V Armor [092]";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Jerome_co.paa"
			};
			class ItemInfo: ItemInfo
			{
				hiddenSelectionsTextures[]=
				{
					"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Jerome_co.paa"
				};
			};
		};
		class 53rd_FC_MJOLNIR_MKV_Helmet_RT: 53rd_FC_MJOLNIR_MKV_Helmet
		{
			dlc="OPTRE";
			scope=2;
			scopeArsenal=2;
			scopeCurator=2;
			author="Body,Vince5754 & Article 2 Studios";
			displayName="[53rd] MJOLNIR Mark V Helmet [RT]";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_RT_co.paa",
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_RT_co.paa"
			};
			class ItemInfo: ItemInfo
			{
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_RT_co.paa",
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_RT_co.paa"
				};
			};
		};
		class 53rd_FC_MJOLNIR_MKV_Helmet_RT_dp: 53rd_FC_MJOLNIR_MKV_Helmet_RT
		{
			scope=1;
			scopeArsenal=1;
			scopeCurator=1;
			class ItemInfo: ItemInfo
			{
			};
		};
		class 53rd_FC_MJOLNIR_MKV_Helmet_AL: 53rd_FC_MJOLNIR_MKV_Helmet_RT
		{
			dlc="OPTRE";
			scope=1;
			scopeArsenal=1;
			scopeCurator=1;
			author="Body,Vince5754 & Article 2 Studios";
			displayName="[53rd] MJOLNIR Mark V Helmet [AL]";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Alice_co.paa",
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Alice_co.paa"
			};
			class ItemInfo: ItemInfo
			{
				hiddenSelectionsTextures[]=
				{
					"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Alice_co.paa",
					"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Alice_co.paa"
				};
			};
		};
		class 53rd_FC_MJOLNIR_MKV_Helmet_AL_dp: 53rd_FC_MJOLNIR_MKV_Helmet_RT
		{
			scope=1;
			scopeArsenal=1;
			scopeCurator=1;
			class ItemInfo: ItemInfo
			{
			};
		};
		class 53rd_FC_MJOLNIR_MKV_Helmet_MS: 53rd_FC_MJOLNIR_MKV_Helmet_RT
		{
			dlc="OPTRE";
			scope=1;
			scopeArsenal=1;
			scopeCurator=1;
			author="Body,Vince5754 & Article 2 Studios";
			displayName="[53rd] MJOLNIR Mark V Helmet [MS]";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Musa_co.paa",
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Musa_co.paa"
			};
			class ItemInfo: ItemInfo
			{
				hiddenSelectionsTextures[]=
				{
					"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Musa_co.paa",
					"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Musa_co.paa"
				};
			};
		};
		class 53rd_FC_MJOLNIR_MKV_Helmet_MS_dp: 53rd_FC_MJOLNIR_MKV_Helmet_RT
		{
			scope=1;
			scopeArsenal=1;
			scopeCurator=1;
			class ItemInfo: ItemInfo
			{
			};
		};
		class 53rd_FC_MJOLNIR_MKV_Helmet_J: 53rd_FC_MJOLNIR_MKV_Helmet_RT
		{
			dlc="OPTRE";
			scope=1;
			scopeArsenal=1;
			scopeCurator=1;
			author="Body,Vince5754 & Article 2 Studios";
			displayName="[53rd] MJOLNIR Mark V Helmet [J]";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Jerome_co.paa",
				"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Jerome_co.paa"
			};
			class ItemInfo: ItemInfo
			{
				hiddenSelectionsTextures[]=
				{
					"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Jerome_co.paa",
					"53rd_SC_aux\tex\Spartan Gear\RT\53rd_spartan_armor_Jerome_co.paa"
				};
			};
		};
		class 53rd_FC_MJOLNIR_MKV_Helmet_J_dp: 53rd_FC_MJOLNIR_MKV_Helmet_RT
		{
			scope=1;
			scopeArsenal=1;
			scopeCurator=1;
			class ItemInfo: ItemInfo
			{
			};
		};
		
////////////////////////////HELMETS////////////////////

		class 53rd_EOD_Helmet: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] EOD Helmet (Urban)";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_Armor\Spartan Armor\EOD_Urban_test.paa",
				"53rd_Armor\Spartan Armor\Gold_Hex_test.paa"
			};
		};

		class 53rd_EOD_Helmet_WD: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] EOD Helmet Woodland";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_Armor\Spartan Armor\EOD_Woodland_test.paa",
				"53rd_Armor\Spartan Armor\Gold_Hex_test.paa"
			};
		};
		class 53rd_EOD_Helmet_DS: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] EOD Helmet Desert";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_Armor\Spartan Armor\EOD_Desert_test.paa",
				"53rd_Armor\Spartan Armor\Gold_Hex_test.paa"
			};
		};
		class 53rd_EOD_Helmet_WN: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] EOD Helmet Winter";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_Armor\Spartan Armor\EOD_Winter_test.paa",
				"53rd_Armor\Spartan Armor\Gold_Hex_test.paa"
			};
		};
		class 53rd_AA_Helmet_UB:MA_M56A_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Air Assault Helmet (Urban)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\AA\[53rd] AA Helmet.paa",
				"53rd_SC_aux\tex\Spartan Gear\AA\Visor\[53rd] AA Helmet(Visor).paa"
			};
		};
		class 53rd_AA_Helmet_DS:MA_M56A_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Air Assault Helmet (Desert)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\AA\[53rd] AA Helmet (Desert).paa",
				"53rd_SC_aux\tex\Spartan Gear\AA\Visor\[53rd] AA Helmet(Visor).paa"
			};
		};
		class 53rd_AA_Helmet_WN:MA_M56A_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Air Assault Helmet (Winter)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\AA\[53rd] AA Helmet (Winter).paa",
				"53rd_SC_aux\tex\Spartan Gear\AA\Visor\[53rd] AA Helmet(Visor_Winter).paa"
			};
		};
		class 53rd_AA_Helmet_WD:MA_M56A_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Air Assault Helmet (Woodland)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Spartan Gear\AA\[53rd] AA Helmet (Woodland).paa",
				"53rd_SC_aux\tex\Spartan Gear\AA\Visor\[53rd] AA Helmet(Visor).paa"
			};
		};
		class 53rd_Hazop_Helmet: TCF_Hazop_Helmet
		{
		author="43rd Quartermasters";
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Hazop Helmet ";
		model="TCF_EQUIPMENT\Helmets\Hazop\Hazop_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Visor",
			"Interior"
		};
		hiddenSelectionsTextures[]=
		{
			"TCF_EQUIPMENT\Helmets\Hazop\Data\43rd_Hazop_Helmet_CO.paa",
			"TCF_EQUIPMENT\Helmets\Hazop\Data\43rd_Hazop_Visor_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="TCF_EQUIPMENT\Helmets\Hazop\Hazop_Helmet.p3d";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			allowedSlots[]=
			{
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1",
				"Visor",
				"Interior"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=25;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=25;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=20;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
		class 53rd_Hazop_Helmet_dp: TCF_Hazop_Helmet_dp
		{
		author="Dutch";
		scope=1;
		scopeArsenal=1;
		displayName="[53rd] Hazop Helmet DP";
		model="TCF_EQUIPMENT\Helmets\Hazop\Hazop_Helmet_DP.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Visor",
			"Interior"
		};
		hiddenSelectionsTextures[]=
		{
			"TCF_EQUIPMENT\Helmets\Hazop\Data\43rd_Hazop_Helmet_CO.paa",
			"TCF_EQUIPMENT\Helmets\Hazop\Data\43rd_Hazop_DP_VISOR_CA.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="TCF_EQUIPMENT\Helmets\Hazop\Hazop_Helmet_DP.p3d";
			allowedSlots[]=
			{
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"Visor",
				"Interior"
			};
			hiddenSelectionsTextures[]=
			{
				"TCF_EQUIPMENT\Helmets\Hazop\Data\43rd_Hazop_Helmet_CO.paa",
				"TCF_EQUIPMENT\Helmets\Hazop\Data\43rd_Hazop_DP_VISOR_CA.paa"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=25;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=25;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=20;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
		class 53rd_MA_MKVB_Helmet: MA_Mjolnir_MKVB_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] S-ECHO Mark VB Helmet";
			model="MA_Armor_ORION\data\Helmets\MKVB\MKVB_Helmet_Spartan.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_Armor\Spartan Armor\MKVB\Echo\Echo_Spartan_Helmets_SPP_MKVB_Helmet_Diffuse.paa",
				"53rd_Armor\Spartan Armor\MKVB\Echo\Echo_Spartan_Helmets_SPP_MKVB_Visor_Diffuse.paa"
			};
			class ItemInfo: HeadgearItem
			{
				uniformModel="MA_Armor_ORION\data\Helmets\MKVB\MKVB_Helmet_Spartan.p3d";
				mass=50;
				modelSides[]={6};
				allowedSlots[]={801,901,701,605};
				hiddenSelections[]=
				{
					"camo1",
					"camo2"
				};
				hiddenSelectionsTextures[]={};
				class HitpointsProtectionInfo
					{
						class Head
						{
							hitpointName="HitHead";
							armor=35;
							passThrough=0.1;
						};
						class Face
						{
							hitpointName="HitFace";
							armor=35;
							passThrough=0.1;
						};
						class Neck
						{
							hitpointName="HitNeck";
							armor=30;
							passThrough=0.1;
						};
					};
			};
		};
		class 53rd_MA_GAIA_Helmet: MA_Mjolnir_MKIV_Helmet
		{
				scope=2;
				scopeArsenal=2;
				displayName="[53rd] S-GAIA MKIV Helmet";
				model="MA_Armor_ORION\data\Helmets\MKIV\MKIV_Helmet_Spartan.p3d";
				hiddenSelections[]=
				{
					"camo1",
					"camo2"
				};
				hiddenSelectionsTextures[]=
				{
					"53rd_Armor\Spartan Armor\MKIV\MKIV_AUX_SPP_MKIV_Helmet_Diffuse.paa",
					"53rd_Armor\Spartan Armor\MKIV\MKIV_AUX_SPP_MKIV_Visor_Diffuse.paa"
				};
				class ItemInfo: HeadgearItem
				{
					uniformModel="MA_Armor_ORION\data\Helmets\MKIV\MKIV_Helmet_Spartan.p3d";
					mass=50;
					modelSides[]={6};
					allowedSlots[]={801,901,701,605};
					hiddenSelections[]=
					{
						"camo1",
						"camo2"
					};
					hiddenSelectionsTextures[]={};
					class HitpointsProtectionInfo
						{
							class Head
							{
								hitpointName="HitHead";
								armor=35;
								passThrough=0.1;
							};
							class Face
							{
								hitpointName="HitFace";
								armor=35;
								passThrough=0.1;
							};
							class Neck
							{
								hitpointName="HitNeck";
								armor=30;
								passThrough=0.1;
							};
						};
				};
		};
		class 53rd_HR_Scout_Helmet: MAPO_HR_Scout_Helmet
		{
        scope=2;
        scopeArsenal=2;
		displayName="[53rd] S-Foxtrot Mjolnir Scout Helmet";
		model="MA_Armor_ORION\data\Helmets\Scout\Scout_Helmet_Spartan.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Armor\Spartan Armor\MKVB\Foxtrot\Foxtrot_Spartan_Helmets_SPP_Scout_Helmet_CO.paa",
			"53rd_Armor\Spartan Armor\MKVB\Foxtrot\Foxtrot_Spartan_Helmets_SPP_Scout_Visor_CO.paa"
		};
        class ItemInfo: HeadgearItem
			{
            uniformModel="MA_Armor_ORION\data\Helmets\Scout\Scout_Helmet_Spartan.p3d";
            mass=50;
            modelSides[]={6};
            allowedSlots[]={801,901,701,605};
            hiddenSelections[]=
            {
                "camo1",
                "camo2"
            };
            hiddenSelectionsTextures[]={};
            class HitpointsProtectionInfo
                {
                    class Head
                    {
                        hitpointName="HitHead";
                        armor=35;
                        passThrough=0.1;
                    };
                    class Face
                    {
                        hitpointName="HitFace";
                        armor=35;
                        passThrough=0.1;
                    };
                    class Neck
                    {
                        hitpointName="HitNeck";
                        armor=30;
                        passThrough=0.1;
                    };
                };
			};
		};
		class 53rd_Mjolnir_ODST_Helmet: MAPO_Mjolnir_ODST_Helmet
		{
        scope=2;
        scopeArsenal=2;
		displayName="[53rd] S-OSCAR ODST Helmet";
		model="MA_Armor_ORION\data\Helmets\ODST\ODST_Helmet_Spartan.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Armor\Spartan Armor\MKVB\Oscar\Oscar_Spartan_Helmets_SPP_ODST_Helmet_Diffuse.paa",
			"53rd_Armor\Spartan Armor\MKVB\Oscar\Oscar_Spartan_Helmets_SPP_ODST_Visor_Diffuse.paa"
		};
        class ItemInfo: HeadgearItem
			{
            uniformModel="MA_Armor_ORION\data\Helmets\ODST\ODST_Helmet_Spartan.p3d";
            mass=50;
            modelSides[]={6};
            allowedSlots[]={801,901,701,605};
            hiddenSelections[]=
            {
                "camo1",
                "camo2"
            };
            hiddenSelectionsTextures[]={};
            class HitpointsProtectionInfo
                {
                    class Head
                    {
                        hitpointName="HitHead";
                        armor=35;
                        passThrough=0.1;
                    };
                    class Face
                    {
                        hitpointName="HitFace";
                        armor=35;
                        passThrough=0.1;
                    };
                    class Neck
                    {
                        hitpointName="HitNeck";
                        armor=30;
                        passThrough=0.1;
                    };
                };
			};
		};
		class 53rd_Mjolnir_HR_EOD_Helmet: MAPO_Mjolnir_HR_EOD_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[MAPO] S-Sierra EOD Helmet";
			model="MA_Armor_ORION\data\Helmets\HR_EOD\HR_EOD_Helmet_Spartan.p3d";
			hiddenSelections[]=
			{
				"camo1", 
				"camo2", 
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_Armor\Spartan Armor\MKVB\Sierra\Spartan_Helmets_SPP_EOD_Helmet_R_Diffuse.paa",
				"53rd_Armor\Spartan Armor\MKVB\Sierra\Spartan_Helmets_SPP_EOD_Visor_R_Diffuse.paa",	
			};
			class ItemInfo: HeadgearItem
				{
					uniformModel="MA_Armor_ORION\data\Helmets\HR_EOD\HR_EOD_Helmet_Spartan.p3d";
					mass=50;
					modelSides[]={6};
					allowedSlots[]={801,901,701,605};
					hiddenSelections[]=
					{
						"camo1",
						"camo2"
					};
					hiddenSelectionsTextures[]={};
					class HitpointsProtectionInfo
						{
							class Head
							{
								hitpointName="HitHead";
								armor=35;
								passThrough=0.1;
							};
							class Face
							{
								hitpointName="HitFace";
								armor=35;
								passThrough=0.1;
							};
							class Neck
							{
								hitpointName="HitNeck";
								armor=30;
								passThrough=0.1;
							};
						};
				};
		 };
};