class CfgPatches {
	class MSR_MRAP {
		units[] = {"MSR_MRAP_APC","MSR_MRAP_GMG","MSR_MRAP_HMG"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
	class I_MRAP_03_F;
	class MSR_MRAP_APC : I_MRAP_03_F
	{
		displayName="[MSR] Fennic APC";
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
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\Fennic\MRAP_03_ext_CO.paa",
			"53rd_SC_aux\Vehicles\Fennic\Turret_CO.paa"
		};
	};
	class I_MRAP_03_hmg_F;
	class MSR_MRAP_HMG : I_MRAP_03_hmg_F
	{
		displayName="[MSR] Fennic HMG";
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
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\Fennic\MRAP_03_ext_CO.paa",
			"53rd_SC_aux\Vehicles\Fennic\Turret_CO.paa"
		};
	};
	class I_MRAP_03_gmg_F;
	class MSR_MRAP_GMG : I_MRAP_03_gmg_F
	{
		displayName="[MSR] Fennic GMG";
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
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\Fennic\MRAP_03_ext_CO.paa",
			"53rd_SC_aux\Vehicles\Fennic\Turret_CO.paa"
		};
	};
};