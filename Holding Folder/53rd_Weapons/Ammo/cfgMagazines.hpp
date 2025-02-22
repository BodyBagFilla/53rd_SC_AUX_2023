class CfgMagazines {
	class TCF_1Rnd_50x137_HEAT;
	class Titan_AT;
	class OPTRE_60Rnd_762x51_Mag;
	class OPTRE_36Rnd_95x40_Mag;
	class 36Rnd_95x40_br_55;
	class OPTRE_100Rnd_95x40_Box;
	class TCF_20Rnd_86x70_Mag;
	class OPTRE_6Rnd_8Gauge_Pellets;
	class OPTRE_12Rnd_12Gauge_Pellets;
	class OPTRE_4Rnd_145x114_APFSDS_Mag;
	class OPTRE_8Rnd_127x40_Mag;
	class OPTRE_60Rnd_5x23mm_Mag;
	class Commando_20Rnd_65_Mag;
	class OPTRE_M41_Twin_HEAT_SACLOS_ProximityFuse;
	class OPTRE_M41_Twin_HEAT_Thermal;
	class 53rd_M41_Rocket_Twin_MEME : TCF_1Rnd_50x137_HEAT
	{
		displayname = "M19 Death Rocket";
		displaynameshort = "DEATH";
		descriptionshort = "High Explosive Anti Tank<br/>Un-guided";
		ammo = "53rd_M41_Rocket_MEME";
		mass = 2000;

	};
	//////////// 7.62x51 (MA Variants, M247, M33, CR-77) ////////////
	//NEEDED: 
		//SS
		//JHP
		//128 DRUM SLAP (make 19th M392 DMR's HVAP?)
#pragma region 60Rnd 7.62x51
	//Standard (19TH FMJ)
	class 53rd_60Rnd_762x51_Mag : OPTRE_60Rnd_762x51_Mag{
	dlc = "53rd Aux";
	author = "53rd Aux Team";
	model = "\OPTRE_Weapons\Ammo\MA5Ammo.p3d";
	displayname = "60Rnd 7.62x51mm Magazine [53rd]";
	displaynameshort = "M118 7.62x51mm";
	ammo = "B_762x51_19_FMJ";
	count = 60;
	initspeed = 900;
	picture = "\OPTRE_weapons\ar\icons\magazine.paa";
	descriptionshort = "60 Round Magazine<br/>7.62x51mm";
	mass = 18;
	tracersEvery = 0;
	lastRoundsTracer = 5;
	};
	class 53rd_60Rnd_762x51_Mag_Tracer : 53rd_60Rnd_762x51_Mag
	{
		dlc = "53rd Aux Team";
		displayname = "60Rnd 7.62x51mm Magazine (Tracer) [53rd]";
		displaynameshort = "M118 7.62x51mm Tracer";
		ammo = "B_762x51_19_FMJ";
		descriptionshort = "60 Round Magazine<br/>7.62x51mm<br/>Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 60;
	};
	//OPTRE Ball
	class 53rd_60Rnd_762x51_Mag_Ball : 53rd_60Rnd_762x51_Mag{
	initspeed = 900;
	ammo = "OPTRE_B_762x51_Ball";
	displayname = "60Rnd 7.62x51mm Magazine [53rd]";
	displaynameshort = "7.62x51mm";
	descriptionShort = "60 Round Magazine<br/>7.62x51mm<br/>";
	scopeArsenal = 0;
	mass = 18;
	};
	//AP
	class 53rd_60Rnd_762x51_Mag_AP : 53rd_60Rnd_762x51_Mag{
		initspeed = 1000;
		ammo = "B_762x51_19_AP";
		displayname = "60Rnd 7.62x51mm AP Magazine [53rd]";
		displaynameshort = "7.62x51mm AP";
		descriptionShort = "60 Round Magazine<br/>7.62x51mm<br/>Armor-Piercing";
		mass = 18;
	};
	class 53rd_60Rnd_762x51_Mag_APT : 53rd_60Rnd_762x51_Mag_AP
	{
		displayname = "60Rnd 7.62x51mm AP Magazine (Tracer) [53rd]";
		displaynameshort = "7.62x51mm AP Tracer";
		descriptionShort = "60 Round Magazine<br/>7.62x51mm<br/>Armor-Piercing Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 60;
	};
	//JHP
	class 53rd_60Rnd_762x51_Mag_JHP : 53rd_60Rnd_762x51_Mag
	{
		initspeed = 905;
		ammo = "53rd_B_762x51_JHP";
		displayname = "60Rnd 7.62x51mm JHP Magazine [53rd]";
		displaynameshort = "7.62x51mm JHP";
		descriptionShort = "60 Round Magazine<br/>7.62x51mm<br/>Jacketed Hollow-Point";
		mass = 18;
	};
	class 53rd_60Rnd_762x51_Mag_JHPT : 53rd_60Rnd_762x51_Mag_JHP
	{
		displayname = "60Rnd 7.62x51mm JHP Magazine (Tracer) [53rd]";
		displaynameshort = "7.62x51mm JHP Tracer";
		descriptionShort = "60 Round Magazine<br/>7.62x51mm<br/>Jacketed Hollow-Point Tracer";
		tracersevery = 1;
		lastRoundsTracer = 60;
	};




#pragma endregion
#pragma region 32Rnd 7.62x51
	//Standard
	class 53rd_32Rnd_762x51_Mag : 53rd_60Rnd_762x51_Mag{
		displayname = "32Rnd 7.62x51mm Magazine";
		count = 32;
		initspeed = 950;
		descriptionshort = "32 Round Magazine<br/>7.62x51mm";
		mass = 10;
	};
	class 53rd_32Rnd_762x51_Mag_Tracer : 53rd_60Rnd_762x51_Mag_Tracer{
		displayname = "32Rnd 7.62x51mm Magazine (Tracers)";
		count = 32;
		descriptionshort = "32 Round Magazine<br/>7.62x51mm<br/>Tracer";
		tracersevery = 1;
		lastRoundTracer = 32;
	};
	//OPTRE Ball
	class 53rd_32Rnd_762x51_Mag_Ball : 53rd_60Rnd_762x51_Mag{
		displayname = "32Rnd 7.62x51mm Magazine";
		count = 32;
		initspeed = 950;
		scopeArsenal = 0;
		ammo = "OPTRE_B_762x51_Ball"
		descriptionshort = "32 Round Magazine<br/>7.62x51mm";
		mass = 10;
	}
	//AP
	class 53rd_32Rnd_762x51_Mag_AP : 53rd_60Rnd_762x51_Mag_AP{
		displayname = "32Rnd 7.62x51mm AP Magazine [53rd]";
		displaynameshort = "7.62x51mm AP";
		descriptionShort = "32 Round Magazine<br/>7.62x51mm<br/>Armor-Piercing";
		count = 32;
		mass = 10;
	};
	class 53rd_32Rnd_762x51_Mag_APT : 53rd_60Rnd_762x51_Mag_APT
	{
		displayname = "32Rnd 7.62x51mm AP Magazine (Tracer) [53rd]";
		displaynameshort = "7.62x51mm AP Tracer";
		descriptionShort = "32 Round Magazine<br/>7.62x51mm<br/>Armor-Piercing Tracers";
		tracersevery = 1;
		lastRoundTracer = 32; };
	//JHP
	class 53rd_32Rnd_762x51_Mag_JHP : 53rd_60Rnd_762x51_Mag_JHP
	{
		displayname = "32Rnd 7.62x51mm JHP Magazine [53rd]";
		displaynameshort = "7.62x51mm JHP";
		descriptionShort = "32 Round Magazine<br/>7.62x51mm<br/>Jacketed Hollow-Point";
		count = 32;
		mass = 10;
	};
	class 53rd_32Rnd_762x51_Mag_JHPT : 53rd_60Rnd_762x51_Mag_JHPT
	{
		displayname = "32Rnd 7.62x51mm JHP Magazine (Tracer) [53rd]";
		displaynameshort = "7.62x51mm JHP Tracer";
		descriptionShort = "32 Round Magazine<br/>7.62x51mm<br/>Jacketed Hollow-Point Tracers";
		tracersevery = 1;
		lastRoundTracer = 32; };
	//SS
	class 53rd_32Rnd_762x51_Mag_SS : 53rd_32Rnd_762x51_Mag
	{
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		initspeed = 340;
		ammo = "TCF_B_762x51_SS";
		displayname = "32Rnd 7.62x51mm SS Magazine [53rd]";
		displaynameshort = "7.62x51mm SS";
		descriptionShort = "32 Round Magazine<br/>7.62x51mm<br/>Subsonic";
		mass = 10;
	};
	class 53rd_32Rnd_762x51_Mag_SST : 53rd_32Rnd_762x51_Mag_SS
	{
		displayname = "32Rnd 7.62x51mm SS Magazine (Tracer) [53rd]";
		displaynameshort = "7.62x51mm SS Tracer";
		descriptionShort = "32 Round Magazine<br/>7.62x51mm<br/>Subsonic Tracers";
		tracersevery = 1;
		lastRoundTracer = 32;
	};
#pragma endregion
#pragma region 25Rnd 7.62x51
	//Standard (19TH FMJ)
	class 53rd_25Rnd_762x51_Mag : 53rd_60Rnd_762x51_Mag{
		displayname = "25Rnd 7.62x51mm Magazine [53rd]";
		displaynameshort = "7.62x51mm";
		count = 25;
		initspeed = 950;
		descriptionshort = "25 Round Magazine<br/>7.62x51mm<br/>";
		mass = 15;
	};	

	class 53rd_25Rnd_762x51_Mag_Tracer : 53rd_60Rnd_762x51_Mag_Tracer{
		displayname = "25Rnd 7.62x51mm Magazine (Tracers) [53rd]";
		displaynameshort = "7.62x51mm Tracer";
		count = 25;
		descriptionshort = "25 Round Magazine<br/>7.62x51mm<br/>Tracer";
		mass = 15;
	};	
	//OPTRE Ball
	class 53rd_25Rnd_762x51_Mag_Ball : 53rd_60Rnd_762x51_Mag{
		displayname = "25Rnd 7.62x51mm Ball Magazine [53rd]";
		displaynameshort = "7.62x51mm";
		ammo = "OPTRE_B_762x51_Ball";
		scopeArsenal = 0;
		count = 25;
		initspeed = 950;
		descriptionshort = "25 Round Magazine<br/>7.62x51mm<br/>";
		mass = 15;
	};
	//AP
	class 53rd_25Rnd_762x51_Mag_AP : 53rd_60Rnd_762x51_Mag_AP{
		displayname = "25Rnd 7.62x51mm AP Magazine [53rd]";
		displaynameshort = "7.62x51mm AP";
		descriptionShort = "25 Round Magazine<br/>7.62x51mm<br/>Armor-Piercing";
		count = 25;
		mass = 15;
	};
	class 53rd_25Rnd_762x51_Mag_APT : 53rd_60Rnd_762x51_Mag_APT
	{
		displayname = "25Rnd 7.62x51mm AP Magazine (Tracer) [53rd]";
		displaynameshort = "7.62x51mm AP Tracer";
		descriptionShort = "25 Round Magazine<br/>7.62x51mm<br/>Armor-Piercing Tracers";
		count = 25;
		mass = 15;
	};
#pragma endregion 
#pragma region Boxes 7.62x51
	//Standard 100
	class 53rd_100Rnd_762x51_Box : 53rd_60Rnd_762x51_Mag
	{
		dlc = "53rd Aux Team";
		model = "\OPTRE_Weapons\MG\M247_Mag_Proxy.p3d";
		modelSpecial = "\OPTRE_Weapons\MG\M247_Mag_Proxy.p3d";
		modelSpecialIsProxy = 1;
		displayname = "100Rnd 7.62x51mm Box Magazine";
		displaynameshort = "7.62x51mm";
		ammo = "OPTRE_B_762x51_Ball";
		count = 100;
		initspeed = 950;
		picture = "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort = "100 Round Box Magazine<br/>7.62x51mm";
		mass = 40;
		tracersEvery = 0;
		lastRoundsTracer = 10;

		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\optre_weapons\mg\data\m247_magazine_co.paa" };
	};
	class 53rd_100Rnd_762x51_Box_Tracer : 53rd_100Rnd_762x51_Box
	{
		displayname = "100Rnd 7.62x51mm Box Magazine (Tracers)";
		displaynameshort = "7.62x51mm Tracer";
		ammo = "OPTRE_B_762x51_Tracer";
		picture = "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort = "100 Round Box Magazine<br/>7.62x51mm<br/>Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 100;
	};
	class 53rd_400Rnd_762x51_Box : 53rd_100Rnd_762x51_Box{
		displayname = "400Rnd 7.62x51mm Box Magazine";
		descriptionshort = "400 Round Box Magazine<br/>7.62x51mm";
		count = 400;
		mass = 120;
	};
	class 53rd_400Rnd_762x51_Box_Tracer : 53rd_400Rnd_762x51_Box{
		displayname = "400Rnd 7.62x51mm Box Magazine (Tracers)";
		descriptionshort = "400 Round Box Magazine<br/>7.62x51mm<br/>Tracer";
		tracersEvery = 1;
		lastRoundTracer = 400;
	};
#pragma endregion 
#pragma region 15Rnd 7.62x51
	//Standard (19th FMJ)
	class 53rd_15Rnd_762x51_Mag : 53rd_60Rnd_762x51_Mag{
		displayname = "15Rnd 7.62x51mm Magazine";
		count = 15;
		initspeed = 900;
		descriptionshort = "15 Round Magazine<br/>7.62x51mm<br/>(Increased Muzzle Velocity)";
		mass = 10;
	};
	class 53rd_15Rnd_762x51_Mag_Tracer : 53rd_60Rnd_762x51_Mag_Tracer{
		displayname = "15Rnd 7.62x51mm Magazine (Tracers)";
		count = 15;
		descriptionshort = "15 Round Magazine<br/>7.62x51mm<br/>Tracer";
	};
	class 53rd_15Rnd_762x51_Mag_AP : 53rd_60Rnd_762x51_Mag_AP{
	displayname = "15Rnd 7.62x51mm Magazine";
	count = 15;
	descriptionshort = "15 Round Magazine<br/>7.62x51mm<br/>(Increased Muzzle Velocity)";
	mass = 10;
	};
	class 53rd_15Rnd_762x51_Mag_APT : 53rd_60Rnd_762x51_Mag_APT{
		displayname = "15Rnd 7.62x51mm Magazine (Tracers)";
		count = 15;
		descriptionshort = "15 Round Magazine<br/>7.62x51mm<br/>Tracer";
	};
	class 53rd_15Rnd_762x51_Mag_HVAP : 53rd_60Rnd_762x51_Mag{
		displayname = "15Rnd 7.62x51mm Magazine";	
		descriptionshort = "15 Round Magazine<br/>7.62x51mm<br/>(Increased Muzzle Velocity)";
		displaynameshort = "7.62x51mm HVAP";
		ammo = "B_762x51_19_HVAP";
		initspeed = 1000;
		count = 15;
		mass = 10;
	};
	class 53rd_15Rnd_762x51_Mag_HVAPT : 53rd_15Rnd_762x51_Mag_HVAP{
		displayname = "15Rnd 7.62x51mm Magazine (Tracers)";
		displaynameshort = "7.62x51mm HVAP Tracer";
		descriptionshort = "15 Round Magazine<br/>7.62x51mm<br/>High Velocity Armor Penetrator";
		tracersevery = 1;
		lastRoundsTracer = 15;
	};
	//JHP
	class 53rd_15Rnd_762x51_Mag_JHP : 53rd_60Rnd_762x51_Mag_JHP
	{
		displayname = "15Rnd 7.62x51mm JHP Magazine [53rd]";
		displaynameshort = "7.62x51mm JHP";
		descriptionShort = "15 Round Magazine<br/>7.62x51mm<br/>Jacketed Hollow-Point";
		count = 15;
		mass = 10;
	};
	class 53rd_15Rnd_762x51_Mag_JHPT : 53rd_15Rnd_762x51_Mag_JHP
	{
		displayname = "15Rnd 7.62x51mm JHP Magazine (Tracer) [53rd]";
		displaynameshort = "7.62x51mm JHP Tracer";
		descriptionShort = "15 Round Magazine<br/>7.62x51mm<br/>Jacketed Hollow-Point Tracers";
		tracersevery = 1;
		lastRoundsTracer = 15;
	};
#pragma endregion
#pragma region 128Rnd 7.62x51
	//Standard
	class 53rd_128Rnd_762x51_Drum : 53rd_60Rnd_762x51_Mag{
		displayname = "128Rnd 7.62x51mm Drum [53rd]";
		displaynameshort = "7.62x51mm";
		descriptionShort = "128 Round Drum<br/>7.62x51mm";
		mass = 45;
	};
	class 53rd_128Rnd_762x51_Drum_Tracer : 53rd_128Rnd_762x51_Drum{
		displayname = "128Rnd 7.62x51mm Drum (Tracer) [53rd]";
		displaynameshort = "7.62x51mm Tracer";
		descriptionShort = "128 Round Drum<br/>7.62x51mm<br/>Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 128;
	};
	//JHP
	class 53rd_128Rnd_762x51_Drum_JHP : 53rd_128Rnd_762x51_Drum{
		displayname = "128Rnd 7.62x51mm JHP Drum [53rd]";
		displaynameshort = "7.62x51mm JHP";
		descriptionShort = "128 Round Drum<br/>7.62x51mm<br/>Jacketed Hollow-Point";
		ammo = "TCF_B_762x51_JHP";
		mass = 45;
	};
	class 53rd_128Rnd_762x51_Drum_JHPT : 53rd_128Rnd_762x51_Drum_JHP{
		displayname = "128Rnd 7.62x51mm JHP Drum (Tracer) [53rd]";
		displaynameshort = "7.62x51mm JHP Tracer";
		descriptionShort = "128 Round Drum<br/>7.62x51mm<br/>Jacketed Hollow-Point Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 128;
	};
	//AP
	class 53rd_128Rnd_762x51_Drum_AP : 53rd_128Rnd_762x51_Drum{
		displayname = "128Rnd 7.62x51mm AP Drum [53rd]";
		displaynameshort = "7.62x51mm AP";
		descriptionShort = "128 Round Drum<br/>7.62x51mm<br/>Armor-Piercing";
		ammo = "TCF_B_762x51_AP";
		mass = 45;
	};
	class 53rd_128Rnd_762x51_Drum_APT : 53rd_128Rnd_762x51_Drum_AP{
		displayname = "128Rnd 7.62x51mm AP Drum (Tracer) [53rd]";
		displaynameshort = "7.62x51mm AP Tracer";
		descriptionShort = "128 Round Drum<br/>7.62x51mm<br/>Armor-Piercing Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 128;
	};
	//SLAP
	class 53rd_128Rnd_762x51_Drum_SLAP : 53rd_128Rnd_762x51_Drum{
		displayname = "128Rnd 7.62x51mm JHP Drum [53rd]";
		displaynameshort = "7.62x51mm SLAP";
		descriptionShort = "128 Round Drum<br/>7.62x51mm<br/>Saboted Light Armor Penetrator";
		ammo = "TCF_B_M118_SLAP_Caseless";
		mass = 45;
	};
	class 53rd_128Rnd_762x51_Drum_SLAPT : 53rd_128Rnd_762x51_Drum_SLAP{
		displayname = "128Rnd 7.62x51mm JHP Drum (Tracer) [53rd]";
		displaynameshort = "7.62x51mm SLAP Tracer";
		descriptionShort = "128 Round Drum<br/>7.62x51mm<br/>Saboted Light Armor Penetrator Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 128;
	};
#pragma endregion
	///////////////    9.5x40 (BR Variants, Lapua)    ///////////////
	//NEEDED:
		//STANDARD/FMJ
		//JHP
		//SS
	//DONE:
		//AP
		//HP-SAP
		//HVAP/SLAP
#pragma region 36Rnd 9.5x40
	//Standard
	class 53rd_36Rnd_95x40_Mag : OPTRE_36Rnd_95x40_Mag{
		dlc = "53rd Aux";
		author = "53rd Aux Team"
		model = "\OPTRE_Weapons\Ammo\BR55Ammo.p3d";
		displayname = "36Rnd 9.5x40mm Magazine [53rd]";
		displaynameshort = "9.5x40mm";
		ammo = "53rd_B_95x40_FMJ";
		count = 36;
		initspeed = 925;
		picture = "\OPTRE_weapons\br\icons\magazine.paa";
		descriptionshort = "36 Round Magazine<br/>9.5x40mm";
		tracersEvery = 0;
		lastRoundsTracer = 6;
		mass = 8;
	};
	class 53rd_36Rnd_95x40_Mag_Tracer : 53rd_36Rnd_95x40_Mag{
		displayname = "36Rnd 9.5x40mm Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x40mm Tracer";
		ammo = "53rd_B_95x40_FMJ";
		descriptionshort = "36 Round Magazine<br/>9.5x40mm<br/>Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 36;
	};
	//OPTRE Ball
	class 53rd_36Rnd_95x40_Mag_Ball : 36Rnd_95x40_br_55{
		author = "53rd Aux Team";
		displayname = "36Rnd 9.5x40mm Ball Magazine [53rd]";
		displaynameshort = "9.5x40mm";
		descriptionshort = "36 Round Magazine<br/>9.5x40mm<br/>";
		ammo = "OPTRE_B_95x40_Ball";
		scopeArsenal = 0;
		initSpeed = 925;
		tracersEvery = 0;
		lastRoundsTracer = 6;
		mass = 8;
	};
	//HP-SAP
	class 53rd_36Rnd_95x40_Mag_HP_SAP : 36Rnd_95x40_br_55{
		author = "53rd Aux Team";
		displayname = "36Rnd 9.5x40mm HP-SAP Magazine [53rd]";
		displaynameshort = "9.5x40mm HP-SAP";
		descriptionshort = "36 Round Magazine<br/>9.5x40mm<br/>High-Powered Semi-Armor-Piercing";
		ammo = "B_95x40_HP_SAP";
		initSpeed = 750;
		tracersEvery = 0;
		lastRoundsTracer = 6;
		mass = 8;
	};	
	class 53rd_36Rnd_95x40_Mag_HP_SAP_Tracer : 53rd_36Rnd_95x40_Mag_HP_SAP{
		displayname = "36Rnd 9.5x40mm HP-SAP Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x40mm HP-SAP";
		descriptionshort = "36 Round Magazine<br/>9.5x40mm<br/>High-Powered Semi-Armor-Piercing Tracers";
		tracersEvery = 1;
		lastRoundsTracer = 36;
	};
	//AP
	class 53rd_36Rnd_95x40_Mag_AP : 36Rnd_95x40_br_55{
		author = "53rd Aux Team";
		displayname = "36Rnd 9.5x40mm AP Magazine [53rd]";
		displaynameshort = "9.5x40mm AP";
		descriptionshort = "36 Round Magazine<br/>9.5x40mm<br/>Armor-Piercing";
		ammo = "B_95x40_ap";
		initspeed = 800;
		tracersEvery = 0;
		lastRoundsTracer = 6;
		mass = 8;
	};
	class 53rd_36Rnd_95x40_Mag_AP_Tracer : 53rd_36Rnd_95x40_Mag_AP{
		displayname = "36Rnd 9.5x40mm AP Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x40mm AP Tracer";
		descriptionshort = "36 Round Magazine<br/>9.5x40mm<br/>Armor-Piercing Tracers";
		tracersEvery = 1;
		lastRoundsTracer = 36;
	};
	//SLAP
	class 53rd_36Rnd_95x40_Mag_SLAP : 36Rnd_95x40_br_55{
		//Bullets are quite a bit heavier
		author = "53rd Aux Team";
		displayName = "36Rnd 9.5x40mm SLAP [53rd]";
		displaynameshort = "9.5x40mm SLAP";
		descriptionshort = "36 Round Magazine<br/>9.5x40mm<br/>Saboted Light-Armor-Penetrator";
		ammo = "B_95x40_slap";
		initSpeed = 800;
		tracersEvery = 0;
		lastRoundsTracer = 6;
		mass = 8;
	};
	class 53rd_36Rnd_95x40_Mag_SLAP_Tracer : 53rd_36Rnd_95x40_Mag_SLAP{
		displayName = "36Rnd 9.5x40mm SLAP (Tracer) [53rd]";
		displaynameshort = "9.5x40mm SLAP";
		descriptionshort = "36 Round Magazine<br/>9.5x40mm<br/>Saboted Light-Armor-Penetrator Tracers";
		tracersEvery = 1;
		lastRoundsTracer = 36;
	};
	//JHP
	class 53rd_36Rnd_95x40_Mag_JHP : 53rd_36Rnd_95x40_Mag
	{
		ammo = "53rd_B_95x40_JHP";
		displayname = "36Rnd 9.5x40mm JHP Magazine [53rd]";
		displaynameshort = "9.5x60mm JHP";
		descriptionShort = "36 Round Magazine<br/>9.5x40mm<br/>Jacketed Hollow-Point";
		initspeed = 1000;
		mass = 8;
	};
	class 53rd_36Rnd_95x40_Mag_JHPT : 53rd_36Rnd_95x40_Mag_JHP
	{
		displayname = "36Rnd 9.5x40mm JHP Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x60mm JHP Tracer";
		descriptionShort = "36 Round Magazine<br/>9.5x40mm<br/>Jacketed Hollow-Point Tracers";
		tracersevery = 1;
	};
	//SS
	class 53rd_36Rnd_95x40_Mag_SS : 53rd_36Rnd_95x40_Mag
	{
		ammo = "TCF_B_95x40_SS";
		displayname = "36Rnd 9.5x40mm SS Magazine [53rd]";
		displaynameshort = "9.5x60mm SS";
		descriptionShort = "36 Round Magazine<br/>9.5x40mm<br/>Sub-Sonic";
		initspeed = 340;
		mass = 8;
	};
	class 53rd_36Rnd_95x40_Mag_SST : 53rd_36Rnd_95x40_Mag_SS
	{
		displayname = "36Rnd 9.5x40mm SS Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x60mm SS Tracer";
		descriptionShort = "36 Round Magazine<br/>9.5x40mm<br/>Sub-Sonic Tracers";
		initspeed = 340;
	};
#pragma endregion
#pragma region Boxes 9.5x40
	//Standard 100
	class 53rd_100Rnd_95x40_Box : OPTRE_100Rnd_95x40_Box{
		author = "53rd Aux Team";
		displayname = "100Rnd 9.5x40mm Box Magazine [53rd]";
		displaynameshort = "9.5x40mm";
		ammo = "53rd_B_95x40_FMJ";
		count = 100;
		initspeed = 925;
		picture = "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort = "100 Round Box Magazine<br/>9.5x40mm";
		model = "\OPTRE_Weapons\MG\m73_mag_proxy.p3d";
		modelSpecial = "\OPTRE_Weapons\MG\m73_mag_proxy.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\OPTRE_Weapons\MG\data\M73_100rndBox_co.paa"};
		tracersEvery = 0;
		lastRoundsTracer = 10;
		mass = 35;
	};
	class 53rd_100Rnd_95x40_Box_Tracer : 53rd_100Rnd_95x40_Box{
		displayname = "100Rnd 9.5x40mm Box Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x40mm Tracer";
		descriptionshort = "100 Round Box Magazine<br/>9.5x40mm<br/>Tracer";
		ammo = "53rd_B_95x40_FMJ";
		tracersEvery = 1;
		lastRoundsTracer = 100;
	};
	//Standard 200
	class 53rd_200Rnd_95x40_Box : 53rd_100Rnd_95x40_Box{
		displayname = "200Rnd 9.5x40mm Box Magazine [53rd]";
		descriptionshort = "200 Round Box Magazine<br/>9.5x40mm";
		displaynameshort = "9.5x40mm";
		count = 200;
		mass = 65;
	};
	class 53rd_200Rnd_95x40_Box_Tracer : 53rd_100Rnd_95x40_Box_Tracer{
		displayname = "200Rnd 9.5x40mm Box Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x40mm Tracer";
		descriptionshort = "200 Round Box Magazine<br/>9.5x40mm<br/>Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 200;
	};
	//JHP 100
	class 53rd_100Rnd_95x40_Box_JHP : 53rd_100Rnd_95x40_Box{
		ammo = "TCF_B_95x40_JHP";
		displayname = "100Rnd 9.5x40mm JHP Box Magazine [53rd]";
		displaynameshort = "9.5x60mm JHP";
		descriptionShort = "100 Box Round Magazine<br/>9.5x40mm<br/>Jacketed Hollow-Point";
		initspeed = 1050;
		mass = 35;
	};
	class 53rd_100Rnd_95x40_Box_JHPT : 53rd_100Rnd_95x40_Box{
		displayname = "100Rnd 9.5x40mm JHP Box Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x60mm JHP Tracer";
		descriptionShort = "100 Box Round Magazine<br/>9.5x40mm<br/>Jacketed Hollow-Point Tracers";
		tracersEvery = 3;
		lastRoundsTracer = 10;
	};
	//JHP 200
	class 53rd_200Rnd_95x40_Box_JHP : 53rd_200Rnd_95x40_Box
	{
		ammo = "TCF_B_95x40_JHP";
		displayname = "200Rnd 9.5x40mm JHP Box Magazine [53rd]";
		displaynameshort = "9.5x60mm JHP";
		descriptionShort = "200 Round Box Magazine<br/>9.5x40mm<br/>Jacketed Hollow-Point";
		initspeed = 1050;
		mass = 65;
	};
	class 53rd_200Rnd_95x40_Box_JHPT : 53rd_200Rnd_95x40_Box_JHP
	{
		displayname = "200Rnd 9.5x40mm JHP Box Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x60mm JHP Tracer";
		descriptionShort = "200 Round Box Magazine<br/>9.5x40mm<br/>Jacketed Hollow-Point Tracers";
		tracersEvery = 3;
		lastRoundsTracer = 10;
	};
	//SS 100
	class 53rd_100Rnd_95x40_Box_SS : 53rd_100Rnd_95x40_Box
	{
		ammo = "TCF_B_95x40_SS";
		displayname = "100Rnd 9.5x40mm SS Box Magazine [53rd]";
		displaynameshort = "9.5x60mm SS";
		descriptionShort = "100 Round Box Magazine<br/>9.5x40mm<br/>Sub-Sonic";
		initspeed = 340;
		mass = 35;
	};
	class 53rd_100Rnd_95x40_Box_SST : 53rd_100Rnd_95x40_Box_SS
	{
		displayname = "100Rnd 9.5x40mm SS Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x60mm SS Tracer";
		descriptionShort = "100 Round Magazine<br/>9.5x40mm<br/>Sub-Sonic Tracers";
		initspeed = 340;
	};
	//SS 200
	class 53rd_200Rnd_95x40_Box_SS : 53rd_200Rnd_95x40_Box
	{
		ammo = "TCF_B_95x40_SS";
		displayname = "200Rnd 9.5x40mm SS Box Magazine [53rd]";
		displaynameshort = "9.5x60mm SS";
		descriptionShort = "200 Round Box Magazine<br/>9.5x40mm<br/>Sub-Sonic";
		initspeed = 340;
		mass = 65;
	};
	class 53rd_200Rnd_95x40_Box_SST : 53rd_200Rnd_95x40_Box_SS
	{
		displayname = "200Rnd 9.5x40mm SS Magazine (Tracer) [53rd]";
		displaynameshort = "9.5x60mm SS Tracer";
		descriptionShort = "200 Round Magazine<br/>9.5x40mm<br/>Sub-Sonic Tracers";
		initspeed = 340;
	};
