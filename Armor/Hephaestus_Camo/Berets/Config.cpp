class CfgPatches
{
	class 53rd_Berets
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
    class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;

    class 53rd_Beret_Hephaestus: H_HelmetB
	{
		author="Bohemia Interactive";
		scope=2;
		scopeArsenal = 2;
		displayName="[53rd] Beret (Hephaestus)";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca";
		model="a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Hephaestus.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="a3\characters_f_epb\BLUFOR\headgear_beret02";
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
    class 53rd_Beret_Hephaestus_med: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Medical)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\Hephaestus_Medical_Beret_V1.paa"
		};
	};
    class 53rd_Beret_Hephaestus_med_led: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Medical Leader)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\Hephaestus_Medical_Beret_Leader_V1.paa"
		};
	};
    class 53rd_Beret_Volare: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Volare)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Volare.paa"
		};
	};
};