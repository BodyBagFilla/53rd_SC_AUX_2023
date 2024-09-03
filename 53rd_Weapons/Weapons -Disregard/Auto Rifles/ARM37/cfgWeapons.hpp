class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class TCF_ARM37;
	class TCF_ARM37_DMR;
	class 53rd_UNSC_ARM37 : TCF_ARM37
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] ARM-37";
		baseWeapon = "53rd_UNSC_ARM37";
		cursor = "arifle";
		magazines[] = {"53rd_32Rnd_762x51_Mag"};
		magazineWell[] = { "53rd_Magwell_MAx" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"optic_ERCO_blk_F",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"19_UNSC_evosd",
					"19_UNSC_evo",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight"
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
				compatibleItems[] = {
					"OPTRE_M12_Laser",
					"OPTRE_m12_Flashlight",
					"OPTRE_m12_Vis_Red_Laser",
					"TCF_Rifle_Flashlight_IR",
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser",
				};

			};
			class UnderBarrelSlot : UnderBarrelSlot
			{

			};
		};
	};
	class 53rd_UNSC_ARM37_GL : 53rd_UNSC_ARM37
	{
		displayName = "[53rd] ARM-37 GL";
		baseWeapon = "53rd_UNSC_ARM37_GL";
		model = "a3\Weapons_F_Enoch\Rifles\MSBS\MSBS65_GL_F";
		picture = "\TCF_WEAPONRY\Weapons\Icons\ar0gl_icon.paa";
		muzzles[] = { "this", "53rd_UGP40" };
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		handAnim[] = { "OFP2_ManSkeleton","\a3\Anims_F_Enoch\Data\Anim\handanims\MSBS65_UGL.rtm" };
		class 53rd_UGP40 : 53rd_UGP40{};
		class WeaponSlotsInfo : WeaponSlotsInfo {};
	};
	class 53rd_UNSC_ARM37_SHT : 53rd_UNSC_ARM37
	{
		displayName = "[53rd] ARM-37 Breacher";
		baseWeapon = "53rd_UNSC_ARM37_SHT";
		muzzles[] = { "this", "53rd_ARMSHT" };
		model = "a3\Weapons_F_Enoch\Rifles\MSBS\MSBS65_UBS_F";
		picture = "\TCF_WEAPONRY\Weapons\Icons\ar0b_icon.paa";
		handAnim[] = { "OFP2_ManSkeleton","\a3\Anims_F_Enoch\Data\Anim\handanims\MSBS65_UBS.rtm" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"optic_ERCO_blk_F",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"19_UNSC_evosd",
					"19_UNSC_evo",
					"optic_Hamr",
					"ACE_optic_Hamr_2D",
					"ACE_optic_Hamr_PIP",
					"OPTRE_M12_Optic",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight"
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
				compatibleItems[] = {
					"OPTRE_M12_Laser",
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

			};
		};
		class 53rd_ARMSHT : 53rd_ARMSHT{};
	};
	class 53rd_UNSC_ARM37_DMR : TCF_ARM37_DMR
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] ARM-37 DMR";
		baseWeapon = "53rd_UNSC_ARM37_DMR";
		cursor = "arifle";
		mass = 10;
		magazines[] = {"53rd_36Rnd_95x40_Mag"};
		magazineWell[] = { "53rd_Magwell_BR" };
		modes[] = { "Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"OPTRE_BMR_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Red",
					"optic_ERCO_blk_F",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"19_UNSC_evosd",
					"19_UNSC_evo",
					"optic_Hamr",
					"ACE_optic_Hamr_2D",
					"ACE_optic_Hamr_PIP",
					"OPTRE_M12_Optic",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight",
					"OPTRE_SRM_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope"
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
				compatibleItems[] = {
					"OPTRE_M12_Laser",
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
				compatibleItems[] = {};
			};
		};
	};
};