class XtdGearModels
{
	class CfgVehicles
	{
		class Rucksacks
		{
			label = "Rucksacks";
			author = "Ithias";
			options[] = {"Type","Camo"};
			class Type
			{
				label = "Type";
				values[] = {"Basic_Ruck","Heavy_Ruck","Atlas_Ruck","Atlas_Heavy_Ruck"};
				class Basic_Ruck
				{
					label = "Basic Ruck";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Heavy_Ruck
				{
					label = "Heavy Ruck";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Atlas_Ruck
				{
					label = "Atlas Standard Ruck";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Atlas_Heavy_Ruck
				{
					label = "Atlas Heavy Ruck";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class Camo
			{
				label = "Camo";
				values[] = {"Woodland","Desert","Winter","Urban"};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Desert
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Urban
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class NCO_LR
		{
			label = "NCO LR";
			author = "Ithias";
			options[] = {"Type"};

			class Type
			{
				label = "Type";
				values[] = {"515_LR","Rucksack_LR","Atlas_Rucksack_LR"};
				class 515_LR
				{
					label = "515 LR";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Rucksack_LR
				{
					label = "Rucksack LR";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Atlas_Rucksack_LR
				{
					label = "Atlas LR";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class Medic
		{
			label = "Medic";
			author = "Ithias";
			options[] = {"Type"};

			class Type
			{
				label = "Type";
				values[] = {"Medic_Rucksack","Medic_Satchel"};
				class Medic_Rucksack
				{
					label = "Medic Rucksack";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic_Satchel
				{
					label = "Medic Satchel";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class JTAC_LR
		{
			label = "JTAC LR";
			author = "Ithias";
			options[] = {"Camo"};

			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Snow"};
				changeingame = 1;
                changedelay  = 0;
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
				class Desert
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Snow
				{
					label = "Snow";
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
        //Rucksacks
		class 53rd_Rucksack_Urban
		{
		model = "Rucksacks";
		Type = "Basic_Ruck";
		Camo = "Urban";
		};
        
		class 53rd_Rucksack_Woodland
		{
		model = "Rucksacks";
		Type = "Basic_Ruck";
		Camo = "Woodland";
		};
		class 53rd_Rucksack_Desert
		{
		model = "Rucksacks";
		Type = "Basic_Ruck";
		Camo = "Desert";
		};
		class 53rd_Rucksack_Winter
		{
		model = "Rucksacks";
		Type = "Basic_Ruck";
		Camo = "Winter";
		};
		//Heavys Rucksacks
		class 53rd_Rucksack_Heavy_Urban
		{
		model = "Rucksacks";
		Type = "Heavy_Ruck";
		Camo = "Urban";
		};
        
		class 53rd_Rucksack_Heavy_Woodland
		{
		model = "Rucksacks";
		Type = "Heavy_Ruck";
		Camo = "Woodland";
		};
		class 53rd_Rucksack_Heavy_Desert
		{
		model = "Rucksacks";
		Type = "Heavy_Ruck";
		Camo = "Desert";
		};
		class 53rd_Rucksack_Heavy_Winter
		{
		model = "Rucksacks";
		Type = "Heavy_Ruck";
		Camo = "Winter";
		};
		//Atlas Packs
		class 53rd_Atlas_Standard_Pack
		{
		model = "Rucksacks";
		Type = "Atlas_Ruck";
		Camo = "Urban";
		};
		class 53rd_Atlas_Heavy_Pack
		{
		model = "Rucksacks";
		Type = "Atlas_Heavy_Ruck";
		Camo = "Urban";
		};
		
        //NCO_LR
		class 53rd_Hephaestus_NCO_LR_515
		{
		model = "NCO_LR";
		Type = "515_LR";
		};
        
		class 53rd_Hephaestus_NCO_LR_Rucksack
		{
		model = "NCO_LR";
		Type = "Rucksack_LR";
		};
		class 53rd_Atlas_RTO_Pack
		{
		model = "NCO_LR";
		Type = "Atlas_Rucksack_LR";
		};

        //Medic
		class 53rd_Hephaestus_Medical_Rucksack
		{
		model = "Medic";
		Type = "Medic_Rucksack";
		};
        
		class 53rd_Hephaestus_Medical_Satchel
		{
		model = "Medic";
		Type = "Medic_Satchel";
		};
		
        //JTAC_LR
		class 53rd_LR_Urban
		{
		model = "JTAC_LR";
		Camo = "Urban";
		};
        
		class 53rd_LR_Woodland
		{
		model = "JTAC_LR";
		Camo = "Woodland";
		};
		
		class 53rd_LR_Desert
		{
		model = "JTAC_LR";
		Camo = "Desert";
		};
        
		class 53rd_LR_Winter
		{
		model = "JTAC_LR";
		Camo = "Snow";
		};
	};
};