class cfgPatches
{
  class MSR_Misriah_Armory
  {
    units[]={"MSR_Crewmen","MSR_Pilot","MSR_Auto_Riflemen","MSR_Riflemen","MSR_Medic","MSR_Sniper","MSR_Rifleman_AT","MSR_Executive_Officer","MSR_Breacher","MSR_Grenadier","MSR_Team_Leader","MSR_Marksmen","MSR_Crewmen_Tank","MSR_Rifleman_Big_AT","MSR_Company_worker","MSR_Company_worker_2","MSR_Company_worker_3","MSR_Hog_LAAG","MSR_Hog_TT","MSR_Stallion_Ammo","MSR_Stallion_Device","MSR_Stallion_TT","MSR_Stallion_TT_Coverd","MSR_Stallion_Fuel","MSR_MG_Puma","MSR_AT_Puma","MSR_Fennic_APC","MSR_Fennic_GMG","MSR_Fennic_HMG","MSR_Viper_AFV","MSR_Bushmaster_IFV","MSR_Basilisk_MBT","MSR_UH144GL_Falcon","MSR_HEMETT_FLat","MSR_RAH94_Raven","MSR_D77HTCI_Pelican"};
    weapons[]={"MSR_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_Flashlight","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","MSR_OPTRE_M73_optic_Aco","MSR_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg","MSR_OPTRE_SRM77_S1_acc_pointer_IROPTRE_SRM_Sightbipod_01_F_blk","MSR_OPTRE_Commando_acc_flashlightoptic_Aco","MSR_OPTRE_M41_SSR","MSR_OPTRE_M45TAC_OPTRE_M45_Flashlightoptic_Aco","MSR_OPTRE_MA5CGL","MSR_OPTRE_M295_BMR_Woodland_OPTRE_BR55HB_Scope","MSR_OPTRE_M48_PAW_optic_DMS"};
    requiredVersion=0.1;
    requiredAddons[]={};
  };
};

class cfgFactionClasses
{
  class MSR_Misriah_Armory
  {
    icon="";
    displayName="Misriah Armory";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class OPTRE_M7;
  class OPTRE_M6G;
  class OPTRE_M73;
  class OPTRE_Commando;
  class OPTRE_SRM77_S1;
  class OPTRE_M41_SSR;
  class OPTRE_M45TAC;
  class OPTRE_MA5CGL;
  class OPTRE_M295_BMR_Woodland;
  class OPTRE_M48_PAW;

  class MSR_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco: OPTRE_M7
  {
    displayName="M7X Caseless SMG";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_M7_silencer";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M7_Flashlight";
      };
    };
  };

  class MSR_OPTRE_M6G_OPTRE_M6G_Flashlight: OPTRE_M6G
  {
    displayName="M6GX Magnum";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M6G_Flashlight";
      };
    };
  };

  class MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope: OPTRE_M6G
  {
    displayName="M6GX Magnum";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M6G_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M6G_Flashlight";
      };
    };
  };

  class MSR_OPTRE_M73_optic_Aco: OPTRE_M73
  {
    displayName="M73X Light Machine Gun";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco";
      };
    };
  };

  class MSR_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg: OPTRE_Commando
  {
    displayName="VK78 Commando";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_ACO_grn_smg";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class MSR_OPTRE_SRM77_S1_acc_pointer_IROPTRE_SRM_Sightbipod_01_F_blk: OPTRE_SRM77_S1
  {
    displayName="SRM77 S1";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_SRM_Sight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };

    };
  };

  class MSR_OPTRE_Commando_acc_flashlightoptic_Aco: OPTRE_Commando
  {
    displayName="VK78 Commando";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class MSR_OPTRE_M41_SSR: OPTRE_M41_SSR
  {
    displayName="M41 SSR MAV/AW";
    scope=1;
    class LinkedItems
    {
    };
  };

  class MSR_OPTRE_M45TAC_OPTRE_M45_Flashlightoptic_Aco: OPTRE_M45TAC
  {
    displayName="M45 Combat Shotgun (Tactical)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M45_Flashlight";
      };
    };
  };

  class MSR_OPTRE_MA5CGL: OPTRE_MA5CGL
  {
    displayName="MA5CX + M301 GL Assault Rifle";
    scope=1;
    class LinkedItems
    {
    };
  };

  class MSR_OPTRE_M295_BMR_Woodland_OPTRE_BR55HB_Scope: OPTRE_M295_BMR_Woodland
  {
    displayName="M295 BMR (Woodland)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_BR55HB_Scope";
      };
    };
  };

  class MSR_OPTRE_M48_PAW_optic_DMS: OPTRE_M48_PAW
  {
    displayName="M48B 'Cricket' PAW";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_DMS";
      };
    };
  };

};

