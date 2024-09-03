class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class 19_UNSC_M7;
	class OPTRE_M7;
	class 53rd_M7 : 19_UNSC_M7
	{
		dlc = MACRO_AUTHOR;
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		displayName = "[53rd] M7 SMG";
		baseweapon = "53rd_M7";
		recoil = "recoil_M7X";
		class Single;
		class FullAuto;
		magazines[] = { "53rd_60Rnd_5x23mm_Mag" };
		magazineWell[] = {"53rd_Magwell_M7"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = {"optre_m7_silencer"};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"19_UNSC_M7_optic",
					"19_UNSC_evo",
					"OPTRE_M12_Optic",
					"Optre_Evo_Sight"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M7_Laser",
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Vis_Red_Laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
	class 53rd_M7_OPTRE : OPTRE_M7
	{
		dlc = "53rd Aux";
		author = "53rd Aux Team";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[53rd] M7 Caseless SMG";
		baseweapon = "53rd_M7_OPTRE";
		recoil = "recoil_M7X";
		class Single;
		class FullAuto;
		magazines[] = { "53rd_60Rnd_5x23mm_Mag" };
		magazineWell[] = {"53rd_Magwell_M7"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = {"optre_m7_silencer"};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M7_Sight",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"19_UNSC_evo",
					"OPTRE_M12_Optic",
					"Optre_Evo_Sight"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"OPTRE_M7_Laser",
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Vis_Red_Laser"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};
};