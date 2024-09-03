class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_M6B;
	class 53rd_UNSC_M6G : OPTRE_M6B
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M6G";
		baseWeapon = "53rd_UNSC_M6G";
		cursor = "OPTRE_M6B";
		magazines[] = {"53rd_8Rnd_127x40_Mag"};
		magazineWell[] = { "53rd_Magwell_M6G" };
		linkedItems[] = { "OPTRE_M6G_Scope" };
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";
		model = "\OPTRE_Weapons\Pistol\m6g.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\OPTRE_Weapons\Pistol\data\M6G_CO.paa" };
		picture = "\OPTRE_weapons\pistol\icons\m6g_icon.paa";


		class Single : Single {
			reloadTime = .25;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = { "OPTRE_M6_silencer" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = { "TCF_M6_Flashlight_IR", "OPTRE_M6G_Flashlight", "OPTRE_M6G_Laser", "OPTRE_M6G_Vis_Red_Laser"};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = {
					"OPTRE_M6G_Scope",
					"OPTRE_M7_Sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red"
				};
			};
		};
	};
};