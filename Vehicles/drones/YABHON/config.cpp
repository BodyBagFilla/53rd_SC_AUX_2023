class CfgPatches {
	class 53rd_drone_YABHON {
		units[] = {"53rd_YABHON"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
class B_UAV_02_dynamicLoadout_F;
	class 53rd_YABHON: B_UAV_02_dynamicLoadout_F
	{
		displayName="[53rd] Yabhon-R3";
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
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\drones\YABHON\tex\uav_co.paa",
		};
	};
};