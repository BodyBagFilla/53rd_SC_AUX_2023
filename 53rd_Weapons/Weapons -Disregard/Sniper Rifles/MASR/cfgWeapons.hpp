class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class DMR_04_base_F;
	class 53rd_MASR : DMR_04_base_F
	{
		author = "Operative Peroski";
		_generalMacro = "srifle_DMR_04_F";
		scope = 2;
		model = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\DMR_04_F.p3d";
		dexterity = 1.6799999;
		displayName = "[53rd] MASR-1";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\Data\UI\gear_DMR_04_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "$STR_A3_CfgWeapons_srifle_DMR_04_F1";
		inertia = 0.60000002;
		aimTransitionSpeed = 0.80000001;
		magazines[] = {"53rd_4Rnd_145x114_APFSDS_Mag"};
		magazineWell[] = { "53rd_Magwell_Snipers" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot
			{
				inkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] =
				{
					"OPTRE_MA5Suppressor"
				};
				iconPosition[] = { 0,0.4 };
			};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
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
				iconPosition[] = { 0.5,0.3 };
			};
			class PointerSlot
			{
				compatibleitems[] =
				{

				};
				iconPosition[] = { 0.2,0.4 };
			};
			class UnderBarrelSlot
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
		class ItemInfo
		{
			priority = 1;
		};
	};
};