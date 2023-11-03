class CfgPatches {
	class 53rd_Bench {
		units[] = 
        {
            "53rd_Bench_F"
        };
		weapons[] = 
        {
            "WIP"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CfgVehicles {
	class Pod_Heli_Transport_04_crewed_base_F;
	class Land_Pod_Heli_Transport_04_bench_F: Pod_Heli_Transport_04_crewed_base_F
	{
		transportSoldier=8;
	};
	class 53rd_Bench_F: Land_Pod_Heli_Transport_04_bench_F
	{
		scope=0;
		faction="BLU_F";
		side=1;
		crew="B_HeliPilot_F";
		typicalCargo[]=
		{
			"B_Soldier_lite_F"
		};
	};
}