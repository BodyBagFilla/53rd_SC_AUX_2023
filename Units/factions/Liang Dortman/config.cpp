class cfgPatches
{
  class LD_Faction
  {
    units[]={"LDGF_LD_Marksman","LDGF_LD_Crewman","LDGF_LD_Foreman","LDGF_LD_AR","LDGF_LD_Foreman_Guard","LDGF_LD_Breacher","LDGF_LD_CHEMWORKER_AR","LDGF_LD_CHEMWORKER_BREACHER","LDGF_LD_CHEMWORKER_ARS","LDGF_LD_CHEMWORKER_DMR","LDGF_M12_LAAG","LDGF_M12_Recon","LDGF_M12G1_Gauss","LDGF_M12R_AA","LDGF_M1813_Transport","LDGF_M914_RV","LDGF_D77H_Pelican"};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","OPTRE_Weapons_Items","A3_Weapons_F","OPTRE_Weapons_SRM77","A3_Weapons_F_Pistols_ACPC2","OPTRE_UNSC_Units_ONI","A3_Characters_F","OPTRE_Weapons_Pistol","A3_Characters_F_Orange_Headgear","OPTRE_Weapons_HMG38","OPTRE_Weapons_BR","OPTRE_Weapons_AR","OPTRE_Weapons_Shotgun","OPTRE_Weapons_MG","OPTRE_Weapons_DMR"};
  };
};

class cfgFactionClasses
{
  class LD_Faction
  {
    icon="";
  displayName="[53rd]Liang Dortman";
    side=2;
    priority=1;
  };
};


class cfgVehicles
{
  class I_Soldier_AR_F;
  class B_AssaultPack_blk;
  class 53rd_CORP_M12;
  class 53rd_CORP_M12_Recon;
  class 53rd_M12G1_CORP_LRV;
  class 53rd_CORP_M12R;
  class 53rd_CORP_M1813;
  class 53rd_CORP_M914;
  class 53rd_CORP_Scorpion;
  class 53rd_CORP_Pelican;

  class LDGF_LD_Marksman: I_Soldier_AR_F
  {
    faction="53rd_Dortman";
    side=2;
    displayName="Marksman";
    uniformClass="53rd_Dortman_Uni";
    weapons[]={"OPTRE_SRM77_S1","hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"OPTRE_SRM77_S1","hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_ONI_Researcher_Headgear","LD_M52A_Heavy"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_ONI_Researcher_Headgear","LD_M52A_Heavy"};
    backpack="";
  };

