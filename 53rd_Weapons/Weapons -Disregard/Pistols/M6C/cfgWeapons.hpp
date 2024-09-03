class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_M6B;
	class 53rd_UNSC_M6C : OPTRE_M6B
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M6C";
		baseWeapon = "53rd_UNSC_M6C";
		cursor = "OPTRE_M6B";
		magazines[] = {"53rd_12Rnd_127x40_Mag"};
		magazineWell[] = { "53rd_Magwell_M6C" };
		linkedItems[] = { "OPTRE_M6C_compensator", "OPTRE_M6C_Laser" };

		picture = "\OPTRE_weapons\pistol\icons\m6c_icon.paa";
		model = "\OPTRE_Weapons\Pistol\m6c.p3d";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\optre_weapons\pistol\data\m6c_m6c_co.paa" };

		class Single : Single {
			reloadTime = .1875;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = { "OPTRE_M6C_compensator", "OPTRE_M6_silencer"};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = { "TCF_M6_Flashlight_IR", "OPTRE_M6C_Laser", "OPTRE_M6C_Flashlight", "OPTRE_M6C_Vis_Red_Laser"};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {
					"OPTRE_M6C_Scope",
					"OPTRE_M7_Sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"Optre_Evo_Sight"
				};
			};
		};
	};
};