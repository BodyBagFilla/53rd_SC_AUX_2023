class cfgPatches
{
  class 53rd_Sedra
  {
    units[]={"53rd_Medic","53rd_Rifleman","53rd_Officer","53rd_HeliPilot","53rd_FighterPilot","53rd_Crewman","53rd_AutoRifle","53rd_RTO","53rd_Rifleman_AT","53rd_SEDRA_D77_TC_Pelican","53rd_SEDRA_stallion","53rd_SEDRA_stallion_Covered","53rd_SEDRA_stallion_Ammo","53rd_SEDRA_stallion_Repair","53rd_SEDRA_stallion_Fuel","SEDRA_M808B_Base","53rd_SEDRA_Polaris_MG","53rd_SEDRA_Polaris_AT","53rd_SEDRA_Polaris_Unarmed","53rd_SEDRA_Hornet_AV","53rd_SEDRA_Hornet_Transport","53rd_SEDRA_M12A1_LRV","53rd_SEDRA_M12G1_LRV","53rd_SEDRA_M12R_AA","53rd_SEDRA_M12_FAV","53rd_SEDRA_M12_FAV_APC","53rd_SEDRA_M12_LRV","53rd_SEDRA_M813_TT","53rd_SEDRA_M914_RV","53rd_SEDRA_falcon","53rd_SEDRA_falcon_armed"};
    weapons[]={"53rd_19_UNSC_MA5A_19_UNSC_MA5A_LAM","53rd_hgun_Pistol_heavy_02_F","53rd_19_UNSC_M7_19_UNSC_M7_optic","53rd_Dmns_CM_12","53rd_OPTRE_M41_SSR"};
    requiredVersion=0.1;
    requiredAddons[]={"OPTRE_Weapons_Items","ace_medical_treatment","A3_Weapons_F","19_UNSC_Weapons","OPTRE_UEG_Units_IND","OPTRE_FC_UEG_Units_IND","A3_Characters_F","A3_Weapons_F_Pistols_Pistol_Heavy_02","53rd_Base_Berets","DMNS_Unit_Headgear","Dmns_Weapons_F_MachineGuns","MSR_Misriah_Armory"};
  };
};

class cfgWeapons
{
  class 19_UNSC_MA5A;
  class hgun_Pistol_heavy_02_F;
  class 19_UNSC_M7;
  class Dmns_CM_12;
  class OPTRE_M41_SSR;

  class 53rd_19_UNSC_MA5A_19_UNSC_MA5A_LAM: 19_UNSC_MA5A
  {
    displayName="[19 - UNSC] MA5A";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="19_UNSC_MA5A_LAM";
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

