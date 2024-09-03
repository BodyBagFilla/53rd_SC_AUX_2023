class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_M301UGL;
	class UGL_F;
	class 53rd_M301UGL : OPTRE_M301UGL{
	magazines[] =
	{
		"1Rnd_HE_Grenade_shell"
	};
	magazineWell[] = { "53rd_Magwell_UGL" };
	};
	//ARM
	class 53rd_UGP40 : UGL_F{
		scope = 2;
		magazines[] =
		{
			"1Rnd_HE_Grenade_shell"
		};
		magazineWell[] = { "53rd_Magwell_UGL" };
		cameraDir = "OP_look";
		discreteDistance[] = { 50,100,150,200,250,300,350,400 };
		discreteDistanceCameraPoint[] = { "OP_eye_50","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400" };
		discreteDistanceInitIndex = 1;
		displayName = "UGP-40";
		drySound[] = { "A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_dry",0.562341,1,10 };
		magazineReloadSwitchPhase = 0.36;
		reloadAction = "GestureReloadMSBS_UGL";
		reloadMagazineSound[] = { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\GrenadeLauncher\Msbs65_Grenade_Reload_01",3.54813,1,10 };
		useExternalOptic = 0;
		useModelOptics = 0;
	};
	//BR
	class 53rd_3GL : UGL_F{
		scope = 2;
		magazines[] =
		{
			"1Rnd_HE_Grenade_shell"
		};
		magazineWell[] = { "53rd_Magwell_UGL" };
		displayName = "M301 Grendade Launcher";
		useModelOptics = true;
		useExternalOptic = false;
		cameraDir = "OP_look";
		discreteDistance[] = { 100,150,200,250,300,350 };
		discreteDistanceCameraPoint[] =
		{
				"OP_eye2",
				"OP_eye3",
				"OP_eye4",
				"OP_eye5",
				"OP_eye6",
				"OP_eye8"
			};
		discreteDistanceInitIndex = 1;
		reloadAction = "GestureReloadMXUGL";
		reloadMagazineSound[] =
		{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};

	};
	class 53rd_ARMSHT : UGL_F{
		scope = 2;
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
		autoFire = 0;
		ballisticsComputer = 0;
		cursor = "sgun";
		discreteDistance[] = { 50 };
		discreteDistanceInitIndex = 0;
		displayName = "TSP-12";
		drySound[] = { "A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_dry",0.562341,1,10 };
		fireSpreadAngle = 0.95;
		magazines[] = { "53rd_6Rnd_8Gauge_Pellets" };
		magazineWell[] = { "53rd_Magwell_UBS" };
		maxZeroing = 50;
		modes[] = { "Single" };
		muzzleEnd = "konec granatometu";
		muzzlePos = "usti granatometu";
		recoil = "recoil_MSBS65_ubs";
		reloadAction = "GestureReloadMSBS_UBS";
		reloadMagazineSound[] = { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_Shotgun_Reload_01",3.98107,1,10 };
		reloadTime = 0.35;
		class Single : Single {
			sounds[] = { "StandardSound" }; //Defines weapon sounds
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = { "OPTRE_Shotgun_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet" };
			};
		};

	};
};