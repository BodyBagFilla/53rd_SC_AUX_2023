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
				"53rd_MJOLNIR_MKV_Armor_RT"
			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
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
		class MA_M56E_Helmet;
		class MA_M56SR_Helmet;
		class MA_M56SH_Helmet;
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

		class 53rd_EOD_Helmet: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] EOD Helmet (Urban)";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Spartan Armor\EOD_Urban_test.paa",
				"53rd_SC_aux\Armor\Spartan Armor\Gold_Hex_test.paa"
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
				"53rd_SC_aux\Armor\Spartan Armor\EOD_Woodland_test.paa",
				"53rd_SC_aux\Armor\Spartan Armor\Gold_Hex_test.paa"
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
				"53rd_SC_aux\Armor\Spartan Armor\EOD_Desert_test.paa",
				"53rd_SC_aux\Armor\Spartan Armor\Gold_Hex_test.paa"
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
				"53rd_SC_aux\Armor\Spartan Armor\EOD_Winter_test.paa",
				"53rd_SC_aux\Armor\Spartan Armor\Gold_Hex_test.paa"
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
};