  class 53rd_19_UNSC_M7_19_UNSC_M7_optic: 19_UNSC_M7
  {
    displayName="[19 - UNSC] M7";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="19_UNSC_M7_optic";
      };
    };
  };

  class 53rd_Dmns_CM_12: Dmns_CM_12
  {
    displayName="CM-12 (Confetti Maker)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_OPTRE_M41_SSR: OPTRE_M41_SSR
  {
    displayName="M41 SSR MAV/AW";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class OPTRE_UEG_Civilian_Paramedic_IND;
  class 19th_H2A_marine_backpack_light;
  class I_soldier_F;
  class I_officer_F;
  class I_helipilot_F;
  class I_pilot_F;
  class I_crew_F;
  class I_Soldier_AR_F;
  class I_soldier_UAV_F;
  class DMNS_RUCKSACK_UNSC_ANPRC_521_F;
  class 19th_H2A_marine_backpack_heavy;

  class Sedra_Medic: OPTRE_UEG_Civilian_Paramedic_IND
  {
    faction="53rd_Sedra";
    side=2;
    displayName="Medic";
    uniformClass="Sedra_Uniform_Medic_Base";
    weapons[]={"53rd_19_UNSC_MA5A_19_UNSC_MA5A_LAM","Put","Throw"};
    respawnWeapons[]={"53rd_19_UNSC_MA5A_19_UNSC_MA5A_LAM","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_surgicalKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_surgicalKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller"};
    respawnMagazines[]={"kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","19th_Helmet_Corpsman_NV_green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","19th_Helmet_Corpsman_NV_green"};
    backpack="Sedra_Medic_pack";
  };

  class Sedra_Rifleman: I_soldier_F
  {
    faction="53rd_Sedra";
    side=2;
    displayName="Rifleman";
    uniformClass="Sedra_Uniform_Base";
    weapons[]={"53rd_19_UNSC_MA5A_19_UNSC_MA5A_LAM","Put","Throw"};
    respawnWeapons[]={"53rd_19_UNSC_MA5A_19_UNSC_MA5A_LAM","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer"};
    respawnMagazines[]={"32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","19th_Helmet_NV_green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","19th_Helmet_NV_green"};
    backpack="";
  };

  class Sedra_Officer: I_officer_F
  {
    faction="53rd_Sedra";
    side=2;
    displayName="Officer";
    uniformClass="Sedra_Uniform_Base";
    weapons[]={"53rd_hgun_Pistol_heavy_02_F","Put","Throw"};
    respawnWeapons[]={"53rd_hgun_Pistol_heavy_02_F","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    respawnMagazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","53_Sedra_Beret"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","53_Sedra_Beret"};
    backpack="";
  };

  class Sedra_Crewman: I_crew_F
  {
    faction="53rd_Sedra";
    side=2;
    displayName="Crewman";
    uniformClass="Sedra_Uniform_Base";
    weapons[]={"53rd_19_UNSC_M7_19_UNSC_M7_optic","Put","Throw"};
    respawnWeapons[]={"53rd_19_UNSC_M7_19_UNSC_M7_optic","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"60Rnd_5x23_m7_fmj_tracer","60Rnd_5x23_m7_fmj_tracer","60Rnd_5x23_m7_fmj_tracer","60Rnd_5x23_m7_fmj_tracer","60Rnd_5x23_m7_fmj_tracer"};
    respawnMagazines[]={"60Rnd_5x23_m7_fmj_tracer","60Rnd_5x23_m7_fmj_tracer","60Rnd_5x23_m7_fmj_tracer","60Rnd_5x23_m7_fmj_tracer","60Rnd_5x23_m7_fmj_tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","DMNS_IHADSS_HELMET_01"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","DMNS_IHADSS_HELMET_01"};
    backpack="";
  };

  class Sedra_AutoRifle: I_Soldier_AR_F
  {
    faction="53rd_Sedra";
    side=2;
    displayName="AutoRifle";
    uniformClass="Sedra_Uniform_Base";
    weapons[]={"53rd_Dmns_CM_12","Put","Throw"};
    respawnWeapons[]={"53rd_Dmns_CM_12","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"DMNS_150Rnd_30x06_Mag_Tracer","DMNS_150Rnd_30x06_Mag_Tracer","DMNS_150Rnd_30x06_Mag_Tracer","DMNS_150Rnd_30x06_Mag_Tracer","DMNS_150Rnd_30x06_Mag_Tracer"};
    respawnMagazines[]={"DMNS_150Rnd_30x06_Mag_Tracer","DMNS_150Rnd_30x06_Mag_Tracer","DMNS_150Rnd_30x06_Mag_Tracer","DMNS_150Rnd_30x06_Mag_Tracer","DMNS_150Rnd_30x06_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","19th_Helmet_NV_green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","19th_Helmet_NV_green"};
    backpack="Sedra_AutoRifle_pack";
  };

  class Sedra_RTO: I_soldier_UAV_F
  {
    faction="53rd_Sedra";
    side=2;
    displayName="RTO";
    uniformClass="Sedra_Uniform_Base";
    weapons[]={"53rd_19_UNSC_MA5A_19_UNSC_MA5A_LAM","Put","Throw"};
    respawnWeapons[]={"53rd_19_UNSC_MA5A_19_UNSC_MA5A_LAM","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer"};
    respawnMagazines[]={"32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","19th_Helmet_NV_green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","19th_Helmet_NV_green"};
    backpack="Sedra_RTO_pack";
  };

  class Sedra_Rifleman_AT: I_soldier_F
  {
    faction="53rd_Sedra";
    side=2;
    displayName="Rifleman AT";
    uniformClass="Sedra_Uniform_Base";
    weapons[]={"53rd_19_UNSC_MA5A_19_UNSC_MA5A_LAM","53rd_OPTRE_M41_SSR","Put","Throw"};
    respawnWeapons[]={"53rd_19_UNSC_MA5A_19_UNSC_MA5A_LAM","53rd_OPTRE_M41_SSR","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    respawnMagazines[]={"32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","32Rnd_762x51_MA5_tracer","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","19th_Helmet_NV_green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","19th_Helmet_NV_green"};
    backpack="Sedra_Rifleman_AT_pack";
  };


  class Sedra_Medic_pack: 19th_H2A_marine_backpack_light
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_kat_Painkiller {count=10;magazine="kat_Painkiller";};
    };
    class TransportItems
    {
     class _xx_ACE_plasmaIV {count=10;name="ACE_plasmaIV";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
     class _xx_ACE_morphine {count=40;name="ACE_morphine";};
     class _xx_ACE_fieldDressing {count=30;name="ACE_fieldDressing";};
     class _xx_ACE_packingBandage {count=30;name="ACE_packingBandage";};
     class _xx_ACE_tourniquet {count=30;name="ACE_tourniquet";};
    };
    class TransportWeapons{};
  };


  class Sedra_AutoRifle_pack: 19th_H2A_marine_backpack_light
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_DMNS_150Rnd_30x06_Mag_Tracer {count=5;magazine="DMNS_150Rnd_30x06_Mag_Tracer";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class Sedra_RTO_pack: DMNS_RUCKSACK_UNSC_ANPRC_521_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class Sedra_Rifleman_AT_pack: 19th_H2A_marine_backpack_heavy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M41_Twin_HEAT_Thermal {count=3;magazine="OPTRE_M41_Twin_HEAT_Thermal";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

    #include "SedraVeh.hpp"

};

//////////////// Paste cfgGroups after this line //////////////// 

/*
	class Sedra_Rotary
	{
		displayName="Rotary";
	};
	class Sedra_APC
	{
		displayName="APC";
	};
	class Sedra_Motor
	{
		displayName="Motorized";
	};
	class Sedra_Tank
	{
		displayName="Tanks";
		


		editorSubCategory = "Sedra_Rotary";