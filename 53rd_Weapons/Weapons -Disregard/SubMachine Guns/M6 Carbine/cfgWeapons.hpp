class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class pdw2000_base_F;
	class 53rd_m6_carbine : pdw2000_base_F
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		displayName = "[53rd] M6 Carbine";
		descriptionShort = "12.7x40mm Pistol Caliber Carbine";
		picture = "\A3\Weapons_F_gamma\Smgs\pdw2000\data\UI\gear_pdw2X_X_CA.paa";
		UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		model = "\A3\Weapons_F_gamma\Smgs\pdw2000\pdw2000_F.p3d";
		modelOptics = "-";
		baseWeapon = "53rd_m6_carbine";
		cursor = "OPTRE_M6C";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_PistolODST";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_PistolODST";
		Eye = "OPTRE_EYE_HUD_AmmoCount_PistolSmart";
		scope = 2;
		magazines[] = { "53rd_16Rnd_127x40_Mag" };
		magazineWell[] = { "53rd_Magwell_M6Carbine" };
		reloadAction = "GestureReloadSMG_03";
		recoil = "recoil_akm";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		modes[] =
		{
			"Single",
			"FullAuto"
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound","CompSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",1.0,1,200};
				closure2[] = {"",1.0,1,200};
				soundClosure[] = {"closure1",0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class CompSound : BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.054499999;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.00174;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto : Mode_FullAuto {
			sounds[] = { "StandardSound","SilencedSound","CompSound" };
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "",1.0,1,200 };
				closure2[] = { "",1.0,1,200 };
				soundClosure[] = { "closure1",0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200 };
				soundBegin[] = { "begin1",1 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType
			{
				begin1[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600 };
				begin2[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600 };
				begin3[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600 };
				soundBegin[] = { "begin1",0.33,"begin2",0.33,"begin2",0.34 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class CompSound : BaseSoundModeType
			{
				begin1[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600 };
				begin2[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600 };
				begin3[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600 };
				soundBegin[] = { "begin1",0.33,"begin2",0.33,"begin3",0.34 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600 };
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = { "A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600 };
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.1;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.0020300001;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M6_silencer"
				};
				iconPosition[] = {0.1,0.41};
				iconScale = 0.2;
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m6c_scope",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"19_UNSC_evo",
					"Optre_Evo_Sight",
					"OPTRE_M12_Optic"
				};
				iconPosition[] = {0.40000001,0.31999999};
				iconScale = 0.15000001;
			};
			class PointerSlot
			{
				compatibleItems[] =
				{
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser",
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser",
					"TCF_Rifle_Flashlight_IR"
				};
			};
			mass = 30;
		};
		inertia = 0.2;
		aimTransitionSpeed = 1.5;
		dexterity = 1.8;
		initSpeed = 600;
		class ItemInfo
		{
			priority = 2;
		};
	};
};