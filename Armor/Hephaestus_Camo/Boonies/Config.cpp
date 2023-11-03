	class CfgPatches
{
	class 53rd_Boonies
	{
		units[]=
		{};
		weapons[]=
		{};
		requiredVersion=0.1;
		requiredAddons[]=
		{};
	};
};
#include "..\..\xtdGear.hpp"	
class cfgWeapons
{
    class HeadgearItem;
	class H_Booniehat_khk;
    class 53rd_Boonie_Urban: H_Booniehat_khk
	{
		author="Cherryy";
		scope = 2;
		scopeArsenal = 2;
		displayName="[53rd] Boonie Hat (Urban)";
		model="\A3\Characters_F\Common\booniehat";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\Armor\Hephaestus_Camo\Boonies\53rd_Boonie_Urban.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="\A3\Characters_F\Common\booniehat";
			hiddenSelections[]=
			{
				"Camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=40;
					passThrough=0.5;
				};
			};
		};
	};
	class 53rd_Boonie_Winter: 53rd_Boonie_Urban
	{
		displayName="[53rd] Boonie Hat (Winter)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\Armor\Hephaestus_Camo\Boonies\53rd_Boonie_Winter.paa"
		};
	};
	class 53rd_Boonie_Desert: 53rd_Boonie_Urban
	{
		displayName="[53rd] Boonie Hat (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\Armor\Hephaestus_Camo\Boonies\53rd_Boonie_Desert.paa"
		};
	};
	class 53rd_Boonie_Woodland: 53rd_Boonie_Urban
	{
		displayName="[53rd] Boonie Hat (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\Armor\Hephaestus_Camo\Boonies\53rd_Boonie_Woodland.paa"
		};
	};
};