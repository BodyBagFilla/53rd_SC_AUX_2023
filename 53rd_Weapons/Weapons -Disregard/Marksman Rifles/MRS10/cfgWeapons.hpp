class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class TCF_MRS10;
	class TCF_MRS;
	class 53rd_UNSC_MRS10 : TCF_MRS10{
dlc = "53rdAux";
author = "53rd Aux Team";
displayName = "[53rd] MRS-10";
baseWeapon = "53rd_UNSC_MRS10";
cursor = "OPTRE_M392";
mass = 13;
magazines[] = {"53rd_20Rnd_86x70_Mag"};
magazineWell[] = { "53rd_Magwell_MRS" };
class WeaponSlotsInfo : WeaponSlotsInfo
{
	class MuzzleSlot : MuzzleSlot
	{
		compatibleitems[] = { "OPTRE_MA5Suppressor" };
	};
	class CowsSlot : CowsSlot
	{
		compatibleitems[] =
		{
			"OPTRE_BMR_Scope",
			"OPTRE_M393_EOTECH",
			"Optre_Recon_Sight",
			"Optre_Recon_Sight_Red",
			"Optre_Recon_Sight_Green",
			"19_UNSC_evosd",
			"19_UNSC_evo",
			"optic_MRCO",
			"ACE_optic_MRCO_2D",
			"optic_ERCO_blk_F",
			"optic_Hamr",
			"ACE_optic_Hamr_2D",
			"ACE_optic_Hamr_PIP",
			"OPTRE_M12_Optic",
			"Optre_Evo_Sight_Riser",
			"Optre_Evo_Sight",
			"optic_AMS",
			"optic_AMS_snd",
			"optic_AMS_khk",
			"optic_LRPS",
			"ACE_optic_LRPS_PIP",
			"ACE_optic_LRPS_2D",
			"OPTRE_SRM_Sight",
			"OPTRE_M393_Scope",
			"OPTRE_BR45_Scope",
			"OPTRE_BR55HB_Scope",
			"OPTRE_SRS99C_Scope"
		};
	};
	class PointerSlot : PointerSlot
	{
		compatibleitems[] = {
			"OPTRE_M12_Laser",
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
		compatibleitems[] = { "bipod_01_f_blk",
			"bipod_02_f_blk",
			"bipod_03_f_blk"
		};
	};
};
	};
	class 53rd_UNSC_MRS10S1 : TCF_MRS{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MRS-10L-S1";
		baseWeapon = "53rd_UNSC_MRS10S1";
		cursor = "OPTRE_M392";
		mass = 13;
		magazines[] = {"53rd_20Rnd_86x70_Mag"};
		magazineWell[] = { "53rd_Magwell_MRS" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"19_UNSC_evosd",
					"19_UNSC_evo",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"optic_ERCO_blk_F",
					"optic_Hamr",
					"ACE_optic_Hamr_2D",
					"ACE_optic_Hamr_PIP",
					"OPTRE_M12_Optic",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight",
					"optic_AMS",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_LRPS",
					"ACE_optic_LRPS_PIP",
					"ACE_optic_LRPS_2D",
					"OPTRE_SRM_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_SRS99C_Scope"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"OPTRE_M12_Laser",
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
				compatibleitems[] = { "bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
	};
};