  class LDGF_LD_Crewman: I_Soldier_AR_F
  {
    faction="53rd_Dortman";
    side=2;
    displayName="Crewman";
    uniformClass="53rd_Dortman_Uni";
    weapons[]={"OPTRE_M6G","Put","Throw"};
    respawnWeapons[]={"OPTRE_M6G","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"HandGrenade","SmokeShell","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[]={"HandGrenade","SmokeShell","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_HeadBandage_bloody_F","LD_M52A_Light"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_HeadBandage_bloody_F","LD_M52A_Light"};
    backpack="";
  };

  class LDGF_LD_Foreman: I_Soldier_AR_F
  {
    faction="53rd_Dortman";
    side=2;
    displayName="Foreman";
    uniformClass="53rd_Dortman_Uni";
    weapons[]={"OPTRE_HMG38","hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"OPTRE_HMG38","hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","1Rnd_HE_Grenade_shell"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","1Rnd_HE_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_red_F","LD_M52A_Heavy"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_red_F","LD_M52A_Heavy"};
    backpack="";
  };

  class LDGF_LD_AR: I_Soldier_AR_F
  {
    faction="53rd_Dortman";
    side=2;
    displayName="Autorifleman";
    uniformClass="53rd_Dortman_Uni";
    weapons[]={"OPTRE_BR45","hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"OPTRE_BR45","hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_ONI_Researcher_Headgear","LD_M52A_Heavy"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_ONI_Researcher_Headgear","LD_M52A_Heavy"};
    backpack="";
  };

  class LDGF_LD_Foreman_Guard: I_Soldier_AR_F
  {
    faction="53rd_Dortman";
    side=2;
    displayName="Foreman Guard";
    uniformClass="53rd_Dortman_Uni";
    weapons[]={"OPTRE_MA5K","hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"OPTRE_MA5K","hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_red_F","LD_M52A_Light"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_red_F","LD_M52A_Light"};
    backpack="";
  };

  class LDGF_LD_Breacher: I_Soldier_AR_F
  {
    faction="53rd_Dortman";
    side=2;
    displayName="Breacher";
    uniformClass="53rd_Dortman_Uni";
    weapons[]={"OPTRE_M90A","Put","Throw"};
    respawnWeapons[]={"OPTRE_M90A","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets"};
    respawnMagazines[]={"HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_red_F","LD_M52A_Heavy"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_red_F","LD_M52A_Heavy"};
    backpack="";
  };

  class LDGF_LD_CHEMWORKER_AR: I_Soldier_AR_F
  {
    faction="53rd_Dortman";
    side=2;
    displayName="C.H.E.M - Autorifleman ";
    uniformClass="53rd_Dortman_Uni";
    weapons[]={"OPTRE_M73","hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"OPTRE_M73","hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"HandGrenade","SmokeShell","SmokeShellGreen","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box"};
    respawnMagazines[]={"HandGrenade","SmokeShell","SmokeShellGreen","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","LD_M52A_Light","G_AirPurifyingRespirator_01_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","LD_M52A_Light","G_AirPurifyingRespirator_01_F"};
    backpack="LDGF_LD_CHEMWORKER_AR_pack";
  };

  class LDGF_LD_CHEMWORKER_BREACHER: I_Soldier_AR_F
  {
    faction="53rd_Dortman";
    side=2;
    displayName="C.H.E.M - BREACHER";
    uniformClass="53rd_Dortman_Uni";
    weapons[]={"OPTRE_MA5K","hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"OPTRE_MA5K","hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","LD_M52A_Light","G_AirPurifyingRespirator_01_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","LD_M52A_Light","G_AirPurifyingRespirator_01_F"};
    backpack="";
  };

  class LDGF_LD_CHEMWORKER_ARS: I_Soldier_AR_F
  {
    faction="53rd_Dortman";
    side=2;
    displayName="C.H.E.M - Rifleman";
    uniformClass="53rd_Dortman_Uni";
    weapons[]={"OPTRE_MA5B","hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"OPTRE_MA5B","hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"HandGrenade","SmokeShell","SmokeShellGreen","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
    respawnMagazines[]={"HandGrenade","SmokeShell","SmokeShellGreen","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","LD_M52A_Light","G_AirPurifyingRespirator_01_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","LD_M52A_Light","G_AirPurifyingRespirator_01_F"};
    backpack="LDGF_LD_CHEMWORKER_ARS_pack";
  };

  class LDGF_LD_CHEMWORKER_DMR: I_Soldier_AR_F
  {
    faction="53rd_Dortman";
    side=2;
    displayName="C.H.E.M - DMR";
    uniformClass="53rd_Dortman_Uni";
    weapons[]={"OPTRE_M393_DMR","hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"OPTRE_M393_DMR","hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"FirstAidKit","FirstAidKit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"HandGrenade","SmokeShell","SmokeShellGreen","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
    respawnMagazines[]={"HandGrenade","SmokeShell","SmokeShellGreen","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","LD_M52A_Light","G_AirPurifyingRespirator_01_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","LD_M52A_Light","G_AirPurifyingRespirator_01_F"};
    backpack="LDGF_LD_CHEMWORKER_DMR_pack";
  };

  class LDGF_M12_LAAG: 53rd_CORP_M12
  {
    faction="53rd_Dortman";
    side=2;
    displayName="M12 LAAG";
    hiddenSelectionsTextures[]={"53rd_sc_aux\tex\hogs\corp\m12_corp_main_co.paa","53rd_sc_aux\tex\hogs\corp\m12hogmaav_extunder_corp_co.paa","53rd_sc_aux\tex\hogs\corp\m12_turret_corp_co.paa"};
    crew="LDGF_LD_Crewman";
    typicalCargo[]={"LDGF_LD_Crewman"};
  };

  class LDGF_M12_Recon: 53rd_CORP_M12_Recon
  {
    faction="53rd_Dortman";
    side=2;
    displayName="M12 Recon";
    hiddenSelectionsTextures[]={"53rd_sc_aux\tex\hogs\corp\m12_corp_main_co.paa","53rd_sc_aux\tex\hogs\corp\m12hogmaav_extunder_corp_co.paa"};
    crew="LDGF_LD_Crewman";
    typicalCargo[]={"LDGF_LD_Crewman"};
  };

  class LDGF_M12G1_Gauss: 53rd_M12G1_CORP_LRV
  {
    faction="53rd_Dortman";
    side=2;
    displayName="M12G1 Gauss";
    hiddenSelectionsTextures[]={"53rd_sc_aux\tex\hogs\corp\m12_corp_main_co.paa","53rd_sc_aux\tex\hogs\corp\m12hogmaav_extunder_corp_co.paa","53rd_sc_aux\tex\hogs\corp\m68_turret_corp_co.paa","53rd_sc_aux\tex\hogs\corp\m12_turret_corp_co.paa"};
    crew="LDGF_LD_Crewman";
    typicalCargo[]={"LDGF_LD_Crewman"};
  };

  class LDGF_M12R_AA: 53rd_CORP_M12R
  {
    faction="53rd_Dortman";
    side=2;
    displayName="M12R AA";
    hiddenSelectionsTextures[]={"53rd_sc_aux\tex\hogs\corp\m12_corp_main_co.paa","53rd_sc_aux\tex\hogs\corp\m12hogmaav_extunder_corp_co.paa","53rd_sc_aux\tex\hogs\corp\m79_turret_corp_co.paa"};
    crew="LDGF_LD_Crewman";
    typicalCargo[]={"LDGF_LD_Crewman"};
  };

  class LDGF_M1813_Transport: 53rd_CORP_M1813
  {
    faction="53rd_Dortman";
    side=2;
    displayName="M1813 Transport";
    hiddenSelectionsTextures[]={"53rd_sc_aux\tex\hogs\corp\m12_corp_main_co.paa","53rd_sc_aux\tex\hogs\corp\m12hogmaav_extunder_corp_co.paa","53rd_sc_aux\tex\hogs\corp\transp_lopo_corp_co.paa"};
    crew="LDGF_LD_Crewman";
    typicalCargo[]={"LDGF_LD_Crewman"};
  };

  class LDGF_M914_RV: 53rd_CORP_M914
  {
    faction="53rd_Dortman";
    side=2;
    displayName="M914 RV";
    hiddenSelectionsTextures[]={"53rd_sc_aux\tex\hogs\corp\m12_corp_main_co.paa","53rd_sc_aux\tex\hogs\corp\m12hogmaav_extunder_corp_co.paa"};
    crew="LDGF_LD_Crewman";
    typicalCargo[]={"LDGF_LD_Crewman"};
  };


  class LDGF_D77H_Pelican: 53rd_CORP_Pelican
  {
    faction="53rd_Dortman";
    side=2;
    displayName="D77H Pelican";
    hiddenSelectionsTextures[]={"53rd_sc_aux\tex\pelican\v_d77_corp_co.paa","","","",""};
    crew="LDGF_LD_Crewman";
    typicalCargo[]={"LDGF_LD_Crewman"};
  };


  class LDGF_LD_CHEMWORKER_AR_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_100Rnd_95x40_Box {count=3;magazine="OPTRE_100Rnd_95x40_Box";};
    };
    class TransportItems
    {
     class _xx_OPTRE_Biofoam {count=9;name="OPTRE_Biofoam";};
    };
    class TransportWeapons{};
  };


  class LDGF_LD_CHEMWORKER_ARS_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_OPTRE_Biofoam {count=6;name="OPTRE_Biofoam";};
    };
    class TransportWeapons{};
  };


  class LDGF_LD_CHEMWORKER_DMR_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_15Rnd_762x51_Mag {count=6;magazine="OPTRE_15Rnd_762x51_Mag";};
     class _xx_OPTRE_M2_Smoke {count=9;magazine="OPTRE_M2_Smoke";};
    };
    class TransportItems
    {
     class _xx_OPTRE_Biofoam {count=9;name="OPTRE_Biofoam";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
