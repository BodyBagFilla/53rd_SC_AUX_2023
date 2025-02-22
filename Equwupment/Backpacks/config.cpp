class CfgPatches 
{
	class 53rd_Backpacks 
	{
		units[] = 
        {
            "",
        };
		weapons[] = 
        {
            "53rd_Hephaestus_Jumpack",
			"Halo_Rucksack_01",
			"Halo_Rucksack_02",
			"Halo_LR",
            "53rd_Shoulders_Echo",
			"53rd_Shoulders_Foxtrot",
			"53rd_Shoulders_Oscar",
			"53rd_Shoulders_Sierra",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
		"A3_Characters_F"	
		};
	};
};
#include "xtdGear.hpp"
class CfgVehicles
{
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ANPRC_521_Green;
	class OPTRE_ANPRC_515;
	class OPTRE_ANPRC_521_black;
	class MA_Backpack_Base;
	class Mjolnir_Shoulders_Base_Spartan: MA_Backpack_Base
	{};
	class OPTRE_UNSC_Rucksack_Medic;
	class OPTRE_UNSC_Rucksack_Heavy;
	class OPTRE_ILCS_Rucksack_Heavy;
	class OPTRE_ONI_Researcher_Suitcase;
	class B_Parachute;
    class NSM_neutral_XD_1_backpack;
	class B_AssaultPack_Base;
	class ContainerSupply;
    class ReammoBox;
	class Bag_Base: ReammoBox
	{
	};
	class B_Carryall_Base: Bag_Base
	{
	};
	class 53rd_ILCS_rucksack : OPTRE_ILCS_Rucksack_Heavy
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Rucksack (Urban)";
        maximumLoad = 200;
		mass = 50;
		hiddenSelections[] = {"camo1","AP_Heavy","biofoam"};
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Black.paa"};
		tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };
	class 53rd_ILCS_rucksack_desert : 53rd_ILCS_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Rucksack (Desert)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Desert.paa"};
    };
	class 53rd_ILCS_rucksack_woodland : 53rd_ILCS_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Rucksack (Woodland)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Woodland.paa"};
    };
	class 53rd_ILCS_rucksack_snow : 53rd_ILCS_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Rucksack (Snow)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Snow.paa"};
    };
	class 53rd_ILCS_heavy_rucksack : 53rd_ILCS_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Heavy Rucksack (Urban)";
        maximumLoad = 350;
		hiddenSelections[] = {"camo1","biofoam"};
    };
	class 53rd_ILCS_heavy_rucksack_desert : 53rd_ILCS_heavy_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Heavy Rucksack (Desert)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Desert.paa"};
    };
	class 53rd_ILCS_heavy_rucksack_woodland : 53rd_ILCS_heavy_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Heavy Rucksack (Woodland)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Woodland.paa"};
    };
	class 53rd_ILCS_heavy_rucksack_snow : 53rd_ILCS_heavy_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Heavy Rucksack (Snow)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Snow.paa"};
    };
	class 53rd_ILCS_corpsman_rucksack : 53rd_ILCS_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Corpsman Rucksack (Urban)";
		maximumLoad = 300;
		hiddenSelections[] = {"camo1","AP_Heavy"};
    };
	class 53rd_ILCS_corpsman_rucksack_desert : 53rd_ILCS_corpsman_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Corpsman Rucksack (Desert)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Desert.paa"};
    };
	class 53rd_ILCS_corpsman_rucksack_woodland : 53rd_ILCS_corpsman_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Corpsman Rucksack (Woodland)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Woodland.paa"};
    };
	class 53rd_ILCS_corpsman_rucksack_snow : 53rd_ILCS_corpsman_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Corpsman Rucksack (Snow)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Snow.paa"};
    };
	class 53rd_ILCS_corpsman_heavy_rucksack : 53rd_ILCS_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Corpsman Heavy Rucksack (Urban)";
		maximumLoad = 400;
		hiddenSelections[] = {"camo1"};
    };
	class 53rd_ILCS_corpsman_heavy_rucksack_desert : 53rd_ILCS_corpsman_heavy_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Corpsman Heavy Rucksack (Desert)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Desert.paa"};
    };
	class 53rd_ILCS_corpsman_heavy_rucksack_woodland : 53rd_ILCS_corpsman_heavy_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Corpsman Heavy Rucksack (Woodland)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Woodland.paa"};
    };
	class 53rd_ILCS_corpsman_heavy_rucksack_snow : 53rd_ILCS_corpsman_heavy_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Corpsman Heavy Rucksack (Snow)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_Rucksack_Snow.paa"};
    };
	class 53rd_ILCS_recon_rucksack : 53rd_ILCS_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS Recon Rucksack";
		maximumLoad = 250;
		model = "\A3\weapons_f\empty";
    };
	//JUMP PACKS
	class Series_8_Jumpack : 53rd_ILCS_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] Series 8 SOLA";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_range = 1;
        tf_hasLRradio = 0;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 210;
		NSM_jumppack_recharge = .5;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv53rdart.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"High Jump",{5,15,40,0,0,0}},{"Landing/Adjust Flare",{5,10,10,0,1,1}}};
		maximumload = 300;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {""};
    };
	class Series_8LR_Jumpack : 53rd_ILCS_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] Series 8LR SOLA";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_range = 120000;
        tf_hasLRradio = 1;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 210;
		NSM_jumppack_recharge = .5;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv53rdart.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"High Jump",{5,15,40,0,0,0}},{"Landing/Adjust Flare",{5,10,10,0,1,1}}};
		maximumload = 300;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {""};
    };
	class Series_8LR_Jumpack_M : 53rd_ILCS_rucksack
    {
        author = MACRO_AUTHOR;
        displayName = "[53rd] Series 8LR SOLA-M";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_range = 120000;
        tf_hasLRradio = 1;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 210;
		NSM_jumppack_recharge = .5;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv53rdart.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"High Jump",{5,15,40,0,0,0}},{"Landing/Adjust Flare",{5,10,10,0,1,1}}};
		maximumload = 300;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {""};
    };
	class 53rd_Hephaestus_Jumpack: NSM_neutral_XD_1_backpack
    {
		dlc="53rd Aux";
        scope = 2;
        scopeCurator=2;
        author = "Namenai / Ithias";
        displayname = "[53rd] Jumpack";
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
        NSM_jumppack_is_jumppack = 1;
        NSM_jumppack_spam_delay = 1;
        NSM_jumppack_energy_capacity = 200; 
        NSM_jumppack_recharge = 5;
        NSM_jumppack_jump_types[] = {
            {
                "Forward Jump",// Name of jump
                {
                    15,     //forward velo(0)
                    7,     //verticle velo(1)
                    20,     //cost(2)
                    0,      //angle(3)
                    0,      //directional(4)(no=0,yes=1)?
                    0       //can prone jump(5)(no=0,yes=1)?
                }
            },
        };
        NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}}; 
        NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv53rdart.ogg"};
        NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		maximumLoad=300;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
    };
	// Misc Backpacks
	class 53rd_legbag_black: 53rd_ILCS_rucksack
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		displayName = "[53rd] RP Leg Pouch (Black)";
		scope = 2;
		mass = 20;
		maximumLoad = 140;
		model = "\A3\Characters_F_Orange\Vests\V_LegStrapBag_F.p3d";
		picture="\A3\Characters_F_Orange\Vests\Data\UI\icon_V_LegStrapBag_black_CA.paa";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F_Orange\Vests\Data\V_LegStrapBag_black_CO.paa"
		};
	};
	class 53rd_bandolier_backpack_black: 53rd_ILCS_rucksack
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		displayName = "[53rd] RP Bandolier Backpack (Black)";
		scope = 2;
		mass = 20;
		maximumLoad = 140;
		picture = "\A3\characters_f\Data\UI\icon_V_bandollier_blk_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"
		};
	};
	class 53rd_messenger_bag_black: 53rd_ILCS_rucksack
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		displayName = "[53rd] RP Messenger Bag (Black)";
		scope = 2;
		mass = 20;
		maximumLoad = 140;
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Black_CA.paa";
		model = "\A3\Supplies_F_Orange\Bags\B_Messenger_F.p3d";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Supplies_F_Orange\Bags\Data\B_Messenger_Black_F_CO.paa"
		};
	};
	class 53rd_assault_pack_black: 53rd_ILCS_rucksack
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		displayName = "[53rd] RP Assault Pack (Black)";
		scope = 2;
		mass = 20;
		maximumLoad = 140;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_blk_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_blk_co.paa"
		};
	};
	class 53rd_tactical_pack_black: 53rd_ILCS_rucksack
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		displayName = "[53rd] RP Tactical Pack (Black)";
		scope = 2;
		mass = 20;
		maximumLoad = 210;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_blk.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelections[] =
		{
			"Camo"
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_small_blk_co.paa"
		};
	};
	// Rifleman Bags
	class 53rd_Rucksack_Urban: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack [Urban]";
		model="\Halo_marine_02\Backpacks\Rucksack";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Urban.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=300;
		mass=1;
	};
    class 53rd_Rucksack_Woodland: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack [Woodland]";
		model="\Halo_marine_02\Backpacks\Rucksack";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Woodland.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=300;
		mass=1;
	};
	class 53rd_Rucksack_Desert: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack [Desert]";
		model="\Halo_marine_02\Backpacks\Rucksack";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Desert.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=300;
		mass=1;
	};
	class 53rd_Rucksack_Winter: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack [Winter]";
		model="\Halo_marine_02\Backpacks\Rucksack";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Winter.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=300;
		mass=1;
	};
	class 53rd_Atlas_Standard_Pack: B_AssaultPack_Base
	{
		author="Body & Split Jaw";
		scope=2;
		picture="";
		displayName="[53rd] Atlas Standard Pack";
		model="\19thVests_Kelp\Backpack\12thKelpBackpack.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Pouches",
			"Biofoam",
			"Antenna"
		};
		hiddenSelectionsTextures[]=
		{
			"19thVests_Kelp\Backpack\Standard\Main_ca.paa",
			"19thVests_Kelp\Backpack\Standard\Addon_Pouch_ca.paa",
			"",
			""
		};
		maximumLoad=300;
		mass=20;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
    //Heavy
	class 53rd_Rucksack_Heavy_Urban: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack Heavy [Urban]";
		model="\Halo_marine_02\Backpacks\Rucksack_pouches";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Urban.paa",
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Pouches.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		maximumLoad=450;
		mass=1;
	};
    class 53rd_Rucksack_Heavy_Winter: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack Heavy [Winter]";
		model="\Halo_marine_02\Backpacks\Rucksack_pouches";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Winter.paa",
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Pouches.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		maximumLoad=450;
		mass=1;
	};
    class 53rd_Rucksack_Heavy_Desert: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack Heavy [Desert]";
		model="\Halo_marine_02\Backpacks\Rucksack_pouches";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Desert.paa",
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Pouches.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		maximumLoad=400;
		mass=1;
	};
    class 53rd_Rucksack_Heavy_Woodland: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack Heavy [Woodland]";
		model="\Halo_marine_02\Backpacks\Rucksack_pouches";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Woodland.paa",
			"53rd_SC_aux\Equwupment\Backpacks\53rd_Ruck_Pouches.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		maximumLoad=450;
		mass=1;
	};
	class 53rd_Atlas_Heavy_Pack: B_AssaultPack_Base
	{
		author="Body & Split Jaw";
		scope=2;
		picture="";
		displayName="[53rd] Atlas Heavy Pack";
		model="\19thVests_Kelp\Backpack\12thKelpBackpack.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Pouches",
			"Biofoam",
			"Antenna"
		};
		hiddenSelectionsTextures[]=
		{
			"19thVests_Kelp\Backpack\Standard\Main_ca.paa",
			"19thVests_Kelp\Backpack\Standard\Addon_Pouch_ca.paa",
			"19thVests_Kelp\Backpack\Base\Addon_biofoam_ca.paa",
			""
		};
		maximumLoad=400;
		mass=20;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};		
    //LR
	class 53rd_ILCS_ANPRC_515: OPTRE_ANPRC_515
    {
        displayName = "[53rd] ILCS AN/PRC-515";
        maximumLoad = 300;
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\ILCS_ANPRC_515.paa"};
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };	
	class 53rd_ILCS_ANPRC_521_Urban: OPTRE_ANPRC_521_black
	{
		author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS AN/PRC-521 (Urban)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\Soft_Backpack_Urban.paa", "53rd_SC_aux\Equwupment\Backpacks\ILCS_ANPRC_521_Urban.paa"};
		maximumLoad = 400;
        descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
	};
	class 53rd_ILCS_ANPRC_521_Woodland: 53rd_ILCS_ANPRC_521_Urban
	{
		author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS AN/PRC-521 (Woodland)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\Soft_Backpack_Woodland.paa", "53rd_SC_aux\Equwupment\Backpacks\ILCS_ANPRC_521_Woodland.paa"};
	};
	class 53rd_ILCS_ANPRC_521_Desert: 53rd_ILCS_ANPRC_521_Urban
	{
		author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS AN/PRC-521 (Desert)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\Soft_Backpack_Desert.paa", "53rd_SC_aux\Equwupment\Backpacks\ILCS_ANPRC_521_Desert.paa"};
	};
	class 53rd_ILCS_ANPRC_521_Snow: 53rd_ILCS_ANPRC_521_Urban
	{
		author = MACRO_AUTHOR;
        displayName = "[53rd] ILCS AN/PRC-521 (Snow)";
		hiddenSelectionsTextures[] = {"53rd_SC_aux\Equwupment\Backpacks\Soft_Backpack_Snow.paa", "53rd_SC_aux\Equwupment\Backpacks\ILCS_ANPRC_521_Snow.paa"};
	};
	class 53rd_LR_Urban: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Long Range [Urban]";
		model="\Halo_marine_02\Backpacks\Longrange";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_LR_Urban.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=400;
		mass=1;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
    class 53rd_LR_Woodland: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Long Range [Woodland]";
		model="\Halo_marine_02\Backpacks\Longrange";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_LR_Woodland.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=400;
		mass=1;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
    class 53rd_LR_Desert: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Long Range [Desert]";
		model="\Halo_marine_02\Backpacks\Longrange";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_LR_Desert.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=400;
		mass=1;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
    class 53rd_LR_Winter: B_Carryall_Base
	{
		author="53rd Aux Team";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Long Range [Winter]";
		model="\Halo_marine_02\Backpacks\Longrange";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Equwupment\Backpacks\53rd_LR_Winter.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=400;
		mass=1;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class 53rd_Atlas_RTO_Pack: B_AssaultPack_Base
	{
		author="Body & Split Jaw";
		scope=2;
		picture="";
		displayName="[53rd] Atlas RTO Pack";
		model="\19thVests_Kelp\Backpack\12thKelpBackpack.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Pouches",
			"Biofoam",
			"Antenna"
		};
		hiddenSelectionsTextures[]=
		{
			"19thVests_Kelp\Backpack\Standard\Main_ca.paa",
			"19thVests_Kelp\Backpack\Standard\Addon_Pouch_ca.paa",
			"19thVests_Kelp\Backpack\Base\Addon_biofoam_ca.paa",
			"19thVests_Kelp\Backpack\Base\Addon_antenna_ca.paa"
		};
		maximumLoad=400;
		mass=20;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};	
    //Medical Bags
	class 53rd_Hephaestus_Medical_Rucksack: OPTRE_UNSC_Rucksack_Medic
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Medical)";
        maximumLoad=400;
        mass=1;
        hiddenSelections[]=
        {
            "camo",
            "B_Addons",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa"
        };
    }; 
    class 53rd_Hephaestus_Medical_Satchel: OPTRE_ONI_Researcher_Suitcase
    {
		author="53rd AUX Team";
        dlc="53rd AUX";
        scope=2;
        scopeArsenal=2;
        displayName="[53rd] Satchel (Medical)";
        tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\research_bag_CO_Medical.paa"
        };
        maximumLoad=400;
		mass=1;
    };
	class 53rd_Hephaestus_Medical_Satchel_V2: OPTRE_ONI_Researcher_Suitcase
    {
		author="53rd AUX Team";
        dlc="53rd AUX";
        scope=2;
        scopeArsenal=2;
        displayName="[53rd] Satchel (Medical)";
        tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Equwupment\Backpacks\53rd_Medic_Satchel.paa"
        };
        maximumLoad=400;
		mass=1;
    };
