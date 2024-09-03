class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_MuzzleSlot;
class OPTRE_CowsSlot_Rail;
class OPTRE_Pointers;
class OPTRE_UnderBarrelSlot_rail;
class CfgWeapons {
	class 53rd_3GL;
	class 19_UNSC_br55;
	class 19_UNSC_br55_HB;
	class 53rd_UNSC_br55 : 19_UNSC_br55
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] BR-55";
		baseWeapon = "53rd_UNSC_br55";
		cursor = "OPTRE_BR55";
		magazines[] = {"53rd_36Rnd_95x40_Mag"};
		magazineWell[] = { "53rd_Magwell_BR" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] +=
				{
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"19_UNSC_evosd",
					"19_UNSC_evo",
					"optic_ERCO_blk_F",
					"optic_Hamr",
					"ACE_optic_Hamr_2D",
					"ACE_optic_Hamr_PIP",
					"OPTRE_M12_Optic",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight",
					"OPTRE_SRM_Sight"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] +=
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {
					"19_UNSC_BR55_LAM",
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
	class 53rd_UNSC_br55_gl : 53rd_UNSC_br55
	{
		displayName = "[53rd] BR55/GL";
		baseWeapon = "53rd_UNSC_br55_gl";
		model = "\UNSC_F_Weapons\weapons\UNSC_br55_gl.p3d";
		picture = "\UNSC_F_Weapons\weapons\UI\BR55_gl_UI.paa";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		handAnim[] = { "OFP2_ManSkeleton","\UNSC_F_Weapons\weapons\animations\br55_gl_standing.rtm","Spartan_ManSkeleton","\OPTRE_FC_Weapons\ConcussionRifle\data\anim\Spartan_ConcRifleHandAnim.rtm" };
		muzzles[] = { "this", "53rd_3GL" };
		UiPicture = "\UNSC_F_Weapons\weapons\UI\BR55_gl_UI.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo {};
		class 53rd_3GL : 53rd_3GL {};
	};
	//done
	class 53rd_UNSC_br55_HB : 19_UNSC_br55_HB
	{
		dlc = "53rdAux";
		author = "53rd Aux Team";
		displayName = "[53rd] BR55-HB";
		baseWeapon = "53rd_UNSC_br55_HB";
		cursor = "OPTRE_BR55";
		magazines[] = {"53rd_36Rnd_95x40_Mag"};
		magazineWell[] = {"53rd_Magwell_BR"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : CowsSlot
			{
				compatibleitems[] +=
				{
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_M393_EOTECH",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"optic_Hamr",
					"ACE_optic_Hamr_2D",
					"ACE_optic_Hamr_PIP",
					"OPTRE_M12_Optic",
					"optic_MRCO",
					"ACE_optic_MRCO_2D",
					"19_UNSC_evosd",
					"19_UNSC_evo",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight",
					"optic_ERCO_blk_F",
					"OPTRE_SRM_Sight"
				};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] +=
				{
					"OPTRE_MA5Suppressor"
				};
			};
			class PointerSlot : PointerSlot

			{
				compatibleItems[] = {
					"19_UNSC_BR55_LAM",
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
	//done
	class 53rd_UNSC_br55_HB_gl : 53rd_UNSC_br55_HB
	{
		displayName = "[53rd] BR55-HB/GL";
		baseWeapon = "53rd_UNSC_br55_HB_gl";
		model = "\UNSC_F_Weapons\weapons\UNSC_br55_HB_gl.p3d";
		picture = "\UNSC_F_Weapons\weapons\UI\BR55_HB_gl_UI.paa";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		muzzles[] = { "this", "53rd_3GL" };
		handAnim[] = { "OFP2_ManSkeleton","\UNSC_F_Weapons\weapons\animations\br55_gl_standing.rtm","Spartan_ManSkeleton","\OPTRE_FC_Weapons\ConcussionRifle\data\anim\Spartan_ConcRifleHandAnim.rtm" };
		UiPicture = "\UNSC_F_Weapons\weapons\UI\BR55_HB_gl_UI.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo {};
		class 53rd_3GL : 53rd_3GL {};
	};
};