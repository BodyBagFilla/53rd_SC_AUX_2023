/*
class cfgPatches
{
  class WEA_West_Enia_Army
  {
    units[]={"WEA_Rifleman","WEA_Auto_Rifleman","WEA_Marksman","WEA_Breacher","WEA_Rifleman_AT","WEA_Medic","WEA_Rifleman_Light","WEA_Sniper","WEA_RTO","WEA_Oryx","WEA_Laag","WEA_Transport","WEA_Hornet","WEA_Pelican","WEA_Bayonet","WEA_Scorpion"};
    weapons[]={"WEA_OPTRE_MA5A_OPTRE_M393_EOTECH","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","WEA_OPTRE_M73_OPTRE_M73_SmartLink","WEA_OPTRE_Commando_optic_ERCO_khk_F","WEA_OPTRE_M45","WEA_OPTRE_M41_SSR","WEA_OPTRE_M7_OPTRE_M7_Sight","WEA_OPTRE_SRM77_S1_OPTRE_SRM_Sight"};
    requiredVersion=0.1;
    requiredAddons[]={"53rd_equwupment","ace_medical_treatment","ace_hearing","A3_Weapons_F","ace_parachute","OPTRE_Weapons_Items","OPTRE_Weapons_AR","OPTRE_Weapons_Pistol","LM_OPCAN_FRI","OPTRE_Weapons_MG","Commando","OPTRE_Weapons_Shotgun","OPTRE_Weapons_Rockets","OPTRE_Weapons_SRM77"};
  };
};

class cfgFactionClasses
{
  class WEA_West_Enia_Army
  {
    icon="";
	displayName="[53rd] West Enia Army";
    side=0;
    priority=1;
  };
};


class cfgWeapons
{
  class OPTRE_MA5A;
  class OPTRE_M6G;
  class OPTRE_M73;
  class OPTRE_Commando;
  class OPTRE_M45;
  class OPTRE_M41_SSR;
  class OPTRE_M7;
  class OPTRE_SRM77_S1;

  class WEA_OPTRE_MA5A_OPTRE_M393_EOTECH: OPTRE_MA5A
  {
    displayName="MA3A ICWS Assault Rifle";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M393_EOTECH";
      };
    };
  };

  class WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope: OPTRE_M6G
  {
    displayName="M6G Magnum";
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

  class WEA_OPTRE_M73_OPTRE_M73_SmartLink: OPTRE_M73
  {
    displayName="M73 Light Machine Gun";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M73_SmartLink";
      };
    };
  };

  class WEA_OPTRE_Commando_optic_ERCO_khk_F: OPTRE_Commando
  {
    displayName="VK78 Commando";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_ERCO_khk_F";
      };
    };
  };

  class WEA_OPTRE_M45: OPTRE_M45
  {
    displayName="M45 Tactical Shotgun";
    scope=1;
    class LinkedItems
    {
    };
  };

  class WEA_OPTRE_M41_SSR: OPTRE_M41_SSR
  {
    displayName="M41 SSR MAV/AW";
    scope=1;
    class LinkedItems
    {
    };
  };

  class WEA_OPTRE_M7_OPTRE_M7_Sight: OPTRE_M7
  {
    displayName="M7/Caseless SMG";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M7_Sight";
      };
    };
  };

  class WEA_OPTRE_SRM77_S1_OPTRE_SRM_Sight: OPTRE_SRM77_S1
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
    };
  };

};

class cfgVehicles
{
  class LM_OPCAN_FRI_Rifleman;
  class WEA_Kitbag;
  class OPTRE_ANPRC_521_Black;
  class 53rd_WEA_M494;
  class 53rd_WEA_M12_LRV;
  class 53rd_WEA_M12_FAV;
  class 53rd_WEA_hornet;
  class 53rd_WEA_Pelican_armed;
  class 53rd_WEA_bayonet;
  class 53rd_WEA_M808B;

  class WEA_Rifleman: LM_OPCAN_FRI_Rifleman
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Rifleman";
    uniformClass="WEA_Uniform";
    weapons[]={"OPTRE_Smartfinder","WEA_OPTRE_MA5A_OPTRE_M393_EOTECH","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","WEA_OPTRE_MA5A_OPTRE_M393_EOTECH","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    respawnItems[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    magazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Lite","WEA_Gasmask","NVGoggles_INDEP"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Lite","WEA_Gasmask","NVGoggles_INDEP"};
    backpack="WEA_Rifleman_pack";
  };

  class WEA_Auto_Rifleman: LM_OPCAN_FRI_Rifleman
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Auto Rifleman";
    uniformClass="WEA_Uniform";
    weapons[]={"OPTRE_Smartfinder","WEA_OPTRE_M73_OPTRE_M73_SmartLink","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","WEA_OPTRE_M73_OPTRE_M73_SmartLink","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    respawnItems[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Heavy","WEA_Gasmask","NVGoggles_INDEP"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Heavy","WEA_Gasmask","NVGoggles_INDEP"};
    backpack="WEA_Auto_Rifleman_pack";
  };

  class WEA_Marksman: LM_OPCAN_FRI_Rifleman
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Marksman";
    uniformClass="WEA_Uniform";
    weapons[]={"OPTRE_Smartfinder","WEA_OPTRE_Commando_optic_ERCO_khk_F","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","WEA_OPTRE_Commando_optic_ERCO_khk_F","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    respawnItems[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag","Command_20Rnd_65_TracerR_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Lite","WEA_Gasmask","NVGoggles_INDEP"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Lite","WEA_Gasmask","NVGoggles_INDEP"};
    backpack="WEA_Marksman_pack";
  };

  class WEA_Breacher: LM_OPCAN_FRI_Rifleman
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Breacher";
    uniformClass="WEA_Uniform";
    weapons[]={"OPTRE_Smartfinder","WEA_OPTRE_M45","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","WEA_OPTRE_M45","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
    respawnItems[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs"};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Lite","WEA_Gasmask","NVGoggles_INDEP"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Lite","WEA_Gasmask","NVGoggles_INDEP"};
    backpack="WEA_Breacher_pack";
  };

  class WEA_Rifleman_AT: LM_OPCAN_FRI_Rifleman
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Rifleman AT";
    uniformClass="WEA_Uniform";
    weapons[]={"OPTRE_Smartfinder","WEA_OPTRE_M41_SSR","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","WEA_OPTRE_M41_SSR","Put","Throw"};
    items[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    respawnItems[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    magazines[]={"OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    respawnMagazines[]={"OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Heavy","WEA_Gasmask","NVGoggles_INDEP"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Heavy","WEA_Gasmask","NVGoggles_INDEP"};
    backpack="WEA_Rifleman_AT_pack";
  };

  class WEA_Medic: LM_OPCAN_FRI_Rifleman
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Medic";
    uniformClass="WEA_Uniform";
    weapons[]={"OPTRE_Smartfinder","WEA_OPTRE_M7_OPTRE_M7_Sight","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","WEA_OPTRE_M7_OPTRE_M7_Sight","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_surgicalKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
    respawnItems[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","53rd_medigel","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_surgicalKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Lite","WEA_Gasmask","NVGoggles_INDEP"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Lite","WEA_Gasmask","NVGoggles_INDEP"};
    backpack="WEA_Medic_pack";
  };

  class WEA_Rifleman_Light: LM_OPCAN_FRI_Rifleman
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Rifleman Light";
    uniformClass="WEA_Uniform";
    weapons[]={"OPTRE_Smartfinder","WEA_OPTRE_MA5A_OPTRE_M393_EOTECH","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","WEA_OPTRE_MA5A_OPTRE_M393_EOTECH","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
    respawnItems[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Vest","WEA_Gasmask","NVGoggles_INDEP"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Vest","WEA_Gasmask","NVGoggles_INDEP"};
    backpack="";
  };

  class WEA_Sniper: LM_OPCAN_FRI_Rifleman
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Sniper";
    uniformClass="WEA_Uniform";
    weapons[]={"OPTRE_Smartfinder","WEA_OPTRE_SRM77_S1_OPTRE_SRM_Sight","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","WEA_OPTRE_SRM77_S1_OPTRE_SRM_Sight","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    respawnItems[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Vest","WEA_Gasmask","NVGoggles_INDEP"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Vest","WEA_Gasmask","NVGoggles_INDEP"};
    backpack="WEA_Sniper_pack";
  };

  class WEA_RTO: LM_OPCAN_FRI_Rifleman
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="RTO";
    uniformClass="WEA_Uniform";
    weapons[]={"OPTRE_Smartfinder","WEA_OPTRE_MA5A_OPTRE_M393_EOTECH","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","WEA_OPTRE_MA5A_OPTRE_M393_EOTECH","WEA_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    respawnItems[]={"53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","53rd_Copium","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
    magazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Lite","WEA_Gasmask","NVGoggles_INDEP"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","NVGoggles_INDEP","OPTRE_Smartfinder","WEA_Helmet","WEA_Lite","WEA_Gasmask","NVGoggles_INDEP"};
    backpack="WEA_RTO_pack";
  };

  class WEA_Oryx: 53rd_WEA_M494
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Oryx";
    hiddenSelectionsTextures[]={"53rd_sc_aux\units\factions\west_enia_army\tex\oryx_armor_ins_co.paa","53rd_sc_aux\units\factions\west_enia_army\tex\oryx_main_ins_co.paa","optre_vehicles\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles\oryx\data\texture\ins\oryx_net_ins_ca.paa","optre_vehicles\oryx\data\texture\ins\oryx_net_ins_ca.paa","53rd_sc_aux\units\factions\west_enia_army\tex\oryx_turret_ins_co.paa","optre_vehicles\oryx\data\texture\ins\scorp_mg_ins_co.paa",""};
    crew="WEA_Rifleman";
    typicalCargo[]={"WEA_Rifleman"};
  };

  class WEA_Laag: 53rd_WEA_M12_LRV
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Laag";
    hiddenSelectionsTextures[]={"53rd_sc_aux\units\factions\west_enia_army\tex\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","53rd_sc_aux\units\factions\west_enia_army\tex\m12_turret_ins3_co.paa"};
    crew="WEA_Rifleman";
    typicalCargo[]={"WEA_Rifleman"};
  };

  class WEA_Transport: 53rd_WEA_M12_FAV
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Transport";
    hiddenSelectionsTextures[]={"53rd_sc_aux\units\factions\west_enia_army\tex\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa"};
    crew="WEA_Rifleman";
    typicalCargo[]={"WEA_Rifleman"};
  };

  class WEA_Hornet: 53rd_WEA_hornet
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Hornet";
    hiddenSelectionsTextures[]={"53rd_sc_aux\units\factions\west_enia_army\tex\hornet.paa","","",""};
    crew="WEA_Rifleman";
    typicalCargo[]={"WEA_Rifleman"};
  };

  class WEA_Pelican: 53rd_WEA_Pelican_armed
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Pelican";
    hiddenSelectionsTextures[]={"53rd_sc_aux\units\factions\west_enia_army\tex\pelican.paa","","","",""};
    crew="WEA_Rifleman";
    typicalCargo[]={"WEA_Rifleman"};
  };

  class WEA_Bayonet: 53rd_WEA_bayonet
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Bayonet";
    hiddenSelectionsTextures[]={"53rd_sc_aux\units\factions\west_enia_army\tex\bayonet_02_fuselage_01_co.paa","53rd_sc_aux\units\factions\west_enia_army\tex\bayonet_02_fuselage_02_co.paa"};
    crew="WEA_Rifleman";
    typicalCargo[]={"WEA_Rifleman"};
  };

  class WEA_Scorpion: 53rd_WEA_M808B
  {
    faction="WEA_West_Enia_Army";
    side=0;
    displayName="Scorpion";
    hiddenSelectionsTextures[]={"optre_vehicles\scorpion\data\texture\ins\scorp_base_ins_co.paa","optre_vehicles\scorpion\data\texture\ins\scorp_tur_ins_co.paa","optre_vehicles\scorpion\data\texture\ins\det_3_ins_co.paa","53rd_sc_aux\units\factions\west_enia_army\tex\scorp_insdecals_ca.paa","optre_vehicles\scorpion\data\texture\ins\scorp_net_ins_ca.paa","optre_vehicles\scorpion\data\texture\ins\scorp_net_ins_ca.paa","optre_vehicles\scorpion\data\texture\ins\mine_roller_ins_co.paa"};
    crew="WEA_Rifleman";
    typicalCargo[]={"WEA_Rifleman"};
  };


  class WEA_Rifleman_pack: WEA_Kitbag
  {
    scope=0;
    class TransportMagazines
    {
     class _xx_OPTRE_32Rnd_762x51_Mag_Tracer {count=28;magazine="OPTRE_32Rnd_762x51_Mag_Tracer";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class WEA_Auto_Rifleman_pack: WEA_Kitbag
  {
    scope=0;
    class TransportMagazines
    {
     class _xx_OPTRE_200Rnd_95x40_Box_Tracer {count=4;magazine="OPTRE_200Rnd_95x40_Box_Tracer";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class WEA_Marksman_pack: WEA_Kitbag
  {
    scope=0;
    class TransportMagazines
    {
     class _xx_Command_20Rnd_65_TracerR_Mag {count=23;magazine="Command_20Rnd_65_TracerR_Mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class WEA_Breacher_pack: WEA_Kitbag
  {
    scope=0;
    class TransportMagazines
    {
     class _xx_OPTRE_6Rnd_8Gauge_Slugs {count=28;magazine="OPTRE_6Rnd_8Gauge_Slugs";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class WEA_Rifleman_AT_pack: WEA_Kitbag
  {
    scope=0;
    class TransportMagazines
    {
     class _xx_OPTRE_M41_Twin_HEAT_Thermal {count=3;magazine="OPTRE_M41_Twin_HEAT_Thermal";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class WEA_Medic_pack: WEA_Kitbag
  {
    scope=0;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_plasmaIV_500 {count=5;name="ACE_plasmaIV_500";};
     class _xx_ACE_plasmaIV {count=5;name="ACE_plasmaIV";};
     class _xx_ACE_plasmaIV_250 {count=5;name="ACE_plasmaIV_250";};
     class _xx_53rd_Copium {count=10;name="53rd_Copium";};
     class _xx_53rd_medigel {count=10;name="53rd_medigel";};
     class _xx_ACE_elasticBandage {count=20;name="ACE_elasticBandage";};
     class _xx_ACE_packingBandage {count=20;name="ACE_packingBandage";};
     class _xx_ACE_bodyBag {count=5;name="ACE_bodyBag";};
     class _xx_ACE_epinephrine {count=5;name="ACE_epinephrine";};
     class _xx_ACE_morphine {count=5;name="ACE_morphine";};
     class _xx_ACE_splint {count=5;name="ACE_splint";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_ACE_tourniquet {count=5;name="ACE_tourniquet";};
    };
    class TransportWeapons{};
  };


  class WEA_Sniper_pack: WEA_Kitbag
  {
    scope=0;
    class TransportMagazines
    {
     class _xx_OPTRE_10Rnd_127x99 {count=35;magazine="OPTRE_10Rnd_127x99";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class WEA_RTO_pack: OPTRE_ANPRC_521_Black
  {
    scope=0;
    class TransportMagazines
    {
     class _xx_OPTRE_32Rnd_762x51_Mag_Tracer {count=15;magazine="OPTRE_32Rnd_762x51_Mag_Tracer";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
