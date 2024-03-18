class cfgPatches
{
  class 53rd_Liang_Units
  {
    units[]={"Liang_Sniper","Liang_Trooper_Light","Liang_Trooper","Liang_Trooper_AT","Liang_Trooper_AR","Liang_Officer_W","Liang_Officer_B","Liang_Crewman","Liang_Pilot"};
    weapons[]={"Liang_OPTRE_SRM77_S1","Liang_53rd_MA32","Liang_OPTRE_M41_SSR","Liang_MA_H4_SAW","Liang_hgun_Pistol_heavy_02_F"};
    requiredVersion=0.1;
    requiredAddons[]={"ace_medical_treatment","A3_Weapons_F","A3_Characters_F","CuratorOnly_Characters_F_OPFOR","53rd_Backpacks","53rd_Base_Berets","A3_Characters_F_Tank_Headgear"};
  };
};


class cfgWeapons
{
  class OPTRE_SRM77_S1;
  class 53rd_MA32;
  class OPTRE_M41_SSR;
  class MA_H4_SAW;
  class hgun_Pistol_heavy_02_F;

  class Liang_OPTRE_SRM77_S1: OPTRE_SRM77_S1
  {
    displayName="SRM77 S1";
    scope=1;
    class LinkedItems
    {
    };
  };

  class Liang_53rd_MA32: 53rd_MA32
  {
    displayName="[53rd] MA32A";
    scope=1;
    class LinkedItems
    {
    };
  };

  class Liang_OPTRE_M41_SSR: OPTRE_M41_SSR
  {
    displayName="M41 SSR MAV/AW";
    scope=1;
    class LinkedItems
    {
    };
  };

  class Liang_MA_H4_SAW: MA_H4_SAW
  {
    displayName="[MA] M739 SAW";
    scope=1;
    class LinkedItems
    {
    };
  };

  class Liang_hgun_Pistol_heavy_02_F: hgun_Pistol_heavy_02_F
  {
    displayName="Chiappa Rhino 60DS";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class B_officer_F;
  class B_Soldier_lite_F;
  class B_Soldier_F;
  class B_Soldier_LAT_F;
  class Halo_Rucksack_01;
  class B_Soldier_AR_F;
  class B_officer_F;

  class Liang_Sniper: B_officer_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Sniper";
    uniformClass="Liang_Armor_Worker";
    weapons[]={"Liang_OPTRE_SRM77_S1","Put","Throw"};
    respawnWeapons[]={"Liang_OPTRE_SRM77_S1","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    respawnMagazines[]={"OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Watchcap_blk","19th_invisible_Vest","G_Bandanna_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Watchcap_blk","19th_invisible_Vest","G_Bandanna_blk"};
    backpack="";
  };

  class Liang_Trooper_Light: B_Soldier_lite_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Trooper Light";
    uniformClass="Liang_Armor_Worker";
    weapons[]={"Liang_53rd_MA32","Put","Throw"};
    respawnWeapons[]={"Liang_53rd_MA32","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
    respawnMagazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    backpack="";
  };

  class Liang_Trooper: B_Soldier_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Trooper";
    uniformClass="Liang_Armor_Trooper";
    weapons[]={"Liang_53rd_MA32","Put","Throw"};
    respawnWeapons[]={"Liang_53rd_MA32","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
    respawnMagazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    backpack="";
  };

  class Liang_Trooper_AT: B_Soldier_LAT_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Trooper AT";
    uniformClass="Liang_Armor_Trooper";
    weapons[]={"Liang_53rd_MA32","Liang_OPTRE_M41_SSR","Put","Throw"};
    respawnWeapons[]={"Liang_53rd_MA32","Liang_OPTRE_M41_SSR","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    respawnMagazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    backpack="Liang_Trooper_AT_pack";
  };

  class Liang_Trooper_AR: B_Soldier_AR_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Trooper AR";
    uniformClass="Liang_Armor_Trooper";
    weapons[]={"Liang_MA_H4_SAW","Put","Throw"};
    respawnWeapons[]={"Liang_MA_H4_SAW","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer"};
    respawnMagazines[]={"MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    backpack="";
  };

  class Liang_Officer_W: B_officer_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Officer W";
    uniformClass="Liang_Armor_Worker";
    weapons[]={"Liang_hgun_Pistol_heavy_02_F","Put","Throw"};
    respawnWeapons[]={"Liang_hgun_Pistol_heavy_02_F","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    respawnMagazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","53_LiangWhite_Beret"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","53_LiangWhite_Beret"};
    backpack="";
  };

  class Liang_Officer_B: B_officer_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Officer B";
    uniformClass="Liang_Armor_Worker";
    weapons[]={"Liang_hgun_Pistol_heavy_02_F","Put","Throw"};
    respawnWeapons[]={"Liang_hgun_Pistol_heavy_02_F","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    respawnMagazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","53_Liang_Beret"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","53_Liang_Beret"};
    backpack="";
  };

  class Liang_Crewman: B_Soldier_lite_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Crewman";
    uniformClass="Liang_Armor_Worker";
    weapons[]={"Liang_53rd_MA32","Put","Throw"};
    respawnWeapons[]={"Liang_53rd_MA32","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Tank_black_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Tank_black_F"};
    backpack="";
  };

  class Liang_Pilot: B_Soldier_lite_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Pilot";
    uniformClass="Liang_Armor_Worker";
    weapons[]={"Liang_53rd_MA32","Put","Throw"};
    respawnWeapons[]={"Liang_53rd_MA32","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
    respawnMagazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_CrewHelmetHeli_B"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_CrewHelmetHeli_B"};
    backpack="";
  };


  class Liang_Trooper_AT_pack: Halo_Rucksack_01
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M41_Twin_HEAT_Thermal {count=4;magazine="OPTRE_M41_Twin_HEAT_Thermal";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };
	#include "LiangVeh.hpp"
};

//////////////// Paste cfgGroups after this line //////////////// 
