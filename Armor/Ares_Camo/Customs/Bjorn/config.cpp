
class CfgPatches
{
	class 53rd_Ares_Bjorn_Custom
	{
		author="21st SAB & 53rd";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"53rd_Ares_RA_H3_Helmet",
			"53rd_Ares_Rifleman_H3_Helmet",
			"53rd_Ares_Medic_H3_Helmet",
			"53rd_Ares_TL_H3_Helmet",
			"53rd_Ares_SL_H3_Helmet",
			"53rd_Ares_PL_H3_Helmet",
			"53rd_Ares_MA_Vest_Rifleman_Normal",
			"53rd_Ares_MA_Vest_Rifleman_CQB",
			"53rd_Ares_MA_Vest_Rifleman_Sniper",
			"53rd_Ares_MA_Vest_PL",
			"53rd_Ares_MA_Vest_PL_CQB",
			"53rd_Ares_MA_Vest_PL_Sniper",
			"53rd_Ares_MA_Vest_SL",
			"53rd_Ares_MA_Vest_SL_CQB",
			"53rd_Ares_MA_Vest_SL_Sniper",
			"53rd_Ares_MA_Vest_TL",
			"53rd_Ares_MA_Vest_TL_CQB",
			"53rd_Ares_MA_Vest_TL_SNIPER",
			"53rd_Ares_MA_Vest_Medic",
			"53rd_Ares_MA_Vest_Medic_Sniper",
			"53rd_Ares_MA_Vest_Medic_CQB",
			
		};
	};
};
#include "../xtdGear.hpp"
class CfgWeapons
{

	class ItemInfo;
	class MA_M56SH_Helmet;
	class 53rd_Ares_Bjorn_Helmet: MA_M56SH_Helmet
	{
		dlc="53rd";
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		picture="\53rd_sc_aux\tex\Arsenal\Ares.paa"
		displayName="[53rd] Ares Custom (Bjorn)";
		hiddenSelectionsTextures[]=
		{
		"\53rd_sc_aux\Armor\Ares_Camo\Customs\Bjorn\53rd_Ares_Bjorn_Helmet.paa",
		"MA_Armor\data\Helmets\H3_ODST\H3_Visor_Black_co.paa"
		};

		class ItemInfo;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=50;
				explosionShielding = 3;
				passThrough=0.3;
			};
			class Face
			{
				hitpointName="HitFace";
				armor=50;
				explosionShielding = 3;
				passThrough=0.3;
			};
			class Neck
			{
				armor=50;
				hitpointName="HitNeck";
				explosionShielding = 3;
				passThrough=0.1;
			};
		};
	};
};

