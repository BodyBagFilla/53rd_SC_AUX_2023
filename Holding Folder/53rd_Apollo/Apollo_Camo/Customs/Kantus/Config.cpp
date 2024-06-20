
class CfgPatches {
	class 53rd_Custom_Armor_Kantus
	{
			units[] = 
			{

			};
			weapons[] = 
			{
			"53rd_Kantus_Engineer_Helmet_Woodland",
			"53rd_Kantus_Engineer_Helmet_Urban",

			};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};
class cfgWeapons
{
	class MA_M56E_Helmet;
	class 53rd_Kantus_Engineer_Helmet_Woodland: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Apollo Custom (Kantus / Woodland)";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		hiddenSelectionsTextures[]=
			{
				"53rd_Apollo\Apollo_Camo\Customs\Kantus\53rd_Kantus_Helmet_Woodland.paa",
				"53rd_Armor\Spartan Armor/Gold_Hex_test.paa"
			};
		};
	class 53rd_Kantus_Engineer_Helmet_Urban: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Apollo Custom (Kantus / Urban)";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="\53rd_sc_aux\tex\Arsenal\Apollo.paa";
		hiddenSelectionsTextures[]=
			{
				"53rd_Apollo\Apollo_Camo\Customs\Kantus\53rd_Kantus_Helmet_Urban.paa",
				"53rd_Armor\Spartan Armor\Gold_Hex_test.paa"
			};
		};

};