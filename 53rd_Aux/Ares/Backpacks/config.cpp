
class CfgPatches
{
    class 53rd_Ares_Backpacks
    { 
        units[] = {}; 
        weapons[] = 
		{
		"53rd_Ares_Rucksack_Urban",
		"53rd_Ares_Rucksack_Woodland",
		"53rd_Ares_Rucksack_Winter",
		"53rd_Ares_Rucksack_desert",
		"53rd_Ares_Rucksack_Medic_Urban",
		"53rd_Ares_Rucksack_Medic_Woodland",
		"53rd_Ares_Rucksack_Medic_Winter",
		"53rd_Ares_Rucksack_Medic_desert",
		"53rd_Ares_Rucksack_LR_Urban,",
		"53rd_Ares_Rucksack_LR_Woodland",
		"53rd_Ares_Rucksack_LR_Winter",
		"53rd_Ares_Rucksack_LR_desert"
		}; 
        requiredVersion = 0.1; 
        requiredAddons[] = 
		{
			"MA_Armor"
		}; 
    }; 
};

#include "ODSTBackpacks.hpp"

class cfgVehicles
{

//////////////////////////// Backpacks ////////////////////////////
	class MA_M56S_Rucksack_Radio;

	class 53rd_Ares_Rucksack_Urban: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS Rucksack (Urban)";
		maximumLoad=300;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_Backpack_urban.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	class 53rd_Ares_Rucksack_Woodland: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS Rucksack (Woodland)";
		maximumLoad=300;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_Backpack_woodland.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	class 53rd_Ares_Rucksack_Winter: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS Rucksack (Winter)";
		maximumLoad=300;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_Backpack_winter.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	class 53rd_Ares_Rucksack_desert: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS Rucksack (Desert)";
		maximumLoad=300;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_Backpack_desert.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};

//////////////////////////// Heavy ////////////////////////////

	class 53rd_Ares_Rucksack_Heavy_Urban: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares Heavy ILCS Rucksack (Urban)";
		maximumLoad=350;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_BackpackH_urban.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	class 53rd_Ares_Rucksack_Heavy_Woodland: 53rd_Ares_Rucksack_Urban
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares Heavy ILCS Rucksack (Woodland)";
		maximumLoad=350;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_BackpackH_woodland.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	class 53rd_Ares_Rucksack_Heavy_Winter: 53rd_Ares_Rucksack_Urban
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares Heavy ILCS Rucksack (Winter)";
		maximumLoad=350;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_BackpackH_winter.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	class 53rd_Ares_Rucksack_Heavy_desert: 53rd_Ares_Rucksack_Urban
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares Heavy ILCS Rucksack (Desert)";
		maximumLoad=350;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_BackpackH_desert.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};

//////////////////////////// Medic ////////////////////////////


	class 53rd_Ares_Rucksack_Medic_Urban: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS Medic Rucksack (Urban)";
		maximumLoad=400;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_BackpackM_urban.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	class 53rd_Ares_Rucksack_Medic_Woodland: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS Medic Rucksack (Woodland)";
		maximumLoad=400;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_BackpackM_woodland.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	class 53rd_Ares_Rucksack_Medic_Winter: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS Medic Rucksack (Winter)";
		maximumLoad=400;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_BackpackM_winter.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	class 53rd_Ares_Rucksack_Medic_desert: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS Medic Rucksack (Desert)";
		maximumLoad=400;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_BackpackM_desert.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};


//////////////////////////// LR ////////////////////////////


	class 53rd_Ares_Rucksack_LR_Urban: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS LR Rucksack (Urban)";
		maximumLoad=300;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			//"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_Backpack_urban.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	class 53rd_Ares_Rucksack_LR_Woodland: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS LR Rucksack (Woodland)";
		maximumLoad=300;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			//"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_Backpack_woodland.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};
	
	class 53rd_Ares_Rucksack_LR_Winter: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS LR Rucksack (Winter)";
		maximumLoad=300;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			//"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_Backpack_winter.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};

	class 53rd_Ares_Rucksack_LR_desert: MA_M56S_Rucksack_Radio
	{
		scope=2;
		scopeArsenal=2;
		author="Styx Team";
		displayName="[53rd] Ares ILCS LR Rucksack (Desert)";
		maximumLoad=300;
		mass=10;
		picture="\53rd_Aux\Functions\Arsenal\Ares.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			//"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_Aux\Ares\Backpacks\odst_Backpack_desert.paa",
			"\53rd_Aux\Ares\Backpacks\Backpack_Radio_ODST_co.paa"
		};
	};

};

