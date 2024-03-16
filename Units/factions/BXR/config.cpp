class cfgPatches
{
  class 53rd_BXR
  {
    units[]={"53rd_Security_Engineer","53rd_Foreman","53rd_Drill_Technician","53rd_Mining_Technician","53rd_Precision_Miner","53rd_Explosives_Specialist","53rd_Deep_Engineer","53rd_Deep_Explosives_Specialist","53rd_Deep_Driller","53rd_Deep_Miner","53rd_Deep_Precision_Miner"};
    weapons[]={"53rd_MMG_02_black_F_bipod_01_F_blk","53rd_hgun_Pistol_heavy_02_F","53rd_arifle_AK12_F","53rd_arifle_AKS_F","53rd_srifle_DMR_06_hunter_F_optic_KHS_old","53rd_launch_RPG7_F","53rd_srifle_DMR_04_F_optic_KHS_old"};
    requiredVersion=0.1;
    requiredAddons[]={"OPTRE_Weapons_Items","A3_Weapons_F","A3_Weapons_F_Mark_Machineguns_MMG_02","TKE_Uniforms","TKE_MD","A3_Characters_F","A3_Weapons_F_Pistols_Pistol_Heavy_02","53rd_Base_Berets","A3_Weapons_F_Exp_Rifles_AK12","A3_Weapons_F_Exp_Rifles_AKS","A3_Weapons_F_Enoch_LongRangeRifles_DMR_06","A3_Weapons_F_Exp_Launchers_RPG7","A3_Weapons_F_Mark_LongRangeRifles_DMR_04"};
  };
};

class cfgFactionClasses
{
  class 53rd_BXR
  {
    icon="";
    displayName="[53rd] BXR";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class MMG_02_black_F;
  class hgun_Pistol_heavy_02_F;
  class arifle_AK12_F;
  class arifle_AKS_F;
  class srifle_DMR_06_hunter_F;
  class launch_RPG7_F;
  class srifle_DMR_04_F;

  class 53rd_MMG_02_black_F_bipod_01_F_blk: MMG_02_black_F
  {
    displayName="LWMMG (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
      };
    };
  };

  class 53rd_hgun_Pistol_heavy_02_F: hgun_Pistol_heavy_02_F
  {
    displayName="Chiappa Rhino 60DS";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_arifle_AK12_F: arifle_AK12_F
  {
    displayName="AK-15";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_arifle_AKS_F: arifle_AKS_F
  {
    displayName="AKS-74U";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_srifle_DMR_06_hunter_F_optic_KHS_old: srifle_DMR_06_hunter_F
  {
    displayName="M14 (classic)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_KHS_old";
      };
    };
  };

  class 53rd_launch_RPG7_F: launch_RPG7_F
  {
    displayName="RPG-7";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_srifle_DMR_04_F_optic_KHS_old: srifle_DMR_04_F
  {
    displayName="ASP-1 Kir (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_KHS_old";
      };
    };
  };

};

class cfgVehicles
{
  class I_Soldier_AR_F;
  class I_officer_F;
  class I_soldier_F;
  class I_Soldier_M_F;
  class I_Soldier_LAT_F;
  class TKE_CamelBakMD2;