#pragma endregion
	/////////////////////    8.6x70 (CR-77)    //////////////////////
	//Not existent in 19th. Suggest make more powerful than MAx ammo
	//Alternatively, shoot 9.5x40?
#pragma region 20Rnd 8.6x70
	//Standard
	class 53rd_20Rnd_86x70_Mag : TCF_20Rnd_86x70_Mag{
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		scope = 2;
		scopeArsenal = 2;
		ammo = "TCF_B_86x70_Ball";
		count = 20;
		displayname = "20Rnd 8.6x70mm Magazine [53rd]";
		displaynameshort = "8.6x70mm";
		descriptionShort = "20 Round Magazine<br/>8.6x70mm";
		tracersEvery = 0;
		lastRoundsTracers = 5;
		mass = 9;
	};
	class 53rd_20Rnd_86x70_Mag_Tracer : 53rd_20Rnd_86x70_Mag{
		displayname = "20Rnd 8.6x70mm Magazine (Tracer) [53rd]";
		displaynameshort = "8.6x70mm";
		descriptionShort = "20 Round Magazine<br/>8.6x70mm<br/>Tracer";
		tracersEvery = 1;
		lastRoundsTracers = 20;
	};
	//AP
	class 53rd_20Rnd_86x70_Mag_AP : 53rd_20Rnd_86x70_Mag{
		displayname = "20Rnd 8.6x70mm AP Magazine [53rd]";
		displaynameshort = "8.6x70mm AP";
		descriptionShort = "20 Round Magazine<br/>8.6x70mm<br/>Armor-Piercing";
		ammo = "TCF_B_86x70_AP";
		weight = 9;
	};
	class 53rd_20Rnd_86x70_Mag_APT : 53rd_20Rnd_86x70_Mag_AP{
		displayname = "20Rnd 8.6x70mm AP Magazine (Tracer) [53rd]";
		displaynameshort = "8.6x70mm AP Tracer";
		descriptionShort = "20 Round Magazine<br/>8.6x70mm<br/>Armor-Piercing Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 20;
	};
	//JHP
	class 53rd_20Rnd_86x70_Mag_JHP : 53rd_20Rnd_86x70_Mag{
		displayname = "20Rnd 8.6x70mm JHP Magazine [53rd]";
		displaynameshort = "8.6x70mm JHP";
		descriptionShort = "20 Round Magazine<br/>8.6x70mm<br/>Jacketed Hollow-Point";
		ammo = "TCF_B_86x70_JHP";
		weight = 9;
	};
	class 53rd_20Rnd_86x70_Mag_JHPT : 53rd_20Rnd_86x70_Mag_JHP{
		displayname = "20Rnd 8.6x70mm JHP Magazine (Tracer) [53rd]";
		displaynameshort = "8.6x70mm JHP Tracer";
		descriptionShort = "20 Round Magazine<br/>8.6x70mm<br/>Jacketed Hollow-Point";
		tracersEvery = 1;
		lastRoundsTracer = 20;
	};
	//SS
	class 53rd_20Rnd_86x70_Mag_SS : 53rd_20Rnd_86x70_Mag{
	displayname = "20Rnd 8.6x70mm SS Magazine [53rd]";
	displaynameshort = "8.6x70mm SS";
	descriptionShort = "20 Round Magazine<br/>8.6x70mm<br/>Subsonic";
	ammo = "TCF_B_86x70_SS";
	weight = 9;
	};
	class 53rd_20Rnd_86x70_Mag_SST : 53rd_20Rnd_86x70_Mag_SS{
		displayname = "20Rnd 8.6x70mm SS Magazine (Tracer) [53rd]";
		displaynameshort = "8.6x70mm SS Tracer";
		descriptionShort = "20 Round Magazine<br/>8.6x70mm<br/>Subsonic Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 20;
	};
	//SLAP
	class 53rd_20Rnd_86x70_Mag_SLAP : 53rd_20Rnd_86x70_Mag{
		displayname = "20Rnd 8.6x70mm SLAP Magazine [53rd]";
		displaynameshort = "8.6x70mm SLAP";
		descriptionShort = "20 Round Magazine<br/>8.6x70mm<br/>Subsonic";
		ammo = "TCF_B_86x70_SLAP";
		weight = 9;
	};
	class 53rd_20Rnd_86x70_Mag_SLAPT : 53rd_20Rnd_86x70_Mag_SLAP{
		displayname = "20Rnd 8.6x70mm SLAP Magazine (Tracer) [53rd]";
		displaynameshort = "8.6x70mm SLAP Tracer";
		descriptionShort = "20 Round Magazine<br/>8.6x70mm<br/>Sabot Light Armor Penetrator Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 20;
	};

