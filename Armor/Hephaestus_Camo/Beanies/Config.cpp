	class CfgPatches
{
	class 53rd_Beanies
	{
		units[]=
		{};
		weapons[]=
		{
			"OPTRE_UNSC_Watchcap"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_UNSC_Units"
		};
		addonRootClass="OPTRE_UNSC_Units";
	};
};
#include "..\..\xtdGear.hpp"	
class cfgWeapons
{
    class HeadgearItem;
	class H_Cap_oli;
    class 53rd_Hat_Base: H_Cap_oli
	{
		dlc="OPTRE";
		scope=0;
		author="Cherryy";
		displayName="-";
		model="\OPTRE_UNSC_Units\Army\officer_hat.p3d";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\dress_hat_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\officer_hat.p3d";
			mass=4;
			modelSides[]={6};
			passThrough=1;
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\dress_hat_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=38;
					passThrough=1;
				};
			};
		};
	};
	class 53rd_Beanie_Urban: 53rd_Hat_Base
	{
		dlc="OPTRE";
		scope=2;
		author="Cherryy";
		displayName="53rd Beanie [Urban]";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		model="\A3\Characters_F\Civil\headgear_beaniehat01";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\Beanie_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\Civil\headgear_beaniehat01";
			mass=1;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\Beanie_Urban.paa"
			};
		};
	};
	class 53rd_Beanie_Woodland: 53rd_Hat_Base
	{
		dlc="OPTRE";
		scope=2;
		author="Cherryy";
		displayName="53rd Beanie [Woodland]";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		model="\A3\Characters_F\Civil\headgear_beaniehat01";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\Beanie_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\Civil\headgear_beaniehat01";
			mass=1;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\Beanie_Woodland.paa"
			};
		};
	};
	class 53rd_Beanie_Desert: 53rd_Hat_Base
	{
		dlc="OPTRE";
		scope=2;
		author="Cherryy";
		displayName="53rd Beanie [Desert]";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		model="\A3\Characters_F\Civil\headgear_beaniehat01";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\Beanie_Desert.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\Civil\headgear_beaniehat01";
			mass=1;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\Beanie_Desert.paa"
			};
		};
	};
	class 53rd_Beanie_Winter: 53rd_Hat_Base
	{
		dlc="OPTRE";
		scope=2;
		author="Cherryy";
		displayName="53rd Beanie [Winter]";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		model="\A3\Characters_F\Civil\headgear_beaniehat01";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\Beanie_Winter.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\Civil\headgear_beaniehat01";
			mass=1;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\Beanie_Winter.paa"
			};
		};
	};
};