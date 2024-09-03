class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_M247;
	class 53rd_M247_hmg : OPTRE_M247
	{
		author = "53rd SC";
		displayName = "[53rd] M247 (HMG)";
		baseWeapon = "Optre_M247_hmg";
		scope = 2;
		picture = "\TCF_WEAPONRY\Weapons\Icons\gpmg_icon.paa";
		model = "\TCF_WEAPONRY\Weapons\Machineguns\M247GPMG\TCF_M247_GPMG.p3d";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 100;
		magazines[] = { "53rd_100Rnd_762x51_Box" };
		magazineWell[] = {"53rd_Magwell_M247"};
		class GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"19_UNSC_evosd",
					"19_UNSC_evo",
					"optic_Hamr",
					"ACE_optic_Hamr_2D",
					"ACE_optic_Hamr_PIP",
					"OPTRE_M12_Optic",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_m12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser",
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] =
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
		initSpeed = 1100;
		modes[] =
		{
			"FullAuto"
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",
					1,
					1,
					2000
				};
				begin2[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",
					1,
					1,
					2000
				};
				soundBegin[] =
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.097499996;
			dispersion = 0.00105;
			minRange = 2;
			minRangeProbab = 0.0099999998;
			midRange = 200;
			midRangeProbab = 0.0099999998;
			maxRange = 800;
			maxRangeProbab = 0.0099999998;
		};
		descriptionShort = "M247 HMG";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\MG\data\anim\OPTRE_M247_handanim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\M247_Spartan.rtm"
		};
	};
};