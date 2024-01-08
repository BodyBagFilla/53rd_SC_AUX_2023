/// https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide ///
/// Equipment list macros definition ///

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgPatches {
	class 53rd_equwupment {
		units[] = 
        {
			"53rd_CopiumItem",
			"53rd_Hardbox_Medical",
			"53rd_Hardbox_Resupply",
			"53rd_SupplyPod_Medical",
            "Item_53rd_anprc152l",
        };
		weapons[] = 
        {
			"53rd_Copium",
			"53rd_r_biofoam",
			"53rd_r_medigel",
            "53rd_anprc152l",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {"task_force_radio_items","ace_interaction"};
	};
};

class ace_medical_treatment
{
    class Bandaging
    {
        class OPTRE_Biofoam;
        class OPTRE_Medigel;
        class r_biofoam: OPTRE_Biofoam {};
        class r_medigel: OPTRE_Medigel {};
        class nr_biofoam: OPTRE_Biofoam {};
        class nr_medigel: OPTRE_Medigel {};
    };
    class Medication
    {
		class Copium
		{
			hrIncreaseLow[]={0,5};
			hrIncreaseNormal[]={5,10};
			hrIncreaseHigh[]={5,15};
			painReduce=0.80000001;
			timeInSystem=180;
			timeTillMaxEffect=0.1;
			maxDose=10;
		};
    }; 
};

class ace_medical_treatment_actions
{
    class Morphine;
    class OPTRE_Biofoam;
    class OPTRE_Medigel;
	class Copium: Morphine
	{
		displayName="Copium";
		ACE_isMedicalItem=1;
		displayNameProgress="My Man Just Needs to Cope tbh...";
		condition="ace_medical_treatment_advancedMedication";
		allowedSelections[]=
		{
			"All"
		};
		items[]=
		{
			"53rd_Copium"
		};
		litter[]=
		{
			
			{
				"53rd_CopiumLitter"
			};
		};
	};
	class r_biofoam: OPTRE_Biofoam
	{
		displayName="[R] Biofoam";
		consumeItem=0;
		medicRequired="ace_medical_treatment_medicIV";
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction3";
		items[]=
		{
			"53rd_r_biofoam"
		};
	};
	class r_medigel: OPTRE_Medigel
	{
		displayName="[R] Medigel";
		consumeItem=0;
		medicRequired="ace_medical_treatment_medicIV";
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction3";
		items[]=
		{
			"53rd_r_medigel"
		};
	};
	class nr_biofoam: OPTRE_Biofoam
	{
		displayName="Biofoam";
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction2";
		items[]=
		{
			"53rd_biofoam"
		};
	};
	class nr_medigel: OPTRE_Medigel
	{
		displayName="Medigel";
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction2";
		items[]=
		{
			"53rd_medigel"
		};
	};
    
};

class cfgModels
{
    class cope
    {
        sectionsInherit="";
        sections[]={"camo"};
        skeletonName="";
    };
    class Unused_Cope
    {
        sectionsInherit="";
        sections[]={"camo"};
        skeletonName="";
    };
};


class cfgAmmo
{
    class GrenadeHand;
	class c12_thrown_ammo: GrenadeHand
	{
		hit=5500;
		indirectHit=3500;
		indirectHitRange=8;
		dangerRadiusHit=60;
		suppressionRadiusHit=24;
		typicalspeed=18;
		model="\OPTRE_Weapons\charges\c12.p3d";
		picture="\OPTRE_weapons\charges\icons\c12.paa";
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
		simulation="shotNVGMarker";
		visibleFire=0.5;
		audibleFire=0.050000001;
		visibleFireTime=1;
		fuseDistance=0;
		timeToLive=11;
	};
	class c7_thrown_ammo: GrenadeHand
	{
		hit=2500;
		indirectHit=2500;
		indirectHitRange=0.5;
		dangerRadiusHit=60;
		suppressionRadiusHit=24;
		typicalspeed=18;
		model="\OPTRE_Weapons\charges\C7Can.p3d";
		picture="\OPTRE_weapons\charges\icons\c7.paa";
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
		simulation="shotNVGMarker";
		visibleFire=0.5;
		audibleFire=0.050000001;
		visibleFireTime=1;
		fuseDistance=0;
		timeToLive=11;
	};
};

class CfgMagazines
{
    class HandGrenade;
	class c12_thrown_mag: HandGrenade
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=90;
		scope=2;
		value=1;
		displayName="Throwable C12";
		model="\OPTRE_Weapons\charges\c12.p3d";
		picture="\OPTRE_weapons\charges\icons\c12.paa";
		type=256;
		ammo="c12_thrown_ammo";
		count=1;
		initSpeed=18;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		maxLeadSpeed=7;
		descriptionShort="Throwable C12";
		displayNameShort="Throwable C12";
	};
	class c7_thrown_mag: HandGrenade
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=40;
		scope=2;
		value=1;
		displayName="Throwable C7";
		model="\OPTRE_Weapons\charges\C7Can.p3d";
		picture="\OPTRE_weapons\charges\icons\c7.paa";
		type=256;
		ammo="c7_thrown_ammo";
		count=1;
		initSpeed=18;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		maxLeadSpeed=7;
		descriptionShort="Throwable C7";
		displayNameShort="Throwable C7";
	};
};