#pragma endregion
	////////////////////////    Shotguns    /////////////////////////
	//Needed: 12 Gauge (More powerful that 8 Gauge presumably
//UPDATED TO 19TH
#pragma region 6Rnd 8Gauge
	//Pellets
	class 53rd_6Rnd_8Gauge_Pellets : OPTRE_6Rnd_8Gauge_Pellets{
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		model = "\OPTRE_Weapons\Shotgun\Shell_mag_S.p3d";
		scope = 2;
		displayname = "6Rnd 8 Gauge Pellets";
		displaynameshort = "8 Gauge Pellets";
		ammo = "UNSC_8Gauge";
		count = 6;
		initspeed = 500;
		picture = "\a3\weapons_F\data\ui\m_12gauge_ca.paa";
		descriptionshort = "6 Rounds of 8 Gauge Pellets";
		mass = 10;
	};
	//Slugs
	class 53rd_6Rnd_8Gauge_Slugs : 53rd_6Rnd_8Gauge_Pellets{
		displayname = "6Rnd 8 Gauge Slugs";
		displaynameshort = "8 Gauge Slug";
		descriptionshort = "6 Rounds of 8 Gauge Slugs";
		ammo = "UNSC_8Gauge_Slugs";
		picture = "\a3\weapons_F\data\ui\m_12gauge_slugs_ca.paa";
		initspeed = 800;
		mass = 10;
	};
	//OPTRE Pellets
	class 53rd_6Rnd_8Gauge_Pellets_OPTRE : OPTRE_6Rnd_8Gauge_Pellets{
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		model = "\OPTRE_Weapons\Shotgun\Shell_mag_S.p3d";
		scope = 2;
		scopeArsenal = 0;
		displayname = "6Rnd 8 Gauge Pellets";
		displaynameshort = "8 Gauge Pellets";
		ammo = "OPTRE_8Gauge_Pellets";
		count = 6;
		initspeed = 500;
		picture = "\a3\weapons_F\data\ui\m_12gauge_ca.paa";
		descriptionshort = "6 Rounds of 8 Gauge Pellets";
		mass = 10;
	};
	//OPTRE Slugs
	class 53rd_6Rnd_8Gauge_Slugs_OPTRE : 53rd_6Rnd_8Gauge_Pellets{
		displayname = "6Rnd 8 Gauge Slugs";
		displaynameshort = "8 Gauge Slug";
		descriptionshort = "6 Rounds of 8 Gauge Slugs";
		ammo = "OPTRE_8Gauge_Slugs";
		picture = "\a3\weapons_F\data\ui\m_12gauge_slugs_ca.paa";
		scopeArsenal = 0;
		initspeed = 800;
		mass = 10;
	};
	class 53rd_6Rnd_8Gauge_Slugs_Tracer : 53rd_6Rnd_8Gauge_Slugs{
		displayname = "6Rnd 8 Gauge Slugs (Tracer)";
		displaynameshort = "8 Gauge Tracer Slug";
		descriptionshort = "6 Rounds of 8 Gauge Tracer Slugs";
		tracersEvery = 1;
		lastRoundsTracer = 6;
	};
	//Beanbags
	class 53rd_6Rnd_8Gauge_Beanbags : 53rd_6Rnd_8Gauge_Pellets{
		displayname = "6Rnd 8 Gauge Beanbags";
		displaynameshort = "8 Gauge Beanbags";
		ammo = "TCF_B_8Gauge_Beanbag";
		count = 6;
		initspeed = 450;
		descriptionshort = "6 Rounds of 8 Gauge Beanbags";
		mass = 10;
	};
