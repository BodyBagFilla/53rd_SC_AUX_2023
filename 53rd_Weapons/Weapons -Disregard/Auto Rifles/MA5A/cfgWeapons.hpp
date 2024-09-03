class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class 19_UNSC_MA5A;
	class 19_UNSC_MA5A_gl;
	class 53rd_UNSC_MA5A : 19_UNSC_MA5A
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA5A";
		baseWeapon = "53rd_UNSC_MA5A";
		cursor = "OPTRE_MA5";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class Flashlight {};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor", "19_UNSC_MA5A_Suppressor"};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"19_UNSC_MA5A_smartlink"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"19_UNSC_MA5A_LAM",
					"OPTRE_M12_Laser",
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
				compatibleitems[] = {};
			};
		};
	};
	class 53rd_UNSC_MA5AGL : 19_UNSC_MA5A_gl
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA5AGL";
		baseWeapon = "53rd_UNSC_MA5AGL";
		cursor = "OPTRE_MA5";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class Flashlight {};
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
					"19_UNSC_MA5A_smartlink"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"19_UNSC_MA5A_LAM",
					"OPTRE_M12_Laser",
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
				compatibleitems[] = {};
			};
		};
	};
};