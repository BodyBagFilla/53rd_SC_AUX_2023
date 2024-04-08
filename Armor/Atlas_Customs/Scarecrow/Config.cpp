class CfgPatches {
	class 53rd_Scarecrow_Customs
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


class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class TCF_Reach_Scout_Helmet;
	
////////////SCOUT HELMETS/////////////
	class 53rd_Scarecrow_Helmet_Urban: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Frankie";
		displayName="[53rd] Atlas Custom (Scarecrow / Urban)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Armor\Atlas_Customs\Scarecrow\53rd_Scarecrow_Helmet_Urban.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Scout Helmet\Visor_CO.paa"
		};
	};
	
	class 53rd_Scarecrow_Helmet_Winter: 53rd_Scarecrow_Helmet_Urban
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Frankie";
		displayName="[53rd] Atlas Custom (Scarecrow / Winter)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Armor\Atlas_Customs\Scarecrow\53rd_Scarecrow_Helmet_Winter.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Scout Helmet\Visor_CO.paa"
		};
	};	
	
	class 53rd_Scarecrow_Helmet_Woodland: 53rd_Scarecrow_Helmet_Urban
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Frankie";
		displayName="[53rd] Atlas Custom (Scarecrow / Woodland)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Armor\Atlas_Customs\Scarecrow\53rd_Scarecrow_Helmet_Woodland.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Scout Helmet\Visor_CO.paa"
		};
	};	
	
	class 53rd_Scarecrow_Helmet_Desert: 53rd_Scarecrow_Helmet_Urban
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Frankie";
		displayName="[53rd] Atlas Custom (Scarecrow / Desert)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_sc_aux\Armor\Atlas_Customs\Scarecrow\53rd_Scarecrow_Helmet_Desert.paa",
			"53rd_SC_aux\Armor\Atlas_Camo\Scout Helmet\Visor_CO.paa"
		};
	};	

}; 

