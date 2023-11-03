class CfgPatches {
	class MSR_TUSK {
		units[] = {"Tusk_MSR_MBT"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
class I_MBT_03_cannon_F;
	class Tusk_MSR_MBT : I_MBT_03_cannon_F
	{
		displayName="[MSR] Basilisk MBT";
		author="Body";
		dlc = "53rd AUX";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		faction="53rd_MSR";
		editorCategory = "53rd_MSR_cat_faction";
		editorSubCategory = "53rd_Tank";
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
			"Camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\TUSK\53rd_TUSK_Body_Texture_MSR.paa",
			"53rd_SC_aux\Vehicles\TUSK\53rd_Tusk_Turret_Texture_MSR.paa",
			"53rd_SC_aux\Vehicles\TUSK\53rd_TUSK_Turret_MG_Texture_MSR.paa",
			"A3\Armor_F\Data\camonet_green_CO.paa"
		};
	};
};