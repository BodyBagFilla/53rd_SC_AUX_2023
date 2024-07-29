class cfgAmmo
{
	class B_95x40_ap;
	class B_762x51_19_FMJ;
	class B_5x23_19_FMJ;
	class OPTRE_B_127x40_Ball;
	class Titan_AT;
    class OPTRE_M41_Rocket_HEAT;
	class OPTRE_65_Creedmoor;
	class OPTRE_M41_Rocket_HEAT_SACLOS;
	class OPTRE_M41_Rocket_HEAT_Thermal;
	class M_NLAW_AT_F;
	class M_Titan_AT;
	class M_Titan_AA;

	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class SensorTemplateDataLink;

    class 53rd_M41_Rocket_MEME: OPTRE_M41_Rocket_HEAT
    {
        hit = 2000;
		indirectHit = 150;
		indirectHitRange = 10;
		explosive = 1;
		allowAgainstInfantry = 1;
		mass = 2000;
    };
	class 53rd_M41_Rocket_HEAT : M_NLAW_AT_F {
		model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";
		warheadName = "TandemHEAT";
		hit = 125;
		indirectHit = 25;
		indirectHitRange = 3.5;
		explosive = 0.80000001;
		cost = 300;
		airFriction = 0;
		sideairFriction = 0;
		coefGravity = 0.0;
		maxSpeed = 150;
		typicalSpeed = 150;
		initTime = 0.2;
		thrustTime = 0.80000001;
		thrust = 100;
		fuseDistance = 20;
		simulationStep = 0.02;
		timeToLive = 30;
		effectsMissile = "missile3";
		whistleDist = 20;
		irLock = 0;
		airLock = 0;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		submunitionAmmo = "ammo_Penetrator_Titan_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		flightProfiles[] = { "Direct" };
		proximityExplosionDistance = 0;
		maneuvrability = 0;
		class Direct {};
		weaponLockSystem = 16;
		lockType = 1;
		class Components {};
	};
	class 53rd_M41_Rocket_HEAT_Guided : M_Titan_AT {
		warheadName = "TandemHEAT";
		submunitionAmmo = "ammo_Penetrator_Titan_AT";
		effectsMissile = "missile3";
		hit = 125;
		indirectHit = 40;
		proximityExplosionDistance = 0;
		indirectHitRange = 4;
		explosive = 0.80000001;
		irLock = 1;
		airLock = 1;
		laserLock = 0;
		nvLock = 0;
		cmImmunity = 0.35;
		simulationStep = 0.0020000001;
		airFriction = 0.064999998;
		sideAirFriction = 0.30000001;
		manualControl = 1;
		maneuvrability = 24;
		maxControlRange = 10000;
		missileKeepLockedCone = 75;
		missileLockCone = 10;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 111;
		trackOversteer = 0.9;
		trackLead = 0.8;
		weaponLockSystem = 2;
		initTime = 0;
		thrustTime = 6;
		thrust = 40;
		maxSpeed = 210;

		class Components {
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent : SensorTemplateIR {
						class AirTarget {
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};

						class GroundTarget {
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};

						maxTrackableSpeed = 100;
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						maxTrackableATL = 500;
					};
				};
			};
		};

		class ace_missileguidance {
			enabled = 0; // Enable missile guidance (0-disabled, 1-enabled)
			minDeflection = 0.00025;  // Minimum flap deflection for guidance
			maxDeflection = 0.001;  // Maximum flap deflection for guidance
			incDeflection = 0.0005;  // The increment in which deflection adjusts
			canVanillaLock = 1;  // Enable vanilla lock, only applicable to non-cadet modes, 'recruit' always uses vanilla locking (0-disabled, 1-enabled)
			defaultSeekerType = "SACLOS";  // Default seeker type
			seekerTypes[] = { "SALH", "SACLOS" };  // Seeker types available
			defaultSeekerLockMode = "LOAL";  // Default seeker lock mode
			seekerLockModes[] = { "LOAL", "LOBL" };  // Seeker lock modes available
			seekerAngle = 90;  // Angle in front of the missile which can be searched
			seekerAccuracy = 1;  // Seeker accuracy multiplier
			seekerMinRange = 1;  // Minimum range from the missile which the seeker can visually search
			seekerMaxRange = 2500;  // Maximum from the missile which the seeker can visually search
			defaultAttackProfile = "LIN";  // Default attack profile
			attackProfiles[] = { "LIN", "DIR" };  // Attack profiles available
		};
	};
	class 53rd_M41_Rocket_HEAT_SACLOS : M_Titan_AT {
		model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";
		warheadName = "TandemHEAT";
		submunitionAmmo = "ammo_Penetrator_Titan_AT";
		effectsMissile = "missile3";
		timeToLive = 30;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512 + 256"; //Vehicles, Tanks, and planes.
		allowAgainstInfantry = 0;

		//Warhead
		hit = 125;
		indirectHit = 40; //Actual damage is IH/(x^4) where x is a multiple of indirectHitRange.
		indirectHitRange = 4;  //Remember that 4x IHR is the range at which damage stops.
		explosive = 0.8; //values above 0.7 remove AP ability.
		fuseDistance = 10;

		//commenting topdown out till we can get it working 100%
		flightProfiles[] = { "Direct" }; //, "TopDown" 
		class Direct {};
		class TopDown : Direct {
			ascendHeight = 150.0;
			descendDistance = 200.0;
			minDistance = 150.0;
			ascendAngle = 70.0;
		};

		//Seeker, motor, and aerodynamics configuration are found in the included file.
		//#include"\OPTRE_Weapons\Rockets\_includes\M41_Ammo_SACLOS.hpp"
	};
	class 53rd_M41_Rocket_HEAT_Thermal : M_Titan_AA {
		model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";



		//Seeker, motor, and aerodynamics configuration are found in the included file.
		//#include"\OPTRE_Weapons\Rockets\_includes\M41_Ammo_HeatSeek.hpp"
	};
	class 53rd_M41_Rocket_HEAT_Laser : M_Titan_AT{
		//Seeker, motor, and aerodynamics configuration are found in the included file.
		//#include"\OPTRE_Weapons\Rockets\_includes\M41_Ammo_Laser.hpp"
	};

	class 53rd_M41_Rocket_HE: M_Titan_AT{
		model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";
		effectsMissile = "missile3";
		timeToLive = 30;
		cost = 500;

		//Base class for HE meant to provide proximity fuse basis.
		//Unguided
		//AI settings
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128"; //Infantry and Vehicles.
		warheadName = "HE";

		//Warhead
		hit = 125;
		indirectHit = 125;
		indirectHitRange = 10;
		explosive = 1;
		submunitionAmmo = "";

		//#include"\OPTRE_Weapons\Rockets\_includes\M41_Ammo_Laser.hpp"

	};
	class 53rd_M41_Rocket_HE_SACLOS : M_Titan_AT{
		model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";
		effectsMissile = "missile3";
		timeToLive = 30;
		cost = 500;
		
		//Warhead
		hit = 125;
		indirectHit = 125;
		indirectHitRange = 10;
		explosive = 1;
		submunitionAmmo = "";


		//commenting topdown out till we can get it working 100%
		flightProfiles[] = { "Direct" }; //, "TopDown" 
		class Direct {};
		class TopDown : Direct {
			ascendHeight = 150.0;
			descendDistance = 200.0;
			minDistance = 150.0;
			ascendAngle = 70.0;
		};
		//#include"\OPTRE_Weapons\Rockets\_includes\M41_Ammo_SACLOS.hpp"

	};
	class 53rd_M41_Rocket_HE_Thermal : M_Titan_AA {
		model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";
		effectsMissile = "missile3";
		timeToLive = 30;
		cost = 500;

		//Warhead
		hit = 125;
		indirectHit = 125;
		indirectHitRange = 10;
		explosive = 1;
		submunitionAmmo = "";
		//#include"\OPTRE_Weapons\Rockets\_includes\M41_Ammo_HeatSeek.hpp"
		proximityExplosionDistance = 10;
	};
	class 53rd_M41_Rocket_HE_Laser : M_Titan_AT {
		model = "\OPTRE_Weapons\Rockets\M41_rocket.p3d";
		effectsMissile = "missile3";
		timeToLive = 30;
		cost = 500;

		//Warhead
		hit = 125;
		indirectHit = 125;
		indirectHitRange = 10;
		explosive = 1;
		submunitionAmmo = "";
		//Seeker, motor, and aerodynamics configuration are found in the included file.
		//#include"\OPTRE_Weapons\Rockets\_includes\M41_Ammo_Laser.hpp"
		proximityExplosionDistance = 10;
	};

	class 53rd_B_95x40_FMJ : B_95x40_ap{
		caliber = 4;
		hit = 15;
		initspeed = 600;
		typicalSpeed = 600;
	};
	class 53rd_B_95x40_JHP : B_95x40_ap{
		caliber = 1;
		hit = 22;
		initspeed = 1000;
		typicalSpeed = 1000;
	};
	class 53rd_B_762x51_JHP : B_762x51_19_FMJ{
		caliber = 1;
		hit = 24;
		initspeed = 1000;
		typicalSpeed = 1000;
	};
	class 53rd_B_762x51_SLAP : B_762x51_19_FMJ{
		caliber = 7;
		hit = 16;
		initspeed = 1000;
		typicalSpeed = 1000;
	};
	class 53rd_B_5x23_HV : B_5x23_19_FMJ{
		caliber = 3;
		hit = 11;
		initspeed = 750;
		typicalSpeed = 750;
	};
	class 53rd_B_5x23_JHP : B_5x23_19_FMJ{
		caliber = 0.5;
		hit = 16;
		initspeed = 450;
		typicalSpeed = 450;
	};
	class 53rd_B_127x40 : OPTRE_B_127x40_Ball{
		caliber = 4;
		hit = 45;
		initspeed = 600;
		typicalSpeed = 600;
	};
	class 53rd_B_127x40_AP : 53rd_B_127x40{
		caliber = 7;
		hit = 40;
		initspeed = 650;
		typicalSpeed = 650;
	};
	class 53rd_B_127x40_JHP : 53rd_B_127x40{
		caliber = .5;
		hit = 65;
		initspeed = 900;
		typicalSpeed = 900;
	};
	class 53rd_B_127x40_SLAP : 53rd_B_127x40{
		caliber = 8;
		hit = 70;
		initspeed = 750;
		typicalSpeed = 750;
	};
	class 53rd_B_65x48_FMJ : OPTRE_65_Creedmoor{
		caliber = 2.2;
		hit = 14;
		typicalSpeed = 785;
	};
	class 53rd_B_65x48_AP : 53rd_B_65x48_FMJ{
		caliber = 3.4;
		hit = 17;
		typicalSpeed = 950;
	};
	class 53rd_B_65x48_JHP : 53rd_B_65x48_FMJ{
		caliber = 0.5;
		hit = 23;
		typicalSpeed = 900;
	};
	class 53rd_B_65x48_SLAP : 53rd_B_65x48_FMJ{
		caliber = 5;
		hit = 20;
		typicalSpeed = 1000;
	};
};