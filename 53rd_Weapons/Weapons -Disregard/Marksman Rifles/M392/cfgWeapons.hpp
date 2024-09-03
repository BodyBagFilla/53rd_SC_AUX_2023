class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class 19_UNSC_M392
	class 53rd_UNSC_M392 : 19_UNSC_M392
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M392";
		baseWeapon = "53rd_UNSC_M392";
		cursor = "arifle";
		magazines[] = {"53rd_15Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_M392" };
		class Flashlight {};
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
					"OPTRE_SRM_Sight",
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
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