class cfgVehicles
{
  class I_crew_F;
  class I_pilot_F;
  class ACE_NonSteerableParachute;
  class I_Soldier_AAR_F;
  class OPTRE_UNSC_Rucksack_Heavy;
  class I_support_AMG_F;
  class B_AssaultPack_eaf_F;
  class I_medic_F;
  class OPTRE_UNSC_Rucksack_Medic;
  class I_Soldier_M_F;
  class B_AssaultPack_dgtl;
  class I_Soldier_AT_F;
  class I_officer_F;
  class I_soldier_F;
  class I_Soldier_GL_F;
  class I_Soldier_SL_F;
  class B_RadioBag_01_tropic_F;
  class I_engineer_F;
  class B_AssaultPack_blk;
  class OPTRE_M12_LRV;
  class OPTRE_M813_TT;
  class VES_HDV134_Resupply;
  class VES_HDV134_Fujikawa;
  class VES_HDV134_TT;
  class VES_HDV134_TT_C;
  class VES_HDV134_Tanker_C;
  class OPTRE_armed_puma_01;
  class OPTRE_AT_puma_01;
  class MSR_MRAP_APC;
  class MSR_MRAP_GMG;
  class MSR_MRAP_HMG;
  class 53rd_Viper_AFV;
  class Bushmaster_IFV;
  class Tusk_MSR_MBT;
  class OPTRE_Falconagl_01;
  class B_T_Truck_01_flatbed_F;
  class B_Heli_Attack_01_dynamicLoadout_F;
  class OPTRE_Pelican_unarmed;

  class MSR_Crewmen: I_crew_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Crewmen";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL_L";
    weapons[]={"MSR_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_Flashlight","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_Flashlight","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"SmokeShell","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","HandGrenade","HandGrenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow"};
    respawnMagazines[]={"SmokeShell","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","HandGrenade","HandGrenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_HelmetCrew_O_ghex_F","OPTRE_FC_M52B_Armor_Light"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_HelmetCrew_O_ghex_F","OPTRE_FC_M52B_Armor_Light"};
    backpack="";
  };

  class MSR_Pilot: I_pilot_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Pilot";
    uniformClass="U_I_pilotCoveralls";
    weapons[]={"MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"SmokeShell","SmokeShellGreen","Chemlight_green","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"SmokeShell","SmokeShellGreen","Chemlight_green","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetHeli_I","G_Shades_Blue"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetHeli_I","G_Shades_Blue"};
    backpack="MSR_Pilot_pack";
  };

  class MSR_Auto_Riflemen: I_Soldier_AAR_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Auto Riflemen";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL";
    weapons[]={"Rangefinder","MSR_OPTRE_M73_optic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_Flashlight","Put","Throw"};
    respawnWeapons[]={"Rangefinder","MSR_OPTRE_M73_optic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_Flashlight","Put","Throw"};
    items[]={"FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","OPTRE_Biofoam","OPTRE_Biofoam","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","optic_tws_mg","bipod_03_F_blk","muzzle_snds_H"};
    respawnItems[]={"FirstAidKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","OPTRE_Biofoam","OPTRE_Biofoam","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","optic_tws_mg","bipod_03_F_blk","muzzle_snds_H"};
    magazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","OPTRE_200Rnd_95x40_Box_Tracer_Yellow","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer_Yellow","OPTRE_200Rnd_95x40_Box_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_JHPT"};
    respawnMagazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","OPTRE_200Rnd_95x40_Box_Tracer_Yellow","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer_Yellow","OPTRE_200Rnd_95x40_Box_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_JHPT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Rangefinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Rifleman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Rangefinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Rifleman"};
    backpack="MSR_Auto_Riflemen_pack";
  };

  class MSR_Riflemen: I_support_AMG_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Riflemen";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL_L";
    weapons[]={"MSR_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    backpack="MSR_Riflemen_pack";
  };

