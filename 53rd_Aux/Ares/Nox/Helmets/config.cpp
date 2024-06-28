class CfgPatches {
    class 53rd_Nox_Helmets
    {
            units[] = 
            {

            };
            weapons[] = 
            {
				"MA_Helmet_Base",
				"MA_M56SR_Helmet",
				"TCF_Reach_Scout_Helmet",
				"53rd_Nox_Helmet_Red_Urban",
				"53rd_Nox_Helmet_Rifleman_Red_Urban",
				"53rd_Nox_Helmet_Red_Woodland",
				"53rd_Nox_Helmet_Red_Desert",
				"53rd_Nox_Helmet_Red_Winter",
				"53rd_Nox_Helmet_Blue_Urban",
				"53rd_Nox_Helmet_Rifleman_Blue_Urban",
				"53rd_Nox_Helmet_Blue_Woodland",
				"53rd_Nox_Helmet_Blue_Desert",
				"53rd_Nox_Helmet_Blue_Winter",
				"53rd_Nox_ScoutHelmet_Red_Urban",
				"53rd_Nox_ScoutHelmet_Rifleman_Red_Urban",
				"53rd_Nox_ScoutHelmet_Red_Desert",
				"53rd_Nox_ScoutHelmet_Red_Woodland",
				"53rd_Nox_ScoutHelmet_Red_Winter",				
				"53rd_Nox_ScoutHelmet_Red2_Urban",
				"53rd_Nox_ScoutHelmet_Rifleman_Red2_Urban",
				"53rd_Nox_ScoutHelmet_Red2_Desert",
				"53rd_Nox_ScoutHelmet_Red2_Woodland",
				"53rd_Nox_ScoutHelmet_Red2_Winter",
				"53rd_Nox_ScoutHelmet_Blue_Urban",
				"53rd_Nox_ScoutHelmet_Rifleman_Blue_Urban",
				"53rd_Nox_ScoutHelmet_Blue_Desert",
				"53rd_Nox_ScoutHelmet_Blue_Woodland",
				"53rd_Nox_ScoutHelmet_Blue_Winter",				
				"53rd_Nox_ScoutHelmet_Blue2_Urban",
				"53rd_Nox_ScoutHelmet_Rifleman_Blue2_Urban",
				"53rd_Nox_ScoutHelmet_Blue2_Desert",
				"53rd_Nox_ScoutHelmet_Blue2_Woodland",
				"53rd_Nox_ScoutHelmet_Blue2_Winter"			
				
            };
            requiredVersion = 0.100000;
            requiredAddons[] = 
			{
				"MA_Armor"
			};
    };
};


