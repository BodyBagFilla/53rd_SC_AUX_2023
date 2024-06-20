class CfgPatches {
	class 53rd_Atlas_Scout_Helmets
	{
		units[] = 
        {
        };
		weapons[] = 
        {
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "..\..\xtdGear.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class TCF_Reach_Scout_Helmet;
////////////SCOUT HELMETS/////////////
	class Atlas_Scout_Winter: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa"
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_CamoScout Helmet\A_Scout_Winter.paa",
			"53rd_Atlas\Atlas_CamoScout Helmet\Visor_CO.paa"
		};
	};
    class Atlas_Scout_Urban: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa"
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_CamoScout Helmet\A_Scout_Urban.paa",
			"53rd_Atlas\Atlas_CamoScout Helmet\Visor_CO.paa"
		};
	};
	class Atlas_Scout_Woodland: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa"
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_CamoScout Helmet\A_Scout_Woodland.paa",
			"53rd_Atlas\Atlas_CamoScout Helmet\Visor_CO.paa"
		};
	};
	class Atlas_Scout_Desert: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa"
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_CamoScout Helmet\A_Scout_Desert.paa",
			"53rd_Atlas\Atlas_CamoScout Helmet\Visor_CO.paa"
		};
	};
///////////PLATOON HELMETS///////////////////////
	class Atlas_P_Scout_Winter: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Platoon Scout (Gold / Snow)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa"
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_CamoScout Helmet\A_PL_Scout_Winter.paa",
			"53rd_Atlas\Atlas_CamoScout Helmet\Visor_CO.paa"
		};
	};
    class Atlas_P_Scout_Urban: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Platoon Scout (Gold / Urban)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa"
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_CamoScout Helmet\A_PL_Scout_Urban.paa",
			"53rd_Atlas\Atlas_CamoScout Helmet\Visor_CO.paa"
		};
	};
	class Atlas_P_Scout_Woodland: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Platoon Scout (Gold / Woodland)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa"
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_CamoScout Helmet\A_PL_Scout_Woodland.paa",
			"53rd_Atlas\Atlas_CamoScout Helmet\Visor_CO.paa"
		};
	};
	class Atlas_P_Scout_Desert: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Platoon Scout (Gold / Desert)";
		picture="\53rd_sc_aux\tex\Arsenal\Atlas.paa"
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_Atlas\Atlas_CamoScout Helmet\A_PL_Scout_Desert.paa",
			"53rd_Atlas\Atlas_CamoScout Helmet\Visor_CO.paa"
		};
	};
}; 
