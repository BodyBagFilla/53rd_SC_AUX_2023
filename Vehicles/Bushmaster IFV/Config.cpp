class CfgPatches {
	class 53rd_Bushmaster {
		units[] = {"Bushmaster_IFV"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
class I_APC_tracked_03_cannon_F;
	class Bushmaster_IFV : I_APC_tracked_03_cannon_F
	{
		displayName="[MSR] Bushmaster IFV";
		author="Body";
		dlc = "53rd AUX";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		faction="53rd_MSR";
		editorCategory = "53rd_MSR_cat_faction";
		editorSubCategory = "53rd_Motor";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.64999998;
		tf_range=10000;
		crew="OPTRE_UNSC_ONI_Soldier_Operative";
		typicalCargo[]=
		{
			"OPTRE_UNSC_ONI_Soldier_Operative"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\Bushmaster IFV\warrior_ext_01_wd.paa",
			"53rd_SC_aux\Vehicles\Bushmaster IFV\warrior_ext_02_wd.paa",
			"A3\Armor_F\Data\camonet_green_CO.paa",
			"A3\armor_f\data\cage_olive_co.paa"
		};
	};
};