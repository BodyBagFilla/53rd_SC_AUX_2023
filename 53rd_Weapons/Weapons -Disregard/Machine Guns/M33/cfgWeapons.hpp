class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class TCF_M33_T;
	class 53rd_M33 : TCF_M33_T
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		baseWeapon = "53rd_M33";
		scope = 2;
		displayName = "[53rd] M33";
		model = "\TCF_WEAPONRY\Weapons\Machineguns\M33\TCF_M33_T.p3d";
		mass = 75;
		reloadAction = "GestureReloadSPAR_01";
		picture = "\TCF_WEAPONRY\Weapons\Machineguns\CM12\CM12_Icon.paa";
		UiPicture = "\TCF_WEAPONRY\Weapons\Machineguns\CM12\CM12_Icon.paa";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\Anim\mmg_01.rtm"};
		muzzles[] = {"this"};
		cursor = "OPTRE_M73";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\MachineGun\MG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_LMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_LMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_LMG";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 150;
		magazines[] = {"53rd_128Rnd_762x51_Drum"};
		magazineWell[] = { "53rd_Magwell_M33" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				inkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
				iconPosition[] = {0,0.4};
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"OPTRE_M392_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"19_UNSC_evosd",
					"19_UNSC_evo",
					"optic_Hamr",
					"ACE_optic_Hamr_2D",
					"ACE_optic_Hamr_PIP",
					"OPTRE_M12_Optic",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight"
				};
				iconPosition[] = {0.5,0.3};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser",
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser"
				};
				iconPosition[] = {0.2,0.4};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] =
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
};