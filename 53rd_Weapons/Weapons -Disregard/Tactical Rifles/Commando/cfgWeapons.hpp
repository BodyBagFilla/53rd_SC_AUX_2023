class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_Commando_Black;
	class 53rd_UNSC_Commando : OPTRE_Commando_Black
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] Commando (Black)";
		baseWeapon = "53rd_UNSC_Commando";
		cursor = "OPTRE_M392";
		magazines[] = {"53rd_20Rnd_65x48_Mag"};
		magazineWell[] = { "53rd_Magwell_Commando" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA5Suppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"19_UNSC_evosd",
					"19_UNSC_evo",
					"optic_Hamr",
					"ACE_optic_Hamr_2D",
					"ACE_optic_Hamr_PIP",
					"OPTRE_M12_Optic",
					"optic_ERCO_blk_F",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight",
					"OPTRE_SRM_Sight"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"OPTRE_m12_Laser",
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
				compatibleitems[] = { "bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk" };
			};
		};
	};
	class 53rd_UNSC_Commando_Blue : 53rd_UNSC_Commando{
		baseWeapon = "53rd_UNSC_Commando_Blue";
		displayName = "[53rd] Commando (Police)";
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\Commando\data\commando_police_co.paa","OPTRE_Weapons\Commando\data\commando2_police_co.paa" };
		picture = "\OPTRE_Weapons\Commando\icons\vk78pd_icon.paa";
	};
	class 53rd_UNSC_Commando_Standard : 53rd_UNSC_Commando{
		baseWeapon = "53rd_UNSC_Commando_Standard";
		displayName = "[53rd] Commando";
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\Commando\data\commando_olive_co.paa","OPTRE_Weapons\Commando\data\commando2_olive_co.paa" };
		picture = "\OPTRE_Weapons\Commando\icons\vk78pd_icon.paa";
	};
	class 53rd_UNSC_Commando_Red : 53rd_UNSC_Commando{
		baseWeapon = "53rd_UNSC_Commando_Red";
		displayName = "[53rd] Commando (Red)";
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\Commando\data\commando_red_co.paa","OPTRE_Weapons\Commando\data\commando2_red_co.paa" };
		picture = "\OPTRE_Weapons\Commando\icons\vk78pd_icon.paa";
	};
	class 53rd_UNSC_Commando_White : 53rd_UNSC_Commando{
		baseWeapon = "53rd_UNSC_Commando_White";
		displayName = "[53rd] Commando (White)";
		hiddenSelectionsTextures[] = { "OPTRE_Weapons\Commando\data\commando_snow_co.paa","OPTRE_Weapons\Commando\data\commando2_snow_co.paa" };
		picture = "\OPTRE_Weapons\Commando\icons\vk78pd_icon.paa";
	};
	class 53rd_UNSC_Commando_Tan : 53rd_UNSC_Commando{
			baseWeapon = "53rd_UNSC_Commando_Tan";
			displayName = "[53rd] Commando (Tan)";
			hiddenSelectionsTextures[] = { "OPTRE_Weapons\Commando\data\commando_tan_co.paa","OPTRE_Weapons\Commando\data\commando2_tan_co.paa" };
			picture = "\OPTRE_Weapons\Commando\icons\vk78pd_icon.paa";
	};
};