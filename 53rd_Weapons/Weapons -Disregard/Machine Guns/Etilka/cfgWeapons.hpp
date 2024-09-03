class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_M247H_Etilka;
	class 53rd_M247H_Etilka : OPTRE_M247H_Etilka{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M247H Etilka";
		baseWeapon = "53rd_M247H_Etilka";
		cursor = "OPTRE_M41";
		magazines[] =
		{
			"OPTRE_200Rnd_127x99_M247H_Etilka_Ball"
		};
		magazineWell[] = {};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
};