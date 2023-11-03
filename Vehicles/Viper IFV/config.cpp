class CfgPatches {
	class 53rd_Viper {
		units[] = {"53rd_Viper_AFV"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
class B_APC_Wheeled_03_cannon_F;
	class 53rd_Viper_AFV: B_APC_Wheeled_03_cannon_F
	{
		displayName="[MSR] Viper AFV";
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
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
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\Viper IFV\APC_MSR_CO.paa",
			"53rd_SC_aux\Vehicles\Viper IFV\APC_Wheeled_MSR_Ext2_CO.paa",
			"53rd_SC_aux\Vehicles\Viper IFV\RCWS30_MSR_CO.paa",
			"53rd_SC_aux\Vehicles\Viper IFV\APC_Wheeled_MSR_Ext_alpha_CO.paa",
			"A3\Armor_F\Data\camonet_green_CO.paa",
			"A3\armor_f\data\cage_olive_co.paa"
		};
	};
};

