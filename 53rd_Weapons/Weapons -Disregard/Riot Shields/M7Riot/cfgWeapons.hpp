class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_M7
	class OPTRE_Riot_Shield_Icon_Attachments : UnderBarrelSlot
	{
		iconPinpoint = "center";
		iconPosition[] = { 1,0 };
		iconScale = 0.0099999998;
		iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
		class compatibleItems
		{
			OPTRE_Riot_Shield_Icon_A2S = 1;
			OPTRE_Riot_Shield_Icon_UNSC = 1;
			OPTRE_Riot_Shield_Icon_Police = 1;
			OPTRE_Riot_Shield_Icon_CMA = 1;
			OPTRE_Riot_Shield_Icon_MEU = 1;
			OPTRE_Riot_Shield_Icon_Fist = 1;
			OPTRE_Riot_Shield_Icon_Innie = 1;
			OPTRE_Riot_Shield_Icon_Jolly = 1;
			OPTRE_Riot_Shield_Icon_ODST = 1;
			OPTRE_Riot_Shield_Icon_ODSTBlue = 1;
			OPTRE_Riot_Shield_Icon_Virgil = 1;
		};
	};
	class 53rd_M7_Riot_Shield : OPTRE_M7
	{
		author = "53rd Aux Team";
		baseWeapon = "53rd_M7_Riot_Shield";
		scope = 2;
		displayName = "[53rd] Riot Shield (M7)";

		magazines[] = { "53rd_48Rnd_5x23mm_Mag" };
		magazineWell[] = { "53rd_Magwell_M7" };

		model = "\OPTRE_Weapons\RiotShield\riotshield_M7.p3d";
		hiddenSelections[] =
		{
			"camoShield",
			"camoWindshield",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"OPTRE_Weapons\RiotShield\data\Body_co.paa",
			"OPTRE_Weapons\riotshield\data\body_ca.paa",
			"OPTRE_Weapons\smg\data\m7_m7_co.paa",
			"OPTRE_Weapons\smg\data\m7_magazine_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"OPTRE_Weapons\RiotShield\data\body.rvmat",
			"OPTRE_Weapons\riotshield\data\glass.rvmat",
			"optre_weapons\smg\data\m7_m7.rvmat",
			"optre_weapons\smg\data\m7_magazine.rvmat"
		};
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\m7_human.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\spartan\m7_spartan.rtm"
		};
		type = 1;
		inertia = 0.5;
		dexterity = 1.25;
		class OpticsModes
		{
			class ironsight
			{
				cameraDir = "eye_dir";
				discreteDistance[] = { 100 };
				discreteDistanceCameraPoint[] =
				{
					"eye"
				};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 0;
				opticsPPEffects[] =
				{
					"",
					""
				};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
			class shieldView
			{
				cameraDir = "eye2_dir";
				discreteDistance[] = { 100 };
				discreteDistanceCameraPoint[] =
				{
					"eye2"
				};
				discreteDistanceInitIndex = 0;
				discretefov[] = {};
				discreteInitIndex = 0;
				distancezoommax = 100;
				distancezoommin = 100;
				maxZeroing = 100;
				memorypointcamera = "eye2";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] =
				{
					"",
					""
				};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class FlashLight
		{
			color[] = { 180,180,180 };
			ambient[] = { 0.89999998,0.89999998,0.89999998 };
			intensity = 750;
			size = 1;
			innerAngle = 5;
			outerAngle = 45;
			coneFadeCoef = 10;
			position = "flash_dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 150;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 100;
				hardLimitEnd = 170;
			};
			scale[] = { 0 };
		};
		class close : FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.050000001;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 50;
			maxRangeProbab = 0.039999999;
			showToPlayer = 0;
		};
		class short : close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.039999999;
		};
		class medium : close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000001;
			midRange = 400;
			midRangeProbab = 0.60000002;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far : close
		{
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.039999999;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.0099999998;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 10;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "optre_m7_silencer" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "OPTRE_M7_Sight" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M7_Laser",
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Vis_Red_Laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	class 53rd_M7_Riot_Shield_Desert : 53rd_M7_Riot_Shield{
		baseWeapon = "53rd_M7_Riot_Shield_Desert";
		displayName = "[53rd] Riot Shield (M7) (Desert)";
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\RiotShield\data\desert\body_co.paa","OPTRE_Weapons\riotshield\data\body_ca.paa","OPTRE_Weapons\smg\data\m7_m7_co.paa","OPTRE_Weapons\smg\data\m7_magazine_co.paa" };
	};
	class 53rd_M7_Riot_Shield_Snow : 53rd_M7_Riot_Shield{
		baseWeapon = "53rd_M7_Riot_Shield_Snow";
		displayName = "[53rd] Riot Shield (M7) (Snow)";
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\RiotShield\data\snow\Body_co.paa","OPTRE_Weapons\riotshield\data\body_ca.paa","OPTRE_Weapons\smg\data\m7_m7_co.paa","OPTRE_Weapons\smg\data\m7_magazine_co.paa" };
	};
	class 53rd_M7_Riot_Shield_Urban : 53rd_M7_Riot_Shield{
		baseWeapon = "53rd_M7_Riot_Shield_Urban";
		displayName = "[53rd] Riot Shield (M7) (Urban)";
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\RiotShield\data\police\body_co.paa","OPTRE_Weapons\riotshield\data\body_ca.paa","OPTRE_Weapons\smg\data\m7_m7_co.paa","OPTRE_Weapons\smg\data\m7_magazine_co.paa" };
	};
};