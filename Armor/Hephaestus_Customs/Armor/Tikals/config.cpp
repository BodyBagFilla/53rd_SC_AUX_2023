class CfgPatches 
{
	class 53rd_Tikals_Custom_Helmet
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
#include "..\xtdGear.hpp"	
class cfgWeapons
{
		class MA_M56A_Helmet;
		class Tikals_Custom_Helmet_UB:MA_M56A_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Air Assault Helmet Tikals (Urban)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Tikals\Tikals_AA_Urban_new.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Tikals\Tikals_AA_Visor.paa",
			};
		};
		class Tikals_AA_Helmet_DS:MA_M56A_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Air Assault Helmet Tikals (Desert)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Tikals\Tikals_AA_Desert.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Tikals\Tikals_AA_Visor.paa",
			};
		};
		class Tikals_AA_Helmet_WN:MA_M56A_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Air Assault Tikals (Winter)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Tikals\Tikals_AA_Winter.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Tikals\Tikals_AA_Visor.paa",
			};
		};
		class Tikals_AA_Helmet_WD:MA_M56A_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Air Assault Helmet Tikals (Woodland)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Tikals\Tikals_AA_Woodland.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Armor\Tikals\Tikals_AA_Visor.paa",
			};
		};
};