//NCO Stuff
	class 53rd_Hephaestus_NCO_LR_515: OPTRE_ANPRC_515
    {
        displayName = "[53rd] NCO LR (515)";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad=400;
    };
    class 53rd_Hephaestus_NCO_LR_Rucksack: OPTRE_UNSC_Rucksack
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] NCO LR (Rucksack)";
        maximumLoad=400;
        mass=1;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "B_Addons",
            "B_Medic",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd_Basic_With_LR.paa"
        };
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
    };
//Customs
	class 53rd_Hephaestus_NCO_LR_Rucksack_Body: OPTRE_ANPRC_515
	{
		author="53rd AUX Team";
        dlc="53rd AUX";
		picture="\OPTRE_weapons\backpacks\icons\como_pack.paa";
		displayName="[53rd] AN/PRC-515 (Body)";
		descriptionShort="AN/PRC-515<br>ODST Long Range Radio<br>25km Effective Range";
		model="\OPTRE_weapons\backpacks\como_ruck.p3d";
		maximumLoad=400;
		mass=1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Equipment\como_pack_Body_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

//Volare
	class 53rd_LR_Parachute: B_Parachute
	{
		author="53rd Aux";
		scope=2;
		displayName="[53rd] Parachute (LR)";
		maximumLoad=0;
		mass=1;
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
		backpackSimulation="ParachuteSteerable";
		ParachuteClass="Steerable_Parachute_F";
        ace_reserveParachute = "53rd_LR_Parachute";
        ace_hasReserveParachute = 1;
	};
//Spartan Stuff	
	class 53rd_Shoulders_Base_Spartan: Mjolnir_Shoulders_Base_Spartan
	{
 scope=1;
    scopeArsenal=1;
    author="Misriah Armory";
    displayName="[MAPO] Mjolnir Shoulders Base";
    model="MA_Armor_ORION\data\Vests\MKVB\Shoulders\Mjolnir_Shoulders_Spartan.p3d";
    picture="";
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
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
    };
    /// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
	};	  
	class 53rd_Shoulders_Echo: 53rd_Shoulders_Base_Spartan
	{
	 scope=2;
    scopeArsenal=2;
    author="Misriah Armory";
    displayName="[53rd] S-Echo Mjolnir Shoulders Base";
    model="MA_Armor_ORION\data\Vests\MKVB\Shoulders\Mjolnir_Shoulders_Spartan.p3d";
    picture="";
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
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        //"operator_right",
        "recon_left",
        "recon_right",
        //"security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "53rd_SC_aux\Armor\Spartan Armor\MKVB\Echo\Echo_Spartan_Shoulders_SPP_Operator_Shoulders_CO.paa",
        "53rd_SC_aux\Armor\Spartan Armor\MKVB\Echo\Echo_Spartan_Shoulders_SPP_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "53rd_SC_aux\Armor\Spartan Armor\MKVB\Echo\Echo_Spartan_Shoulders_SPP_Security_Shoulders_CO.paa",
        "53rd_SC_aux\Armor\Spartan Armor\MKVB\Echo\Echo_Spartan_Shoulders_SPP_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa",
    };
    /// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
	};	
	class 53rd_Shoulders_Foxtrot: 53rd_Shoulders_Base_Spartan
	{
	scope=2;
    scopeArsenal=2;
    author="Misriah Armory";
    displayName="[53rd] S-Foxtrot Mjolnir Shoulders Base";
    model="MA_Armor_ORION\data\Vests\MKVB\Shoulders\Mjolnir_Shoulders_Spartan.p3d";
    picture="";
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
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        //"recon_left",
       //"recon_right",
        "security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKVB\Foxtrot\Foxtrot_Spartan_Shoulders_SPP_Recon_Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKVB\Foxtrot\Foxtrot_Spartan_Shoulders_SPP_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
    };
    /// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
};
	class 53rd_Shoulders_Oscar: 53rd_Shoulders_Base_Spartan
	{
	scope=2;
    scopeArsenal=2;
    author="Misriah Armory";
    displayName="[53rd] S-Oscar Mjolnir Shoulders Base";
    model="MA_Armor_ORION\data\Vests\MKVB\Shoulders\Mjolnir_Shoulders_Spartan.p3d";
    picture="";
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
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        //"eva_left",
        //"eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKVB\Oscar\Oscar_Spartan_Shoulders_SPP_EVA__Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKVB\Oscar\Oscar_Spartan_Shoulders_SPP_EVA__Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
    };
    /// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
};
	class 53rd_Shoulders_Sierra: 53rd_Shoulders_Base_Spartan
	{
	scope=2;
    scopeArsenal=2;
    author="Misriah Armory";
    displayName="[53rd] S-Sierra Mjolnir Shoulders Base";
    model="MA_Armor_ORION\data\Vests\MKVB\Shoulders\Mjolnir_Shoulders_Spartan.p3d";
    picture="";
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
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
       // "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
      //  "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_Spartan_Shoulders_SPP_Commando_Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_Spartan_Shoulders_SPP_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_Spartan_Shoulders_SPP_GUNGNIR_Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_Spartan_Shoulders_SPP_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
    };
    /// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
	};
	class 53rd_Shoulders_GAIA: 53rd_Shoulders_Base_Spartan
	{
	scope=2;
    scopeArsenal=2;
    author="Misriah Armory";
    displayName="[53rd] S-GAIA Mjolnir Shoulders Base";
    model="MA_Armor_ORION\data\Vests\MKVB\Shoulders\Mjolnir_Shoulders_Spartan.p3d";
    picture="";
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
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        //"mkiv_left",
        //"mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_Spartan_Shoulders_SPP_Commando_Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_Spartan_Shoulders_SPP_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_Spartan_Shoulders_SPP_GUNGNIR_Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKVB\Sierra\Sierra_Spartan_Shoulders_SPP_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "53rd_Armor\Spartan Armor\MKIV\MKIV_AUX_SPP_MKIV_Shoulders_Diffuse.paa",
		"53rd_Armor\Spartan Armor\MKIV\MKIV_AUX_SPP_MKIV_Shoulders_Diffuse.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
    };
    /// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
	};
};