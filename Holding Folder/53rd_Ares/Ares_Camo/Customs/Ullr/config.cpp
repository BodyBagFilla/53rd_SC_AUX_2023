class CfgPatches {
    class 53rd_Ullr_Custom_Armor
    {
            units[] = 
            {

            };
            weapons[] = 
            {
            "53rd_Base_Recon",
            "53rd_Ullr_Recon",
            };
            requiredVersion = 0.100000;
            requiredAddons[] = {};
    };
};


class cfgWeapons
{
    class ItemCore;
    class ItemInfo;
	class MA_Helmet_Base;
	class MA_M56SR_Helmet: MA_Helmet_Base
	{
		class ItemInfo;
	};
	class 53rd_Ares_Custom_Helmet_Ullr_Urban: MA_M56SR_Helmet
	{

		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Custom Helmet (Ullr / Urban)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Helmet_Urban.paa",
				"MA_Armor\data\Helmets\H3_ODST\H3_Visor_Black_co.paa"
		};
		class ItemInfo;
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


	class 53rd_Ares_Custom_Helmet_Ullr_Woodland: 53rd_Ares_Custom_Helmet_Ullr_Urban
	{

		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Custom Helmet (Ullr / Woodland)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Helmet_Woodland.paa",
				"MA_Armor\data\Helmets\H3_ODST\H3_Visor_Black_co.paa"
		};
	};
	class 53rd_Ares_Custom_Helmet_Ullr_Winter: 53rd_Ares_Custom_Helmet_Ullr_Urban
	{

		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Custom Helmet (Ullr / Winter)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Helmet_Winter.paa",
				"MA_Armor\data\Helmets\H3_ODST\H3_Visor_Black_co.paa"
		};

	};
	class 53rd_Ares_Custom_Helmet_Ullr_Desert: 53rd_Ares_Custom_Helmet_Ullr_Urban
	{

		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Custom Helmet (Ullr / Desert)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Helmet_Desert.paa",
				"MA_Armor\data\Helmets\H3_ODST\H3_Visor_Black_co.paa"
		};


	};



//////////////////////////////////////////////////////////////////////////////
///////////////////////////////VEST///////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
	class 53rd_Ares_MA_Vest_Base;
	class 53rd_Ares_Ullr_Vest_Urban: 53rd_Ares_MA_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Cust Armor (Ullr)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\53rd_sc_aux\tex\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			//"H3_Forearm_Left",
			//"H3_Forearm_Right",
			"Reach_Forearm_Left",
			"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			//"Reach_CQB_Pauldron_Left",
			//"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			//"H3_Armor_Upper",
			//"H3_Armor_Lower",
			"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Ares\Ares_Camo\TL\53rd_3rd_PLT_H3_Upper_Armor_TL.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Upper_Urban.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Lower_Urban.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Forearm_Vents.paa",
			"53rd_Ares\Ares_Camo\Rifleman\53rd_3rd_PLT_H3_Snipper_Slotted_Riflemen.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Chest_Urban.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
//            "Reach_Forearm_Left",
//            "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
            "Reach_Pauldron_Left",
            "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
//            "Reach_Sniper_Pauldron_Left",
//            "Reach_Sniper_Pauldron_Right",
//            "Reach_CQB_Pauldron_Left",
//            "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
//            "Reach_Armor_Upper",
//            "Reach_Armor_Lower",
//            "Forearm_Vent_Left",
//            "Forearm_Vent_Right",
//            "Canisters"
			};
		hiddenSelectionsTextures[]=
			{
			"53rd_Ares\Ares_Camo\TL\53rd_3rd_PLT_H3_Upper_Armor_TL.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Upper_Urban.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Lower_Urban.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Forearm_Vents.paa",
			"53rd_Ares\Ares_Camo\Rifleman\53rd_3rd_PLT_H3_Snipper_Slotted_Riflemen.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Chest_Urban.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"

			};
		};
		containerClass="Supply200";
		mass=20;
		passThrough=0.1;
		modelSides[]={6};
	};


	class 53rd_Ares_Ullr_Vest_Woodland: 53rd_Ares_MA_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Cust Armor (Ullr)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\53rd_sc_aux\tex\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			//"H3_Forearm_Left",
			//"H3_Forearm_Right",
			"Reach_Forearm_Left",
			"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			//"Reach_CQB_Pauldron_Left",
			//"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			//"H3_Armor_Upper",
			//"H3_Armor_Lower",
			"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Ares\Ares_Camo\TL\53rd_3rd_PLT_H3_Upper_Armor_TL.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Upper_Woodland.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Lower_Woodland.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Forearm_Vents.paa",
			"53rd_Ares\Ares_Camo\Rifleman\53rd_3rd_PLT_H3_Snipper_Slotted_Riflemen.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Chest_Woodland.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
