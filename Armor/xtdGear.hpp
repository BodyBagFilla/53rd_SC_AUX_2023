class XtdGearModels
{
	class CfgWeapons
	{
		class HephaestusCamoArmor
		{
			label = "53rd Armor";
			author = "Body";
			options[] = {"Section","Camo","Type"};
			class Section
			{
				label = "Section";
				values[] = {"Apollo","Hephaestus","Atlas"};
				changeingame = 1;
                changedelay  = 0;
				class Apollo
				{
					label = "Apollo";
					image = "#(rgb210,180,140)color(0.4,0.4,0.4,1)";
				};
				class Hephaestus
				{
					label = "Hephaestus";
					image = "#(rgb113,121,126)color(0.8,0.8,0.8,1)";
				};
				class Atlas
				{
					label = "Atlas";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
			};
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Winter"};
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
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class Type
			{
				label = "Type";
				values[] = {"Rifleman","Medic","Autorifleman","Anti_Tank","JTAC","Grenadier","Platoon","NoShoulders"};
				class Regular
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Autorifleman
				{
					label = "Autorifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Anti_Tank
				{
					label = "Anti_Tank";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class JTAC
				{
					label = "JTAC";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Grenadier
				{
					label = "Grenadier";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Platoon
				{
					label = "Platoon";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class NoShoulders
				{
					label = "NoShoulders";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class HephaestusCamoHelmets
		{
			label = "53rd Headwear";
			author = "Body";
			options[] = {"Section","Camo","Type","Visor"};
			class Section
			{
				label = "Section";
				values[] = {"Reservist","S1_1","S1_2","S1_3","Atlas","Apollo"};
				changeingame = 1;
                changedelay  = 0;
				class Reservist
				{
					label = "Reservist";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
				class S1_1
				{
					label = "1-1";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
				class S1_2
				{
					label = "1-2";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
				class S1_3
				{
					label = "1-3";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Atlas
				{
					label = "Atlas";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Apollo
				{
					label = "Apollo";
					image = "#(rgb210,180,140)color(0.4,0.4,0.4,1)";
				};
			};
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Winter"};
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
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class Type
			{
				label = "Type";
				values[] = {"Rifleman","Sealed","Medic","Beanies","Booines","Soft_Cap","Beret","CrewHelmet","Platoon","Mike"};
				class Regular
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
                class Sealed
				{
					label = "Sealed";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Beanies
				{
					label = "Beanies";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Booines
				{
					label = "Booines";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Soft_Cap
				{
					label = "Soft Cap";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Beret
				{
					label = "Beret";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class CrewHelmet
				{
					label = "Crewman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Platoon
				{
					label = "Platoon";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Mike
				{
					label = "Mike";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class Visor
			{
				label = "Visor";
				values[] = {"No","Yes"};
				class No
				{
					label = "No";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Yes
				{
					label = "Yes";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class AtlasCustomHelms
		{
			label = "Atlas Custom Helmets";
			author = "Tsuki";
			options[] = {"Camo","Person",};
			
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
			class Person
			{
				label = "Person";
				values[] = {"Hellfire","LoneWulf","Serpent","Tsuki","Texas"};
				class Hellfire
				{
					label = "Hellfire";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class LoneWulf
				{
					label = "LoneWulf";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Serpent
				{
					label = "Serpent";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Tsuki
				{
					label = "Tsuki";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Texas
				{
					label = "Texas";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
        class Atlashelms
		{
			label = "Atlas Helmets";
			author = "Tsuki";
			options[] = {"Type","Camo"};
			
			class Type
			{
				label = "Type";
				values[] = {"Normal","NormalV","Medic","MedicV","Scout_Gold","Scout_Purple","Scout_PL"};
				class Normal
				{
					label = "Normal";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class NormalV
				{
					label = "Normal Visor";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class MedicV
				{
					label = "Medic Visor";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Scout_Gold
				{
					label = "Scout Gold";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Scout_Purple
				{
					label = "Scout Purple";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Scout_PL
				{
					label = "Scout PL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				
			};
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
		class AtlasCustomArmors
		{
			label = "Atlas Custom Armors"
			author = "Tsuki";
			options[] = {"Camo","Person"};
			
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
			class Person
			{
				label = "Person";
				values[] = {"Hellfire","LoneWulf","Serpent","Tsuki","Texas"};
				class Hellfire
				{
					label = "Hellfire";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class LoneWulf
				{
					label = "LoneWulf";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Serpent
				{
					label = "Serpent";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Tsuki
				{
					label = "Tsuki";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Texas
				{
					label = "Texas";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};   
        class AtlasTeamArmors
		{
			label = "Atlas Team Armors"
			author = "Tsuki";
			options[] = {"Camo","Type"};
			
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
			class Type
			{
				label = "Type";
				values[] = {"Command","Gold","Purple"};
				class Command
				{
					label = "Command";
					image = "#(rgb,254,50,178)color(0.0000,0.8000,0.2980,0.0039)";
				};
				class Gold
				{
					label = "Gold";
					image = "#(rgb,255,215,0)color(0.0000,0.1490,0.8078,0.1373)";
				};
				class Purple
				{
					label = "Purple";
					image = "#(rgb,255,215,0)color(0.0000,0.1490,0.8078,0.1373)";
				};
			};
		};
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        
		class 53rd_Sealed_Urban
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Sealed";
		Visor = "Yes";
		};
        class 53rd_Sealed_Desert:53rd_Sealed_Urban
		{
		Camo = "Desert";
		};
        class 53rd_Sealed_Woodland:53rd_Sealed_Urban
		{
		Camo = "Woodland";
		};
        class 53rd_Sealed_Winter:53rd_Sealed_Urban
		{
		Camo = "Winter";
		};
        
        class 53rd_Sealed_Urban_dp:53rd_Sealed_Urban
		{
		Visor = "No";
		};
        class 53rd_Sealed_Desert_dp:53rd_Sealed_Urban_dp
		{
		Camo = "Desert";
		};
        class 53rd_Sealed_Woodland_dp:53rd_Sealed_Urban_dp
		{
		Camo = "Woodland";
		};
        class 53rd_Sealed_Winter_dp:53rd_Sealed_Urban_dp
		{
		Camo = "Winter";
		};
        
        //Urban
		//Rifleman
		//No Visor
		class 53rd_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_1_Rifleman_Helmet_Urban_NVisor:53rd_Rifleman_Helmet_Urban_No_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Rifleman_Helmet_Urban_NVisor:53rd_Rifleman_Helmet_Urban_No_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Rifleman_Helmet_Urban_NVisor:53rd_Rifleman_Helmet_Urban_No_Visor
		{
		Section = "S1_3";
		};
		//Visor
		class 53rd_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_Rifleman_Helmet_Urban_Visor:53rd_Rifleman_Helmet_Urban_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Rifleman_Helmet_Urban_Visor:53rd_Rifleman_Helmet_Urban_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Rifleman_Helmet_Urban_Visor:53rd_Rifleman_Helmet_Urban_Visor
		{
		Section = "S1_3";
		};
        
        //Desert
		//Rifleman
		//No Visor
		class 53rd_Rifleman_Helmet_Desert_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_1_Rifleman_Helmet_Desert_NVisor:53rd_Rifleman_Helmet_Desert_No_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Rifleman_Helmet_Desert_NVisor:53rd_Rifleman_Helmet_Desert_No_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Rifleman_Helmet_Desert_NVisor:53rd_Rifleman_Helmet_Desert_No_Visor
		{
		Section = "S1_3";
		};
        //Visor
		class 53rd_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_Rifleman_Helmet_Desert_Visor:53rd_Rifleman_Helmet_Desert_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Rifleman_Helmet_Desert_Visor:53rd_Rifleman_Helmet_Desert_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Rifleman_Helmet_Desert_Visor:53rd_Rifleman_Helmet_Desert_Visor
		{
		Section = "S1_3";
		};
        
        //Woodland
		//Rifleman
		//No Visor
		class 53rd_Rifleman_Helmet_Woodland_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_1_Rifleman_Helmet_Woodland_NVisor:53rd_Rifleman_Helmet_Woodland_No_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Rifleman_Helmet_Woodland_NVisor:53rd_Rifleman_Helmet_Woodland_No_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Rifleman_Helmet_Woodland_NVisor:53rd_Rifleman_Helmet_Woodland_No_Visor
		{
		Section = "S1_3";
		};
		//Visor
		class 53rd_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_Rifleman_Helmet_Woodland_Visor:53rd_Rifleman_Helmet_Woodland_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Rifleman_Helmet_Woodland_Visor:53rd_Rifleman_Helmet_Woodland_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Rifleman_Helmet_Woodland_Visor:53rd_Rifleman_Helmet_Woodland_Visor
		{
		Section = "S1_3";
		};
        
        //Winter
		//Rifleman
		//No Visor
		class 53rd_Rifleman_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_1_Rifleman_Helmet_Winter_NVisor:53rd_Rifleman_Helmet_Winter_No_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Rifleman_Helmet_Winter_NVisor:53rd_Rifleman_Helmet_Winter_No_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Rifleman_Helmet_Winter_NVisor:53rd_Rifleman_Helmet_Winter_No_Visor
		{
		Section = "S1_3";
		};
		//Visor
		class 53rd_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_Rifleman_Helmet_Winter_Visor:53rd_Rifleman_Helmet_Winter_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Rifleman_Helmet_Winter_Visor:53rd_Rifleman_Helmet_Winter_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Rifleman_Helmet_Winter_Visor:53rd_Rifleman_Helmet_Winter_Visor
		{
		Section = "S1_3";
		};
        
        //Urban
		//Medic
		//No Visor
		class 53rd_Medic_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_1_Medic_Helmet_Urban_NVisor:53rd_Medic_Helmet_Urban_No_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Medic_Helmet_Urban_NVisor:53rd_Medic_Helmet_Urban_No_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Medic_Helmet_Urban_NVisor:53rd_Medic_Helmet_Urban_No_Visor
		{
		Section = "S1_3";
		};
		//Visor
		class 53rd_Medic_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_1_Medic_Helmet_Urban_Visor:53rd_Medic_Helmet_Urban_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Medic_Helmet_Urban_Visor:53rd_Medic_Helmet_Urban_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Medic_Helmet_Urban_Visor:53rd_Medic_Helmet_Urban_Visor
		{
		Section = "S1_3";
		};
        
        //Desert
		//Medic
		//No Visor
		class 53rd_Medic_Helmet_Desert_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_1_Medic_Helmet_Desert_NVisor:53rd_Medic_Helmet_Desert_No_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Medic_Helmet_Desert_NVisor:53rd_Medic_Helmet_Desert_No_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Medic_Helmet_Desert_NVisor:53rd_Medic_Helmet_Desert_No_Visor
		{
		Section = "S1_3";
		};
        //Visor
		class 53rd_Medic_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_1_Medic_Helmet_Desert_Visor:53rd_Medic_Helmet_Desert_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Medic_Helmet_Desert_Visor:53rd_Medic_Helmet_Desert_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Medic_Helmet_Desert_Visor:53rd_Medic_Helmet_Desert_Visor
		{
		Section = "S1_3";
		};
        
        //Woodland
		//Medic
		//No Visor
		class 53rd_Medic_Helmet_Woodland_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_1_Medic_Helmet_Woodland_NVisor:53rd_Medic_Helmet_Woodland_No_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Medic_Helmet_Woodland_NVisor:53rd_Medic_Helmet_Woodland_No_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Medic_Helmet_Woodland_NVisor:53rd_Medic_Helmet_Woodland_No_Visor
		{
		Section = "S1_3";
		};
		//Visor
		class 53rd_Medic_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_1_Medic_Helmet_Woodland_Visor:53rd_Medic_Helmet_Woodland_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Medic_Helmet_Woodland_Visor:53rd_Medic_Helmet_Woodland_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Medic_Helmet_Woodland_Visor:53rd_Medic_Helmet_Woodland_Visor
		{
		Section = "S1_3";
		};
        
        //Winter
		//Medic
		//No Visor
		class 53rd_Medic_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_1_Medic_Helmet_Winter_NVisor:53rd_Medic_Helmet_Winter_No_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Medic_Helmet_Winter_NVisor:53rd_Medic_Helmet_Winter_No_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Medic_Helmet_Winter_NVisor:53rd_Medic_Helmet_Winter_No_Visor
		{
		Section = "S1_3";
		};
		//Visor
		class 53rd_Medic_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_1_Medic_Helmet_Winter_Visor:53rd_Medic_Helmet_Winter_Visor
		{
		Section = "S1_1";
		};
		class 53rd_1_2_Medic_Helmet_Winter_Visor:53rd_Medic_Helmet_Winter_Visor
		{
		Section = "S1_2";
		};
		class 53rd_1_3_Medic_Helmet_Winter_Visor:53rd_Medic_Helmet_Winter_Visor
		{
		Section = "S1_3";
		};
		
		//Atlas Reservist/////////////////////////////////////
		//No Visor
		class 53rd_A_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_A_Rifleman_Helmet_Woodland_No_Visor:53rd_A_Rifleman_Helmet_Urban_No_Visor
		{
		Camo = "Woodland";
		};
		class 53rd_A_Rifleman_Helmet_Desert_No_Visor:53rd_A_Rifleman_Helmet_Urban_No_Visor
		{
		Camo = "Desert";
		};
		class 53rd_A_Rifleman_Helmet_Winter_No_Visor:53rd_A_Rifleman_Helmet_Urban_No_Visor
		{
		Camo = "Winter";
		};
		
		//Atlas Reservist
		//Visor
		class 53rd_A_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_A_Rifleman_Helmet_Woodland_Visor:53rd_A_Rifleman_Helmet_Urban_Visor
		{
		Camo = "Woodland";
		};
		class 53rd_A_Rifleman_Helmet_Desert_Visor:53rd_A_Rifleman_Helmet_Urban_Visor
		{
		Camo = "Desert";
		};
		class 53rd_A_Rifleman_Helmet_Winter_Visor:53rd_A_Rifleman_Helmet_Urban_Visor
		{
		Camo = "Winter";
		};
		
		
		
		//Atlas Medic
		// NO Visor
		class 53rd_A_Medic_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Urban";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_A_Medic_Helmet_Woodland_No_Visor:53rd_A_Medic_Helmet_Urban_No_Visor
		{
		Camo = "Woodland";
		};
		class 53rd_A_Medic_Helmet_Desert_No_Visor:53rd_A_Medic_Helmet_Urban_No_Visor
		{
		Camo = "Desert";
		};
		class 53rd_A_Medic_Helmet_Winter_No_Visor:53rd_A_Medic_Helmet_Urban_No_Visor
		{
		Camo = "Winter";
		};
		
		//Atlas Medic
		//Visor
		class 53rd_A_Medic_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Urban";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_A_Medic_Helmet_Woodland_Visor:53rd_A_Medic_Helmet_Urban_Visor
		{
		Camo = "Woodland";
		};
		class 53rd_A_Medic_Helmet_Desert_Visor:53rd_A_Medic_Helmet_Urban_Visor
		{
		Camo = "Desert";
		};
		class 53rd_A_Medic_Helmet_Winter_Visor:53rd_A_Medic_Helmet_Urban_Visor
		{
		Camo = "Winter";
		};
		
		//Atlas Platoon
		// NO Visor
		class 53rd_A_P_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Urban";
		Type = "Platoon";
		Visor = "No";
		};
		class 53rd_A_P_Rifleman_Helmet_Woodland_No_Visor:53rd_A_P_Rifleman_Helmet_Urban_No_Visor
		{
		Camo = "Woodland";
		};
		class 53rd_A_P_Rifleman_Helmet_Desert_No_Visor:53rd_A_P_Rifleman_Helmet_Urban_No_Visor
		{
		Camo = "Desert";
		};
		class 53rd_A_P_Rifleman_Helmet_Winter_No_Visor:53rd_A_P_Rifleman_Helmet_Urban_No_Visor
		{
		Camo = "Winter";
		};
		
		//Atlas Platoon
		//Visor
		class 53rd_A_P_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Urban";
		Type = "Platoon";
		Visor = "Yes";
		};
		class 53rd_A_P_Rifleman_Helmet_Woodland_Visor:53rd_A_P_Rifleman_Helmet_Urban_Visor
		{
		Camo = "Woodland";
		};
		class 53rd_A_P_Rifleman_Helmet_Desert_Visor:53rd_A_P_Rifleman_Helmet_Urban_Visor
		{
		Camo = "Desert";
		};
		class 53rd_A_P_Rifleman_Helmet_Winter_Visor:53rd_A_P_Rifleman_Helmet_Urban_Visor
		{
		Camo = "Winter";
		};
		
		//Atlas Platoon Mike
		// NO Visor
		class 53rd_A_P_M_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Urban";
		Type = "Mike";
		Visor = "No";
		};
		class 53rd_A_P_M_Rifleman_Helmet_Woodland_No_Visor:53rd_A_P_M_Rifleman_Helmet_Urban_No_Visor
		{
		Camo = "Woodland";
		};
		class 53rd_A_P_M_Rifleman_Helmet_Desert_No_Visor:53rd_A_P_M_Rifleman_Helmet_Urban_No_Visor
		{
		Camo = "Desert";
		};
		class 53rd_A_P_M_Rifleman_Helmet_Winter_No_Visor:53rd_A_P_M_Rifleman_Helmet_Urban_No_Visor
		{
		Camo = "Winter";
		};
		
		//Atlas Platoon Mike
		//Visor
		class 53rd_A_P_M_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Urban";
		Type = "Mike";
		Visor = "Yes";
		};
		class 53rd_A_P_M_Rifleman_Helmet_Woodland_Visor:53rd_A_P_M_Rifleman_Helmet_Urban_Visor
		{
		Camo = "Woodland";
		};
		class 53rd_A_P_M_Rifleman_Helmet_Desert_Visor:53rd_A_P_M_Rifleman_Helmet_Urban_Visor
		{
		Camo = "Desert";
		};
		class 53rd_A_P_M_Rifleman_Helmet_Winter_Visor:53rd_A_P_M_Rifleman_Helmet_Urban_Visor
		{
		Camo = "Winter";
		};
		
		///Beanies
		class 53rd_Beanie_Urban
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Beanies";
		Visor = "No";
		};
		class 53rd_Beanie_Woodland:53rd_Beanie_Urban
		{
		Camo = "Woodland";
		};
		class 53rd_Beanie_Desert:53rd_Beanie_Urban
		{
		Camo = "Desert";
		};
		class 53rd_Beanie_Winter:53rd_Beanie_Urban
		{
		Camo = "Winter";
		};
		
		///Booines
		class 53rd_Boonie_Urban
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Booines";
		Visor = "No";
		};
		class 53rd_Boonie_Woodland:53rd_Boonie_Urban
		{
		Camo = "Woodland";
		};
		class 53rd_Boonie_Desert:53rd_Boonie_Urban
		{
		Camo = "Desert";
		};
		class 53rd_Boonie_Winter:53rd_Boonie_Urban
		{
		Camo = "Winter";
		};
		
		///Beret
		class 53rd_Beret_Hephaestus
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Beret";
		Visor = "No";
		};
		class 53rd_Beret_Hephaestus_med:53rd_Beret_Hephaestus
		{
		Camo = "Woodland";
		};
		class 53rd_Beret_Hephaestus_med_led:53rd_Beret_Hephaestus
		{
		Camo = "Desert";
		};
		class 53rd_Beret_Volare:53rd_Beret_Hephaestus
		{
		Camo = "Winter";
		};
		 
		 
		 
		///No Visor
		class 53rd_Apollo_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Apollo";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_Apollo_Helmet_Woodland_No_Visor:53rd_Apollo_Helmet_Urban_No_Visor
		{
		Camo = "Woodland";
		};
		class 53rd_Apollo_Helmet_Desert_No_Visor:53rd_Apollo_Helmet_Urban_No_Visor
		{
		Camo = "Desert";
		};
		class 53rd_Apollo_Helmet_Winter_No_Visor:53rd_Apollo_Helmet_Urban_No_Visor
		{
		Camo = "Winter";
		};
		
		///Visor
		class 53rd_Apollo_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Apollo";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_Apollo_Helmet_Woodland_Visor:53rd_Apollo_Helmet_Urban_Visor
		{
		Camo = "Woodland";
		};
		class 53rd_Apollo_Helmet_Desert_Visor:53rd_Apollo_Helmet_Urban_Visor
		{
		Camo = "Desert";
		};
		class 53rd_Apollo_Helmet_Winter_Visor:53rd_Apollo_Helmet_Urban_Visor
		{
		Camo = "Winter";
		};
		
		//Apollo Armor
		class 53rd_Apollo_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Apollo";
		Camo = "Urban";
		Type = "Rifleman";
		};
		class 53rd_Apollo_DS:53rd_Apollo_UB
		{
		Camo = "Desert";
		};
		class 53rd_Apollo_WD:53rd_Apollo_UB
		{
		Camo = "Woodland";
		};
		class 53rd_Apollo_SN:53rd_Apollo_UB
		{
		Camo = "Winter";
		};
		//Apollo Armor - No Shoulders
		class 53rd_Apollo_UB_NS
		{
		model = "HephaestusCamoArmor";
		Section = "Apollo";
		Camo = "Urban";
		Type = "NoShoulders";
		};
		class 53rd_Apollo_DS_NS:53rd_Apollo_UB_NS
		{
		Camo = "Desert";
		};
		class 53rd_Apollo_WD_NS:53rd_Apollo_UB_NS
		{
		Camo = "Woodland";
		};
		class 53rd_Apollo_WT_NS:53rd_Apollo_UB_NS
		{
		Camo = "Winter";
		};
		
		//Hephaestus Armors
		//Urban
		class 53rd_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Urban";
		Type = "Rifleman";
		};
		class 53rd_Uniform_Medic_UB:53rd_Rifleman_UB
		{
		Type = "Medic";
		};
		class 53rd_Uniform_JTAC_UB:53rd_Rifleman_UB
		{
		Type = "JTAC";
		};
		class 53rd_Uniform_GL_UB:53rd_Rifleman_UB
		{
		Type = "Grenadier";
		};
		class 53rd_Uniform_AR_UB:53rd_Rifleman_UB
		{
		Type = "Autorifleman";
		};
		class 53rd_Uniform_AT_UB:53rd_Rifleman_UB
		{
		Type = "Anti_Tank";
		};
		
		//Desert
		class 53rd_Rifleman_DS
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Desert";
		Type = "Rifleman";
		};
		class 53rd_Uniform_Medic_DS:53rd_Rifleman_DS
		{
		Type = "Medic";
		};
		class 53rd_Uniform_JTAC_DS:53rd_Rifleman_DS
		{
		Type = "JTAC";
		};
		class 53rd_Uniform_GL_DS:53rd_Rifleman_DS
		{
		Type = "Grenadier";
		};
		class 53rd_Uniform_AR_DS:53rd_Rifleman_DS
		{
		Type = "Autorifleman";
		};
		class 53rd_Uniform_AT_DS:53rd_Rifleman_DS
		{
		Type = "Anti_Tank";
		};
		
		//Woodland
		class 53rd_Rifleman_WD
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Woodland";
		Type = "Rifleman";
		};
		class 53rd_Uniform_Medic_WD:53rd_Rifleman_WD
		{
		Type = "Medic";
		};
		class 53rd_Uniform_JTAC_WD:53rd_Rifleman_WD
		{
		Type = "JTAC";
		};
		class 53rd_Uniform_GL_WD:53rd_Rifleman_WD
		{
		Type = "Grenadier";
		};
		class 53rd_Uniform_AR_WD:53rd_Rifleman_WD
		{
		Type = "Autorifleman";
		};
		class 53rd_Uniform_AT_WD:53rd_Rifleman_WD
		{
		Type = "Anti_Tank";
		};
		
		//Winter
		class 53rd_Rifleman_SN
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Winter";
		Type = "Rifleman";
		};
		class 53rd_Uniform_Medic_SN:53rd_Rifleman_SN
		{
		Type = "Medic";
		};
		class 53rd_Uniform_JTAC_SN:53rd_Rifleman_SN
		{
		Type = "JTAC";
		};
		class 53rd_Uniform_GL_SN:53rd_Rifleman_SN
		{
		Type = "Grenadier";
		};
		class 53rd_Uniform_AR_SN:53rd_Rifleman_SN
		{
		Type = "Autorifleman";
		};
		class 53rd_Uniform_AT_SN:53rd_Rifleman_SN
		{
		Type = "Anti_Tank";
		};
		
		//Atlas Armor
		class 53rd_A_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Atlas";
		Camo = "Urban";
		Type = "Rifleman";
		};
		class 53rd_A_Rifleman_WD:53rd_A_Rifleman_UB
		{
		Camo = "Woodland";
		};
		class 53rd_A_Rifleman_SN:53rd_A_Rifleman_UB
		{
		Camo = "Winter";
		};
		class 53rd_A_Rifleman_DS:53rd_A_Rifleman_UB
		{
		Camo = "Desert";
		};
			
		//Atlas Platoon Armor
		class 53rd_A_P_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Atlas";
		Camo = "Urban";
		Type = "Platoon";
		};
		class 53rd_A_P_Rifleman_WD:53rd_A_P_Rifleman_UB
		{
		Camo = "Woodland";
		};
		class 53rd_A_P_Rifleman_SN:53rd_A_P_Rifleman_UB
		{
		Camo = "Winter";
		};
		class 53rd_A_P_Rifleman_DS:53rd_A_P_Rifleman_UB
		{
		Camo = "Desert";
		};
						
		
		//Atlas Helmets
		//Hellfire
		class 53rd_Atlas_Hellfire_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "Hellfire";
		};
		class 53rd_Atlas_Hellfire_Custom_Helmet_SN:53rd_Atlas_Hellfire_Custom_Helmet
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_Hellfire_Custom_Helmet_DS:53rd_Atlas_Hellfire_Custom_Helmet
		{
		Camo = "Desert";
		}; 
		class 53rd_Atlas_Hellfire_Custom_Helmet_WD:53rd_Atlas_Hellfire_Custom_Helmet
		{
		Camo = "Woodland";
		}; 
		
		//LoneWulf
		class 53rd_Atlas_LoneWulf_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "LoneWulf";
		};
		class 53rd_Atlas_LoneWulf_Custom_Helmet_SN:53rd_Atlas_LoneWulf_Custom_Helmet
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_LoneWulf_Custom_Helmet_DS:53rd_Atlas_LoneWulf_Custom_Helmet
		{
		Camo = "Desert";
		}; 
		class 53rd_Atlas_LoneWulf_Custom_Helmet_WD:53rd_Atlas_LoneWulf_Custom_Helmet
		{
		Camo = "Woodland";
		}; 
		
		//Serpent
		class 53rd_Atlas_Serpent_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "Serpent";
		};
		class 53rd_Atlas_Serpent_Custom_Helmet_SN:53rd_Atlas_Serpent_Custom_Helmet
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_Serpent_Custom_Helmet_DS:53rd_Atlas_Serpent_Custom_Helmet
		{
		Camo = "Desert";
		}; 
		class 53rd_Atlas_Serpent_Custom_Helmet_WD:53rd_Atlas_Serpent_Custom_Helmet
		{
		Camo = "Woodland";
		}; 
		
		//Tsuki
		class 53rd_Atlas_Tsuki_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "Tsuki";
		};
		class 53rd_Atlas_Tsuki_Custom_Helmet_SN:53rd_Atlas_Tsuki_Custom_Helmet
		{
		Camo = "Snow";
		}; 
		class 53rd_Atlas_Tsuki_Custom_Helmet_DS
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_Tsuki_Custom_Helmet_WD
		{
		Camo = "Woodland";
		};
		
		//Texas
		class 53rd_Atlas_Texas_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "Texas";
		};
		class 53rd_Atlas_Texas_Custom_Helmet_SN:53rd_Atlas_Texas_Custom_Helmet
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_Texas_Custom_Helmet_Desert:53rd_Atlas_Texas_Custom_Helmet
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_Texas_Custom_Helmet_WD:53rd_Atlas_Texas_Custom_Helmet
		{
		Camo = "Woodland";
		};

		//Armors
		
		//Hellfire
		class 53rd_Atlas_Hellfire_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Urban";
		Person = "Hellfire";
		};
		class 53rd_Atlas_Hellfire_Armor_SN:53rd_Atlas_Hellfire_Armor
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_Hellfire_Armor_DS:53rd_Atlas_Hellfire_Armor
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_Hellfire_Armor_WD:53rd_Atlas_Hellfire_Armor
		{
		Camo = "Woodland";
		};
		
		//LoneWulf
		class 53rd_Atlas_LoneWulf_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Urban";
		Person = "LoneWulf";
		};
		class 53rd_Atlas_LoneWulf_Armor_SN:53rd_Atlas_LoneWulf_Armor
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_LoneWulf_Armor_DS:53rd_Atlas_LoneWulf_Armor
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_LoneWulf_Armor_WD:53rd_Atlas_LoneWulf_Armor
		{
		Camo = "Woodland";
		};
		
		//Serpent
		class 53rd_Atlas_Serpent_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Urban";
		Person = "Serpent";
		};
		class 53rd_Atlas_Serpent_Armor_SN:53rd_Atlas_Serpent_Armor
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_Serpent_Armor_DS:53rd_Atlas_Serpent_Armor
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_Serpent_Armor_WD:53rd_Atlas_Serpent_Armor
		{
		Camo = "Woodland";
		};

		
		//Tsuki
		class 53rd_Atlas_Tsuki_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Urban";
		Person = "Tsuki";
		};
		class 53rd_Atlas_Tsuki_Armor_SN:53rd_Atlas_Tsuki_Armor
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_Tsuki_Armor_DS
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_Tsuki_Armor_WD
		{
		Camo = "Woodland";
		};
		
		//Texas
		class 53rd_Atlas_Texas_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Urban";
		Person = "Texas";
		};
		class 53rd_Atlas_Texas_Armor_Winter:53rd_Atlas_Texas_Armor
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_Texas_Armor_Desert:53rd_Atlas_Texas_Armor
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_Texas_Armor_Woodland:53rd_Atlas_Texas_Armor
		{
		Camo = "Woodland";
		};
        
        //Atlas Helmets
        class 53rd_Atlas_CH252
		{
		model = "Atlashelms";
		Type = "NormalV";
        Camo = "Urban";
		};
		class 53rd_Ranger_CH252_MD: 53rd_Atlas_CH252
		{
		Type = "MedicV";
		};
		class 53rd_Atlas_CH252_NV
		{
		model = "Atlashelms";
		Type = "Normal";
        Camo = "Urban";
		};
		class 53rd_HaloInf_Marine_WDL_UNSC_NV_headgear:53rd_Atlas_CH252_NV
		{
		Type = "Medic";
		}; 
        
        //Atlas Team Helmets
        //Gold Helmet
		class Atlas_Scout_Urban
		{
		model = "Atlashelms";
		Type = "Scout_Gold";
        Camo = "Urban";
		};
        class Atlas_Scout_Winter:Atlas_Scout_Urban
        {
        Camo = "Snow";
        };
		class Atlas_Scout_Desert:Atlas_Scout_Urban
        {
        Camo = "Desert";
        };
		class Atlas_Scout_Woodland:Atlas_Scout_Urban
        {
        Camo = "Woodland";
        };
		
        //Platoon Helmet
		class Atlas_P_Scout_Urban
		{
		model = "Atlashelms";
		Type = "Scout_PL";
        Camo = "Urban";
		};
        class Atlas_P_Scout_Winter:Atlas_P_Scout_Urban
        {
        Camo = "Snow";
        };
		class Atlas_P_Scout_Desert:Atlas_P_Scout_Urban
        {
        Camo = "Desert";
        };
		class Atlas_P_Scout_Woodland:Atlas_P_Scout_Urban
        {
        Camo = "Woodland";
        };
        
        //Atlas Team Armor
        //Command
		class 53rd_Atlas_PL_uniform
		{
		model = "AtlasTeamArmors";
		Camo = "Urban";
		Type = "Command";
		};
		class 53rd_Atlas_PL_uniform_SN
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_PL_uniform_DS
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_PL_uniform_WD
		{
		Camo = "Woodland";
		};
        
        //Gold
		class 53rd_Atlas_Y_uniform
		{
		model = "AtlasTeamArmors";
		Camo = "Urban";
		Type = "Gold";
		};
		class 53rd_Atlas_Gold_uniform_SN
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_Gold_uniform_DS
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_Gold_uniform_WD
		{
		Camo = "Woodland";
		};
		
		 //Purple
		class 53rd_Atlas_Purple_uniform
		{
		model = "AtlasTeamArmors";
		Camo = "Urban";
		Type = "Purple";
		};
		class 53rd_Atlas_Purple_uniform_SN
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_Purple_uniform_DS
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_Purple_uniform_WD
		{
		Camo = "Woodland";
		};
	};
};




