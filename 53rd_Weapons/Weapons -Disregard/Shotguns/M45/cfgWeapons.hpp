class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_M45;
	class 53rd_UNSC_M45 : OPTRE_M45
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] M45";
		baseWeapon = "53rd_UNSC_M45";
		cursor = "OPTRE_M45";
		magazines[] = {"53rd_6Rnd_8Gauge_Pellets"};
		magazineWell[] = { "53rd_Magwell_8Gauge" };
		class Single : Single {
			reloadTime = .8;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] =
				{
					"TCF_muzzle_cylinder",
					"TCF_muzzle_IMP_CYL",
					"TCF_muzzle_Modified"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser",
					"OPTRE_m12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser",
					"OPTRE_M45_Flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] =
				{

				};
			};
		};
	};
	class 53rd_UNSC_M45_TAC : 53rd_UNSC_M45{
		displayName = "[53rd] M45 Tactical";
		baseWeapon = "53rd_UNSC_M45_Tac";
		model = "\OPTRE_Weapons\Shotgun\shotguntac.p3d";
		picture = "\OPTRE_weapons\shotgun\icons\M452.paa";
	};
	class 53rd_UNSC_M45E : 53rd_UNSC_M45{
		displayName = "[53rd] M45E";
		baseWeapon = "53rd_UNSC_M45E";
		model = "\OPTRE_Weapons\Shotgun\shotgun_e.p3d";
		picture = "\OPTRE_weapons\shotgun\icons\M451.paa";
	};
	class 53rd_UNSC_M45E_TAC : 53rd_UNSC_M45{
		displayName = "[53rd] M45E Tactical";
		baseWeapon = "53rd_UNSC_M45E_Tac";
		model = "\OPTRE_Weapons\Shotgun\shotgun_etac.p3d";
		picture = "\OPTRE_weapons\shotgun\icons\M451.paa";
	};
};