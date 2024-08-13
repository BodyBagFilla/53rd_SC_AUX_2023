class XtdGearModels
{
	class CfgVehicles
	{
		class ILCSBackpack
		{
			options[] = {"Camo","MOS"};	
			label = "53rd ILCS Backpacks";
			author = "Herkules";
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
					"Desert",
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
				class Desert
				{
					label = "Desert";
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
					"RTO"
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
				class RTO
				{
					label = "RTO";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
			};
		};

		class Radiopack
		{
			options[] = {"Type","Camo"};	
			label = "53rd Radiopacks";
			author = "Herkules";
			class Type
			{
				label = "Type";
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				values[] = 
				{
					"515",
					"521",
					"Rucksack"
				};
				class 515
				{
					label = "515";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class 521
				{
					label = "521";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};

			};
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
					"Desert",
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
				class Desert
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
		};

		class InfBackpack
		{
			options[] = {"Camo","MOS"};	
			label = "53rd Infantry Backpacks";
			author = "Herkules";
			class Camo
			{
				label = "Camo";
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				values[] = 
				{
					"Urban",
					"Woodland",
					"Desert",
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
				class Desert
				{
					label = "Desert";
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
					"Medic"
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
			};
		};

		class AtlasBackpack
		{
			options[] = {"Type","MOS"};	
			label = "53rd Atlas Backpacks";
			author = "Herkules";
			class Type
			{
				label = "Type";
				alwaysSelectable = 0;
				changeingame = 1;
                changedelay  = 0;
				values[] = 
				{
					"Rucksack",
					"Jumpapck"
				};
				class Rucksack
				{
					label = "Rucksack";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Jumpapck
				{
					label = "Jumpapck";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};

			};

			class MOS
			{
				label = "MOS";
				alwaysSelectable = 0;
				changeingame = 0;
                changedelay  = 0;
				values[] = 
				{
					"Rifleman",
					"Heavy",
					"Medic",
					"RTO"
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
				class RTO
				{
					label = "RTO";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
			};



		};



	};	
};

class XtdGearInfos
{
    class CfgVehicles 
    {
		class 53rd_Backpacks_ILCS_Black
		{
		model = "ILCSBackpack";
		Camo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_Backpacks_ILCS_Woodland:53rd_Backpacks_ILCS_Black
		{
		Camo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_Backpacks_ILCS_Winter:53rd_Backpacks_ILCS_Black
		{
		Camo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_Backpacks_ILCS_Desert:53rd_Backpacks_ILCS_Black
		{
		Camo = "Desert";
		MOS = "Rifleman";
		};


		class 53rd_Backpacks_Medic_ILCS_Black:53rd_Backpacks_ILCS_Black
		{
		model = "ILCSBackpack";
		Camo = "Urban";
		MOS = "Medic";
		};
		class 53rd_Backpacks_Medic_ILCS_Woodland:53rd_Backpacks_Medic_ILCS_Black
		{
		Camo = "Woodland";
		MOS = "Medic";
		};
		class 53rd_Backpacks_Medic_ILCS_Winter:53rd_Backpacks_Medic_ILCS_Black
		{
		Camo = "Winter";
		MOS = "Medic";
		};
		class 53rd_Backpacks_Medic_ILCS_Desert:53rd_Backpacks_Medic_ILCS_Black
		{
		Camo = "Desert";
		MOS = "Medic";
		};


		class 53rd_Backpacks_Heavy_ILCS_Urban:53rd_Backpacks_ILCS_Black
		{
		model = "ILCSBackpack";
		Camo = "Urban";
		MOS = "Heavy";
		};
		class 53rd_Backpacks_Heavy_ILCS_Woodland:53rd_Backpacks_Heavy_ILCS_Urban
		{
		Camo = "Woodland";
		MOS = "Heavy";
		};
		class 53rd_Backpacks_Heavy_ILCS_Winter:53rd_Backpacks_Heavy_ILCS_Urban
		{
		Camo = "Winter";
		MOS = "Heavy";
		};
		class 53rd_Backpacks_Heavy_ILCS_Desert:53rd_Backpacks_Heavy_ILCS_Urban
		{
		Camo = "Desert";
		MOS = "Heavy";
		};





		class 53rd_ILCS_ANPRC_515
		{
		model = "Radiopack";
		Type = "515"
		Camo = "Urban";
		};
		class 53rd_Backpacks_LR_ANPRC521_Urban:53rd_ILCS_ANPRC_515
		{
		model = "Radiopack";
		Type = "521"
		Camo = "Urban";
		};
		class 53rd_Backpacks_LR_ANPRC521_Woodland:53rd_Backpacks_LR_ANPRC521_Urban
		{
		Type = "521"
		Camo = "Woodland";
		};
		class 53rd_Backpacks_LR_ANPRC521_Winter:53rd_Backpacks_LR_ANPRC521_Urban
		{
		Type = "521"
		Camo = "Winter";
		};
		class 53rd_Backpacks_LR_ANPRC521_Desert:53rd_Backpacks_LR_ANPRC521_Urban
		{
		Type = "521"
		Camo = "Desert";
		};

		class 53rd_Backpacks_LR_Rucksack_Urban:53rd_ILCS_ANPRC_515
		{
		model = "Radiopack";
		Type = "Rucksack"
		Camo = "Urban";
		};
		class 53rd_Backpacks_LR_Rucksack_Woodland:53rd_Backpacks_LR_Rucksack_Urban
		{
		Type = "Rucksack"
		Camo = "Woodland";
		};
		class 53rd_Backpacks_LR_Rucksack_Winter:53rd_Backpacks_LR_Rucksack_Urban
		{
		Type = "Rucksack"
		Camo = "Winter";
		};
		class 53rd_Backpacks_LR_Rucksack_Desert:53rd_Backpacks_LR_Rucksack_Urban
		{
		Type = "Rucksack"
		Camo = "Desert";
		};	


		class 53rd_Backpacks_Rucksack_Urban
		{
		model = "InfBackpack";
		Camo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_Backpacks_Rucksack_Woodland:53rd_Backpacks_Rucksack_Urban
		{
		Camo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_Backpacks_Rucksack_Winter:53rd_Backpacks_Rucksack_Urban
		{
		Camo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_Backpacks_Rucksack_Desert:53rd_Backpacks_Rucksack_Urban
		{
		Camo = "Desert";
		MOS = "Rifleman";
		};



		class 53rd_Backpacks_Rucksack_Heavy_Urban:53rd_Backpacks_Rucksack_Urban
		{
		model = "InfBackpack";
		Camo = "Urban";
		MOS = "Heavy";
		};
		class 53rd_Backpacks_Rucksack_Heavy_Woodland:53rd_Backpacks_Rucksack_Heavy_Urban
		{
		Camo = "Woodland";
		MOS = "Heavy";
		};
		class 53rd_Backpacks_Rucksack_Heavy_Winter:53rd_Backpacks_Rucksack_Heavy_Urban
		{
		Camo = "Winter";
		MOS = "Heavy";
		};
		class 53rd_Backpacks_Rucksack_Heavy_Desert:53rd_Backpacks_Rucksack_Heavy_Urban
		{
		Camo = "Desert";
		MOS = "Heavy";
		};



		class 53rd_Backpacks_Rucksack_Medic_Urban:53rd_Backpacks_Rucksack_Urban
		{
		model = "InfBackpack";
		Camo = "Urban";
		MOS = "Medic";
		};
		class 53rd_Backpacks_Rucksack_Medic_Woodland:53rd_Backpacks_Rucksack_Medic_Urban
		{
		Camo = "Woodland";
		MOS = "Medic";
		};
		class 53rd_Backpacks_Rucksack_Medic_Winter:53rd_Backpacks_Rucksack_Medic_Urban
		{
		Camo = "Winter";
		MOS = "Medic";
		};
		class 53rd_Backpacks_Rucksack_Medic_Desert:53rd_Backpacks_Rucksack_Medic_Urban
		{
		Camo = "Desert";
		MOS = "Medic";
		};



		class 53rd_Backpacks_Rucksack2_Base
		{
		model = "AtlasBackpack";
		Type = "Rucksack";
		MOS = "Rifleman";
		};
		class 53rd_Backpacks_Medic_Rucksack2_Base:53rd_Backpacks_Rucksack2_Base
		{
		Type = "Rucksack";
		MOS = "Medic";
		};
		class 53rd_Backpacks_Heavy_Rucksack2_Base:53rd_Backpacks_Rucksack2_Base
		{
		Type = "Rucksack";
		MOS = "Heavy";
		};
		class 53rd_Backpacks_Radio_Rucksack2_Base:53rd_Backpacks_Rucksack2_Base
		{
		Type = "Rucksack";
		MOS = "RTO";
		};


		class 53rd_Atlas_Jumpack_Base
		{
		model = "AtlasBackpack";
		Type = "Jumpapck";
		MOS = "Rifleman";
		};
		class Series_8LR_Jumpack_M:53rd_Atlas_Jumpack_Base
		{
		Type = "Jumpapck";
		MOS = "Medic";
		};
		class Series_8LR_Jumpack:53rd_Atlas_Jumpack_Base
		{
		Type = "Jumpapck";
		MOS = "RTO";
		};












	};
};