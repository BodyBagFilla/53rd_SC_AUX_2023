class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_SRS99D;
	class 53rd_UNSC_SRS99D : OPTRE_SRS99D
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] SRS-99D";
		baseWeapon = "53rd_UNSC_SRS99D";
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

				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
	};
};