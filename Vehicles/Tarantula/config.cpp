class CfgPatches {
	class 53rd_Land_Tarantula {
		units[] = {"53rd_Tarantula"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
class OPTRE_tarantula_01;
	class 53rd_Tarantula: OPTRE_tarantula_01
	{
		displayName="[53rd] Tarantula";
		author="Redacted";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\Tarantula\tex\tarantula_main.paa",
			"53rd_SC_aux\Vehicles\Tarantula\tex\tarantula_other.paa",
			"53rd_SC_aux\Vehicles\Tarantula\tex\tarantula_turret.paa",
		};
	};
};