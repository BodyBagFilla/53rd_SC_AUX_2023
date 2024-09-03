class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class optre_hgun_sas10_F;
	class 53rd_UNSC_SAS10 : optre_hgun_sas10_F{
	dlc = "53rdAux";
	author = "53rd Aux Team";
	displayName = "[53rd] SAS10";
	baseWeapon = "53rd_UNSC_SAS10";
	cursor = "OPTRE_M6G";
	//magazines[] = {""};
	//magazineWell[] = {""};
	maxZeroing = 2000;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 30;
		class MuzzleSlot
		{
			compatibleItems[] =
			{
				"OPTRE_M12_Suppressor"
			};
		};
		class CowsSlot
		{
			compatibleitems[] = {};
		};
		class PointerSlot
		{
			compatibleitems[] = {};

		};
		class UnderBarrelSlot
		{
			compatibleItems[] = {};
		};

	};
	};
};