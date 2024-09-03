class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_MA5B;
	class 53rd_M301UGL;
	class 53rd_UNSC_MA5B : OPTRE_MA5B
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA5B";
		baseWeapon = "53rd_UNSC_MA5B";
		cursor = "OPTRE_MA5";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class Flashlight {};
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
					"TCF_MA5_SmartLink_v2",
					"TCF_MA5_SmartLink_legacy",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5_BUIS"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser",
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};

	class 53rd_UNSC_MA5BGL : 53rd_UNSC_MA5B
	{
		//dlc = "53rdAux";
		//author = "53rd Aux Team";
		displayName = "[53rd] MA5BGL";
		baseWeapon = "53rd_UNSC_MA5BGL";
		//cursor = "OPTRE_MA5";
		//magazines[] = {"53rd_32Rnd_762x51_Mag"};
		//magazineWell[] = { "53rd_Magwell_MAx" };
		muzzles[] = { "this", "53rd_M301UGL" };
		picture = "\OPTRE_weapons\ar\icons\ma5bgl_icon.paa";
		model = "\OPTRE_Weapons\AR\MA5BGL.p3d";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR_UGL.paa";
		pictureMjolnirHud = "\OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA5CGL_icon.paa";
		/*class Flashlight {};*/
		class 53rd_M301UGL : 53rd_M301UGL {};
		class WeaponSlotsInfo : WeaponSlotsInfo {};
	};
};