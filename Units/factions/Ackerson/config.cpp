class cfgPatches
{
  class 53rd_Ackersons_RebellionOF
  {
    units[]={"53rd_MEDIC","53rd_AA_RIFLEMAN","53rd_AT_RIFLEMAN","53rd_Sniper","53rd_RIFLEMAN","53rd_OFFICER","53rd_AUTO_RIFLEMAN","53rd_Squad_Leader","53rd_Special_Warfare_Operator","53rd_Special_Weapons_Operator_ARC","53rd_Special_Warfare_Commander","53rd_Pilot","53rd_RIFLEMAN_G","53rd_Marksmen","53rd_Special_Warfare_Operator_Breacher","53rd_Special_Warfare_Operator_Marksman","53rd_Special_Warfare_Operator_AT","53rd_AT_GUN","53rd_UH_144A_FALCON","53rd_D77H_TCI_Pelican","53rd_ZAMAK_MRL","53rd_Tusk","53rd_M12_LRV_MG","53rd_M1015_Mule_Medical","53rd_KATATEL_HMG","53rd_Karatel"};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={"OPTRE_Weapons_Items","A3_Weapons_F","Commando","A3_Characters_F_Enoch","A3_Weapons_F_Enoch_Launchers_Titan","OPTRE_Weapons_Rockets","OPTRE_Weapons_SRM77","OPTRE_Weapons_BR","OPTRE_Weapons_Pistol","OPTRE_Weapons_MG","A3_Weapons_F_Exp_Rifles_AK12","A3_Weapons_F_Enoch_Rifles_MSBS","OPTRE_FC_Weapons_Railgun","A3_Weapons_F_Enoch_Machineguns_M200","OPTRE_UNSC_Units_Army","OPTRE_Weapons_DMR","OPTRE_Weapons_AR"};
  };
};

class cfgFactionClasses
{
  class 53rd_Ackersons_RebellionOF
  {
    icon="";
  displayName="[53rd] Ackerson's Rebellion";
    side=0;
    priority=1;
  };
};


class cfgVehicles
{
  class I_E_Survivor_F;
  class OPTRE_UNSC_Rucksack_Medic;
  class OPTRE_UNSC_Rucksack_Heavy;
  class OPTRE_Static_FG75;
  class VES_UH144_A_URF;
  class OPTRE_Pelican_unarmed_ins;
  class I_E_Truck_02_MRL_F;
  class I_MBT_03_cannon_F;
  class OPTRE_M12_LRV_ins;
  class OPTRE_m1015_mule_cover_ins;
  class O_T_MRAP_02_hmg_ghex_F;
  class O_T_MRAP_02_ghex_F;

