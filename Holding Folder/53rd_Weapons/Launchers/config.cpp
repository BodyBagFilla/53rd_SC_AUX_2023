class CfgPatches
{
	class 53rd_Launchers
	{
		units[]={};
		weapons[]=
		{
			"53rd_M57_Pilum_b",
			"53rd_Heph_Launcher",
			"53rd_Ares_Launcher",
			"53rd_Apollo_Launcher",
			"53rd_Atlas_Launcher",
			"53rd_Pod_Launcher",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F_Launchers_Titan",
			"A3_Weapons_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F"
		};
		author="53rd AUX Team";
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class TCF_M57_Pilum;
	class TCF_CBN_Camera_Holder;
	class launch_Titan_short_F;
	class 53rd_M57_Pilum_b: TCF_M57_Pilum
	{
			dlc="";
			author="Fireteam Zulu & Shadow";
			displayName="[53rd] M57 Pilum - Disposable";
			baseWeapon="53rd_M57_Pilum_b";
			model="\TCF_WEAPONRY\Weapons\Launchers\M48\M48B_Cricket";
			picture="\TCF_WEAPONRY\Weapons\Launchers\M48\data\M48B_Cricket";
			hiddenSelections[]=
			{
				"tube_tex",
				"lower_tex",
				"grip_tex",
				"details_tex"
			};
			hiddenSelectionsTextures[]=
			{
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\tube_CO.paa",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\lower_CO.paa",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\grips_CO.paa",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\details_CO.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\tube.rvmat",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\lower.rvmat",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\grips.rvmat",
				"TCF_WEAPONRY\Weapons\Launchers\M48\data\details.rvmat"
			};
			magazines[]=
		{
			"53rd_M41_Rocket_Twin_MEME",
		};
	};
	class 53rd_Ares_Launcher: launch_Titan_short_F
	{
		displayName="[53rd] Ares Dragoon";
		descriptionShort="Ares Rocket Launcher";
		ace_javelin_enabled=1;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"53rd_Weapons\Launchers\TitanHolder.paa",
			"53rd_Weapons\Launchers\TitanAres.paa",
		};
		magazines[]=
		{
			"Titan_AT",
			"Titan_AP",
			"53rd_M15_Single_Slight",
		};
		magazineWell[]={};
	};
	class 53rd_Heph_Launcher: TCF_CBN_Camera_Holder
	{
		displayName="[53rd] Hephaestus Dragoon";
		descriptionShort="Hephaestus Rocket Launcher";
		ace_javelin_enabled=1;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"53rd_Weapons\Launchers\TitanHolder.paa",
			"53rd_Weapons\Launchers\TitanHeph.paa",
		};
		magazines[]=
		{
			"Titan_AT",
			"Titan_AP",
			"53rd_M15_Single_Slight",
		};
		magazineWell[]={};
	};
	class 53rd_Apollo_Launcher: TCF_CBN_Camera_Holder
	{
		displayName="[53rd] Apollo Dragoon";
		descriptionShort="Hephaestus Rocket Launcher";
		ace_javelin_enabled=1;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"53rd_Weapons\Launchers\TitanHolder.paa",
			"53rd_Weapons\Launchers\TitanApollo.paa",
		};
		magazines[]=
		{
			"Titan_AT",
			"Titan_AP",
			"53rd_M15_Single_Slight",
		};
		magazineWell[]={};
	};
	class 53rd_Atlas_Launcher: launch_Titan_short_F
	{
		displayName="[53rd] Atlas Dragoon";
		descriptionShort="Atlas Rocket Launcher";
		ace_javelin_enabled=1;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"53rd_Weapons\Launchers\TitanHolder.paa",
			"53rd_Weapons\Launchers\TitanAtlas.paa",
		};
		magazines[]=
		{
			"Titan_AT",
			"Titan_AP",
			"53rd_M15_Single_Slight",
		};
		magazineWell[]={};
	};
	class tf47_at4_heat: Launcher_Base_F
	{
	};
	class 53rd_Pod_Launcher: tf47_at4_heat
	{
		tf47_disposable=1;
		tf47_disposableMag="tf47_at4_m_heat";
		tf47_disposableTube="tf47_at4_tube";
		author="Baseplate & Demonic , Edited: Body";
		scope=2;
		scopeArsenal=2;
		baseWeapon="53rd_Pod_Launcher";
		displayName="[53rd] M96 LAW - Mk VIII";
		model="DMNS\Weapons\Launchers\DMNS_M96_LAW_loaded.p3d";
		picture="\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
		UiPicture="\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
		recoil="recoil_nlaw";
		maxZeroing=500;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TCF_WEAPONRY\Weapons\Launchers\m96\data\M96_cls_co.paa"
		};
		magazines[]=
		{
			"tf47_at4_m_HEAT"
		};
		modes[]=
		{
			"Single"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=174;
			class MuzzleSlot
			{
				access=1;
				compatibleitems[]=
				{
					"tf47_fakeitem_at4"
				};
				displayname="Muzzle Slot";
				linkproxy="-";
				scope=1;
			};
		};
	};
};

class CfgMagazines
{
	class Titan_AT;
	class 53rd_M15_Single_Slight: Titan_AT
    {
		displayname						= "[53rd] M15 Slight Rocket";
        displaynameshort				= "SLIGHT";
		descriptionshort				= "Shapred Light Inciderary Warhead";
		ammo							= "53rd_M15_Slight";
		mass = 90;
    };
};
class CfgAmmo
{
	class ACE_Javelin_FGM148;
	class 53rd_M15_Slight: ACE_Javelin_FGM148
	{
		author="ElfDream Studio";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl_fly.p3d";
		irLock=1;
		laserLock=0;
		airLock=0;
		manualControl=0;
		hit=1650;
		indirectHit=20;
		indirectHitRange=2;
		initTime=0.5;
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=4.9999999e-005;
			maxDeflection=0.025;
			incDeflection=4.9999999e-005;
			canVanillaLock=0;
			defaultSeekerType="Optic";
			seekerTypes[]=
			{
				"Optic"
			};
			defaultSeekerLockMode="LOBL";
			seekerLockModes[]=
			{
				"LOBL"
			};
			seekerAngle=180;
			seekerAccuracy=1;
			seekerMinRange=0;
			seekerMaxRange=2500;
			seekLastTargetPos=1;
			defaultAttackProfile="JAV_TOP";
			attackProfiles[]=
			{
				"JAV_TOP",
				"JAV_DIR"
			};
			useModeForAttackProfile=1;
		};
	};
};
