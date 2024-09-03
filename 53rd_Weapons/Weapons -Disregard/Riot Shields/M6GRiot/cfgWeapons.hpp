class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
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
	class 53rd_UNSC_M6G;
	class 53rd_M6G_Riot_Shield : 53rd_UNSC_M6G
	{
		author = "53rd Aux Team";
		baseWeapon = "53rd_M6G_Riot_Shield";
		scope = 2;
		displayName = "[53rd] Riot Shield (M6G)";
		magazines[] = { "53rd_8Rnd_127x40_Mag" };
		magazineWell[] = { "53rd_Magwell_M6G" };

		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = { "OPTRE_M6_silencer" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = { "OPTRE_M6G_Laser", "OPTRE_M6G_Flashlight", "OPTRE_M6G_Vis_Red_Laser", "TCF_M6_Flashlight_IR"};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {
					"OPTRE_M6G_Scope",
					"OPTRE_M7_Sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red"
				};
			};
		};

		model = "\OPTRE_Weapons\RiotShield\riotshield_M6G.p3d";
		hiddenSelections[] =
		{
			"camoShield",
			"camoWindshield",
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"OPTRE_Weapons\RiotShield\data\Body_co.paa",
			"OPTRE_Weapons\riotshield\data\body_ca.paa",
			"\OPTRE_Weapons\Pistol\data\M6G_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"OPTRE_Weapons\RiotShield\data\body.rvmat",
			"OPTRE_Weapons\riotshield\data\glass.rvmat",
			"optre_weapons\pistol\data\m6g.rvmat"
		};
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\m6g_human.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\RiotShield\data\anim\spartan\m6g_spartan.rtm"
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
	};
	class 53rd_M6G_Riot_Shield_Desert : 53rd_M6G_Riot_Shield{
		baseWeapon = "53rd_M6G_Riot_Shield_Desert";
		displayName = "[53rd] Riot Shield(M6G) (Desert)";
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\RiotShield\data\desert\body_co.paa","OPTRE_Weapons\riotshield\data\body_ca.paa","\OPTRE_Weapons\Pistol\data\M6G_CO.paa" };
	};
	class 53rd_M6G_Riot_Shield_Snow : 53rd_M6G_Riot_Shield{
		baseWeapon = "53rd_M6G_Riot_Shield_Snow";
		displayName = "[53rd] Riot Shield(M6G) (Snow)";
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\RiotShield\data\snow\Body_co.paa","OPTRE_Weapons\riotshield\data\body_ca.paa","\OPTRE_Weapons\Pistol\data\M6G_CO.paa" };
	};
	class 53rd_M6G_Riot_Shield_Urban : 53rd_M6G_Riot_Shield{
		baseWeapon = "53rd_M6G_Riot_Shield_Urban";
		displayName = "[53rd] Riot Shield(M6G) (Urban)";
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\RiotShield\data\police\body_co.paa","OPTRE_Weapons\riotshield\data\body_ca.paa","\OPTRE_Weapons\Pistol\data\M6G_CO.paa" };
	};
};