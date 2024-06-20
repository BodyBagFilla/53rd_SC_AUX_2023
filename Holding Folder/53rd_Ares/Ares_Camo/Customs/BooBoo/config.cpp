class CfgPatches
{
	class 53rd_Ares_Booben_Custom
	{
		author="21st SAB & 53rd";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
		"53rd_Ares_Boonben_Helmet",
		};
	};
};
#include "../xtdGear.hpp"
class CfgWeapons
{

	class ItemInfo;
	class HeadgearItem;
//////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////Helmets/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
	class MA_Helmet_Base;
	class MA_M56SH_Helmet: MA_Helmet_Base
	{
		class ItemInfo;
	};
	class 53rd_Ares_Boonben_Helmet: MA_M56SH_Helmet
	{
		dlc="53rd";
		author="53rd Aux Team";
		scope=2;
		scopeArsenal=2;
		picture="\53rd_sc_aux\tex\Arsenal\Ares.paa";
		displayName="[53rd] Ares Custom (BooBen)";
		hiddenSelectionsTextures[]=
		{
		"53rd_Ares\Ares_Camo\Customs\BooBoo\53rd_BooBen_Custom_Helmet.paa",
		"MA_Armor\data\Helmets\H3_ODST\H3_Visor_Black_co.paa"
		};
		class XtdGearInfo
        {
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


