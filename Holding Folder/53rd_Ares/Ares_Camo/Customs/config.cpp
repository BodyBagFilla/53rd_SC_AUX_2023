class CfgPatches {
    class 53rd_Aqua_Recon
    {
            units[] = 
            {

            };
            weapons[] = 
            {
            "53rd_Base_Recon",
            "53rd_Aqua_Recon",
            };
            requiredVersion = 0.100000;
            requiredAddons[] = {};
    };
};
class cfgWeapons
{
    class ItemCore;
    class ItemInfo;
    class OPTRE_UNSC_CH252D_Helmet_Base: ItemCore
    {
     class ItemInfo;
    };

    class 53rd_Base_Recon: OPTRE_UNSC_CH252D_Helmet_Base
    {
        dlc = "OPTRE";
        scope = 1;
        scopeArsenal = 1;
        author = "Article 2 Studios & Gamma";
        picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
        model = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
        displayName = "[53rd] ReconTest";
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\Pilot_Helmet_co.paa","OPTRE_UNSC_Units\Army\data\Pilot_Visor_co.paa"};
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
            mass = 40;
            modelSides[] = {6};
            passThrough = 0.1;
            hiddenSelections[] = {"camo","camo2","H_Ghillie"};
            hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\recon_co.paa","optre_unsc_units\army\data\recon_visor_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
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

    //Test    
    class 53rd_Aqua_Recon: 53rd_Base_Recon 
    {
        author="53rd Texture Team";
        scope=2;
        scopeArsenal=2;
        side=1;
        displayName="[53rd] Aqyrys (Custom)";
        picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
        model= "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
        hiddenSelections[]=
        {
            "Camo",
            "Camo2",
            "H_Ghillie"            
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_Ares\Ares_Camo\Customs\53rd_Aqyrys_Recon_Helmet.paa",
            "53rd_Ares\Ares_Camo\Customs\Recon_Visor_co.paa"
        };
    };



//////////////////////////////////////////////////////////////////////////////
///////////////////////////////VEST///////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
	class 53rd_Ares_MA_Vest_Base;
	class 53rd_Ares_Aqyrys_Vest_Urban: 53rd_Ares_MA_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Cust Armor (Aqyrys)";
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
			//"Reach_Forearm_Left",
			//"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
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
			"53rd_sc_aux\Armor\Ares_Camo\Customs\Aqyrys\53rd_Aqyrys_Upper_Armor.paa",
			"53rd_sc_aux\Armor\Ares_Camo\Customs\Aqyrys\53rd_Aqyrys_Lower_Armor.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"53rd_SC_aux\Armor\Ares_Camo\PL\53rd_3rd_PLT_H3_Sniper_PL.paa",
			"53rd_SC_aux\Armor\Ares_Camo\PL\53rd_3rd_PLT_H3_CQB_PL.paa",
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
			//"H3_Forearm_Left",
			//"H3_Forearm_Right",
			//"Reach_Forearm_Left",
			//"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
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
				"53rd_sc_aux\Armor\Ares_Camo\Customs\Aqyrys\53rd_Aqyrys_Upper_Armor.paa",
				"53rd_sc_aux\Armor\Ares_Camo\Customs\Aqyrys\53rd_Aqyrys_Lower_Armor.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"53rd_SC_aux\Armor\Ares_Camo\PL\53rd_3rd_PLT_H3_Sniper_PL.paa",
			"53rd_SC_aux\Armor\Ares_Camo\PL\53rd_3rd_PLT_H3_CQB_PL.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"

			};
		};
		containerClass="Supply200";
		mass=20;
		passThrough=0.1;
		modelSides[]={6};
	};



};
