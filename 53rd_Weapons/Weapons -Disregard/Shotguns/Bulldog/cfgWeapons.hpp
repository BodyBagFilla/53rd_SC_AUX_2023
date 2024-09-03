class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class OPTRE_CQS48_Bulldog_Automatic;
	class 53rd_UNSC_Bulldog : OPTRE_CQS48_Bulldog_Automatic
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] Bulldog Combat Shotgun";
		baseWeapon = "53rd_UNSC_Bulldog";
		cursor = "OPTRE_M45";
		magazines[] = {"53rd_12Rnd_12Gauge_Pellets"};
		magazineWell[] = {"53rd_Magwell_12Gauge"};
		picture = "\OPTRE_Weapons\bulldog\data\wire\bulldog.paa";
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
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser",
					"OPTRE_M12_Laser",
					"OPTRE_M12_Flashlight",
					"OPTRE_M12_Vis_Red_Laser",
					"TCF_Rifle_Flashlight_IR"
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
	class 53rd_UNSC_Bulldog_Winter : 53rd_UNSC_Bulldog{
		displayName = "[53rd] Bulldog (Snow)";
		baseWeapon = "53rd_UNSC_Bulldog_Snow";
		hiddenSelectionsMaterials[] = { "\OPTRE_Weapons\bulldog\data\body.rvmat","\OPTRE_Weapons\bulldog\data\decal\cqs48a\decal.rvmat" };
		hiddenSelectionsTextures[] = { "\OPTRE_Weapons\bulldog\data\Body_Snow.paa","\OPTRE_Weapons\bulldog\data\decal\cqs48a\DecalSheet_co.paa" };
	};
	class 53rd_UNSC_Bulldog_Desert : 53rd_UNSC_Bulldog{
		displayName = "[53rd] Bulldog (Desert)";
		baseWeapon = "53rd_UNSC_Bulldog_Snow";
		hiddenSelectionsMaterials[] = { "\OPTRE_Weapons\bulldog\data\body.rvmat","\OPTRE_Weapons\bulldog\data\decal\cqs48a\decal.rvmat" };
		hiddenSelectionsTextures[] = { "\OPTRE_Weapons\bulldog\data\Body_Desert.paa","\OPTRE_Weapons\bulldog\data\decal\cqs48a\DecalSheet_co.paa" };
	};
	class 53rd_UNSC_Bulldog_Olive : 53rd_UNSC_Bulldog{
		displayName = "[53rd] Bulldog (Woodland)";
		baseWeapon = "53rd_UNSC_Bulldog_Snow";
		hiddenSelectionsMaterials[] = { "\OPTRE_Weapons\bulldog\data\body.rvmat","\OPTRE_Weapons\bulldog\data\decal\cqs48a\decal.rvmat" };
		hiddenSelectionsTextures[] = { "\OPTRE_Weapons\bulldog\data\Body_Green.paa","\OPTRE_Weapons\bulldog\data\decal\cqs48a\DecalSheet_co.paa" };
	};
	class 53rd_UNSC_Bulldog_Innie : 53rd_UNSC_Bulldog{
		displayName = "[53rd] Bulldog (Innie)";
		baseWeapon = "53rd_UNSC_Bulldog_Snow";
		hiddenSelectionsMaterials[] = { "\OPTRE_Weapons\bulldog\data\Innie\innie.rvmat","\OPTRE_Weapons\bulldog\data\decal\innie\cqs48a\decal.rvmat" };
		hiddenSelectionsTextures[] = { "\OPTRE_Weapons\bulldog\data\Innie\Body_co.paa","\OPTRE_Weapons\bulldog\data\decal\innie\cqs48a\DecalSheet_co.paa" };
	};
};