//            "Reach_Forearm_Left",
//            "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
            "Reach_Pauldron_Left",
            "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
//            "Reach_Sniper_Pauldron_Left",
//            "Reach_Sniper_Pauldron_Right",
//            "Reach_CQB_Pauldron_Left",
//            "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
//            "Reach_Armor_Upper",
//            "Reach_Armor_Lower",
//            "Forearm_Vent_Left",
//            "Forearm_Vent_Right",
//            "Canisters"
			};
		hiddenSelectionsTextures[]=
			{
			"53rd_Ares\Ares_Camo\TL\53rd_3rd_PLT_H3_Upper_Armor_TL.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Upper_Woodland.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Lower_Woodland.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Forearm_Vents.paa",
			"53rd_Ares\Ares_Camo\Rifleman\53rd_3rd_PLT_H3_Snipper_Slotted_Riflemen.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Chest_Woodland.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"

			};
		};
		containerClass="Supply200";
		mass=20;
		passThrough=0.1;
		modelSides[]={6};
	};


	class 53rd_Ares_Ullr_Vest_Winter: 53rd_Ares_MA_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Cust Armor (Ullr)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\53rd_sc_aux\tex\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			//"H3_Forearm_Left",
			//"H3_Forearm_Right",
			"Reach_Forearm_Left",
			"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			//"Reach_CQB_Pauldron_Left",
			//"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			//"H3_Armor_Upper",
			//"H3_Armor_Lower",
			"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Ares\Ares_Camo\TL\53rd_3rd_PLT_H3_Upper_Armor_TL.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Upper_Winter.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Lower_Winter.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Forearm_Vents.paa",
			"53rd_Ares\Ares_Camo\Rifleman\53rd_3rd_PLT_H3_Snipper_Slotted_Riflemen.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Chest_Winter.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
//            "Reach_Forearm_Left",
//            "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
            "Reach_Pauldron_Left",
            "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
//            "Reach_Sniper_Pauldron_Left",
//            "Reach_Sniper_Pauldron_Right",
//            "Reach_CQB_Pauldron_Left",
//            "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
//            "Reach_Armor_Upper",
//            "Reach_Armor_Lower",
//            "Forearm_Vent_Left",
//            "Forearm_Vent_Right",
//            "Canisters"
			};
		hiddenSelectionsTextures[]=
			{
			"53rd_Ares\Ares_Camo\TL\53rd_3rd_PLT_H3_Upper_Armor_TL.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Upper_Winter.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Lower_Winter.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Forearm_Vents.paa",
			"53rd_Ares\Ares_Camo\Rifleman\53rd_3rd_PLT_H3_Snipper_Slotted_Riflemen.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Chest_Winter.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"

			};
		};
		containerClass="Supply200";
		mass=20;
		passThrough=0.1;
		modelSides[]={6};
	};

	class 53rd_Ares_Ullr_Vest_Desert: 53rd_Ares_MA_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Cust Armor (Ullr)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\53rd_sc_aux\tex\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			//"H3_Forearm_Left",
			//"H3_Forearm_Right",
			"Reach_Forearm_Left",
			"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			//"Reach_CQB_Pauldron_Left",
			//"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			//"H3_Armor_Upper",
			//"H3_Armor_Lower",
			"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_Ares\Ares_Camo\TL\53rd_3rd_PLT_H3_Upper_Armor_TL.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Upper_Desert.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Lower_Desert.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Forearm_Vents.paa",
			"53rd_Ares\Ares_Camo\Rifleman\53rd_3rd_PLT_H3_Snipper_Slotted_Riflemen.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Chest_Desert.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
//            "Reach_Forearm_Left",
//            "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
            "Reach_Pauldron_Left",
            "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
//            "Reach_Sniper_Pauldron_Left",
//            "Reach_Sniper_Pauldron_Right",
//            "Reach_CQB_Pauldron_Left",
//            "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
//            "Reach_Armor_Upper",
//            "Reach_Armor_Lower",
//            "Forearm_Vent_Left",
//            "Forearm_Vent_Right",
//            "Canisters"
			};
		hiddenSelectionsTextures[]=
			{
			"53rd_Ares\Ares_Camo\TL\53rd_3rd_PLT_H3_Upper_Armor_TL.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Upper_Desert.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Lower_Desert.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Forearm_Vents.paa",
			"53rd_Ares\Ares_Camo\Rifleman\53rd_3rd_PLT_H3_Snipper_Slotted_Riflemen.paa",
			"53rd_Ares\Ares_Camo\Customs\Ullr\53rd_Ullr_Custom_Chest_Desert.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"

			};
		};
		containerClass="Supply200";
		mass=20;
		passThrough=0.1;
		modelSides[]={6};
	};






};



