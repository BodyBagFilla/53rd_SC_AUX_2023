class CfgPatches {
	class 53rd_Longsword {
		units[] = {"53rd_Longsword"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[]={"OPTRE_Core"};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
    class DMNS_B_F_VTOL_01_vehicle_F;
	class 53rd_Longsword: DMNS_B_F_VTOL_01_vehicle_F
		{
			dlc="53rd";
			author="Body";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			forceInGarage=1;
			displayName="[53rd] Longsword";
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_FixedWing";
			crew="53rd_Volare_airmen_unit";
			mainRotorSpeed=3;
			backRotorSpeed=3;
			tf_hasLRradio=1;
			tf_isolatedAmount=0.40000001;
			tf_range=12000;
			typicalCargo[]=
			{
			};
			weapons[]=
			{
				"CMFlareLauncher",
				"OPTRE_110mm_Gatling",
				"missiles_ASRAAM",
				"OPTRE_bomblauncher_2000lb"
			};
			magazines[]=
			{
				"168Rnd_CMFlare_Chaff_Magazine",
				"OPTRE_600Rnd_110mm",
				"OPTRE_600Rnd_110mm",
				"4Rnd_AAA_missiles",
				"4Rnd_AAA_missiles",
				"OPTRE_16Rnd_2000lb_bomb",
				"OPTRE_16Rnd_2000lb_bomb",
				"OPTRE_16Rnd_2000lb_bomb",
			};
		};
};