  class BXR_Security_Engineer: I_Soldier_AR_F
  {
    faction="53rd_BXR";
    side=2;
    displayName="Security Engineer";
    uniformClass="U_TKE_Uniform_MD";
    weapons[]={"53rd_MMG_02_black_F_bipod_01_F_blk","Put","Throw"};
    respawnWeapons[]={"53rd_MMG_02_black_F_bipod_01_F_blk","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"130Rnd_338_Mag","130Rnd_338_Mag"};
    respawnMagazines[]={"130Rnd_338_Mag","130Rnd_338_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFHeavyHelm","BXR_Trooper_Heavy"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFHeavyHelm","BXR_Trooper_Heavy"};
    backpack="";
  };

  class BXR_Foreman: I_officer_F
  {
    faction="53rd_BXR";
    side=2;
    displayName="Foreman";
    uniformClass="U_TKE_Uniform_MD";
    weapons[]={"53rd_hgun_Pistol_heavy_02_F","Put","Throw"};
    respawnWeapons[]={"53rd_hgun_Pistol_heavy_02_F","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    respawnMagazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","53_BXR_Beret","BXR_Trooper_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","53_BXR_Beret","BXR_Trooper_Vest"};
    backpack="";
  };

  class BXR_Drill_Technician: I_soldier_F
  {
    faction="53rd_BXR";
    side=2;
    displayName="Drill Technician";
    uniformClass="U_TKE_Uniform_MD";
    weapons[]={"53rd_arifle_AK12_F","Put","Throw"};
    respawnWeapons[]={"53rd_arifle_AK12_F","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F"};
    respawnMagazines[]={"30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F","30Rnd_762x39_Mag_Tracer_Green_F"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFHelm","BXR_Trooper_Heavy"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFHelm","BXR_Trooper_Heavy"};
    backpack="";
  };

  class BXR_Mining_Technician: I_soldier_F
  {
    faction="53rd_BXR";
    side=2;
    displayName="Mining Technician";
    uniformClass="U_TKE_Uniform_Rolled_MD";
    weapons[]={"53rd_arifle_AKS_F","Put","Throw"};
    respawnWeapons[]={"53rd_arifle_AKS_F","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F"};
    respawnMagazines[]={"30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F","30Rnd_545x39_Mag_Tracer_Green_F"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFMilitiaHelm","BXR_Trooper_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFMilitiaHelm","BXR_Trooper_Vest"};
    backpack="";
  };

  class BXR_Precision_Miner: I_Soldier_M_F
  {
    faction="53rd_BXR";
    side=2;
    displayName="Precision Miner";
    uniformClass="U_TKE_Uniform_Rolled_MD";
    weapons[]={"53rd_srifle_DMR_06_hunter_F_optic_KHS_old","Put","Throw"};
    respawnWeapons[]={"53rd_srifle_DMR_06_hunter_F_optic_KHS_old","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer","ACE_10Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg2","TKE_MDTFMilitiaHelm","BXR_Trooper_Vest","TKE_MDTFNvg2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg2","TKE_MDTFMilitiaHelm","BXR_Trooper_Vest","TKE_MDTFNvg2"};
    backpack="";
  };

  class BXR_Explosives_Specialist: I_Soldier_LAT_F
  {
    faction="53rd_BXR";
    side=2;
    displayName="Explosives Specialist";
    uniformClass="U_TKE_Uniform_MD";
    weapons[]={"53rd_arifle_AK12_F","53rd_launch_RPG7_F","Put","Throw"};
    respawnWeapons[]={"53rd_arifle_AK12_F","53rd_launch_RPG7_F","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f"};
    respawnMagazines[]={"Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFHelm","BXR_Trooper_Heavy"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFHelm","BXR_Trooper_Heavy"};
    backpack="BXR_Explosives_Specialist_pack";
  };

  class BXR_Deep_Engineer: I_Soldier_AR_F
  {
    faction="53rd_BXR";
    side=2;
	editorSubcategory = "BXR_Deep";
    displayName="Deep Engineer";
    uniformClass="U_TKE_Uniform_MD";
    weapons[]={"53rd_MMG_02_black_F_bipod_01_F_blk","Put","Throw"};
    respawnWeapons[]={"53rd_MMG_02_black_F_bipod_01_F_blk","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"130Rnd_338_Mag","130Rnd_338_Mag"};
    respawnMagazines[]={"130Rnd_338_Mag","130Rnd_338_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg","TKE_MDTFHeavyHelm","BXR_Trooper_Heavy","TKE_MDTFCloak4","TKE_MDTFNvg"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg","TKE_MDTFHeavyHelm","BXR_Trooper_Heavy","TKE_MDTFCloak4","TKE_MDTFNvg"};
    backpack="";
  };

  class BXR_Deep_Explosives_Specialist: I_Soldier_LAT_F
  {
    faction="53rd_BXR";
    side=2;
	editorSubcategory = "BXR_Deep";
    displayName="Deep Explosives Specialist";
    uniformClass="U_TKE_Uniform_MD";
    weapons[]={"53rd_arifle_AK12_F","53rd_launch_RPG7_F","Put","Throw"};
    respawnWeapons[]={"53rd_arifle_AK12_F","53rd_launch_RPG7_F","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f"};
    respawnMagazines[]={"Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f","Rpg7_f"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg","TKE_MDTFHelm","BXR_Trooper_Heavy","TKE_MDTFCloak2","TKE_MDTFNvg"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg","TKE_MDTFHelm","BXR_Trooper_Heavy","TKE_MDTFCloak2","TKE_MDTFNvg"};
    backpack="BXR_Deep_Explosives_Specialist_pack";
  };

  class BXR_Deep_Driller: I_soldier_F
  {
    faction="53rd_BXR";
    side=2;
	editorSubcategory = "BXR_Deep";
    displayName="Deep Driller";
    uniformClass="U_TKE_Uniform_MD";
    weapons[]={"53rd_arifle_AK12_F","Put","Throw"};
    respawnWeapons[]={"53rd_arifle_AK12_F","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg","TKE_MDTFHelm","BXR_Trooper_Heavy","TKE_MDTFCloak2","TKE_MDTFNvg"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg","TKE_MDTFHelm","BXR_Trooper_Heavy","TKE_MDTFCloak2","TKE_MDTFNvg"};
    backpack="";
  };

  class BXR_Deep_Miner: I_soldier_F
  {
    faction="53rd_BXR";
    side=2;
	editorSubcategory = "BXR_Deep";
    displayName="Deep Miner";
    uniformClass="U_TKE_Uniform_Rolled_MD";
    weapons[]={"53rd_arifle_AKS_F","Put","Throw"};
    respawnWeapons[]={"53rd_arifle_AKS_F","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg","TKE_MDTFMilitiaHelm","BXR_Trooper_Vest","TKE_MDTFCloak4","TKE_MDTFNvg"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg","TKE_MDTFMilitiaHelm","BXR_Trooper_Vest","TKE_MDTFCloak4","TKE_MDTFNvg"};
    backpack="";
  };

  class BXR_Deep_Precision_Miner: I_Soldier_M_F
  {
    faction="53rd_BXR";
    side=2;
	editorSubcategory = "BXR_Deep";
    displayName="Deep Precision Miner";
    uniformClass="U_TKE_Uniform_Rolled_MD";
    weapons[]={"53rd_srifle_DMR_04_F_optic_KHS_old","Put","Throw"};
    respawnWeapons[]={"53rd_srifle_DMR_04_F_optic_KHS_old","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg","TKE_MDTFMilitiaHelm","BXR_Trooper_Vest","TKE_MDTFCloak2","TKE_MDTFNvg"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","TKE_MDTFNvg","TKE_MDTFMilitiaHelm","BXR_Trooper_Vest","TKE_MDTFCloak2","TKE_MDTFNvg"};
    backpack="";
  };


  class BXR_Explosives_Specialist_pack: TKE_CamelBakMD2
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Rpg7_f {count=6;magazine="Rpg7_f";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class BXR_Deep_Explosives_Specialist_pack: TKE_CamelBakMD2
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Rpg7_f {count=6;magazine="Rpg7_f";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

};

class CfgEditorSubcategories
{
	class BXR_Deep
	{
		displayName = "Deep Miners";
		scopeCurator = 2;
		scopeeditor = 2;
		scope = 2;
	};
};

//////////////// Paste cfgGroups after this line //////////////// 
