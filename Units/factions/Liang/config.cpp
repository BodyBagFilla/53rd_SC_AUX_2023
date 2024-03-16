class cfgPatches
{
  class 53rd_Liang_Units
  {
    units[]={"53rd_Liang_Crewman","53rd_Liang_Rifleman_AR","53rd_Liang_Officer","53rd_Liang_Rifleman","53rd_Liang_Rifleman_AT","53rd_Liang_Sniper","53rd_Liang_Rifleman_Light"};
    weapons[]={"53rd_Liang_53rd_MA32","53rd_Liang_MA_H4_SAW","53rd_Liang_hgun_Pistol_heavy_02_F","53rd_Liang_53rd_MA32","53rd_Liang_OPTRE_M41_SSR","53rd_Liang_OPTRE_SRM77_S1"};
    requiredVersion=0.1;

  };
};


class cfgWeapons
{
  class 53rd_MA32;
  class Liang_MA_H4_SAW;
  class Liang_hgun_Pistol_heavy_02_F;
  class Liang_53rd_MA32;
  class Liang_OPTRE_M41_SSR;
  class Liang_OPTRE_SRM77_S1;

  class 53rd_Liang_53rd_MA32: 53rd_MA32
  {
    displayName="[53rd] MA32A";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_Liang_MA_H4_SAW: Liang_MA_H4_SAW
  {
    displayName="[MA] M739 SAW";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_Liang_hgun_Pistol_heavy_02_F: Liang_hgun_Pistol_heavy_02_F
  {
    displayName="Chiappa Rhino 60DS";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_Liang_53rd_MA32: Liang_53rd_MA32
  {
    displayName="[53rd] MA32A";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_Liang_OPTRE_M41_SSR: Liang_OPTRE_M41_SSR
  {
    displayName="M41 SSR MAV/AW";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_Liang_OPTRE_SRM77_S1: Liang_OPTRE_SRM77_S1
  {
    displayName="SRM77 S1";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class B_Soldier_base_F;
  class Liang_Trooper_AT_pack;

  class 53rd_Liang_Crewman: B_Soldier_base_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Crewman";
    uniformClass="53rd_Liang_Worker";
    weapons[]={"53rd_Liang_53rd_MA32","Put","Throw"};
    respawnWeapons[]={"53rd_Liang_53rd_MA32","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Tank_black_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Tank_black_F"};
    backpack="";
  };

  class 53rd_Liang_Rifleman_AR: B_Soldier_base_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Rifleman AR";
    uniformClass="53rd_Liang_Trooper";
    weapons[]={"53rd_Liang_MA_H4_SAW","Put","Throw"};
    respawnWeapons[]={"53rd_Liang_MA_H4_SAW","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer"};
    respawnMagazines[]={"MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer","MA_200Rnd_762x51_FMJAP_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    backpack="";
  };

  class 53rd_Liang_Officer: B_Soldier_base_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Officer";
    uniformClass="53rd_Liang_Worker";
    weapons[]={"53rd_Liang_hgun_Pistol_heavy_02_F","Put","Throw"};
    respawnWeapons[]={"53rd_Liang_hgun_Pistol_heavy_02_F","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    respawnMagazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","53_LiangWhite_Beret","19th_invisible_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","53_LiangWhite_Beret","19th_invisible_Vest"};
    backpack="";
  };

  class 53rd_Liang_Rifleman: B_Soldier_base_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Rifleman";
    uniformClass="53rd_Liang_Trooper";
    weapons[]={"53rd_Liang_53rd_MA32","Put","Throw"};
    respawnWeapons[]={"53rd_Liang_53rd_MA32","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
    respawnMagazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    backpack="";
  };

  class 53rd_Liang_Rifleman_AT: B_Soldier_base_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Rifleman AT";
    uniformClass="53rd_Liang_Trooper";
    weapons[]={"53rd_Liang_53rd_MA32","53rd_Liang_OPTRE_M41_SSR","Put","Throw"};
    respawnWeapons[]={"53rd_Liang_53rd_MA32","53rd_Liang_OPTRE_M41_SSR","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    respawnMagazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    backpack="53rd_Liang_Rifleman_AT_pack";
  };

  class 53rd_Liang_Sniper: B_Soldier_base_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Sniper";
    uniformClass="53rd_Liang_Worker";
    weapons[]={"53rd_Liang_OPTRE_SRM77_S1","Put","Throw"};
    respawnWeapons[]={"53rd_Liang_OPTRE_SRM77_S1","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    respawnMagazines[]={"OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Watchcap_blk","G_Bandanna_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Watchcap_blk","G_Bandanna_blk"};
    backpack="";
  };

  class 53rd_Liang_Rifleman_Light: B_Soldier_base_F
  {
    faction="53rd_Liang";
    side=2;
    displayName="Rifleman Light";
    uniformClass="53rd_Liang_Worker";
    weapons[]={"53rd_Liang_53rd_MA32","Put","Throw"};
    respawnWeapons[]={"53rd_Liang_53rd_MA32","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
    respawnMagazines[]={"OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Liang_Trooper_Helmet","19th_invisible_Vest"};
    backpack="";
  };


  class 53rd_Liang_Rifleman_AT_pack: Liang_Trooper_AT_pack
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
