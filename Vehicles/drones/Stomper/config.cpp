class CfgPatches {
	class 53rd_drone_Stomper {
		units[] = {"53rd_Stomper"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
class B_UGV_01_rcws_F;
	class 53rd_Stomper: B_UGV_01_rcws_F
	{
		displayName="[53rd] Stomper";
		author="Redacted";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "EdSubcat_Drones";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\drones\Stomper\tex\ugv_ext_co.paa",
			"53rd_SC_aux\Vehicles\drones\Stomper\tex\ugv_int_co.paa",
			"53rd_SC_aux\Vehicles\drones\Stomper\tex\ugv_turret_co.paa",
		};
	};
};