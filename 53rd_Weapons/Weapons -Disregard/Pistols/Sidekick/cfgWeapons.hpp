class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class MA_MK50_Sidekick;
	class 53rd_UNSC_Sidekick : MA_MK50_Sidekick{
	dlc = "53rdAux";
	author = "53rd Aux Team";
	displayName = "[53rd] Mk50 Sidekick";
	baseWeapon = "53rd_UNSC_Sidekick";
	scope = 0;
	//magazines[] = {"53rd_12Rnd_127x40_Mag"};
	//magazineWell[] = { "53rd_Magwell_M6C" };

	class WeaponSlotsInfo : WeaponSlotsInfo {
		class MuzzleSlot : MuzzleSlot
		{
			compatibleItems[] = {};
		};
		class PointerSlot : PointerSlot
		{
			compatibleItems[] = {};
		};
		class CowsSlot : CowsSlot
		{
			compatibleitems[] = {};
		};
	};
	};
};