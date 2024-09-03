class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class 53rd_M301UGL;
	class 53rd_MA37;
	class 53rd_MA37 : OPTRE_MA37
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] MA37A";
		baseWeapon = "53rd_MA37";
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
				compatibleitems[] = { "OPTRE_MA37_Smartlink_Scope" };
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
	class 53rd_MA37GL : 53rd_MA37
	{
		displayName = "[53rd] MA37A + GL";
		baseWeapon = "53rd_MA37GL";
		picture = "\OPTRE_weapons\ar\icons\ma37gl_icon.paa";
		pictureMjolnirHud = "\OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA37GL_icon.paa";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\37_UGL.paa";
		muzzles[] = { "this", "53rd_M301UGL" };
		class WeaponSlotsInfo : WeaponSlotsInfo {};
		class 53rd_M301UGL : 53rd_M301UGL{};
	};
};