#pragma endregion
//UPDATED TO 19TH
#pragma region 12Rnd 8Gauge
	//Pellets
	class 53rd_12Rnd_8Gauge_Pellets : 53rd_6Rnd_8Gauge_Pellets{
		displayname = "12Rnd 8 Gauge Pellets";
		displaynameshort = "8 Gauge Pellets";
		descriptionshort = "12 Rounds of 8 Gauge Pellets";
		count = 12;
		mass = 16;
	};
	//Slugs
	class 53rd_12Rnd_8Gauge_Slugs : 53rd_6Rnd_8Gauge_Slugs{
		displayname = "12Rnd 8 Gauge Slugs";
		displaynameshort = "8 Gauge Pellets";
		descriptionshort = "12 Rounds of 8 Gauge Slugs";
		count = 12;
		mass = 16;
	};
	//OPTRE Pellets
	class 53rd_12Rnd_8Gauge_Pellets_OPTRE : 53rd_6Rnd_8Gauge_Pellets{
		displayname = "12Rnd 8 Gauge Pellets";
		displaynameshort = "8 Gauge Pellets";
		descriptionshort = "12 Rounds of 8 Gauge Pellets";
		scopeArsenal = 0;
		count = 12;
		mass = 16;
	};
	//OPTRE Slugs
	class 53rd_12Rnd_8Gauge_Slugs_OPTRE : 53rd_6Rnd_8Gauge_Slugs{
		displayname = "12Rnd 8 Gauge Slugs";
		displaynameshort = "8 Gauge Pellets";
		descriptionshort = "12 Rounds of 8 Gauge Slugs";
		scopeArsenal = 0;
		count = 12;
		mass = 16;
	};
	class 53rd_12Rnd_8Gauge_Slugs_Tracer : 53rd_12Rnd_8Gauge_Slugs{
		displayname = "12Rnd 8 Gauge Slugs (Tracer)";
		displaynameshort = "8 Gauge Tracer Slugs";
		descriptionshort = "12 Rounds of 8 Gauge Tracer Slugs";
		tracersEvery = 1;
		lastRoundsTracer = 12;
	};
