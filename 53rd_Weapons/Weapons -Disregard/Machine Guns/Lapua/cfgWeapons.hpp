class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class MMG_02_black_F;
	class 53rd_UNSC_MMG : MMG_02_black_F
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] Lapua MG";
		baseWeapon = "53rd_UNSC_MMG";
		cursor = "OPTRE_M73";
		magazines[] =
		{
			"53rd_100Rnd_95x40_Box"
		};
		magazineWell[] = { "53rd_Magwell_Lapua" };
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
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser",
					"TCF_Rifle_Flashlight_IR"
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
	};
};