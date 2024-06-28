class XtdGearModels
{
	class CfgVehicles
	{
		class AresBackpack
		{
			options[] = {"Camo","MOS"};	
			label = "53rd ODST Backpacks";
			author = "Styx";
			class Camo
			{
				label = "Backpacks";
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				values[] = 
				{
					"Urban",
					"Woodland",
					"Arid",
					"Winter"
				};
				class Urban
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Arid
				{
					label = "Arid";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class MOS
			{
				label = "MOS";
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				values[] = 
				{
					"Rifleman",
					"Heavy",
					"Medic",
					"JTAC"
				};
				class Rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Heavy
				{
					label = "Heavy";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class JTAC
				{
					label = "JTAC";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
			};
		};
		class AresBackpackM
		{
			options[] = {"Camo"};	
			label = "53rd ODST Backpacks";
			author = "Styx";
			class Camo
			{
				label = "Backpacks";
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				values[] = 
				{
					"Urban",
					"Woodland",
					"Arid",
					"Winter"
				};
				class Urban
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Arid
				{
					label = "Arid";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
		};	
	
	
	
	};	
};

class XtdGearInfos
{
    class CfgVehicles 
    {
		class 53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_Ares_Rucksack_LR_Urban:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Urban";
		MOS = "JTAC";
		};
		class 53rd_Ares_Rucksack_Heavy_Urban:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Urban";
		MOS = "Heavy";
		};
		class 53rd_Ares_Rucksack_Woodland:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_Ares_Rucksack_LR_Woodland:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Woodland";
		MOS = "JTAC";
		};
		class 53rd_Ares_Rucksack_Heavy_Woodland:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Woodland";
		MOS = "Heavy";
		};
		class 53rd_Ares_Rucksack_Desert:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Arid";
		MOS = "Rifleman";
		};
		class 53rd_Ares_Rucksack_LR_Desert:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Arid";
		MOS = "JTAC";
		};
		class 53rd_Ares_Rucksack_Heavy_Desert:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Arid";
		MOS = "Heavy";
		};
		class 53rd_Ares_Rucksack_Winter:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_Ares_Rucksack_LR_Winter:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Winter";
		MOS = "JTAC";
		};
		class 53rd_Ares_Rucksack_Heavy_Winter:53rd_Ares_Rucksack_Urban
		{
		model = "AresBackpack";
		Camo = "Winter";
		MOS = "Heavy";
		};


		class 53rd_Ares_Rucksack_Medic_Urban
		{
		model = "AresBackpackM";
		Camo = "Urban";
		};
		class 53rd_Ares_Rucksack_Medic_Woodland:53rd_Ares_Rucksack_Medic_Urban
		{
		model = "AresBackpackM";
		Camo = "Woodland";
		};
		class 53rd_Ares_Rucksack_Medic_Winter:53rd_Ares_Rucksack_Medic_Urban
		{
		model = "AresBackpackM";
		Camo = "Winter";
		};
		class 53rd_Ares_Rucksack_Medic_desert:53rd_Ares_Rucksack_Medic_Urban
		{
		model = "AresBackpackM";
		Camo = "Arid";
		};
	};
};