#pragma endregion
#pragma region 12Rnd 12Gauge
	//Pellets
	class 53rd_12Rnd_12Gauge_Pellets : OPTRE_12Rnd_12Gauge_Pellets{
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		displayname = "12Rnd 12 Gauge Pellets";
		displaynameshort = "12 Gauge Pellets";
		descriptionshort = "12 Rounds of 12 Gauge Pellets";
		ammo = "OPTRE_12Gauge_Pellets";
		initspeed = 700;
		count = 12;
		mass = 15;
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\OPTRE_Weapons\bulldog\data\mag_he.paa" };
	};	
	//OPTRE Pellets
	class 53rd_12Rnd_12Gauge_Pellets_OPTRE : OPTRE_12Rnd_12Gauge_Pellets{
		displayname = "12Rnd 12 Gauge Pellets";
		displaynameshort = "12 Gauge Pellets";
		descriptionshort = "12 Rounds of 12 Gauge Pellets";
		ammo = "OPTRE_12Gauge_Pellets";
		scopeArsenal = 0;
		initspeed = 700;
		count = 12;
		mass = 15;
	};
	class 53rd_12Rnd_12Gauge_Pellets_Tracer : 53rd_12Rnd_12Gauge_Pellets{
		displayname = "12Rnd 12 Gauge Pellets (Tracer)";
		displaynameshort = "12 Gauge Pellets";
		descriptionshort = "12 Rounds of 12 Gauge Tracer Pellets";
		tracersEvery = 1;
		lastRoundsTracer = 12;
	};
	//Smoke
	class 53rd_12Rnd_12Gauge_Smoke : 53rd_12Rnd_12Gauge_Pellets{
		displayname = "12Rnd 12 Gauge Smoke";
		displaynameshort = "12 Gauge Smoke";
		descriptionshort = "12 Rounds of 12 Gauge Smokes";
		ammo = "OPTRE_12Gauge_Smoke";
		initspeed = 700;
		count = 12;
		mass = 15;
	};
	class 53rd_12Rnd_12Gauge_Smoke_Tracer : 53rd_12Rnd_12Gauge_Smoke{
		displayname = "12Rnd 12 Gauge Smoke (Tracer)";
		displaynameshort = "12 Gauge Smoke";
		descriptionshort = "12 Rounds of 12 Gauge Tracer Smokes";
		tracersEvery = 1;
		lastRoundsTracer = 12;
	};
#pragma endregion
	////////////////////////    Snipers     /////////////////////////
//UPDATED TO 19TH
#pragma region 4Rnd 14.5x114
	//APFSDS
	class 53rd_4Rnd_145x114_APFSDS_Mag : OPTRE_4Rnd_145x114_APFSDS_Mag
	{
		dlc = "OPTRE";
		displayname = "4Rnd 14.5x114mm APFSDS Magazine";
		displaynameshort = "APFSDS";
		ammo = "B_145x114_APFSDS";
		picture = "\OPTRE_Weapons\Sniper\icons\srsC_mag.paa";
		descriptionshort = "4 Round Magazine<br/>14.5x114mm<br/>Armor Piercing Fin-Stabilized Disposable Shell";
		model = "\OPTRE_Weapons\Sniper\SRS99C_Mag.p3d";
		modelSpecial = "\OPTRE_Weapons\Sniper\SRS99C_Mag.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {
			"optre_weapons\sniper\data\mainbody_co.paa",
			"optre_weapons\sniper\data\mag_co.paa"
		};
		count = 4;
		initspeed = 1200;
		tracersEvery = 1;
		lastRoundsTracer = 4;
		mass = 15;
	};
	//HVAP
	class 53rd_4Rnd_145x114_HVAP_Mag : 53rd_4Rnd_145x114_APFSDS_Mag
	{
		displayname = "4Rnd 14.5x114mm HVAP Magazine";
		displaynameshort = "HVAP";
		descriptionshort = "4 Round Magazine<br/>14.5x114mm<br/>High Velocity Armor Piercing";
		ammo = "B_145x114_HVAP";
		initspeed = 850;
		mass = 15;
	};
#pragma endregion
	//////////////////////    12.7x40 (M6)    ///////////////////////
