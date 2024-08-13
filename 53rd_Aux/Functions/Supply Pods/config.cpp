#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgPatches
{
	class 53rd_Supply_Pods
	{
		units[]=
		{
            "53rd_Ammo_SupplyPod_Empty",
            "53rd_Ammo_SupplyPod_Marksmen",
            "53rd_Ammo_SupplyPod_Basic",
            "53rd_Ammo_SupplyPod_Heavy",
            "53rd_Ammo_SupplyPod_CQB",
            "53rd_SupplyPod_Medical",
            "53rd_Ammo_SupplyPod_Explosives",
            "53rd_Ammo_SupplyPod_Equipment",
            "53rd_Hardbox_3R",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
	};
};
class CfgVehicles
{
	class OPTRE_Ammo_SupplyPod_Empty;
	class 53rd_Ammo_SupplyPod_Empty: OPTRE_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="53rd";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Empty)";
		model="\OPTRE_misc\crates\Supply_pod.p3d";
		author="53rd aux";
		icon="iconCrateWpns";
		transportMaxWeapons=8;
		transportMaxMagazines=50;
		maximumLoad=2000;
		transportMaxBackpacks=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=1.5;
		armor=10000;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};

	class 53rd_Ammo_SupplyPod_Rifle: 53rd_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc=OPTRE;
		editorCategory = 53rd_cat_faction;
		displayName=[53rd] Supply Pod (Rifle);
		author=53rd aux;
		hiddenSelections[]=
		{
			camo
		};
        hiddenSelectionsTextures[] = 
        {
            \53rd_Aux\Functions\Supply Pods\SupplyPod_Rifle_co.paa
        };
		class TransportMagazines
		{
			
			mag_xx(53rd_32Rnd_762x51_Mag,50);
			mag_xx(53rd_32Rnd_762x51_Mag_AP,50);
			mag_xx(53rd_32Rnd_762x51_Mag_JHP,50);
			mag_xx(53rd_32Rnd_762x51_Mag_Ball,50);

			mag_xx(53rd_60Rnd_762x51_Mag,50);
			mag_xx(53rd_60Rnd_762x51_Mag_AP,50);
			mag_xx(53rd_60Rnd_762x51_Mag_JHP,50);
			mag_xx(53rd_60Rnd_762x51_Mag_Ball,50);

			mag_xx(53rd_36Rnd_95x40_Mag,50);
			mag_xx(53rd_36Rnd_95x40_Mag_JHP,50);
			mag_xx(53rd_36Rnd_95x40_Mag_AP,50);
			mag_xx(53rd_36Rnd_95x40_Mag_Ball,50);
			mag_xx(53rd_36Rnd_95x40_Mag_SLAP,50);

			mag_xx(3Rnd_Smoke_Grenarde_shell,20);
			mag_xx(3Rnd_SmokeRed_Grenarde_shell,20);
			mag_xx(3Rnd_HE_Grenade_shell,20);
			mag_xx(1Rnd_HE_Grenade_shell,20);
			mag_xx(OPTRE_1Rnd_SmokeWhite_Grenade_shell,20);
			mag_xx(OPTRE_1Rnd_SmokePurple_Grenade_shell,20);
			mag_xx(OPTRE_1Rnd_SmokeRed_Grenade_shell,20);
			mag_xx(OPTRE_1Rnd_SmokeGreen_Grenade_shell,20);
			
		};
		class TransportWeapons
		{
			weap_xx(53rd_UNSC_ARM37,5);
			weap_xx(53rd_MA37,5);
			weap_xx(53rd_MA37GL,5);
			weap_xx(53rd_UNSC_MA5A,5);
			weap_xx(53rd_UNSC_MA5C,5);
			weap_xx(53rd_UNSC_MA5B,5);
			weap_xx(53rd_UNSC_MA5AGL,5);
			weap_xx(53rd_UNSC_br55_HB,5);
			weap_xx(53rd_UNSC_br55,5);
			weap_xx(53rd_UNSC_br55_gl,5);
		};
		class TransportItems
		{
			item_xx(optre_m7_sight,10);
			item_xx(optre_br55hb_scope,10);
			item_xx(optre_m73_smartlink,5);
			item_xx(acc_flashlight,20);
			item_xx(optre_m6_silencer,10);
			item_xx(optre_ma5suppressor,10);
		};
	};

	class 53rd_Ammo_SupplyPod_Marksmen: 53rd_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="OPTRE";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Marksmen)";
		author="53rd aux";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "\53rd_Aux\Functions\Supply Pods\SupplyPod_marks_co.paa"
        };
		class TransportMagazines
		{
		mag_xx(53rd_4Rnd_145x114_APFSDS_Mag,12);
		mag_xx(53rd_4Rnd_145x114_HVAP_Mg,12);

		mag_xx(53rd_15Rnd_762x51_Mag_AP,12);
		mag_xx(53rd_15Rnd_762x51_Mag,12);
		mag_xx(53rd_15Rnd_762x51_Mag_HVAP,12);
		mag_xx(53rd_15Rnd_762x51_Mag_JHP,12);

		mag_xx(53rd_20Rnd_65x48_Mag,12);
		mag_xx(53rd_20Rnd_65x48_Mag_JHP,12);
		mag_xx(53rd_20Rnd_65x48_Mag_AP,12);
		mag_xx(53rd_20Rnd_65x48_Mag_SLAP,12);

		};
		class TransportWeapons
		{
		weap_xx(53rd_UNSC_SRS99_Fang,2);
		weap_xx(53rd_UNSC_SRS99_AM,2);
		weap_xx(53rd_UNSC_CR77,5);
		weap_xx(53rd_UNSC_M392,5);
		};
		
		class TransportItems
		{
			item_xx(OPTRE_BMR_Scope,2);
			item_xx(OPTRE_M393_EOTECH,10);
			item_xx(Optre_Recon_Sight,10);
			item_xx(Optre_Recon_Sight_Green,5);
			item_xx(Optre_Recon_Sight_Red,20);
			item_xx(OPTRE_MA5Suppressor,10);
			item_xx(OPTRE_M12_Laser,10);
			item_xx(TCF_Rifle_Flashlight_IR,2);
			item_xx(OPTRE_BR45_Scope,10);
			item_xx(OPTRE_BR55HB_Scope,10);
			item_xx(19_UNSC_BR55_LAM,5);
			item_xx(19_UNSC_evo,20);
			item_xx(OPTRE_DMR_Light,10);
			item_xx(bipod_02_f_blk,10);
			item_xx(bipod_03_f_blk,2);
			item_xx(bipod_01_f_blk,10);
			item_xx(19_UNSC_evosd,10);
			item_xx(OPTRE_M6C_compensator,5);
			item_xx(OPTRE_M6_silencer,20);
			item_xx(TCF_M6_Flashlight_IR,10);
			item_xx(OPTRE_M6C_Laser,10);
			item_xx(OPTRE_M6C_Scope,20);
			item_xx(OPTRE_M6G_Laser,10);
			item_xx(OPTRE_M6G_Flashlight,10);
		};
	};

	class 53rd_Ammo_SupplyPod_CQB: 53rd_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="OPTRE";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (CQB)";
		author="53rd aux";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "\53rd_Aux\Functions\Supply Pods\SupplyPod_CQB_co.paa"
        };
		class TransportMagazines
		{
			mag_xx(53rd_8Rnd_127x40_Mag,8);
			mag_xx(53rd_8Rnd_127x40_Mag_AP,8);
			mag_xx(53rd_8Rnd_127x40_Mag_JHP,8);
			mag_xx(53rd_8Rnd_127x40_Mag_NARQ,8);
			mag_xx(53rd_8Rnd_127x40_Mag_FR,8);
			mag_xx(53rd_8Rnd_127x40_Mag_FG,8);
			mag_xx(53rd_8Rnd_127x40_Mag_SLAP,8);

			mag_xx(53rd_12Rnd_12Gauge_Pellets,8);
			mag_xx(53rd_12Rnd_12Gauge_Smoke,8);

			mag_xx(53rd_12Rnd_8Gauge_Slugs,8);
			mag_xx(53rd_12Rnd_8Gauge_Pellets,8);

			mag_xx(53rd_48Rnd_5x23mm_Mag,8);
			mag_xx(53rd_48Rnd_5x23mm_Mag_HV,8);
			mag_xx(53rd_48Rnd_5x23mm_Mag_JHP,8);

		};
		class TransportWeapons
		{
			weap_xx(53rd_M7_OPTRE,5);
			weap_xx(53rd_M6C_Riot_Shield,5);
			weap_xx(53rd_M7_Riot_Shield,5);
			weap_xx(53rd_Bulldog_Riot_Shield,5);
			weap_xx(53rd_M6G_Riot_Shield,5);

			weap_xx(53rd_UNSC_M45,5);
			weap_xx(53rd_UNSC_Bulldog,5);
			weap_xx(53rd_UNSC_M90,5);
		};
		class TransportItems
		{
			item_xx(optre_m7_sight,2);
			item_xx(acc_flashlight,2);
			item_xx(optre_m7_silencer,2);
			item_xx(optre_m7_laser,2);
			item_xx(optre_m7_flashlight,2);
		};
	};

	class 53rd_Ammo_SupplyPod_Heavy: 53rd_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="OPTRE";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Heavy)";
		author="53rd aux";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "\53rd_Aux\Functions\Supply Pods\SupplyPod_heavy_co.paa"
        };
		class TransportMagazines
		{
			mag_xx(OPTRE_200Rnd_95x40_Box_Tracer,20);
			mag_xx(OPTRE_200Rnd_95x40_Box_JHP,20);
			mag_xx(OPTRE_400Rnd_762x51_Box_Tracer,10);
			mag_xx(OPTRE_1Rnd_50x137_HEAT,10);
			mag_xx(OPTRE_1Rnd_50x137_PEN,10);
			mag_xx(OPTRE_1Rnd_50x137_HE,10);
			mag_xx(OPTRE_M41_Twin_HEAT_Thermal,10);
			mag_xx(MRAWS_HEAT_F,10);
			mag_xx(OPTRE_FC_Railgun_Slug,40);
			mag_xx(DMNS_150Rnd_30x06_Mag,20);
			mag_xx(TCF_100Rnd_762x51_Mag,20);
			mag_xx(TCF_762_jhp_mag,20);
			mag_xx(TCF_64Rnd_57x31_Mag_JHP,20);
			mag_xx(TCF_30Rnd_30x06_Mag_JHP,20);
			mag_xx(36Rnd_95x40_jhp_br_55,20);
		};
		class TransportWeapons
		{
			weap_xx(53rd_M247_hmg,3);
			weap_xx(53rd_M33,3);
			weap_xx(53rd_UNSC_M73H,3);
			weap_xx(53rd_UNSC_M739,3);
			weap_xx(53rd_M247H_Etilka,3);
			weap_xx(53rd_UNSC_MMG,3);
			weap_xx(53rd_UNSC_CM12,3);

		};
		class TransportItems
		{
			item_xx(OPTRE_M392_Scope,4);
			item_xx(OPTRE_M7_Sight,4);
			item_xx(OPTRE_M393_Scope,4);
			item_xx(OPTRE_M393_ACOG,4);
			item_xx(OPTRE_M393_EOTECH,4);
			item_xx(OPTRE_BMR_Laser,4);
			item_xx(TCF_Rifle_Flashlight_IR,4);
			item_xx(optre_ma5suppressor,4);
			item_xx(M247, MMG,4);
			item_xx(bipod_01_f_blk,4);
			item_xx(bipod_02_f_blk,4);
			item_xx(bipod_03_f_blk,4);
			item_xx(Optre_Recon_Sight,4);
			item_xx(Optre_Recon_Sight_Green,4);
			item_xx(Optre_Recon_Sight_Red,4);
			item_xx(OPTRE_M12_Laser,4);
		};
	};


	class 53rd_Ammo_SupplyPod_Explosives: 53rd_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="OPTRE";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Demo)";
		author="53rd aux";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "\53rd_Aux\Functions\Supply Pods\SupplyPod_uxo_co.paa"
        };
		class TransportMagazines
		{
			mag_xx(C7_Remote_Mag,8);
			mag_xx(c7_thrown_mag,8);
			mag_xx(C12_Remote_Mag,8);
			mag_xx(c12_thrown_mag,8);
			mag_xx(M168_Remote_Mag,8);
			mag_xx(OPTRE_M9_Frag,20);
			mag_xx(APERSMine_Range_Mag,8);
			mag_xx(UNSCMine_Range_Mag,8);
			mag_xx(DemoCharge_Remote_Mag,8);
			mag_xx(Titan_AT,10);
			mag_xx(53rd_M15_Single_Slight,10);
			mag_xx(53rd_M41_Twin_HEAT_Thermal,20);
			mag_xx(53rd_M41_Twin_HEAT_SACLOS,20);
			mag_xx(53rd_M41_Twin_HEAT,20);
			mag_xx(GRL45_6rnd_HE,15);
			mag_xx(GRL45_6rnd_HEDP,15);
			mag_xx(GRL45_6rnd_Smoke_White,15);
			mag_xx(GRL45_6rnd_Smoke_Orange,15);
			mag_xx(GRL45_6rnd_Smoke_Purple,15);
		};
		class TransportWeapons
		{
			weap_xx(53rd_GRL_45,3);
			weap_xx(53rd_UNSC_M41_SSR,5);
			weap_xx(53rd_M57_Pilum_b,10);
		};
		class TransportItems
		{
			item_xx(ACE_M26_Clacker,4);
		};
	};


	class 53rd_Ammo_SupplyPod_Equipment: 53rd_Ammo_SupplyPod_Empty
	{
		scope = 2;
       	scopeCurator = 2;
		dlc="53rd";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Equipment)";
		author="53rd aux";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "\53rd_Aux\Functions\Supply Pods\SupplyPod_equip_co.paa"
        };
		class TransportBackpacks
		{
			pack_xx(53rd_ANPRC_Heavy_515,4);
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			item_xx(OPTRE_Smartfinder,8);
			item_xx(VES_NVG_CNM,8);
			item_xx(tf_anprc152,8);
			item_xx(ACE_MapTools,8);
			item_xx(ACE_EntrenchingTool,8);
			item_xx(ToolKit,20);
			item_xx(ItemcTabHCam,8);
			item_xx(ACE_Fortify,8);
			item_xx(ACE_Flashlight_XL50,8);
			item_xx(ItemcTab,20);
			item_xx(ItemMap,20);
			item_xx(Laserbatteries,20);
			item_xx(ACE_M26_Clacker,20);
			item_xx(ACE_wirecutter,20);
			item_xx(B_UavTerminal,20);
		};
	};


    class 53rd_SupplyPod_Medical: 53rd_Ammo_SupplyPod_Empty
    {
		scope = 2;
       	scopeCurator = 2;
		editorCategory = "53rd_cat_faction";
        displayName = "[53rd] Supply Pod (Medical)";
		hiddenSelections[]=
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
        {
            "\53rd_Aux\Functions\Supply Pods\SupplyPod_medi_co.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_MedicLR_53rd,2);
		};
		class TransportItems
		{
            item_xx(ACE_PlasmaIV,20);
            item_xx(ACE_plasmaIV_500,20);
            item_xx(53rd_Copium,40);
            item_xx(ACE_Tourniquet,20);
            item_xx(ACE_splint,20);
            item_xx(53rd_r_biofoam,3);
            item_xx(53rd_r_medigel,3);
			item_xx(53rd_biofoam,50);
            item_xx(ACE_packingBandage,40);
            item_xx(ACE_elasticBandage,40);
            item_xx(ACE_epinephrine,10);
            item_xx(ACE_adenosine,10);
            item_xx(ACE_surgicalKit,2);
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
        ace_cargo_size = 1;
        ace_cargo_canLoad = 0;
        ace_cargo_noRename = 1;
    };


	class 53rd_Hardbox_3R: 53rd_Ammo_SupplyPod_Empty
	{
		editorCategory = "53rd_cat_faction";
		scope = 2;
       	scopeCurator = 2;
		scopeArsenal=2;
		author="53rd aux";
		displayName="[53rd] 3R Hardbox";
		model = "\OPTRE_Buildings\Containers\optre_milcrate_h2smallcrate_nuclear";
		maximumLoad=1500;
		class TransportBackpacks
		{
		};
		class TransportItems
		{
            item_xx(toolkit,3);
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		supplyRadius=2;
        ace_repair_canRepair = 1;
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 8;
        class ACE_Cargo
        {
            class Cargo
            {
                class ACE_Track
                {
                    type = "ACE_Track";
                    amount = 2;
                };
                class ACE_Wheel
                {
                    type = "ACE_Wheel";
                    amount = 4;
                };
            };
        };      
	};









    //Define the Pods
    class Module_F;
	
    class Module_OPTRE_PelicanSupplyDrop: Module_F
    {
        class Arguments
        {
            class box1
            {
                defaultValue = "rdm";
					class values
					{
						class n1
						{
							name = "none";
							value = "none";
						};
						class n2
						{
							name = "Random Supply Pod";
						};
						class n531
						{
							name = "BR/Marksman [53rd]";
							value = "53rd_Ammo_SupplyPod_Marksmen";
						};
						class n532
						{
							name = "AR/GL [53rd]";
							value = "53rd_Ammo_SupplyPod_Rifle";
						};
						class n533
						{
							name = "Heavy/AT [53rd]";
							value = "53rd_Ammo_SupplyPod_Heavy";
						};
						class n534
						{
							name = "CQB/SG-SMG [53rd]";
							value = "53rd_Ammo_SupplyPod_CQB";
						};
						class n535
						{
							name = "Mortor/Explosives [53rd]";
							value = "53rd_Ammo_SupplyPod_Explosives";
						};
						class n536
						{
							name = "Basic Equpment [53rd]";
							value = "53rd_Ammo_SupplyPod_Equipment";
						};
						class n537
						{
							name = "Medical [53rd]";
							value = "53rd_SupplyPod_Medical";
						};
						class n538
						{
							name = "Medical Hardbox [53rd]";
							value = "53rd_Hardbox_Medical";
						};
						class n539
						{
							name = "Squad Hardbox [53rd]";
							value = "53rd_Hardbox_Resupply";
						};
						class n540
						{
							name = "Platoon Resupply [53rd]";
							value = "53rd_Weapon_Resupply";
						};
						class n541
						{
							name = "3R Hardbox [53rd]";
							value = "53rd_Hardbox_3R";
						};
                };
            };
        };
    };

};



