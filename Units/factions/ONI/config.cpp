class cfgPatches
{
  class 53rd_ONI
  {
    units[]={"53rd_Rifleman","53rd_Rifleman_Light","53rd_Marksman","53rd_Medic","53rd_Sniper","53rd_Rifleman_AT","53rd_Crewman"};
    weapons[]={"53rd_Dmns_M33_T","53rd_OPTRE_M6C","53rd_OPTRE_M7S_OPTRE_M7_silencerOPTRE_M7_LaserOPTRE_M7_Sight","53rd_OPTRE_M6G_SF","53rd_OPTRE_M295_BMR_OPTRE_M6_silencerOPTRE_BMR_LaserOPTRE_BR55HB_Scope","53rd_OPTRE_SRM77_S2_OPTRE_MA37KSuppressorACE_acc_pointer_greenOPTRE_SRS99_Scopebipod_01_F_blk","53rd_ACE_DMNS_M96_LAW_ready_F"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F","ace_parachute","Dmns_Weapons_F_MachineGuns","OPTRE_Weapons_Pistol","A3_Characters_F","OPTRE_Weapons_Items","OPTRE_Weapons_SMG","MSR_Misriah_Armory","OPTRE_Weapons_SRM77"};
  };
};


class cfgWeapons
{
  class Dmns_M33_T;
  class OPTRE_M6C;
  class OPTRE_M7S;
  class OPTRE_M6G_SF;
  class OPTRE_M295_BMR;
  class OPTRE_SRM77_S2;
  class ACE_DMNS_M96_LAW_ready_F;

  class 53rd_Dmns_M33_T: Dmns_M33_T
  {
    displayName="M33-T (SAW)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_OPTRE_M6C: OPTRE_M6C
  {
    displayName="M6C/SOCOM Magnum";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_OPTRE_M7S_OPTRE_M7_silencerOPTRE_M7_LaserOPTRE_M7_Sight: OPTRE_M7S
  {
    displayName="M7 Caseless SMG";
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
        item="OPTRE_M7_Sight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M7_Laser";
      };
    };
  };

  class 53rd_OPTRE_M6G_SF: OPTRE_M6G_SF
  {
    displayName="M6G Magnum";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_OPTRE_M295_BMR_OPTRE_M6_silencerOPTRE_BMR_LaserOPTRE_BR55HB_Scope: OPTRE_M295_BMR
  {
    displayName="M295 BMR";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_M6_silencer";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_BR55HB_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_BMR_Laser";
      };
    };
  };

  class 53rd_OPTRE_SRM77_S2_OPTRE_MA37KSuppressorACE_acc_pointer_greenOPTRE_SRS99_Scopebipod_01_F_blk: OPTRE_SRM77_S2
  {
    displayName="SRM77 S2";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_MA37KSuppressor";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_SRS99_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="ACE_acc_pointer_green";
      };

    };
  };

  class 53rd_ACE_DMNS_M96_LAW_ready_F: ACE_DMNS_M96_LAW_ready_F
  {
    displayName="M96 LAW - Mk VI";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class I_soldier_F;
  class I_Soldier_lite_F;
  class I_Soldier_M_F;
  class I_medic_F;
  class 53rd_Hephaestus_Medical_Satchel;
  class I_Soldier_LAT_F;
  class OPTRE_ILCS_Rucksack_Black;

  class ONI_Rifleman: I_soldier_F
  {
    faction="53rd_ONI";
    side=2;
    displayName="Rifleman";
    uniformClass="MA_M56S_BDU";
    weapons[]={"53rd_Dmns_M33_T","53rd_OPTRE_M6C","Put","Throw"};
    respawnWeapons[]={"53rd_Dmns_M33_T","53rd_OPTRE_M6C","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","VES_NVG_Collar_VAC","ONI_Recon_Helmet","ONI_Base_Armor","G_Tactical_Black","VES_NVG_Collar_VAC"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","VES_NVG_Collar_VAC","ONI_Recon_Helmet","ONI_Base_Armor","G_Tactical_Black","VES_NVG_Collar_VAC"};
    backpack="";
  };

  class ONI_Rifleman_Light: I_Soldier_lite_F
  {
    faction="53rd_ONI";
    side=2;
    displayName="Rifleman Light";
    uniformClass="MA_M56S_BDU";
    weapons[]={"53rd_OPTRE_M7S_OPTRE_M7_silencerOPTRE_M7_LaserOPTRE_M7_Sight","53rd_OPTRE_M6G_SF","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_M7S_OPTRE_M7_silencerOPTRE_M7_LaserOPTRE_M7_Sight","53rd_OPTRE_M6G_SF","Put","Throw"};
    items[]={"OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam"};
    magazines[]={"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","OPTRE_NVG","ONI_Seal_Helmet","ONI_Base_Armor","OPTRE_G_Balaclava_TI_blk_F","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","OPTRE_NVG","ONI_Seal_Helmet","ONI_Base_Armor","OPTRE_G_Balaclava_TI_blk_F","OPTRE_NVG"};
    backpack="";
  };

  class ONI_Marksman: I_Soldier_M_F
  {
    faction="53rd_ONI";
    side=2;
    displayName="Marksman";
    uniformClass="MA_M56S_BDU";
    weapons[]={"53rd_OPTRE_M295_BMR_OPTRE_M6_silencerOPTRE_BMR_LaserOPTRE_BR55HB_Scope","53rd_OPTRE_M6G_SF","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_M295_BMR_OPTRE_M6_silencerOPTRE_BMR_LaserOPTRE_BR55HB_Scope","53rd_OPTRE_M6G_SF","Put","Throw"};
    items[]={"OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam"};
    magazines[]={"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow"};
    respawnMagazines[]={"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","OPTRE_NVG","ONI_Seal_Helmet","ONI_Base_Armor","OPTRE_G_Balaclava_TI_blk_F","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","OPTRE_NVG","ONI_Seal_Helmet","ONI_Base_Armor","OPTRE_G_Balaclava_TI_blk_F","OPTRE_NVG"};
    backpack="";
  };

  class ONI_Medic: I_medic_F
  {
    faction="53rd_ONI";
    side=2;
    displayName="Medic";
    uniformClass="MA_M56S_BDU";
    weapons[]={"53rd_Dmns_M33_T","53rd_OPTRE_M6C","Put","Throw"};
    respawnWeapons[]={"53rd_Dmns_M33_T","53rd_OPTRE_M6C","Put","Throw"};
    items[]={"53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam"};
    respawnItems[]={"53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam","53rd_biofoam"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","VES_NVG_Collar_VAC","ONI_Recon_Helmet","ONI_Base_Armor","G_Tactical_Black","VES_NVG_Collar_VAC"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","VES_NVG_Collar_VAC","ONI_Recon_Helmet","ONI_Base_Armor","G_Tactical_Black","VES_NVG_Collar_VAC"};
    backpack="53rd_Medic_pack";
  };

  class ONI_Sniper: I_Soldier_M_F
  {
    faction="53rd_ONI";
    side=2;
    displayName="Sniper";
    uniformClass="MA_M56S_BDU";
    weapons[]={"53rd_OPTRE_SRM77_S2_OPTRE_MA37KSuppressorACE_acc_pointer_greenOPTRE_SRS99_Scopebipod_01_F_blk","53rd_OPTRE_M6G_SF","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_SRM77_S2_OPTRE_MA37KSuppressorACE_acc_pointer_greenOPTRE_SRS99_Scopebipod_01_F_blk","53rd_OPTRE_M6G_SF","Put","Throw"};
    items[]={"OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","OPTRE_NVG","ONI_Recon_Helmet","ONI_Base_Armor","OPTRE_G_Balaclava_TI_blk_F","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","OPTRE_NVG","ONI_Recon_Helmet","ONI_Base_Armor","OPTRE_G_Balaclava_TI_blk_F","OPTRE_NVG"};
    backpack="";
  };

  class ONI_Rifleman_AT: I_Soldier_LAT_F
  {
    faction="53rd_ONI";
    side=2;
    displayName="Rifleman AT";
    uniformClass="MA_M56S_BDU";
    weapons[]={"53rd_Dmns_M33_T","53rd_ACE_DMNS_M96_LAW_ready_F","53rd_OPTRE_M6C","Put","Throw"};
    respawnWeapons[]={"53rd_Dmns_M33_T","53rd_ACE_DMNS_M96_LAW_ready_F","53rd_OPTRE_M6C","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","VES_NVG_Collar_VAC","ONI_Seal_Helmet","ONI_Base_Armor","G_Tactical_Black","VES_NVG_Collar_VAC"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","VES_NVG_Collar_VAC","ONI_Seal_Helmet","ONI_Base_Armor","G_Tactical_Black","VES_NVG_Collar_VAC"};
    backpack="53rd_Rifleman_AT_pack";
  };

  class ONI_Crewman: I_Soldier_lite_F
  {
    faction="53rd_ONI";
    side=2;
    displayName="Crewman";
    uniformClass="MA_M56S_BDU";
    weapons[]={"53rd_OPTRE_M7S_OPTRE_M7_silencerOPTRE_M7_LaserOPTRE_M7_Sight","53rd_OPTRE_M6G_SF","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_M7S_OPTRE_M7_silencerOPTRE_M7_LaserOPTRE_M7_Sight","53rd_OPTRE_M6G_SF","Put","Throw"};
    items[]={"OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam"};
    magazines[]={"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_PilotHelmetHeli_B","ONI_Base_Armor","OPTRE_G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_PilotHelmetHeli_B","ONI_Base_Armor","OPTRE_G_Balaclava_TI_blk_F"};
    backpack="";
  };


  class ONI_Medic_pack: 53rd_Hephaestus_Medical_Satchel
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_53rd_medigel {count=25;name="53rd_medigel";};
     class _xx_53rd_biofoam {count=25;name="53rd_biofoam";};
    };
    class TransportWeapons{};
  };


  class ONI_Rifleman_AT_pack: OPTRE_ILCS_Rucksack_Black
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
    #include "ONIVeh.hpp"
};

//////////////// Paste cfgGroups after this line //////////////// 
