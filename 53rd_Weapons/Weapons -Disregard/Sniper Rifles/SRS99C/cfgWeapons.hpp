class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class 53rd_UNSC_SRS99C : OPTRE_SRS99C
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] SRS-99C";
		baseWeapon = "53rd_UNSC_SRS99C";
		cursor = "OPTRE_SRS99";
		magazines[] = {"53rd_4Rnd_145x114_APFSDS_Mag"};
		magazineWell[] = {"53rd_Magwell_Snipers"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"OPTRE_SRS99D_Suppressor"
				};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_SRS99_Scope",
					"OPTRE_SRS99C_Scope",
					"OPTRE_SRM_Sight"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser",
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser"
				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
};