  class MSR_Medic: I_medic_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Medic";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL_L";
    weapons[]={"MSR_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","Medikit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_surgicalKit","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV"};
    respawnItems[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","Medikit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_surgicalKit","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV"};
    magazines[]={"OPTRE_60Rnd_5x23mm_Mag_JHPT","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_60Rnd_5x23mm_Mag_JHPT","OPTRE_60Rnd_5x23mm_Mag_JHPT","OPTRE_60Rnd_5x23mm_Mag_JHPT","OPTRE_60Rnd_5x23mm_Mag_JHPT","OPTRE_60Rnd_5x23mm_Mag_JHPT"};
    respawnMagazines[]={"OPTRE_60Rnd_5x23mm_Mag_JHPT","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_60Rnd_5x23mm_Mag_JHPT","OPTRE_60Rnd_5x23mm_Mag_JHPT","OPTRE_60Rnd_5x23mm_Mag_JHPT","OPTRE_60Rnd_5x23mm_Mag_JHPT","OPTRE_60Rnd_5x23mm_Mag_JHPT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Medic","OPTRE_FC_M52B_Armor_Light","G_Bandanna_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Medic","OPTRE_FC_M52B_Armor_Light","G_Bandanna_khk"};
    backpack="MSR_Medic_pack";
  };

