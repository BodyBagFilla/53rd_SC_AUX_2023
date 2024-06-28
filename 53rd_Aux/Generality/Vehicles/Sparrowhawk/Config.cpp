class CfgPatches {
	class 53rd_Sparrow {
		units[] = {"53rd_Sparrowhawk"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[]={"OPTRE_Core"};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
	class OPTRE_AV22_Sparrowhawk
		{
			class Turrets
			{ 
			 class CopilotTurret;
			}
		};
	class 53rd_Sparrowhawk: OPTRE_AV22_Sparrowhawk
		{
		displayName="[53rd] AV-22M Sparrowhawk";
			author="Article 2 Studios & 53rd";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_FixedWing";
			fuelCapacity=100;
			tf_range=120000;
			crew="53rd_Volare_airmen_unit";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"attach_noseLaser",
				"attach_CannonHeavy",
				"attach_Decal1",
				"attach_Decal2"
			};
			hiddenSelectionsTextures[]=
			{
				"\53rd_Aux\Generality\Vehicles\Sparrowhawk\53rd_Sparrowhawk_Body_01_CO.paa",
				"\53rd_Aux\Generality\Vehicles\Sparrowhawk\53rd_Sparrowhawk_Body_02_co.paa",
				"\53rd_Aux\Generality\Vehicles\Sparrowhawk\53rd_Sparrowhawk_Body_03_co.paa",
				"\53rd_Aux\Generality\Vehicles\Sparrowhawk\53rd_Sparrowhawk_Body_04_co.paa",
				"\53rd_Aux\Generality\Vehicles\Sparrowhawk\53rd_Sparrowhawk_Body_05_co.paa",
				"optre_vehicles\sparrowhawk\data\autocannon_standard_co.paa",
				"optre_vehicles\sparrowhawk\data\feed_autocannon_standard_co.paa"
			};
			weapons[]=
			{
				"OPTRE_MISRIAH_Cannon",
				"CMFlareLauncher"
			};
			magazines[]=
			{
				"OPTRE_2500Rnd_50mm_HE2",
				"OPTRE_2500Rnd_50mm_APFSDS",
				"168Rnd_CMFlare_Chaff_Magazine"
			};
			class eventhandlers
				{
					class FIR_AWS_Common_EH
					{
						Init = "[_this select 0,’yes’] execVM ""\FIR_AirWeaponSystem_US\Script\init\init.sqf"";";		
					};			
				};

			class Turrets: Turrets
			{
				class CopilotTurret: CopilotTurret
				{
					weapons[]=
					{
						"OPTRE_M230",
						"Laserdesignator_mounted"
					};
					magazines[]=
					{
						"OPTRE_100Rnd_50mm_HE",
						"OPTRE_100Rnd_50mm_HE",
						"OPTRE_100Rnd_50mm_HE",
						"OPTRE_100Rnd_50mm_APFSDS",
						"Laserbatteries"
					};
				};
			};
			tf_isolatedAmount=0.40000001;
			tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
			tf_hasLRradio=1;
			enableRadio=1;
		};
};