#pragma region 8Rnd 12.7x40
	//Standard
	class 53rd_8Rnd_127x40_Mag : OPTRE_8Rnd_127x40_Mag
	{
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		displayname = "8Rnd 12.7x40mm Magazine";
		displaynameshort = "12.7x40mm";
		descriptionshort = "8 Round Magazine<br/>12.7x40mm";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\optre_weapons\pistol\data\M6G_CO.paa" };
		ammo = "53rd_B_127x40";
		picture = "\OPTRE_weapons\pistol\icons\magazine.paa";
		model = "\OPTRE_Weapons\Pistol\m6_magazine.p3d";
		modelSpecial = "\OPTRE_Weapons\Pistol\m6_magazine.p3d";
		modelSpecialIsProxy = 1;
		count = 8;
		initspeed = 600;
		tracersEvery = 0;
		lastRoundsTracer = 2;
		mass = 8;
	};
	class 53rd_8Rnd_127x40_Mag_Tracer : 53rd_8Rnd_127x40_Mag{
		displayname = "8Rnd 12.7x40mm Magazine (Tracer)";
		displaynameshort = "12.7x40mm";
		descriptionshort = "8 Round Magazine<br/>12.7x40mm";
		tracersEvery = 1;
		lastRoundsTracer = 8;
	};
	//AP
	class 53rd_8Rnd_127x40_Mag_AP : 53rd_8Rnd_127x40_Mag{
		displayname = "8Rnd 12.7x40mm AP Magazine";
		displaynameshort = "12.7x40mm AP";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Armor-Piercing";
		ammo = "53rd_B_127x40_AP";
		initspeed = 640;
		mass = 8;
	};
	class 53rd_8Rnd_127x40_Mag_APT : 53rd_8Rnd_127x40_Mag_AP{
		displayname = "8Rnd 12.7x40mm AP Magazine (Tracer)";
		displaynameshort = "12.7x40mm AP Tracer";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Armor-Piercing Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 8;
	};
	//JHP
	class 53rd_8Rnd_127x40_Mag_JHP : 53rd_8Rnd_127x40_Mag{
		displayname = "8Rnd 12.7x40mm JHP Magazine";
		displaynameshort = "12.7x40mm JHP";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Jacketed Hollow-Point";
		ammo = "53rd_B_127x40_JHP";
		initspeed = 580;
		mass = 8;
	};
	class 53rd_8Rnd_127x40_Mag_JHPT : 53rd_8Rnd_127x40_Mag_JHP{
		displayname = "8Rnd 12.7x40mm JHP Magazine (Tracer)";
		displaynameshort = "12.7x40mm JHP Tracer";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Jacketed Hollow-Point Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 8;
	};
	//SS
	class 53rd_8Rnd_127x40_Mag_SS : 53rd_8Rnd_127x40_Mag{
		displayname = "8Rnd 12.7x40mm SS Magazine";
		displaynameshort = "12.7x40mm SS";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Sub-Sonic";
		ammo = "TCF_B_127x40_SS";
		initspeed = 340;
		mass = 8;
	};
	class 53rd_8Rnd_127x40_Mag_SST : 53rd_8Rnd_127x40_Mag_SS{
		displayname = "8Rnd 12.7x40mm SS Magazine (Tracer)";
		displaynameshort = "12.7x40mm SS Tracer";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Sub-Sonic Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 8;
	};
	//Flare Red
	class 53rd_8Rnd_127x40_Mag_FR : 53rd_8Rnd_127x40_Mag{
		displayname = "8Rnd 12.7x40mm Flare Magazine (Red)";
		displaynameshort = "12.7x40mm Flare Red";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Flares (Red)";
		ammo = "TCF_B_127x40_FR";
		initspeed = 100;
		mass = 8;
	};
	//Flare Green
	class 53rd_8Rnd_127x40_Mag_FG : 53rd_8Rnd_127x40_Mag{
		displayname = "8Rnd 12.7x40mm Flare Magazine (Green)";
		displaynameshort = "12.7x40mm Flare Red";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Flares (Green)";
		ammo = "TCF_B_127x40_FG";
		initspeed = 100;
		mass = 8;
	};
	//Narq
	class 53rd_8Rnd_127x40_Mag_NARQ : 53rd_8Rnd_127x40_Mag{
		displayname = "8Rnd 12.7x40mm NARQ Magazine";
		displaynameshort = "12.7x40mm NARQ";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Tranquilizer";
		ammo = "TCF_B_127x40_NARQ";
		initspeed = 900;
	};
	class 53rd_8Rnd_127x40_Mag_NARQT : 53rd_8Rnd_127x40_Mag_NARQ{
		displayname = "8Rnd 12.7x40mm NARQ Magazine (Tracer)";
		displaynameshort = "12.7x40mm NARQ Tracer";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Tranquilizer Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 8;
	};
	//SLAP Experiment
	class 53rd_8Rnd_127x40_Mag_SLAP : 53rd_8Rnd_127x40_Mag{
		displayname = "8Rnd 12.7x40mm SLAP Magazine";
		displaynameshort = "12.7x40mm SLAP";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Saboted Light-Armor-Penetrator";
		ammo = "53rd_B_127x40_SLAP";
	};
	class 53rd_8Rnd_127x40_Mag_SLAPT : 53rd_8Rnd_127x40_Mag{
		displayname = "8Rnd 12.7x40mm SLAP Magazine (Tracer)";
		displaynameshort = "12.7x40mm SLAP Tracer";
		descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Saboted Light-Armor-Penetrator Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 8;
	};
#pragma endregion
#pragma region 12Rnd 12.7x40
		//Standard
		class 53rd_12Rnd_127x40_Mag : 53rd_8Rnd_127x40_Mag
	{
		displayname = "12Rnd 12.7x40mm Magazine";
		displaynameshort = "12.7x40mm";
		descriptionshort = "12 Round Magazine<br/>12.7x40mm";
		picture = "\OPTRE_weapons\pistol\icons\magazine.paa";
		count = 12;
		initspeed = 600;
		tracersEvery = 0;
		lastRoundsTracer = 2;
		mass = 8.5;
	};
	class 53rd_12Rnd_127x40_Mag_Tracer : 53rd_12Rnd_127x40_Mag{
		displayname = "12Rnd 12.7x40mm Magazine (Tracer)";
		displaynameshort = "12.7x40mm";
		descriptionshort = "12 Round Magazine<br/>12.7x40mm";
		tracerEvery = 1;
		lastRoundsTracer = 12;
	};
	//AP
	class 53rd_12Rnd_127x40_Mag_AP : 53rd_8Rnd_127x40_Mag_AP{
		displayname = "12Rnd 12.7x40mm AP Magazine";
		displaynameshort = "12.7x40mm AP";
		descriptionShort = "12 Round Magazine<br/>12.7x40mm<br/>Armor-Piercing";
		count = 12;
		mass = 8.5;
	};
	class 53rd_12Rnd_127x40_Mag_APT : 53rd_12Rnd_127x40_Mag_AP{
		displayname = "12Rnd 12.7x40mm AP Magazine (Tracer)";
		displaynameshort = "12.7x40mm AP Tracer";
		descriptionShort = "12 Round Magazine<br/>12.7x40mm<br/>Armor-Piercing Tracer";
		tracerEvery = 1;
		lastRoundsTracer = 12;
	};
	//JHP
	class 53rd_12Rnd_127x40_Mag_JHP : 53rd_8Rnd_127x40_Mag_JHP{
		displayname = "12Rnd 12.7x40mm JHP Magazine";
		displaynameshort = "12.7x40mm JHP";
		descriptionShort = "12 Round Magazine<br/>12.7x40mm<br/>Jacketed Hollow-Point";
		count = 12;
		mass = 8.5;
	};
	class 53rd_12Rnd_127x40_Mag_JHPT : 53rd_12Rnd_127x40_Mag_JHP{
		displayname = "12Rnd 12.7x40mm JHP Magazine (Tracer)";
		displaynameshort = "12.7x40mm JHP Tracer";
		descriptionShort = "12 Round Magazine<br/>12.7x40mm<br/>Jacketed Hollow-Point Tracer";
		tracerEvery = 1;
		lastRoundsTracer = 12;
	};
	//SS
	class 53rd_12Rnd_127x40_Mag_SS : 53rd_8Rnd_127x40_Mag_SS{
		displayname = "12Rnd 12.7x40mm SS Magazine";
		displaynameshort = "12.7x40mm SS";
		descriptionShort = "12 Round Magazine<br/>12.7x40mm<br/>Sub-Sonic";
		count = 12;
		mass = 8.5;
	};
	class 53rd_12Rnd_127x40_Mag_SST : 53rd_12Rnd_127x40_Mag_SS{
		displayname = "12Rnd 12.7x40mm SS Magazine (Tracer)";
		displaynameshort = "12.7x40mm SS Tracer";
		descriptionShort = "12 Round Magazine<br/>12.7x40mm<br/>Sub-Sonic Tracer";
		tracerEvery = 1;
		lastRoundsTracer = 12;
	};
	//Flare Red
	//class 53rd_8Rnd_127x40_Mag_FR : 53rd_8Rnd_127x40_Mag{
	//	displayname = "12Rnd 12.7x40mm Flare Magazine (Red)";
	//	displaynameshort = "12.7x40mm Flare Red";
	//	descriptionShort = "12 Round Magazine<br/>12.7x40mm<br/>Flares (Red)";
	//	ammo = "TCF_B_127x40_FR";
	//	initspeed = 100;
	//	mass = 8.5;
	//};
	////Flare Green
	//class 53rd_8Rnd_127x40_Mag_FG : 53rd_8Rnd_127x40_Mag{
	//	displayname = "8Rnd 12.7x40mm Flare Magazine (Green)";
	//	displaynameshort = "12.7x40mm Flare Red";
	//	descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Flares (Green)";
	//	ammo = "TCF_B_127x40_FG";
	//	initspeed = 100;
	//	mass = 8;
	//};
	//Narq
	class 53rd_12Rnd_127x40_Mag_NARQ : 53rd_8Rnd_127x40_Mag_NARQ{
		displayname = "12Rnd 12.7x40mm NARQ Magazine";
		displaynameshort = "12.7x40mm NARQ";
		descriptionShort = "12 Round Magazine<br/>12.7x40mm<br/>Tranquilizer";
		count = 12;
		mass = 8.5
	};
	class 53rd_12Rnd_127x40_Mag_NARQT : 53rd_12Rnd_127x40_Mag_NARQ{
		displayname = "12Rnd 12.7x40mm NARQ Magazine (Tracer)";
		displaynameshort = "12.7x40mm NARQ Tracer";
		descriptionShort = "12 Round Magazine<br/>12.7x40mm<br/>Tranquilizer Tracer";
		tracerEvery = 1;
		lastRoundsTracer = 12;
	};
