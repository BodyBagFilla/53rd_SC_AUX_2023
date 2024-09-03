class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class Aegis_arifle_SR25_blk_F;
	class 53rd_UNSC_MK11 : Aegis_arifle_SR25_blk_F{
	dlc = "53rdAux";
	author = "53rd Aux Team";
	displayName = "[53rd] Mk11 ";
	baseWeapon = "53rd_UNSC_MK11";
	cursor = "OPTRE_M392";
	magazines[] = {"53rd_20Rnd_762x51_Mag"};
	magazineWell[] = { "53rd_Magwell_Mk11" };
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class MuzzleSlot : MuzzleSlot
		{
			compatibleitems[] = { "OPTRE_MA5Suppressor" };
		};
		class CowsSlot : CowsSlot
		{
			//Add the scopes Ullr wanted
			compatibleitems[] =
			{
				"OPTRE_BMR_Scope",
				"OPTRE_M393_EOTECH",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
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
				"optic_AMS",
				"optic_AMS_snd",
				"optic_AMS_khk",
				"optic_LRPS",
				"ACE_optic_LRPS_PIP",
				"ACE_optic_LRPS_2D",
				"OPTRE_SRM_Sight",
				"OPTRE_M393_Scope",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_SRS99C_Scope"
			};
		};
		class PointerSlot : PointerSlot
		{
			compatibleitems[] = {
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
			compatibleitems[] = { "bipod_01_f_blk", "bipod_01_f_snd","bipod_01_f_khk" };
		};
	};
	};
	class 53rd_UNSC_MK11_Olive : 53rd_UNSC_MK11{
		displayName = "[53rd] Mk11 (Olive)";
		baseWeapon = "53rd_UNSC_MK11_Sand";
		hiddenSelectionsTextures[] = { "\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_01_khaki_CO.paa","\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_02_khaki_CO.paa" };
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\UI\Icon_arifle_SR25_khaki_F_CA.paa";
	};
	class 53rd_UNSC_MK11_Desert : 53rd_UNSC_MK11{
		displayName = "[53rd] Mk11 (Desert)";
		baseWeapon = "53rd_UNSC_MK11_Desert";
		hiddenSelectionsTextures[] = {"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_01_sand_CO.paa","\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_02_sand_CO.paa"};
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\UI\Icon_arifle_SR25_sand_F_CA.paa";
	};
};