  class 53rd_MEDIC: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="MEDIC";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"OPTRE_Commando_Black","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_Commando_Black","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag"};
    respawnMagazines[]={"Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag","Commando_20Rnd_65_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    backpack="53rd_MEDIC_pack";
  };

  class 53rd_AA_RIFLEMAN: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Anti-Air Specialist";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"launch_B_Titan_olive_F","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"launch_B_Titan_olive_F","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"Titan_AA","Titan_AA","Titan_AA"};
    respawnMagazines[]={"Titan_AA","Titan_AA","Titan_AA"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    backpack="53rd_AA_RIFLEMAN_pack";
  };

  class 53rd_AT_RIFLEMAN: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Anti-Tank Specialist";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"OPTRE_M41_SSR","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_M41_SSR","OPTRE_Smartfinder","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G"};
    respawnMagazines[]={"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    backpack="53rd_AT_RIFLEMAN_pack";
  };

  class 53rd_Sniper: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Sniper";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"OPTRE_SRM77_S1","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_SRM77_S1","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    backpack="";
  };

  class 53rd_RIFLEMAN: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Rifleman";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"OPTRE_BR55","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_BR55","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag"};
    respawnMagazines[]={"OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_FLACAMUA","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_FLACAMUA"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_FLACAMUA","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_FLACAMUA"};
    backpack="";
  };

  class 53rd_OFFICER: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Officer";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"OPTRE_M6C","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_M6C","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
    respawnMagazines[]={"OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","VES_Beret_MP","53rd_Rebel_Armor"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","VES_Beret_MP","53rd_Rebel_Armor"};
    backpack="";
  };

  class 53rd_AUTO_RIFLEMAN: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Autorifleman";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"OPTRE_M247","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_M247","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box"};
    respawnMagazines[]={"OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    backpack="53rd_AUTO_RIFLEMAN_pack";
  };

  class 53rd_Squad_Leader: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Squad Leader";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"arifle_AK12_F","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"arifle_AK12_F","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    backpack="";
  };

  class 53rd_Special_Warfare_Operator: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="SWO - Rifleman";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"arifle_MSBS65_black_F","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"arifle_MSBS65_black_F","OPTRE_Smartfinder","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};
    respawnMagazines[]={"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","53rd_Ackerson_Helmet_SF","53rd_Rebel_Armor"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","53rd_Ackerson_Helmet_SF","53rd_Rebel_Armor"};
    backpack="";
  };

  class 53rd_Special_Weapons_Operator_ARC: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="SWO - ARC";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_FC_Railgun","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_FC_Railgun","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_FC_Railgun_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    backpack="";
  };

  class 53rd_Special_Warfare_Commander: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="SWO - Commander";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"LMG_Mk200_black_F","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"LMG_Mk200_black_F","OPTRE_Smartfinder","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
    respawnMagazines[]={"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","VES_Beret_MP","53rd_Rebel_Armor"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","VES_Beret_MP","53rd_Rebel_Armor"};
    backpack="";
  };

  class 53rd_Pilot: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Pilot";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"OPTRE_M6C","Put","Throw"};
    respawnWeapons[]={"OPTRE_M6C","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
    respawnMagazines[]={"OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
    linkedItems[]={,"OPTRE_UNSC_VX16_HelmetV_med","53rd_Rebel_Armor"};
    respawnLinkedItems[]={,"OPTRE_UNSC_VX16_HelmetV_med","53rd_Rebel_Armor"};
    backpack="";
  };

  class 53rd_RIFLEMAN_G: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Rifleman w/G";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"OPTRE_BR55","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_BR55","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_FLACAMUA","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_FLACAMUA"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_FLACAMUA","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_FLACAMUA"};
    backpack="";
  };

  class 53rd_Marksmen: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Marksmen";
    uniformClass="53rd_Ackerson_Uniform";
    weapons[]={"OPTRE_M392_DMR","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_M392_DMR","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","53rd_Rebel_Helmet","53rd_Rebel_Armor","LM_OPCAN_COMM"};
    backpack="";
  };

  class 53rd_Special_Warfare_Operator_Breacher: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="SWO - Breacher";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_MA5K","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_MA5K","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","53rd_Ackerson_Helmet_SF","53rd_Rebel_Armor"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","53rd_Ackerson_Helmet_SF","53rd_Rebel_Armor"};
    backpack="";
  };

  class 53rd_Special_Warfare_Operator_Marksman: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="SWO - Marksman";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"LM_OPCAN_MRS","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"LM_OPCAN_MRS","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag"};
    respawnMagazines[]={"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","53rd_Ackerson_Helmet_SF","53rd_Rebel_Armor"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","53rd_Ackerson_Helmet_SF","53rd_Rebel_Armor"};
    backpack="";
  };

  class 53rd_Special_Warfare_Operator_AT: I_E_Survivor_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="SWO - Anti-Tank";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_M41_SSR","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_M41_SSR","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    respawnMagazines[]={"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","53rd_Ackerson_Helmet_SF","53rd_Rebel_Armor"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","53rd_Ackerson_Helmet_SF","53rd_Rebel_Armor"};
    backpack="53rd_Special_Warfare_Operator_AT_pack";
  };

  class 53rd_AT_GUN: OPTRE_Static_FG75
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Field Gun";
    hiddenSelectionsTextures[]={};
    crew="53rd_RIFLEMAN";
    typicalCargo[]={"53rd_RIFLEMAN"};
  };

  class 53rd_UH_144A_FALCON: VES_UH144_A_URF
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="UH-144A FALCON";
    hiddenSelectionsTextures[]={"v_fz_vehicles\data\falcon\v_uh144_urf_co.paa","v_fz_vehicles\data\falcon\v_uh144_urf_a_co.paa","v_fz_vehicles\data\falcon\v_uh144_urf_t_co.paa","v_fz_vehicles\data\falcon\v_uh144_urf_s_co.paa","","",""};
    crew="53rd_RIFLEMAN";
    typicalCargo[]={"53rd_RIFLEMAN"};
  };

  class 53rd_D77H_TCI_Pelican: OPTRE_Pelican_unarmed_ins
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="D77H-TCI Pelican";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\pelicanexterior_innie_co.paa","","","","",""};
    crew="53rd_RIFLEMAN";
    typicalCargo[]={"53rd_RIFLEMAN"};
  };

  class 53rd_ZAMAK_MRL: I_E_Truck_02_MRL_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Zamak MLRS";
    hiddenSelectionsTextures[]={"a3\soft_f_enoch\truck_02\data\truck_02_kab_eaf_co.paa","a3\soft_f_enoch\truck_02\data\truck_02_int_eaf_co.paa","a3\soft_f_enoch\truck_02\data\truck_02_mrl_eaf_co.paa","a3\soft_f_enoch\truck_02\data\truck_02_chassis_eaf_co.paa"};
    crew="53rd_RIFLEMAN";
    typicalCargo[]={"53rd_RIFLEMAN"};
  };

  class 53rd_Tusk: I_MBT_03_cannon_F
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="Tusk";
    hiddenSelectionsTextures[]={"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa","a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa","a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa"};
    crew="53rd_RIFLEMAN";
    typicalCargo[]={"53rd_RIFLEMAN"};
  };

  class 53rd_M12_LRV_MG: OPTRE_M12_LRV_ins
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="M12-LRV MG";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\ins\m12hogmaav_extupper_innie2_co.paa","optre_vehicles\warthog\data\night\m12hogmaav_extunder_night_co.paa","optre_vehicles\warthog\data\ins\m12_turret_ins3_co.paa"};
    crew="53rd_RIFLEMAN";
    typicalCargo[]={"53rd_RIFLEMAN"};
  };

  class 53rd_M1015_Mule_Medical: OPTRE_m1015_mule_cover_ins
  {
    faction="53rd_Ackersons_RebellionOF";
    side=0;
    displayName="M1015 Mule Medical";
    hiddenSelectionsTextures[]={"optre_vehicles\misc\data\truck_02_kab_ins_co.paa","optre_vehicles\misc\data\truck_02_kuz_ins_co.paa","optre_vehicles\misc\data\truck_02_int_ins_co.paa"};
    crew="53rd_RIFLEMAN";
    typicalCargo[]={"53rd_RIFLEMAN"};
  };
  class 53rd_MEDIC_pack: OPTRE_UNSC_Rucksack_Medic
  {
    scope=1;
	scopeArsenal=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_OPTRE_Biofoam {count=10;name="OPTRE_Biofoam";};
    };
    class TransportWeapons{};
  };


  class 53rd_AA_RIFLEMAN_pack: OPTRE_UNSC_Rucksack_Heavy
  {
       scope=1;
	scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_Titan_AA {count=3;magazine="Titan_AA";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_AT_RIFLEMAN_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
	scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M41_Twin_HEAT_G {count=4;magazine="OPTRE_M41_Twin_HEAT_G";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_AUTO_RIFLEMAN_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
	scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_OPTRE_100Rnd_762x51_Box {count=7;magazine="OPTRE_100Rnd_762x51_Box";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Special_Warfare_Operator_AT_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
	scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M41_Twin_HEAT_Thermal {count=4;magazine="OPTRE_M41_Twin_HEAT_Thermal";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