#pragma endregion
#pragma region 16Rnd 12.7x40
	class 53rd_16Rnd_127x40_Mag : 53rd_8Rnd_127x40_Mag
	{
		displayname = "16Rnd 12.7x40mm Magazine";
		displaynameshort = "12.7x40mm";
		descriptionshort = "16 Round Magazine<br/>12.7x40mm";
		picture = "\OPTRE_weapons\pistol\icons\magazine.paa";
		count = 16;
		initspeed = 600;
		tracersEvery = 0;
		lastRoundsTracer = 2;
		mass = 9;
	};
	class 53rd_16Rnd_127x40_Mag_Tracer : 53rd_16Rnd_127x40_Mag{
		displayname = "16Rnd 12.7x40mm Magazine (Tracer)";
		displaynameshort = "12.7x40mm";
		descriptionshort = "16 Round Magazine<br/>12.7x40mm";
		tracerEvery = 1;
		lastRoundsTracer = 16;
	};
	//AP
	class 53rd_16Rnd_127x40_Mag_AP : 53rd_8Rnd_127x40_Mag_AP{
		displayname = "16Rnd 12.7x40mm AP Magazine";
		displaynameshort = "12.7x40mm AP";
		descriptionShort = "16 Round Magazine<br/>12.7x40mm<br/>Armor-Piercing";
		count = 16;
		mass = 9;
	};
	class 53rd_16Rnd_127x40_Mag_APT : 53rd_16Rnd_127x40_Mag_AP{
		displayname = "16Rnd 12.7x40mm AP Magazine (Tracer)";
		displaynameshort = "12.7x40mm AP Tracer";
		descriptionShort = "16 Round Magazine<br/>12.7x40mm<br/>Armor-Piercing Tracer";
		tracerEvery = 1;
		lastRoundsTracer = 16;
	};
	//JHP
	class 53rd_16Rnd_127x40_Mag_JHP : 53rd_8Rnd_127x40_Mag_JHP{
		displayname = "16Rnd 12.7x40mm JHP Magazine";
		displaynameshort = "12.7x40mm JHP";
		descriptionShort = "16 Round Magazine<br/>12.7x40mm<br/>Jacketed Hollow-Point";
		count = 16;
		mass = 9;
	};
	class 53rd_16Rnd_127x40_Mag_JHPT : 53rd_16Rnd_127x40_Mag_JHP{
		displayname = "16Rnd 12.7x40mm JHP Magazine (Tracer)";
		displaynameshort = "12.7x40mm JHP Tracer";
		descriptionShort = "16 Round Magazine<br/>12.7x40mm<br/>Jacketed Hollow-Point Tracer";
		tracerEvery = 1;
		lastRoundsTracer = 16;
	};
	//SS
	class 53rd_16Rnd_127x40_Mag_SS : 53rd_8Rnd_127x40_Mag_SS{
		displayname = "16Rnd 12.7x40mm SS Magazine";
		displaynameshort = "12.7x40mm SS";
		descriptionShort = "16 Round Magazine<br/>12.7x40mm<br/>Sub-Sonic";
		count = 16;
		mass = 9;
	};
	class 53rd_16Rnd_127x40_Mag_SST : 53rd_16Rnd_127x40_Mag_SS{
		displayname = "16Rnd 12.7x40mm SS Magazine (Tracer)";
		displaynameshort = "12.7x40mm SS Tracer";
		descriptionShort = "16 Round Magazine<br/>12.7x40mm<br/>Sub-Sonic Tracer";
		tracerEvery = 1;
		lastRoundsTracer = 16;
	};
	//Flare Red
	//class 53rd_8Rnd_127x40_Mag_FR : 53rd_8Rnd_127x40_Mag{
	//	displayname = "12Rnd 12.7x40mm Flare Magazine (Red)";
	//	displaynameshort = "12.7x40mm Flare Red";
	//	descriptionShort = "12 Round Magazine<br/>12.7x40mm<br/>Flares (Red)";
	//	ammo = "TCF_B_127x40_FR";
	//	initspeed = 100;
	//	mass = 8.5;
	//};
	////Flare Green
	//class 53rd_8Rnd_127x40_Mag_FG : 53rd_8Rnd_127x40_Mag{
	//	displayname = "8Rnd 12.7x40mm Flare Magazine (Green)";
	//	displaynameshort = "12.7x40mm Flare Red";
	//	descriptionShort = "8 Round Magazine<br/>12.7x40mm<br/>Flares (Green)";
	//	ammo = "TCF_B_127x40_FG";
	//	initspeed = 100;
	//	mass = 8;
	//};
	//Narq
	class 53rd_16Rnd_127x40_Mag_NARQ : 53rd_8Rnd_127x40_Mag_NARQ{
		displayname = "16Rnd 12.7x40mm NARQ Magazine";
		displaynameshort = "12.7x40mm NARQ";
		descriptionShort = "16 Round Magazine<br/>12.7x40mm<br/>Tranquilizer";
		mass = 9
	};
	class 53rd_16Rnd_127x40_Mag_NARQT : 53rd_16Rnd_127x40_Mag_NARQ{
		displayname = "16Rnd 12.7x40mm NARQ Magazine (Tracer)";
		displaynameshort = "12.7x40mm NARQ Tracer";
		descriptionShort = "16 Round Magazine<br/>12.7x40mm<br/>Tranquilizer Tracer";
		tracerEvery = 1;
		lastRoundsTracer = 16;
	};
#pragma endregion
	///////////////////////    5x23 (M7)     ////////////////////////
	//NEEDED:
		//HV
		//JHP
		//SS
	//DONE:
		//Standard (FMJ)
#pragma region 60Rnd 5x23
	//19TH FMJ
	class 53rd_60Rnd_5x23mm_Mag : OPTRE_60Rnd_5x23mm_Mag
	{
		dlc = "53rd Aux";
		author = "53rd Aux Team"
		model = "\OPTRE_Weapons\Ammo\M7Ammo.p3d";
		displayname = "60Rnd 5x23mm Magazine";
		displaynameshort = "5x23mm";
		descriptionshort = "60 Round Magazine<br/>5x23mm";
		ammo = "B_5x23_19_FMJ";
		picture = "\OPTRE_weapons\smg\icons\magazine.paa";
		count = 60;
		initspeed = 450;
		tracersEvery = 0;
		lastRoundsTracer = 5;
		mass = 8;
	};	
	class 53rd_60Rnd_5x23mm_Mag_Tracer : 53rd_60Rnd_5x23mm_Mag{
		displayname = "60Rnd 5x23mm Magazine (Tracer)";
		displaynameshort = "5x23mm Tracer";
		descriptionshort = "60 Round Magazine<br/>5x23mm<br/>Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 60;
	};
	//OPTRE Ball
	class 53rd_60Rnd_5x23mm_Mag_Caseless : OPTRE_60Rnd_5x23mm_Mag
	{
		dlc = "53rd Aux";
		author = "53rd Aux Team"
		model = "\OPTRE_Weapons\Ammo\M7Ammo.p3d";
		displayname = "60Rnd 5x23mm Magazine";
		displaynameshort = "5x23mm";
		descriptionshort = "60 Round Magazine<br/>5x23mm";
		ammo = "OPTRE_B_5x23_Caseless";
		picture = "\OPTRE_weapons\smg\icons\magazine.paa";
		scopeArsenal = 0;
		count = 60;
		initspeed = 600;
		tracersEvery = 0;
		lastRoundsTracer = 5;
		mass = 8;
	};
	//JHP
	class 53rd_60Rnd_5x23mm_Mag_JHP : 53rd_60Rnd_5x23mm_Mag{
		displayname = "60Rnd 5x23mm JHP Magazine";
		displaynameshort = "5x23mm JHP";
		descriptionshort = "60 Round Magazine<br/>5x23mm<br/>Jacketed Hollow-Point";
		ammo = "53rd_B_5x23_JHP";
		initspeed = 420;
		mass = 8;
	};
	class 53rd_60Rnd_5x23mm_Mag_JHPT : 53rd_60Rnd_5x23mm_Mag_JHP{
		displayname = "60Rnd 5x23mm JHP Magazine (Tracer)";
		displaynameshort = "5x23mm JHP Tracer";
		descriptionshort = "60 Round Magazine<br/>5x23mm<br/>Jacketed Hollow-Point Tracer";
		tracerEvery = 1;
		lastRoudsTracer = 60;
	};
	//HV
	class 53rd_60Rnd_5x23mm_Mag_HV : 53rd_60Rnd_5x23mm_Mag{
		displayname = "60Rnd 5x23mm HV Magazine";
		displaynameshort = "5x23mm HV";
		descriptionshort = "60 Round Magazine<br/>5x23mm<br/>High-Velocity";
		ammo = "53rd_B_5x23_HV";
		initspeed = 550;
		mass = 8;
	};
	class 53rd_60Rnd_5x23mm_Mag_HVT : 53rd_60Rnd_5x23mm_Mag_HV{
		displayname = "60Rnd 5x23mm HV Magazine (Tracer)";
		displaynameshort = "5x23mm HV Tracer";
		descriptionshort = "60 Round Magazine<br/>5x23mm<br/>High-Velocity Tracer";
		tracerEvery = 1;
		lastRoudsTracer = 60;
	};
	//SS
	class 53rd_60Rnd_5x23mm_Mag_SS : 53rd_60Rnd_5x23mm_Mag{
		displayname = "60Rnd 5x23mm SS Magazine";
		displaynameshort = "5x23mm SS";
		descriptionshort = "60 Round Magazine<br/>5x23mm<br/>Subsonic";
		ammo = "TCF_B_5x23_Caseless_SS";
		initspeed = 340;
		mass = 8;
	};
	class 53rd_60Rnd_5x23mm_Mag_SST : 53rd_60Rnd_5x23mm_Mag_SS{
		displayname = "60Rnd 5x23mm SS Magazine (Tracer)";
		displaynameshort = "5x23mm SS Tracer";
		descriptionshort = "60 Round Magazine<br/>5x23mm<br/>Subsonic Tracer";
		tracerEvery = 1;
		lastRoudsTracer = 60;
	};
