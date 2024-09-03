class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class 19_UNSC_M90;
	class 53rd_UNSC_M90 : 19_UNSC_M90
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M90 Shotgun";
		baseWeapon = "53rd_UNSC_M90";
		cursor = "OPTRE_M45";
		magazines[] = {"53rd_6Rnd_8Gauge_Pellets"};
		magazineWell[] = { "53rd_Magwell_8Gauge" };
	};
};