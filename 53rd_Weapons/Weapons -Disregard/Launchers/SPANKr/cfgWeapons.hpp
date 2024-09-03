class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_M41_SSR;
	class 53rd_UNSC_M41_SSR : OPTRE_M41_SSR{
	dlc = "53rdAux";
	author = "53rd Aux Team";
	displayName = "[53rd] M41 SSR 'SPANKr'";
	baseWeapon = "53rd_UNSC_M41_SSR";
	magazines[] = {
		"53rd_M41_Twin_HEAT"
	};
	magazineWell[] = { "53rd_Magwell_SPANKr" };
	};
};