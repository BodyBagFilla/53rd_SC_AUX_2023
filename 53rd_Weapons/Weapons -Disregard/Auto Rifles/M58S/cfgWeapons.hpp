class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_M58S;
	class 53rd_UNSC_M58S : OPTRE_M58S{
	dlc = "53rdAux";
	author = "53rd Aux Team";
	displayName = "[53rd] M58S Special Applications Rifle";
	baseWeapon = "53rd_UNSC_M58S";
	//cursor = "OPTRE_MA37";
	magazines[] = { "53rd_36Rnd_95x40_Mag" };
	magazineWell[] = { "53rd_Magwell_BR" };
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : CowsSlot
		{
			compatibleitems[] =
			{
				"OPTRE_BMR_Scope",
				"OPTRE_M393_EOTECH",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Red",
				"optic_ERCO_blk_F",
				"optic_MRCO",
				"ACE_optic_MRCO_2D",
				"19_UNSC_evosd",
				"19_UNSC_evo",
				"optic_Hamr",
				"ACE_optic_Hamr_2D",
				"ACE_optic_Hamr_PIP",
				"OPTRE_M12_Optic",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
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
			compatibleItems[] = {
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

		};
	};
	};
};