class cfgWeapons 
{
    //alright here we go
	class GrenadeLauncher;
	class Throw : GrenadeLauncher 
	{
		muzzles[] += {"c12_throwable","c7_throwable"};
		class ThrowMuzzle: GrenadeLauncher{};
		class c12_throwable: ThrowMuzzle
		{
			magazines[] = {"c12_thrown_mag"};
		};
		class c7_throwable: ThrowMuzzle
		{
			magazines[] = {"c7_thrown_mag"};
		};
	};
    
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;

    //medical
    class OPTRE_Medigel;
    class OPTRE_Biofoam;
	class 53rd_Copium: ACE_ItemCore
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd] Copium";
		picture="\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model="\53rd_SC_aux\Equwupment\Unused_Cope";
        hiddenSelections[]={"camo"};
		ACE_isMedicalItem=1;
        hiddenSelectionsTextures[]={"\53rd_SC_aux\Equwupment\Copium_CO.paa"};
		descriptionShort="Desc_Short";
		descriptionUse="Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class 53rd_r_biofoam: OPTRE_Biofoam
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd](R) Biofoam";
	};
	class 53rd_r_medigel: OPTRE_Medigel
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd](R) Medigel";
	};
	class 53rd_biofoam: OPTRE_Biofoam
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd] Biofoam";
	};
	class 53rd_medigel: OPTRE_Medigel
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd] Medigel";
	};
    /*
	class tf_anprc152;
    class 53rd_anprc152l: tf_anprc152
    {
        author = "Raspu & Fixer";
        displayName = "[53rd] AN/PRC-152 w/ Link";
        descriptionShort = "AN/PRC-152 with Link to LR Pack";
        tf_range=120000;
    };
    TF_RADIO_IDS(53rd_anprc152l,[53rd] AN/PRC-152 w/ Link)
    */
};


