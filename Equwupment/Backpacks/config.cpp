class CfgPatches {
	class 53rd_Backpacks 
	{
		units[] = 
        {
            "",
			""
        };
		weapons[] = 
        {
            "53rd_Hephaestus_Jumpack",
			"Halo_Rucksack_01",
			"Halo_Rucksack_02",
			"Halo_LR",
            ""
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
	class OPTRE_UNSC_Rucksack_Medic;
	class OPTRE_UNSC_Rucksack_Heavy;
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
	class 53rd_Rucksack_Urban: B_Carryall_Base
	{
		author="Cherryy";
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
		maximumLoad=200;
		mass=1;
	};
    class 53rd_Rucksack_Woodland: B_Carryall_Base
	{
		author="Cherryy";
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
		maximumLoad=200;
		mass=1;
	};
	class 53rd_Rucksack_Desert: B_Carryall_Base
	{
		author="Cherryy";
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
		maximumLoad=200;
		mass=1;
	};
	class 53rd_Rucksack_Winter: B_Carryall_Base
	{
		author="Cherryy";
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
		maximumLoad=200;
		mass=1;
	};
    //Heavy
	class 53rd_Rucksack_Heavy_Urban: B_Carryall_Base
	{
		author="Cherryy";
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
		maximumLoad=350;
		mass=1;
	};
    class 53rd_Rucksack_Heavy_Winter: B_Carryall_Base
	{
		author="Cherryy";
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
		maximumLoad=350;
		mass=1;
	};
    class 53rd_Rucksack_Heavy_Desert: B_Carryall_Base
	{
		author="Cherryy";
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
		maximumLoad=350;
		mass=1;
	};
    class 53rd_Rucksack_Heavy_Woodland: B_Carryall_Base
	{
		author="Cherryy";
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
		maximumLoad=350;
		mass=1;
	};
    //LR
	class 53rd_LR_Urban: B_Carryall_Base
	{
		author="Cherryy";
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
		maximumLoad=300;
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
		author="Cherryy";
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
		maximumLoad=300;
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
		author="Cherryy";
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
		maximumLoad=300;
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
		author="Cherryy";
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
		maximumLoad=300;
		mass=1;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
    //Medic Satchel
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
        maximumLoad=300;
		mass=1;
    };
	
//Atlas Packs
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
		maximumLoad=300;
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

//Jump Packs	
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
        NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		maximumLoad=350;
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
//Rucksacks
    class 53rd_Hephaestus_Rucksack_Basic: OPTRE_UNSC_Rucksack
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Basic)";
        maximumLoad=300;
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
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa"
        };
    }; 

    class 53rd_Hephaestus_Rucksack_Heavy: OPTRE_UNSC_Rucksack_Heavy
    {
		author="53rd AUX Team";
        dlc="53rd AUX";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Heavy)";
        maximumLoad=450;
        mass=1;
        hiddenSelections[]=
        {
            "camo",
            "B_Medic",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa"
        };
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

//Medic
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

//JTAC LR
    class 53rd_Hephaestus_Rucksack_JTAC_Urban: OPTRE_ANPRC_521_Green
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] JTAC LR (Urban)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa",
			"53rd_SC_Aux\tex\Backpacks\53rd_Hephaestus_Rucksack_JTAC_Urban.paa"
        };
        descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        maximumLoad=450;
    };
	
    class 53rd_Hephaestus_Rucksack_JTAC_Woodland: OPTRE_ANPRC_521_Green
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] JTAC LR (Woodland)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa",
			"53rd_SC_Aux\tex\Backpacks\53rd_Hephaestus_Rucksack_JTAC_Woodland.paa"
        };
        descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        maximumLoad=450;
    };

    class 53rd_Hephaestus_Rucksack_JTAC_Desert: OPTRE_ANPRC_521_Green
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] JTAC LR (Desert)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa",
			"53rd_SC_Aux\tex\Backpacks\53rd_Hephaestus_Rucksack_JTAC_Desert.paa"
        };
        descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        maximumLoad=450;
    };

    class 53rd_Hephaestus_Rucksack_JTAC_Snow: OPTRE_ANPRC_521_Green
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] JTAC LR (Snow)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa",
			"53rd_SC_Aux\tex\Backpacks\53rd_Hephaestus_Rucksack_JTAC_Snow.paa"
        };
        descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        maximumLoad=450;
    };


};