  class MSR_Sniper: I_Soldier_M_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Sniper";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL";
    weapons[]={"MSR_OPTRE_SRM77_S1_acc_pointer_IROPTRE_SRM_Sightbipod_01_F_blk","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_SRM77_S1_acc_pointer_IROPTRE_SRM_Sightbipod_01_F_blk","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    respawnMagazines[]={"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Sniper","G_Lowprofile"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Sniper","G_Lowprofile"};
    backpack="MSR_Sniper_pack";
  };

  class MSR_Rifleman_AT: I_Soldier_AT_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Rifleman AT";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL";
    weapons[]={"MSR_OPTRE_Commando_acc_flashlightoptic_Aco","MSR_OPTRE_M41_SSR","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_Commando_acc_flashlightoptic_Aco","MSR_OPTRE_M41_SSR","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT"};
    respawnMagazines[]={"SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_UL_CNM","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Rifleman","VES_NVG_UL_CNM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_UL_CNM","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Rifleman","VES_NVG_UL_CNM"};
    backpack="MSR_Rifleman_AT_pack";
  };

  class MSR_Executive_Officer: I_officer_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Executive Officer";
    uniformClass="U_C_FormalSuit_01_black_F";
    weapons[]={"MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_WirelessEarpiece_F","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_WirelessEarpiece_F","G_Aviator"};
    backpack="";
  };

  class MSR_Breacher: I_soldier_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Breacher";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL_L";
    weapons[]={"MSR_OPTRE_M45TAC_OPTRE_M45_Flashlightoptic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_M45TAC_OPTRE_M45_Flashlightoptic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Breacher"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Breacher"};
    backpack="MSR_Breacher_pack";
  };

  class MSR_Grenadier: I_Soldier_GL_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Grenadier";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL_L";
    weapons[]={"MSR_OPTRE_MA5CGL","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_MA5CGL","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell"};
    respawnMagazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    backpack="MSR_Grenadier_pack";
  };

  class MSR_Team_Leader: I_Soldier_SL_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Team Leader";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL_L";
    weapons[]={"MSR_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag"};
    respawnMagazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    backpack="MSR_Team_Leader_pack";
  };

  class MSR_Marksmen: I_Soldier_M_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Marksmen";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL";
    weapons[]={"MSR_OPTRE_M295_BMR_Woodland_OPTRE_BR55HB_Scope","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_M295_BMR_Woodland_OPTRE_BR55HB_Scope","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShell","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"SmokeShell","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Marksman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Marksman"};
    backpack="MSR_Marksmen_pack";
  };

  class MSR_Crewmen_Tank: I_crew_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Crewmen Tank";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL_L";
    weapons[]={"MSR_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_Flashlight","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","MSR_OPTRE_M6G_OPTRE_M6G_Flashlight","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"SmokeShell","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","HandGrenade","HandGrenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow"};
    respawnMagazines[]={"SmokeShell","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","HandGrenade","HandGrenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_HelmetCrew_O_ghex_F","OPTRE_FC_M52B_Armor_Light"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_HelmetCrew_O_ghex_F","OPTRE_FC_M52B_Armor_Light"};
    backpack="";
  };

  class MSR_Rifleman_Big_AT: I_Soldier_AT_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Rifleman Big AT";
    uniformClass="OPTRE_FC_Marines_Uniform_WDL";
    weapons[]={"MSR_OPTRE_Commando_acc_flashlightoptic_Aco","MSR_OPTRE_M48_PAW_optic_DMS","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"MSR_OPTRE_Commando_acc_flashlightoptic_Aco","MSR_OPTRE_M48_PAW_optic_DMS","MSR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_THERMO","OPTRE_1Rnd_50x137_THERMO"};
    respawnMagazines[]={"SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_8Rnd_127x40_Mag_JHPT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_THERMO","OPTRE_1Rnd_50x137_THERMO"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_UL_CNM","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Rifleman","VES_NVG_UL_CNM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_UL_CNM","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Rifleman","VES_NVG_UL_CNM"};
    backpack="MSR_Rifleman_Big_AT_pack";
  };

  class MSR_Company_worker: I_engineer_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Company worker";
    uniformClass="U_C_ConstructionCoverall_Black_F";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ToolKit","ACE_Fortify"};
    respawnItems[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ToolKit","ACE_Fortify"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_yellow_F","V_Safety_yellow_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_yellow_F","V_Safety_yellow_F"};
    backpack="MSR_Company_worker_pack";
  };

  class MSR_Company_worker_2: I_engineer_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Company worker 2";
    uniformClass="U_C_ConstructionCoverall_Black_F";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ToolKit","ACE_Fortify"};
    respawnItems[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ToolKit","ACE_Fortify"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_red_F","V_Safety_orange_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_red_F","V_Safety_orange_F"};
    backpack="MSR_Company_worker_2_pack";
  };

  class MSR_Company_worker_3: I_engineer_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Company worker 3";
    uniformClass="U_C_ConstructionCoverall_Black_F";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ToolKit","ACE_Fortify"};
    respawnItems[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ToolKit","ACE_Fortify"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_black_F","V_Safety_blue_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_black_F","V_Safety_blue_F"};
    backpack="MSR_Company_worker_3_pack";
  };

  class MSR_Hog_LAAG: OPTRE_M12_LRV
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Hog LAAG";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\m12hogmaav_extupper_co.paa","optre_vehicles\warthog\data\m12hogmaav_extunder_co.paa","optre_vehicles\warthog\data\turrets\m12_turret_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Hog_TT: OPTRE_M813_TT
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Hog TT";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\m12hogmaav_extupper_co.paa","optre_vehicles\warthog\data\m12hogmaav_extunder_co.paa","optre_vehicles\warthog\data\transp_lopo_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Stallion_Ammo: VES_HDV134_Resupply
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Stallion Ammo";
    hiddenSelectionsTextures[]={"v_fz_vehicles\data\buffalo\v_hdv134_od3_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_a_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_s_co.paa","a3\structures_f\data\metal\containers\containers_02_set_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Stallion_Device: VES_HDV134_Fujikawa
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Stallion Device";
    hiddenSelectionsTextures[]={"v_fz_vehicles\data\buffalo\v_hdv134_od3_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_a_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_s_co.paa","a3\structures_f_epc\items\electronics\data\the_device_02_co.paa","a3\structures_f_epc\items\electronics\data\the_device_03_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Stallion_TT: VES_HDV134_TT
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Stallion TT";
    hiddenSelectionsTextures[]={"v_fz_vehicles\data\buffalo\v_hdv134_od3_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_a_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_s_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Stallion_TT_Coverd: VES_HDV134_TT_C
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Stallion TT Coverd";
    hiddenSelectionsTextures[]={"v_fz_vehicles\data\buffalo\v_hdv134_od3_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_a_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_s_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_c_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Stallion_Fuel: VES_HDV134_Tanker_C
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Stallion Fuel";
    hiddenSelectionsTextures[]={"v_fz_vehicles\data\buffalo\v_hdv134_od3_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_a_co.paa","v_fz_vehicles\data\buffalo\v_hdv134_od3_f_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_MG_Puma: OPTRE_armed_puma_01
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="MG Puma";
    hiddenSelectionsTextures[]={"optre_plus\data\puma\puma_01.paa","optre_plus\data\puma\csat_lsv_02_ghex_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_AT_Puma: OPTRE_AT_puma_01
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="AT Puma";
    hiddenSelectionsTextures[]={"optre_plus\data\puma\puma_01.paa","optre_plus\data\puma\csat_lsv_02_ghex_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Fennic_APC: MSR_MRAP_APC
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Fennic APC";
    hiddenSelectionsTextures[]={"53rd_sc_aux\vehicles\fennic\mrap_03_ext_co.paa","53rd_sc_aux\vehicles\fennic\turret_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Fennic_GMG: MSR_MRAP_GMG
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Fennic GMG";
    hiddenSelectionsTextures[]={"53rd_sc_aux\vehicles\fennic\mrap_03_ext_co.paa","53rd_sc_aux\vehicles\fennic\turret_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Fennic_HMG: MSR_MRAP_HMG
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Fennic HMG";
    hiddenSelectionsTextures[]={"53rd_sc_aux\vehicles\fennic\mrap_03_ext_co.paa","53rd_sc_aux\vehicles\fennic\turret_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Viper_AFV: 53rd_Viper_AFV
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Viper AFV";
    hiddenSelectionsTextures[]={"53rd_sc_aux\vehicles\viper ifv\apc_msr_co.paa","53rd_sc_aux\vehicles\viper ifv\apc_wheeled_msr_ext2_co.paa","53rd_sc_aux\vehicles\viper ifv\rcws30_msr_co.paa","53rd_sc_aux\vehicles\viper ifv\apc_wheeled_msr_ext_alpha_co.paa","a3\armor_f\data\camonet_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_Bushmaster_IFV: Bushmaster_IFV
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Bushmaster IFV";
    hiddenSelectionsTextures[]={"53rd_sc_aux\vehicles\bushmaster ifv\warrior_ext_01_wd.paa","53rd_sc_aux\vehicles\bushmaster ifv\warrior_ext_02_wd.paa","a3\armor_f\data\camonet_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
    crew="MSR_Crewmen";
    typicalCargo[]={"MSR_Crewmen"};
  };

  class MSR_Basilisk_MBT: Tusk_MSR_MBT
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="Basilisk MBT";
    hiddenSelectionsTextures[]={"53rd_sc_aux\vehicles\tusk\53rd_tusk_body_texture_msr.paa","53rd_sc_aux\vehicles\tusk\53rd_tusk_turret_texture_msr.paa","53rd_sc_aux\vehicles\tusk\53rd_tusk_turret_mg_texture_msr.paa","a3\armor_f\data\camonet_green_co.paa"};
    crew="MSR_Crewmen";
    typicalCargo[]={"MSR_Crewmen"};
  };

  class MSR_UH144GL_Falcon: OPTRE_Falconagl_01
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="UH144GL Falcon";
    hiddenSelectionsTextures[]={"optre_vehicles\falcon\data\falcon_hull_co.paa","optre_vehicles\falcon\data\falcon_hullextra_co.paa","optre_vehicles\falcon\data\falcon_wingtips_co.paa","optre_vehicles\falcon\data\falcon_skid_co.paa","","",""};
    crew="MSR_Pilot";
    typicalCargo[]={"MSR_Pilot"};
  };

  class MSR_HEMETT_FLat: B_T_Truck_01_flatbed_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="HEMETT FLat";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa","a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa","a3\soft_f_enoch\truck_01\data\truck_01_ammo_pacific_co.paa","a3\soft_f_enoch\truck_01\data\truck_01_cargo_pacific_co.paa"};
    crew="MSR_Riflemen";
    typicalCargo[]={"MSR_Riflemen"};
  };

  class MSR_RAH94_Raven: B_Heli_Attack_01_dynamicLoadout_F
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="RAH94 Raven";
    hiddenSelectionsTextures[]={"a3\air_f_beta\heli_attack_01\data\heli_attack_01_co.paa"};
    crew="MSR_Pilot";
    typicalCargo[]={"MSR_Pilot"};
  };

  class MSR_D77HTCI_Pelican: OPTRE_Pelican_unarmed
  {
    faction="MSR_Misriah_Armory";
    side=2;
    displayName="D77HTCI Pelican";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\pelicanexterior_green_co.paa","","","","",""};
    crew="MSR_Pilot";
    typicalCargo[]={"MSR_Pilot"};
  };


  class MSR_Pilot_pack: ACE_NonSteerableParachute
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class MSR_Auto_Riflemen_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
	scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_200Rnd_65x39_cased_Box {count=3;magazine="200Rnd_65x39_cased_Box";};
     class _xx_200Rnd_65x39_cased_Box_Tracer {count=1;magazine="200Rnd_65x39_cased_Box_Tracer";};
     class _xx_OPTRE_200Rnd_95x40_Box_Tracer_Yellow {count=2;magazine="OPTRE_200Rnd_95x40_Box_Tracer_Yellow";};
     class _xx_OPTRE_8Rnd_127x40_Mag_JHPT {count=1;magazine="OPTRE_8Rnd_127x40_Mag_JHPT";};
    };
    class TransportItems
    {
     class _xx_optic_tws_mg {count=1;name="optic_tws_mg";};
     class _xx_bipod_03_F_blk {count=1;name="bipod_03_F_blk";};
     class _xx_muzzle_snds_H {count=1;name="muzzle_snds_H";};
    };
    class TransportWeapons{};
  };


  class MSR_Riflemen_pack: B_AssaultPack_eaf_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Commando_20Rnd_65_ReloadY_Mag {count=8;magazine="Commando_20Rnd_65_ReloadY_Mag";};
     class _xx_OPTRE_M9_Frag {count=3;magazine="OPTRE_M9_Frag";};
     class _xx_OPTRE_8Rnd_127x40_Mag_Tracer {count=5;magazine="OPTRE_8Rnd_127x40_Mag_Tracer";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class MSR_Medic_pack: OPTRE_UNSC_Rucksack_Medic
  {
	scope=1;
	scopeArsenal=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_OPTRE_Biofoam {count=20;name="OPTRE_Biofoam";};
     class _xx_ACE_splint {count=10;name="ACE_splint";};
     class _xx_ACE_tourniquet {count=10;name="ACE_tourniquet";};
     class _xx_ACE_surgicalKit {count=2;name="ACE_surgicalKit";};
     class _xx_ACE_elasticBandage {count=20;name="ACE_elasticBandage";};
     class _xx_ACE_packingBandage {count=20;name="ACE_packingBandage";};
     class _xx_ACE_bloodIV {count=6;name="ACE_bloodIV";};
    };
    class TransportWeapons{};
  };


  class MSR_Sniper_pack: B_AssaultPack_dgtl
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_10Rnd_127x99 {count=10;magazine="OPTRE_10Rnd_127x99";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class MSR_Rifleman_AT_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
	scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M41_Twin_HEAT {count=5;magazine="OPTRE_M41_Twin_HEAT";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class MSR_Breacher_pack: B_AssaultPack_eaf_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M9_Frag {count=3;magazine="OPTRE_M9_Frag";};
     class _xx_OPTRE_6Rnd_8Gauge_Pellets {count=10;magazine="OPTRE_6Rnd_8Gauge_Pellets";};
     class _xx_OPTRE_8Rnd_127x40_Mag_Tracer {count=3;magazine="OPTRE_8Rnd_127x40_Mag_Tracer";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class MSR_Grenadier_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
	scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M9_Frag {count=3;magazine="OPTRE_M9_Frag";};
     class _xx_3Rnd_HE_Grenade_shell {count=20;magazine="3Rnd_HE_Grenade_shell";};
     class _xx_3Rnd_Smoke_Grenade_shell {count=10;magazine="3Rnd_Smoke_Grenade_shell";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class MSR_Team_Leader_pack: B_RadioBag_01_tropic_F
  {
    scope=1;
	scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_Commando_20Rnd_65_ReloadY_Mag {count=6;magazine="Commando_20Rnd_65_ReloadY_Mag";};
     class _xx_OPTRE_M9_Frag {count=1;magazine="OPTRE_M9_Frag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class MSR_Marksmen_pack: B_AssaultPack_eaf_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M9_Frag {count=3;magazine="OPTRE_M9_Frag";};
     class _xx_OPTRE_25Rnd_762x51_Mag_Tracer_Yellow {count=8;magazine="OPTRE_25Rnd_762x51_Mag_Tracer_Yellow";};
     class _xx_OPTRE_8Rnd_127x40_Mag_Tracer {count=4;magazine="OPTRE_8Rnd_127x40_Mag_Tracer";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class MSR_Rifleman_Big_AT_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
	scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_OPTRE_1Rnd_50x137_HEAT {count=8;magazine="OPTRE_1Rnd_50x137_HEAT";};
     class _xx_OPTRE_1Rnd_50x137_THERMO {count=2;magazine="OPTRE_1Rnd_50x137_THERMO";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class MSR_Company_worker_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_ACE_Fortify {count=1;name="ACE_Fortify";};
    };
    class TransportWeapons{};
  };


  class MSR_Company_worker_2_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_ACE_Fortify {count=1;name="ACE_Fortify";};
    };
    class TransportWeapons{};
  };


  class MSR_Company_worker_3_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_ACE_Fortify {count=1;name="ACE_Fortify";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