#pragma endregion
#pragma region 48Rnd 5x23
	class 53rd_48Rnd_5x23mm_Mag : 53rd_60Rnd_5x23mm_Mag
	{
		displayname = "48Rnd 5x23mm Magazine";
		displaynameshort = "5x23mm";
		descriptionshort = "48 Round Magazine<br/>5x23mm";
		count = 48;
		initspeed = 700;
		tracersEvery = 0;
		lastRoundsTracer = 5;
		mass = 6;
	};
	class 53rd_48Rnd_5x23mm_Mag_Tracer : 53rd_48Rnd_5x23mm_Mag{
		displayname = "48Rnd 5x23mm Magazine (Tracer)";
		displaynameshort = "5x23mm Tracer";
		descriptionshort = "48 Round Magazine<br/>5x23mm<br/>Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 48;
	};
	//OPTRE Ball
	class 53rd_48Rnd_5x23mm_Mag_Ball : 53rd_60Rnd_5x23mm_Mag
	{
		displayname = "48Rnd 5x23mm Magazine";
		displaynameshort = "5x23mm";
		descriptionshort = "48 Round Magazine<br/>5x23mm";
		ammo = "OPTRE_B_5x23_Caseless";
		scopeArsenal = 0;
		count = 48;
		initspeed = 700;
		tracersEvery = 0;
		lastRoundsTracer = 5;
		mass = 6;
	};
	//JHP
	class 53rd_48Rnd_5x23mm_Mag_JHP : 53rd_60Rnd_5x23mm_Mag_JHP{
		displayname = "48Rnd 5x23mm JHP Magazine";
		displaynameshort = "5x23mm JHP";
		descriptionshort = "48 Round Magazine<br/>5x23mm<br/>Jacketed Hollow-Point";
		initspeed = 420;
		mass = 6;
	};
	class 53rd_48Rnd_5x23mm_Mag_JHPT : 53rd_48Rnd_5x23mm_Mag_JHP{
		displayname = "48Rnd 5x23mm JHP Magazine (Tracer)";
		displaynameshort = "5x23mm JHP Tracer";
		descriptionshort = "48 Round Magazine<br/>5x23mm<br/>Jacketed Hollow-Point Tracer";
		tracerEvery = 1;
		lastRoudsTracer = 48;
	};
	//HV
	class 53rd_48Rnd_5x23mm_Mag_HV : 53rd_60Rnd_5x23mm_Mag_HV{
		displayname = "48Rnd 5x23mm HV Magazine";
		displaynameshort = "5x23mm HV";
		descriptionshort = "48 Round Magazine<br/>5x23mm<br/>High-Velocity";
		initspeed = 550;
		mass = 6;
	};
	class 53rd_48Rnd_5x23mm_Mag_HVT : 53rd_48Rnd_5x23mm_Mag_HV{
		displayname = "48Rnd 5x23mm HV Magazine (Tracer)";
		displaynameshort = "5x23mm HV Tracer";
		descriptionshort = "48 Round Magazine<br/>5x23mm<br/>High-Velocity Tracer";
		tracerEvery = 1;
		lastRoudsTracer = 48;
	};
	//SS
	class 53rd_48Rnd_5x23mm_Mag_SS : 53rd_60Rnd_5x23mm_Mag{
		displayname = "48Rnd 5x23mm SS Magazine";
		displaynameshort = "5x23mm SS";
		descriptionshort = "48 Round Magazine<br/>5x23mm<br/>Subsonic";
		initspeed = 420;
		mass = 6;
	};
	class 53rd_48Rnd_5x23mm_Mag_SST : 53rd_48Rnd_5x23mm_Mag_SS{
		displayname = "48Rnd 5x23mm SS Magazine (Tracer)";
		displaynameshort = "5x23mm SS Tracer";
		descriptionshort = "48 Round Magazine<br/>5x23mm<br/>Subsonic Tracer";
		tracerEvery = 1;
		lastRoudsTracer = 48;
	};
#pragma endregion

	/////////////////////// 6.5x48 (Commando) ////////////////////////
	//OPTRE Pellets
	class 53rd_20Rnd_65x48_Mag_OPTRE : Commando_20Rnd_65_Mag{
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		model = "\OPTRE_Weapons\Commando\Commando_Mag.p3d";
		scope = 2;
		scopeArsenal = 0;
		displayname = "20Rnd 6.5x48 Magazine";
		displaynameshort = "M259 6.5x48";
		ammo = "OPTRE_65_Creedmoor";
		count = 20;
		initspeed = 900;
		picture = "\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort = "6 Rounds of 8 Gauge Pellets";
		mass = 12;
	};
	class 53rd_20Rnd_65x48_Mag : 53rd_20Rnd_65x48_Mag_OPTRE{
		displayname = "20Rnd 65x48mm FMJ Magazine";
		displaynameshort = "65x48mm FMJ";
		descriptionshort = "20 Round Magazine<br/>65x48mm<br/>Full Metal Jacket";
		ammo = "53rd_B_65x48_FMJ";
		initspeed = 800;
		mass = 12;
	};
	class 53rd_20Rnd_65x48_Mag_Tracer : 53rd_20Rnd_65x48_Mag{
		displayname = "20Rnd 65x48mm FMJ Magazine (Tracer)";
		displaynameshort = "65x48mm FMJ Tracer";
		descriptionshort = "20 Round Magazine<br/>65x48mm<br/>Full Metal Jacket Tracer";
		tracerEvery = 1;
		lastRoudsTracer = 20;
	};
	class 53rd_20Rnd_65x48_Mag_JHP : 53rd_20Rnd_65x48_Mag{
		displayname = "20Rnd 65x48mm FMJ Magazine";
		displaynameshort = "65x48mm FMJ";
		descriptionshort = "20 Round Magazine<br/>65x48mm<br/>Jacketed Hollow-Point";
		ammo = "53rd_B_65x48_JHP";
		initspeed = 900;
		mass = 12;
	};
	class 53rd_20Rnd_65x48_Mag_JHPT : 53rd_20Rnd_65x48_Mag_JHP{
		displayname = "20Rnd 65x48mm JHP Magazine (Tracer)";
		displaynameshort = "65x48mm JHP Tracer";
		descriptionshort = "20 Round Magazine<br/>65x48mm<br/>Jacketed Hollow-Point Tracer";
		tracerEvery = 1;
		lastRoudsTracer = 20;
	};
	class 53rd_20Rnd_65x48_Mag_AP : 53rd_20Rnd_65x48_Mag{
		displayname = "20Rnd 65x48mm AP Magazine";
		displaynameshort = "65x48mm AP";
		descriptionshort = "20 Round Magazine<br/>65x48mm<br/>Armor-Piercing";
		ammo = "53rd_B_65x48_AP";
		initspeed = 950;
		mass = 12;
	};
	class 53rd_20Rnd_65x48_Mag_APT : 53rd_20Rnd_65x48_Mag_AP{
		displayname = "20Rnd 65x48mm AP Magazine (Tracer)";
		displaynameshort = "65x48mm AP Tracer";
		descriptionshort = "20 Round Magazine<br/>65x48mm<br/>Armor-Piercing Tracer";
		tracerEvery = 1;
		lastRoudsTracer = 20;
	};
	class 53rd_20Rnd_65x48_Mag_SLAP : 53rd_20Rnd_65x48_Mag{
		displayname = "20Rnd 65x48mm SLAP Magazine";
		displaynameshort = "65x48mm SLAP";
		descriptionshort = "20 Round Magazine<br/>65x48mm<br/>Saboted Light-Armor-Penetrator";
		ammo = "53rd_B_65x48_SLAP";
		initspeed = 950;
		mass = 12;
	};
	class 53rd_20Rnd_65x48_Mag_SLAPT : 53rd_20Rnd_65x48_Mag_SLAP{
		displayname = "20Rnd 65x48mm SLAP Magazine (Tracer)";
		displaynameshort = "65x48mm SLAP Tracer";
		descriptionshort = "20 Round Magazine<br/>65x48mm<br/>Saboted Light-Armor-Penetrator Tracer";
		tracerEvery = 1;
		lastRoudsTracer = 20;
	};
	//model = "\OPTRE_Weapons\Commando\Commando_Mag.p3d";

	class 53rd_M41_Twin_HEAT_Thermal : OPTRE_M41_Twin_HEAT_Thermal{
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\heat_thermal.paa";
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		ammo = "53rd_M41_Rocket_HEAT_Thermal";
		displayname = "M19 HEAT Thermal";

	};
	class 53rd_M41_Twin_HEAT_Guided : OPTRE_M41_Twin_HEAT_Thermal{
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\heat_g.paa";
	dlc = "53rd Aux";
	author = "53rd Aux Team";
	ammo = "53rd_M41_Rocket_HEAT_Guided";
	displayname = "M19 HEAT Guided";

	};
	class 53rd_M41_Twin_HEAT_SACLOS : OPTRE_M41_Twin_HEAT_Thermal{
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\heat_saclos.paa";
	dlc = "53rd Aux";
	author = "53rd Aux Team";
	ammo = "53rd_M41_Rocket_HEAT_SACLOS";
	displayname = "M19 HEAT SACLOS";

	};
	class 53rd_M41_Twin_HEAT_Laser : OPTRE_M41_Twin_HEAT_Thermal{
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\he_salh_fuse.paa";
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		ammo = "53rd_M41_Rocket_HEAT_Thermal";
		displayname = "M19 HEAT LASER";

	};
	class 53rd_M41_Twin_HEAT: OPTRE_M41_Twin_HEAT_Thermal{
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\heat.paa";
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		ammo = "53rd_M41_Rocket_HEAT";
		displayname = "M19 HEAT";

	};
	class 53rd_M41_Twin_HE_SACLOS : OPTRE_M41_Twin_HEAT_Thermal{
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\he_saclos_fuse.paa";
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		ammo = "53rd_M41_Rocket_HE_SACLOS";
		displayname = "M19 HE SACLOS";
	};
	class 53rd_M41_Twin_HE : OPTRE_M41_Twin_HEAT_Thermal{
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\he.paa";
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		ammo = "53rd_M41_Rocket_HE";
		displayname = "M19 HE";
	};
	class 53rd_M41_Twin_HE_Thermal : OPTRE_M41_Twin_HEAT_Thermal{
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\he_thermal_fuse.paa";
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		ammo = "53rd_M41_Rocket_HE_Thermal";
		displayname = "M19 HE Thermal";
	};
	class 53rd_M41_Twin_HE_Laser : OPTRE_M41_Twin_HEAT_Thermal{
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\opaex\heat_salh.paa";
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		ammo = "53rd_M41_Rocket_HE_Laser";
		displayname = "M19 HE LASER";
	};
};