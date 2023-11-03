class CfgPatches {
	class 53rd_drone_Kingfisher {
		units[] = {"53rd_Kingfisher"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
class OPTRE_UAV_01_D;
	class 53rd_Kingfisher: OPTRE_UAV_01_D
	{
		displayName="[53rd] KingFisher";
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
			"camo_1",
			"camo_2",
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Vehicles\drones\KingFisher\tex\uav_1_co.paa",
			"53rd_SC_aux\Vehicles\drones\KingFisher\tex\uav_2_co.paa",
		};
	};
};