class CfgVehicles
{
    //medical
    class Item_Base_F;
    class ACE_MedicalLitterBase;
	class 53rd_CopiumItem: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="[53rd] Copium";
		author="53rd Aux";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_53rd_Copium
			{
				name="53rd_Copium";
				count=1;
			};
		};
	};
	class 53rd_CopiumLitter: ACE_MedicalLitterBase
	{
		model="\53rd_SC_aux\Equwupment\cope";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\53rd_SC_aux\Equwupment\Copium_CO.paa"};
	};
    /*
    //Radios
    #include "\53rd_SC_aux\Equwupment\radio_ids.hpp"
    class Item_tf_anprc152;
    class Item_53rd_anprc152l: Item_tf_anprc152
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[53rd] AN/PRC-152 w/ Link";
        author = "Nkey";
        vehicleClass = "Items";
        class TransportItems
        {
            class 53rd_anprc152l
            {
                name="53rd_anprc152l";
                count=1;
            };
        };
    };
    */
    //Cargo Boxes
    class Box_NATO_Support_F;
	class 53rd_Hardbox_Medical: Box_NATO_Support_F
	{
		editorCategory = "53rd_cat_faction";
		scope = 2;
       	scopeCurator = 2;
		scopeArsenal=2;
		author="53rd aux";
		displayName="[53rd] Medical Hardbox";
		model="\OPTRE_Buildings\Containers\optre_milcrate_h2smallcrate_medic";
		maximumLoad=1500;
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
            item_xx(ACE_packingBandage,50);
            item_xx(ACE_elasticBandage,50);
            item_xx(ACE_epinephrine,10);
            item_xx(ACE_adenosine,10);
            item_xx(ACE_surgicalKit,2);
			item_xx(kat_IV_16,30);
			item_xx(kat_AWD,3);
			item_xx(kat_EACA,50);
			item_xx(kat_IO_FAST,40);
			item_xx(kat_naloxone,40);
			item_xx(kat_norepinephrine,10);
			item_xx(kat_TXA,10);
			item_xx(Laserbatteries,2);
			item_xx(kat_X_AED,2);
			item_xx(kat_lorazepam,10);
			item_xx(kat_phenylephrine,2);
			item_xx(SmokeShellPurple,2);
			item_xx(tf_anprc152,8);
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
	};
	class 53rd_Hardbox_Resupply: Box_NATO_Support_F
	{
		editorCategory = "53rd_cat_faction";
		scope = 2;
       	scopeCurator = 2;
		scopeArsenal=2;
		author="53rd aux";
		displayName="[53rd] Squad Hardbox";
		model = "\OPTRE_Buildings\Containers\optre_milcrate_h2smallcrate";
		maximumLoad=1500;
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
			item_xx(optre_m7_sight,10);
			item_xx(optre_br55hb_scope,10);
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
			mag_xx(TCF_60Rnd_5x23mm_Mag_JHP,30);
			mag_xx(OPTRE_64Rnd_57x31_Mag,20);
			mag_xx(TCF_36Rnd_95x40_Mag_JHP,50);
			mag_xx(TCF_20Rnd_86x70_Mag_JHP,20);
			mag_xx(OPTRE_12Rnd_8Gauge_Pellets,10);
			mag_xx(TCF_200Rnd_95x40_Box_JHPT,20);
			mag_xx(OPTRE_400Rnd_762x51_Box_Tracer,10);
			mag_xx(TCF_60Rnd_762x51_Mag_JHP,50);
			mag_xx(Commando_20Rnd_65_Mag,50);
		};
		class TransportWeapons
		{
		};
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
	};
	class 53rd_Weapon_Resupply: Box_NATO_Support_F
	{
		editorCategory = "53rd_cat_faction";
		scope = 2;
       	scopeCurator = 2;
		scopeArsenal=2;
		author="53rd aux";
		displayName="[53rd] Platoon Resupply";
		model="\OPTRE_Buildings\Containers\optre_weaponcase_closed";
		maximumLoad=1500;
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
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
			item_xx(optre_srs99c_scope,2);
			item_xx(optre_m7_sight,10);
			item_xx(optre_br55hb_scope,10);
			item_xx(optre_m73_smartlink,5);
			item_xx(acc_flashlight,20);
			item_xx(optre_m6_silencer,10);
			item_xx(optre_ma5suppressor,10);
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
			mag_xx(DemoCharge_Remote_Mag,8)
			mag_xx(TCF_60Rnd_5x23mm_Mag_JHP,30);
			mag_xx(OPTRE_64Rnd_57x31_Mag,20);
			mag_xx(OPTRE_12Rnd_8Gauge_Pellets,10);
			mag_xx(OPTRE_12Rnd_8Gauge_Slugs,10);
			mag_xx(TCF_6Rnd_8Gauge_Pellet,10);
			mag_xx(TCF_6Rnd_8Gauge_Slug,10);
			mag_xx(OPTRE_200Rnd_95x40_Box_Tracer,20);
			mag_xx(TCF_200Rnd_95x40_Box_JHP,20);
			mag_xx(OPTRE_400Rnd_762x51_Box_Tracer,10);
			mag_xx(TCF_1Rnd_50x137_HEAT,10);
			mag_xx(TCF_1Rnd_50x137_PEN,10);
			mag_xx(TCF_1Rnd_50x137_HE,10);
			mag_xx(OPTRE_M41_Twin_HEAT_Thermal,10);
			mag_xx(MRAWS_HEAT_F,10);
			mag_xx(OPTRE_FC_Railgun_Slug,40);
			mag_xx(OPTRE_60RND_762x51_Mag,50);
			mag_xx(TCF_60RND_762x51_Mag_JHPT,50);
			mag_xx(OPTRE_60RND_762x51_Mag_Tracer_Yellow,50);
			mag_xx(OPTRE_60RND_762x51_Mag_Tracer,50);
			mag_xx(Commando_20Rnd_65_Mag,50);
			mag_xx(Commando_20Rnd_65_ReloadR_Mag,50);
			mag_xx(3Rnd_Smoke_Grenade_shell,20);
			mag_xx(3Rnd_SmokeRed_Grenade_shell,20);
			mag_xx(3Rnd_HE_Grenade_shell,20);
			mag_xx(1Rnd_HE_Grenade_shell,20);
			mag_xx(OPTRE_1Rnd_Smoke_Grenade_shell,20);
			mag_xx(OPTRE_1Rnd_SmokePurple_Grenade_shell,20);
			mag_xx(OPTRE_1Rnd_SmokeRed_Grenade_shell,20);
			mag_xx(OPTRE_1Rnd_SmokeGreen_Grenade_shell,20);
			mag_xx(OPTRE_36Rnd_95x40_Mag,50);
			mag_xx(TCF_36Rnd_95x40_Mag_JHP,50);
			mag_xx(TCF_20Rnd_86x70_Mag_AP,20);
			mag_xx(TCF_20Rnd_86x70_Mag_JHP,20);
			mag_xx(TCF_15Rnd_762x51_Mag_JHP,20);
			mag_xx(TCF_15Rnd_762x51_Mag_AP,20);
			mag_xx(OPTRE_4Rnd_145x114_APFSDS_Mag,12);
			mag_xx(OPTRE_4Rnd_145x114_HEDP_Mag,4);
		};
		class TransportWeapons
		{
			weap_xx(OPTRE_M7,5);
			weap_xx(OPTRE_M90A,4);
			weap_xx(OPTRE_M45TAC,4);
			weap_xx(OPTRE_M12_SOC,4);
			weap_xx(OPTRE_M41_SSR,2);
			weap_xx(OPTRE_M73,4);
			weap_xx(53rd_NLAW,2);
			weap_xx(launch_MRAWS_green_rail_F,2);
			weap_xx(53rd_MA32,5);
			weap_xx(53rd_MA32GL,5);
			weap_xx(53rd_MA37,5);
			weap_xx(53rd_MA37GL,5);
			weap_xx(OPTRE_Commando,5);
			weap_xx(OPTRE_BR45,5);
			weap_xx(OPTRE_BR55,10);
			weap_xx(TCF_M14,2);
			weap_xx(TCF_CR77,2);
			weap_xx(OPTRE_M393_DMR,2);
			weap_xx(OPTRE_SRS99C,2);
		};
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
	};
};