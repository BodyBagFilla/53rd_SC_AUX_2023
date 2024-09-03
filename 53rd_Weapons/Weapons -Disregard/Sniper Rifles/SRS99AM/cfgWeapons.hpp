class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class 19_UNSC_SRS99AM;
	class 53rd_UNSC_SRS99_AM : 19_UNSC_SRS99AM
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] SRS-99AM";
		baseWeapon = "53rd_UNSC_SRS99_AM";
		cursor = "OPTRE_SRS99";
		magazines[] = {"53rd_4Rnd_145x114_APFSDS_Mag"};
		magazineWell[] = {"53rd_Magwell_Snipers"};
		maxZeroing = 2000;
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
					"19_UNSC_SRS99AM_Scope",
					"OPTRE_SRS99_Scope",
					"OPTRE_SRS99C_Scope"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {

				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};

		};
	};
};