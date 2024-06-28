class CfgPatches
{
	class 53rd_SRS99
	{
		units[]={};
		weapons[]=
		{
		"53rd_Fang"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
		author="53rd AUX Team";
	};
};
class CfgWeapons
	{
		class OPTRE_SRS99C;
		class 53rd_Fang: OPTRE_SRS99C
		{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] SRS-99 (Fang)";
		baseWeapon="53rd_Fang";
		cursor="OPTRE_SRS99";
		hiddenSelections[] = {"camo","camo1"}; 
		hiddenSelectionsTextures[]={"53rd_Weapons\SRS99 (NornFang)\Norn_MainBody_CO.paa","53rd_Weapons\SRS99 (NornFang)\Mag_CO.paa"};
		magazines[]=
		{
			"OPTRE_4Rnd_145x114_APFSDS_Mag",
			"OPTRE_4Rnd_145x114_HVAP_Mag",
			"OPTRE_4Rnd_145x114_HEDP_Mag"
		};
		magazineWell[]={};
		maxZeroing=2000;
		};
	
	};