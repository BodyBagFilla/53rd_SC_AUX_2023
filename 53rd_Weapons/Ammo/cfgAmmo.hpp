class cfgAmmo
{
	class B_95x40_ap;
	class B_762x51_19_FMJ;
	class B_5x23_19_FMJ;
	class OPTRE_B_127x40_Ball;
	class Titan_AT;
    class OPTRE_M41_Rocket_HEAT;
    class 53rd_M41_Rocket_MEME: OPTRE_M41_Rocket_HEAT
    {
        hit = 2000;
		indirectHit = 150;
		indirectHitRange = 10;
		explosive = 1;
		allowAgainstInfantry = 1;
		mass = 2000;
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
};