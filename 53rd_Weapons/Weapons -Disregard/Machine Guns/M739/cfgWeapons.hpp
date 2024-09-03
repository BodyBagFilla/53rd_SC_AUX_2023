class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class TCF_Saw_Gamma_Stealth;
	class 53rd_UNSC_M739 : TCF_Saw_Gamma_Stealth{
	dlc = "53rdAux";
	author = "53rd Aux Team";
	displayName = "[53rd] M739 (Saw)";
	baseWeapon = "53rd_UNSC_M739";
	cursor = "mg";
	mass = 12;
	magazines[] =
	{
		"53rd_128Rnd_762x51_Drum"
	};
	magazineWell[] = { "53rd_Magwell_M739" };
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