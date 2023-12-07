class CfgPatches {
	class 53rd_Land_Grizzly {
		units[] = {"53rd_Grizzly"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
class OPTRE_M850_UNSC;
	class 53rd_Grizzly: OPTRE_M850_UNSC
	{
		displayName="[53rd] M850 Grizzly";
		author="Redacted";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Tank";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelections[]=
		{
            "camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
            "camo9"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\Grizzly\turret_weapons_co.paa",
			"53rd_SC_aux\Vehicles\Grizzly\53GrizzlyRear.paa",
			"53rd_SC_aux\Vehicles\Grizzly\53GrizzlyTracks.paa",
			"53rd_SC_aux\Vehicles\Grizzly\53GrizzlyHull.paa",
			"53rd_SC_aux\Vehicles\Grizzly\53GrizzlyCannon.paa",
			"53rd_SC_aux\Vehicles\Grizzly\53GrizzlyDetails1.paa",
			"53rd_SC_aux\Vehicles\Grizzly\53GrizzlyFront.paa",
			"53rd_SC_aux\Vehicles\Grizzly\53GrizzlyTurret.paa",
            "53rd_SC_aux\Vehicles\Grizzly\glass_co.paa",
            "53rd_SC_aux\Vehicles\Grizzly\lights_co.paa",
		};
	};
};