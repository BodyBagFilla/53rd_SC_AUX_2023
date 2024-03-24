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
	class HeadgearItem;
	class H_HelmetB;
	
    /////Berets/////

    class 53rd_Base_Beret: H_HelmetB
	{
		author="Bohemia Interactive";
		scope=1;
		scopeArsenal = 1;
		displayName="[53rd] Beret (Hephaestus)";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca";
		model="a3\characters_f_epb\BLUFOR\headgear_beret02";
		optreHUDStyle="ODST_1";
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

	class 53_Apollo_Beret: 53rd_Base_Beret
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Apollo Beret";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Armor\Hephaestus_Camo\Berets\53_Apollo_Berets.paa"
		};
	};

	class 53_Ares_Beret: 53rd_Base_Beret
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Ares Beret";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Armor\Hephaestus_Camo\Berets\53_Ares_Berets.paa"
		};
	};

	class 53_Atlas_Beret: 53rd_Base_Beret
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Atlas Beret";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Armor\Hephaestus_Camo\Berets\53_Atlas_Berets.paa"
		};
	};

	class 53_Heph_Beret: 53rd_Base_Beret
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Hephaestus Beret";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Armor\Hephaestus_Camo\Berets\53_Heph_Berets.paa"
		};
	};

	class 53_Volare_Beret: 53rd_Base_Beret
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Volare Beret";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Armor\Hephaestus_Camo\Berets\53_Volare_Berets.paa"
		};
	};
    class 53rd_Med_Beret_Red: 53_Volare_Beret
	{
		displayName="[53rd] Beret (Medical)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Armor\Hephaestus_Camo\Berets\53_Medical_Beret_Red.paa"
		};
	};


    class 53rd_Med_Beret_Gold: 53_Volare_Beret
	{
		displayName="[53rd] Beret (Medical Gold)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Armor\Hephaestus_Camo\Berets\53_Medical_Beret_Gold.paa"
		};
	};
	
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////


   class 53rd_Base_Boonie: H_HelmetB
	{
		author="Bohemia Interactive";
		scope=1;
		scopeArsenal = 1;
		displayName="[53rd] Boonie (Base)";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca";
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

	class 53rd_Boonie_Urban: 53rd_Base_Boonie
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Boonie Urban";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\Armor\Hephaestus_Camo\Boonies\53rd_Boonie_Urban.paa"
		};
	};

	class 53rd_Boonie_Desert: 53rd_Base_Boonie
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Boonie Desert";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\Armor\Hephaestus_Camo\Boonies\53rd_Boonie_Desert.paa"
		};
	};

	class 53rd_Boonie_Woodland: 53rd_Base_Boonie
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Boonie Woodland";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\Armor\Hephaestus_Camo\Boonies\53rd_Boonie_Woodland.paa"
		};
	};

	class 53rd_Boonie_Winter: 53rd_Base_Boonie
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Boonie Winter";
		
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\Armor\Hephaestus_Camo\Boonies\53rd_Boonie_Winter.paa"
		};
	};
	
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////	
		
   class 53rd_Base_Beanie: H_HelmetB
	{
		author="Bohemia Interactive";
		scope=1;
		scopeArsenal = 1;
		displayName="[53rd] Beanie (Base)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		model="\A3\Characters_F\Civil\headgear_beaniehat01";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\53rd_Beanie_Urban.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="\A3\Characters_F\Civil\headgear_beaniehat01";
			hiddenSelections[]=
			{
				"Camo"
			};
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

	class 53rd_Beanie_Urban: 53rd_Base_Beanie
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Boonie Urban";
		
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\53rd_Beanie_Urban.paa"
		};
	};

	class 53rd_Beanie_Desert: 53rd_Base_Beanie
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Boonie Desert";
		
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\53rd_Beanie_Desert.paa"
		};
	};

	class 53rd_Beanie_Woodland: 53rd_Base_Beanie
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Boonie Woodland";
		
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\53rd_Beanie_Woodland.paa"
		};
	};

	class 53rd_Beanie_Winter: 53rd_Base_Beanie
	{	
	author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Boonie Winter";
		
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Beanies\53rd_Beanie_Winter.paa"
		};
	};

////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////	

	class H_MilCap_blue;
	class 53rd_PCap_Black: H_HelmetB
	{
		author="Bohemia Interactive";
		scope=1;
		scopeArsenal = 1;
		displayName="[53rd] Cap (Base)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		model="\A3\characters_f\Common\cappatrol";
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Armor\Hephaestus_Camo\Berets\53rd_PatrolCap.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="\A3\characters_f\Common\cappatrol";
			hiddenSelections[]=
			{
				"Camo"
			};
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



	class 53rd_PCap_Black_Two: H_MilCap_blue
	{
		author="53rd Texture Team";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[53rd] Patrol Cap";
		hiddenSelectionsTextures[]=
		{
			"\53rd_sc_aux\Armor\Hephaestus_Camo\Berets\53rd_PatrolCap.paa"
		};
	};	

};



