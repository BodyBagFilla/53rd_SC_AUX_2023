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
class PointerSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;
class Mode_SemiAuto;
class Single;
class Components;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateDataLink;
class SensorTemplateLaser;
class CfgWeapons
{
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