class cfgWeapons
{
    class ItemCore;
    class ItemInfo;
	class HeadgearItem;
	class 53rd_Ares_Helmet_Rifleman;
	class 53rd_Nox_Helmet_Red_Urban: 53rd_Ares_Helmet_Rifleman
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Nox M56SR (Urban / Red)";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
	hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Urban_Lead.paa",
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Visor.paa"
		};
		CTAB_Camera = true;
	};

	class 53rd_Nox_Helmet_Rifleman_Red_Urban: 53rd_Nox_Helmet_Red_Urban
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Nox M56SR (Urban / Red)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Urban_Rifleman.paa",
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Visor.paa"
		};
	};

	class 53rd_Nox_Helmet_Red_Woodland: 53rd_Nox_Helmet_Red_Urban
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Nox M56SR (Woodland / Red)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Woodland_Red.paa",
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Visor.paa"
		};
	};
	
	class 53rd_Nox_Helmet_Red_Desert: 53rd_Nox_Helmet_Red_Urban
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Nox M56SR (Desert / Red)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Desert_Red.paa",
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Visor.paa"
		};
	};

	class 53rd_Nox_Helmet_Red_Winter: 53rd_Nox_Helmet_Red_Urban
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Nox M56SR (Winter / Red)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Winter_Red.paa",
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Visor.paa"
		};
	};

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////

	class 53rd_Nox_Helmet_Blue_Urban: 53rd_Nox_Helmet_Red_Urban
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Nox M56SR (Urban / Blue)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Urban_Lead.paa",
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Visor.paa"
		};
	};

	class 53rd_Nox_Helmet_Rifleman_Blue_Urban: 53rd_Nox_Helmet_Red_Urban
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Nox M56SR (Urban / Blue)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Urban_Rifleman.paa",
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Visor.paa"
		};
	};

	class 53rd_Nox_Helmet_Blue_Woodland: 53rd_Nox_Helmet_Red_Urban
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Nox M56SR (Woodland / Blue)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Woodland_Blue.paa",
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Visor.paa"
		};
	};

	class 53rd_Nox_Helmet_Blue_Desert: 53rd_Nox_Helmet_Red_Urban
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Nox M56SR (Desert / Blue)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Desert_Blue.paa",
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Visor.paa"
		};
	};
	
	class 53rd_Nox_Helmet_Blue_Winter: 53rd_Nox_Helmet_Red_Urban
	{

		author="Styx Team";
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Nox M56SR (Winter/ Blue)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Winter_Blue.paa",
				"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Helmet_Visor.paa"
		};
	};
	
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////Scout Helmet////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////

	class TCF_Reach_Scout_Helmet;

	class 53rd_Nox_ScoutHelmet_Red_Urban: TCF_Reach_Scout_Helmet
	{
		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Urban / Red)";
		picture = "\53rd_Aux\Functions\Arsenal\Nox.paa";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Urban_Lead1.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
		CTAB_Camera = true;
	};	

	class 53rd_Nox_ScoutHelmet_Rifleman_Red_Urban: 53rd_Nox_ScoutHelmet_Red_Urban
	{
		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Urban / Red)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Urban_Rifleman1.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	


	class 53rd_Nox_ScoutHelmet_Red2_Urban: 53rd_Nox_ScoutHelmet_Red_Urban
	{
		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Urban / Red)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Urban_Lead2.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Rifleman_Red2_Urban: 53rd_Nox_ScoutHelmet_Red_Urban
	{
		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Urban / Red)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Urban_Rifleman2.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Red_Desert: 53rd_Nox_ScoutHelmet_Red_Urban
	{
		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Desert / Red)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Desert_Red1.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Red2_Desert: 53rd_Nox_ScoutHelmet_Red_Urban
	{
		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Desert / Red Alt)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Desert_Red2.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Red_Woodland: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Woodland / Red)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Woodland_Red1.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Red2_Woodland: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Woodland / Red Alt)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Woodland_Red2.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Red_Winter: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Winter / Red)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Winter_Red1.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Red2_Winter: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Winter / Red Alt)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Winter_Red2.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

//////////////////////Brew////////////////////

	class 53rd_Nox_ScoutHelmet_Blue_Urban: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Urban / Blue))";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Urban_Lead1.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};

	class 53rd_Nox_ScoutHelmet_Rifleman_Blue_Urban: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Urban / Blue))";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Urban_Rifleman1.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};
		
	class 53rd_Nox_ScoutHelmet_Blue2_Urban: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Urban / Blue Alt)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Urban_Lead2.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Rifleman_Blue2_Urban: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Urban / Blue Alt)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Urban_Rifleman2.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Blue_Desert: 53rd_Nox_ScoutHelmet_Red_Urban
	{
		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Desert / Blue)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Desert_Blue1.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Blue2_Desert: 53rd_Nox_ScoutHelmet_Red_Urban
	{
		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Desert / Blue Alt)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Desert_Blue2.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Blue_Woodland: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Woodland / Blue)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Woodland_Blue1.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Blue2_Woodland: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Woodland / Blue Alt)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Woodland_Blue2.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Blue_Winter: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Winter / Blue)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Winter_Blue1.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

	class 53rd_Nox_ScoutHelmet_Blue2_Winter: 53rd_Nox_ScoutHelmet_Red_Urban
	{

		scope=2;
		scopeArsenal=2;
		author="53rd Texture Team";
		displayName="[53rd] Nox Scout Helmet (Winter / Blue Alt)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Winter_Blue2.paa",
			"\53rd_Aux\Ares\Nox\Helmets\53rd_Nox_Scout_Helmet_Visor.paa"
		};
	};	

};





