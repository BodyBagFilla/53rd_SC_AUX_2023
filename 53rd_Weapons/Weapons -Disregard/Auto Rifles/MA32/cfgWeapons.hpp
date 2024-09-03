class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_MA32;
	class 53rd_M301UGL;
	class 53rd_MA32 : OPTRE_MA32
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA32A";
		baseWeapon = "53rd_MA32";
		cursor = "OPTRE_MA37";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "OPTRE_MA37KSuppressor" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "TCF_M393_EOTECH_v2",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"OPTRE_MA5_BUIS",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"optic_Hamr",
					"ACE_optic_Hamr_2D",
					"ACE_optic_Hamr_PIP",
					"OPTRE_M12_Optic",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight"

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

	class 53rd_MA32GL : 53rd_MA32
	{
		displayName = "[53rd] MA32A + GL";
		baseWeapon = "53rd_MA32GL";
		picture = "\OPTRE_weapons\ar\icons\ma32gl_icon.paa";
		pictureMjolnirHud = "\OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA5CGL_icon.paa";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR_UGL.paa";
		model = "\OPTRE_Weapons\AR\MA37IGL.p3d";
		muzzles[] = { "this", "53rd_M301UGL" };
		class WeaponSlotsInfo : WeaponSlotsInfo {};
		class 53rd_M301UGL : 53rd_M301UGL{};
	};
};