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
				values[] = {"Reservist","Atlas","Apollo","OneOne","OneTwo","OneThree","TwoOne","TwoTwo","TwoThree"};
				changeingame = 1;
                changedelay  = 0;
				class Reservist
				{
					label = "Reservist";
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
				class OneOne
				{
					label = "1-1";
					image = "#(rgb113,121,126)color(0.8,0.8,0.8,1)";
				};
				class OneTwo
				{
					label = "1-2";
					image = "#(rgb113,121,126)color(0.8,0.8,0.8,1)";
				};
				class OneThree
				{
					label = "1-3";
					image = "#(rgb113,121,126)color(0.8,0.8,0.8,1)";
				};
				class TwoOne
				{
					label = "2-1";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
				class TwoTwo
				{
					label = "2-2";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
				class TwoThree
				{
					label = "2-3";
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
				values[] = {"Rifleman","Medic","Autorifleman","Anti_Tank","JTAC","Grenadier","Beanies","Booines","Soft_Cap","Beret","CrewHelmet","Platoon","Mike"};
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
		//Reservist
		//Urban
		//No Visor
		class 53rd_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_Medic_Helmet_Woodland_NVisor:53rd_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_JTAC_Helmet_Woodland_NVisor:53rd_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_Grenaider_Helmet_Woodland_NVisor:53rd_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_Autorifleman_Helmet_Woodland_NVisor:53rd_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_AT_Helmet_Woodland_NVisor:53rd_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//Reservist
		//Urban
		//Visor
		class 53rd_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_Medic_Helmet_Urban_Visor:53rd_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_JTAC_Helmet_Urban_Visor:53rd_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_Grenaider_Helmet_Urban_Visor:53rd_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_Autorifleman_Helmet_Urban_Visor:53rd_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_AT_Helmet_Urban_Visor:53rd_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Urban";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//Reservist
		//Desert
		//No Visor
		class 53rd_Rifleman_Helmet_Desert_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_Medic_Helmet_Desert_NVisor:53rd_Rifleman_Helmet_Desert_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_JTAC_Helmet_Desert_NVisor:53rd_Rifleman_Helmet_Desert_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_Grenaider_Helmet_Desert_NVisor:53rd_Rifleman_Helmet_Desert_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_Autorifleman_Helmet_Desert_NVisor:53rd_Rifleman_Helmet_Desert_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_AT_Helmet_Desert_NVisor:53rd_Rifleman_Helmet_Desert_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//Reservist
		//Desert
		//Visor
		class 53rd_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_Medic_Helmet_Desert_Visor:53rd_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_JTAC_Helmet_Desert_Visor:53rd_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_Grenaider_Helmet_Desert_Visor:53rd_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_Autorifleman_Helmet_Desert_Visor:53rd_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_AT_Helmet_Desert_Visor:53rd_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//Reservist
		//Woodland
		//No Visor
		class 53rd_Rifleman_Helmet_Woodland_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_Medic_Helmet_Urban_NVisor:53rd_Rifleman_Helmet_Woodland_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_JTAC_Helmet_Urban_NVisor:53rd_Rifleman_Helmet_Woodland_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_Grenaider_Helmet_Urban_NVisor:53rd_Rifleman_Helmet_Woodland_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_Autorifleman_Helmet_Urban_NVisor:53rd_Rifleman_Helmet_Woodland_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_AT_Helmet_Urban_NVisor:53rd_Rifleman_Helmet_Woodland_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//Reservist
		//Woodland
		//Visor
		class 53rd_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_Medic_Helmet_Woodland_Visor:53rd_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_JTAC_Helmet_Woodland_Visor:53rd_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_Grenaider_Helmet_Woodland_Visor:53rd_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_Autorifleman_Helmet_Woodland_Visor:53rd_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_AT_Helmet_Woodland_Visor:53rd_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//Reservist
		//Winter
		//No Visor
		class 53rd_Rifleman_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_Medic_Helmet_Winter_NVisor:53rd_Rifleman_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_JTAC_Helmet_Winter_NVisor:53rd_Rifleman_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_Grenaider_Helmet_Winter_NVisor:53rd_Rifleman_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_Autorifleman_Helmet_Winter_NVisor:53rd_Rifleman_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_AT_Helmet_Winter_NVisor:53rd_Rifleman_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//Reservist
		//Winter
		//Visor
		class 53rd_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_Medic_Helmet_Winter_Visor:53rd_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_JTAC_Helmet_Winter_Visor:53rd_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_Grenaider_Helmet_Winter_Visor:53rd_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_Autorifleman_Helmet_Winter_Visor:53rd_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_AT_Helmet_Winter_Visor:53rd_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//Atlas Reservist
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
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_A_Rifleman_Helmet_Desert_No_Visor:53rd_A_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_A_Rifleman_Helmet_Winter_No_Visor:53rd_A_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "No";
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
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_A_Rifleman_Helmet_Desert_Visor:53rd_A_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_A_Rifleman_Helmet_Winter_Visor:53rd_A_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "Yes";
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
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_A_Medic_Helmet_Desert_No_Visor:53rd_A_Medic_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Desert";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_A_Medic_Helmet_Winter_No_Visor:53rd_A_Medic_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Winter";
		Type = "Medic";
		Visor = "No";
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
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_A_Medic_Helmet_Desert_Visor:53rd_A_Medic_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Desert";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_A_Medic_Helmet_Winter_Visor:53rd_A_Medic_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Winter";
		Type = "Medic";
		Visor = "Yes";
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
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Woodland";
		Type = "Platoon";
		Visor = "No";
		};
		class 53rd_A_P_Rifleman_Helmet_Desert_No_Visor:53rd_A_P_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Desert";
		Type = "Platoon";
		Visor = "No";
		};
		class 53rd_A_P_Rifleman_Helmet_Winter_No_Visor:53rd_A_P_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Winter";
		Type = "Platoon";
		Visor = "No";
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
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Woodland";
		Type = "Platoon";
		Visor = "Yes";
		};
		class 53rd_A_P_Rifleman_Helmet_Desert_Visor:53rd_A_P_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Desert";
		Type = "Platoon";
		Visor = "Yes";
		};
		class 53rd_A_P_Rifleman_Helmet_Winter_Visor:53rd_A_P_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Winter";
		Type = "Platoon";
		Visor = "Yes";
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
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Woodland";
		Type = "Mike";
		Visor = "No";
		};
		class 53rd_A_P_M_Rifleman_Helmet_Desert_No_Visor:53rd_A_P_M_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Desert";
		Type = "Mike";
		Visor = "No";
		};
		class 53rd_A_P_M_Rifleman_Helmet_Winter_No_Visor:53rd_A_P_M_Rifleman_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Winter";
		Type = "Mike";
		Visor = "No";
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
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Woodland";
		Type = "Mike";
		Visor = "Yes";
		};
		class 53rd_A_P_M_Rifleman_Helmet_Desert_Visor:53rd_A_P_M_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Desert";
		Type = "Mike";
		Visor = "Yes";
		};
		class 53rd_A_P_M_Rifleman_Helmet_Winter_Visor:53rd_A_P_M_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Atlas";
		Camo = "Winter";
		Type = "Mike";
		Visor = "Yes";
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
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Beanies";
		Visor = "No";
		};
		class 53rd_Beanie_Desert:53rd_Beanie_Urban
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Beanies";
		Visor = "No";
		};
		class 53rd_Beanie_Winter:53rd_Beanie_Urban
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Beanies";
		Visor = "No";
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
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Booines";
		Visor = "No";
		};
		class 53rd_Boonie_Desert:53rd_Boonie_Urban
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Booines";
		Visor = "No";
		};
		class 53rd_Boonie_Winter:53rd_Boonie_Urban
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Booines";
		Visor = "No";
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
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Woodland";
		Type = "Beret";
		Visor = "No";
		};
		class 53rd_Beret_Hephaestus_med_led:53rd_Beret_Hephaestus
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Desert";
		Type = "Beret";
		Visor = "No";
		};
		class 53rd_Beret_Volare:53rd_Beret_Hephaestus
		{
		model = "HephaestusCamoHelmets";
		Section = "Reservist";
		Camo = "Winter";
		Type = "Beret";
		Visor = "No";
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
		model = "HephaestusCamoHelmets";
		Section = "Apollo";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_Apollo_Helmet_Desert_No_Visor:53rd_Apollo_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Apollo";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_Apollo_Helmet_Winter_No_Visor:53rd_Apollo_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Apollo";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "No";
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
		model = "HephaestusCamoHelmets";
		Section = "Apollo";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_Apollo_Helmet_Desert_Visor:53rd_Apollo_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Apollo";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_Apollo_Helmet_Winter_Visor:53rd_Apollo_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "Apollo";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "Yes";
		};
		
		//Hephaestus Helmets
		
		//1-1
		//Urban
		//No Visor
		class 53rd_1_1_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_1_Medic_Helmet_Urban_NVisor:53rd_1_1_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_1_JTAC_Helmet_Urban_NVisor:53rd_1_1_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_1_Grenaider_Helmet_Urban_NVisor:53rd_1_1_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_1_Autorifleman_Helmet_Urban_NVisor:53rd_1_1_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_1_AT_Helmet_Urban_NVisor:53rd_1_1_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-1
		//Urban
		//Visor 
		class 53rd_1_1_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_Medic_Helmet_Urban_Visor:53rd_1_1_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_1_JTAC_Helmet_Urban_Visor:53rd_1_1_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_1_Grenaider_Helmet_Urban_Visor:53rd_1_1_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_1_Autorifleman_Helmet_Urban_Visor:53rd_1_1_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_AT_Helmet_Urban_Visor:53rd_1_1_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Urban";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-1
		//Desert
		//No Visor
		class 53rd_1_1_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_1_Medic_Helmet_Desert_NVisor:53rd_1_1_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_1_JTAC_Helmet_Desert_NVisor:53rd_1_1_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_1_Grenaider_Helmet_Desert_NVisor:53rd_1_1_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_1_Autorifleman_Helmet_Desert_NVisor:53rd_1_1_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_1_AT_Helmet_Desert_NVisor:53rd_1_1_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-1
		//Desert
		//Visor
		class 53rd_1_1_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_Medic_Helmet_Desert_Visor:53rd_1_1_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_1_JTAC_Helmet_Desert_Visor:53rd_1_1_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_1_Grenaider_Helmet_Desert_Visor:53rd_1_1_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_1_Autorifleman_Helmet_Desert_Visor:53rd_1_1_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_AT_Helmet_Desert_Visor:53rd_1_1_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Desert";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-1
		//Woodland
		//No Visor
		class 53rd_1_1_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_1_Medic_Helmet_Woodland_NVisor:53rd_1_1_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_1_JTAC_Helmet_Woodland_NVisor:53rd_1_1_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_1_Grenaider_Helmet_Woodland_NVisor:53rd_1_1_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_1_Autorifleman_Helmet_Woodland_NVisor:53rd_1_1_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_1_AT_Helmet_Woodland_NVisor:53rd_1_1_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-1
		//Woodland
		//Visor
		class 53rd_1_1_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_Medic_Helmet_Woodland_Visor:53rd_1_1_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_1_JTAC_Helmet_Woodland_Visor:53rd_1_1_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_1_Grenaider_Helmet_Woodland_Visor:53rd_1_1_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_1_Autorifleman_Helmet_Woodland_Visor:53rd_1_1_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_AT_Helmet_Woodland_Visor:53rd_1_1_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Woodland";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-1
		//Winter
		//No Visor
		class 53rd_1_1_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_1_Medic_Helmet_Winter_NVisor:53rd_1_1_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_1_JTAC_Helmet_Winter_NVisor:53rd_1_1_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_1_Grenaider_Helmet_Winter_NVisor:53rd_1_1_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_1_Autorifleman_Helmet_Winter_NVisor:53rd_1_1_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_1_AT_Helmet_Winter_NVisor:53rd_1_1_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-1
		//Winter
		//Visor
		class 53rd_1_1_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_Medic_Helmet_Winter_Visor:53rd_1_1_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_1_JTAC_Helmet_Winter_Visor:53rd_1_1_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_1_Grenaider_Helmet_Winter_Visor:53rd_1_1_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_1_Autorifleman_Helmet_Winter_Visor:53rd_1_1_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_1_AT_Helmet_Winter_Visor:53rd_1_1_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneOne";
		Camo = "Winter";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-2
		//Urban
		//No Visor
		class 53rd_1_2_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_2_Medic_Helmet_Urban_NVisor:53rd_1_2_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_2_JTAC_Helmet_Urban_NVisor:53rd_1_2_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_2_Grenaider_Helmet_Urban_NVisor:53rd_1_2_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_2_Autorifleman_Helmet_Urban_NVisor:53rd_1_2_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_2_AT_Helmet_Urban_NVisor:53rd_1_2_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-2
		//Urban
		//Visor
		class 53rd_1_2_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_2_Medic_Helmet_Urban_Visor:53rd_1_2_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_2_JTAC_Helmet_Urban_Visor:53rd_1_2_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_2_Grenaider_Helmet_Urban_Visor:53rd_1_2_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_2_Autorifleman_Helmet_Urban_Visor:53rd_1_2_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_2_AT_Helmet_Urban_Visor:53rd_1_2_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Urban";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-2
		//Desert
		//No Visor
		class 53rd_1_2_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_2_Medic_Helmet_Desert_NVisor:53rd_1_2_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_2_JTAC_Helmet_Desert_NVisor:53rd_1_2_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_2_Grenaider_Helmet_Desert_NVisor:53rd_1_2_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_2_Autorifleman_Helmet_Desert_NVisor:53rd_1_2_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_2_AT_Helmet_Desert_NVisor:53rd_1_2_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-2
		//Desert
		//Visor
		class 53rd_1_2_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_2_Medic_Helmet_Desert_Visor:53rd_1_2_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_2_JTAC_Helmet_Desert_Visor:53rd_1_2_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_2_Grenaider_Helmet_Desert_Visor:53rd_1_2_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_2_Autorifleman_Helmet_Desert_Visor:53rd_1_2_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_2_AT_Helmet_Desert_Visor:53rd_1_2_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Desert";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-2
		//Woodland
		//No Visor
		class 53rd_1_2_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_2_Medic_Helmet_Woodland_NVisor:53rd_1_2_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_2_JTAC_Helmet_Woodland_NVisor:53rd_1_2_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_2_Grenaider_Helmet_Woodland_NVisor:53rd_1_2_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_2_Autorifleman_Helmet_Woodland_NVisor:53rd_1_2_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_2_AT_Helmet_Woodland_NVisor:53rd_1_2_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-2
		//Woodland
		//Visor
		class 53rd_1_2_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_2_Medic_Helmet_Woodland_Visor:53rd_1_2_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_2_JTAC_Helmet_Woodland_Visor:53rd_1_2_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_2_Grenaider_Helmet_Woodland_Visor:53rd_1_2_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_2_Autorifleman_Helmet_Woodland_Visor:53rd_1_2_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_2_AT_Helmet_Woodland_Visor:53rd_1_2_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Woodland";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-2
		//Winter
		//No Visor
		class 53rd_1_2_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_2_Medic_Helmet_Winter_NVisor:53rd_1_2_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_2_JTAC_Helmet_Winter_NVisor:53rd_1_2_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_2_Grenaider_Helmet_Winter_NVisor:53rd_1_2_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_2_Autorifleman_Helmet_Winter_NVisor:53rd_1_2_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_2_AT_Helmet_Winter_NVisor:53rd_1_2_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-2
		//Winter
		//Visor
		class 53rd_1_2_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_2_Medic_Helmet_Winter_Visor:53rd_1_2_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_2_JTAC_Helmet_Winter_Visor:53rd_1_2_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_2_Grenaider_Helmet_Winter_Visor:53rd_1_2_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_2_Autorifleman_Helmet_Winter_Visor:53rd_1_2_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_2_AT_Helmet_Winter_Visor:53rd_1_2_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneTwo";
		Camo = "Winter";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-3
		//Urban
		//No Visor
		class 53rd_1_3_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_3_Medic_Helmet_Urban_NVisor:53rd_1_3_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_3_JTAC_Helmet_Urban_NVisor:53rd_1_3_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_3_Grenaider_Helmet_Urban_NVisor:53rd_1_3_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_3_Autorifleman_Helmet_Urban_NVisor:53rd_1_3_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_3_AT_Helmet_Urban_NVisor:53rd_1_3_Rifleman_Helmet_Urban_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-3
		//Urban
		//Visor
		class 53rd_1_3_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_3_Medic_Helmet_Urban_Visor:53rd_1_3_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_3_JTAC_Helmet_Urban_Visor:53rd_1_3_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_3_Grenaider_Helmet_Urban_Visor:53rd_1_3_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_3_Autorifleman_Helmet_Urban_Visor:53rd_1_3_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_3_AT_Helmet_Urban_Visor:53rd_1_3_Rifleman_Helmet_Urban_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Urban";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-3
		//Desert
		//No Visor
		class 53rd_1_3_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_3_Medic_Helmet_Desert_NVisor:53rd_1_3_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_3_JTAC_Helmet_Desert_NVisor:53rd_1_3_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_3_Grenaider_Helmet_Desert_NVisor:53rd_1_3_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_3_Autorifleman_Helmet_Desert_NVisor:53rd_1_3_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_3_AT_Helmet_Desert_NVisor:53rd_1_3_Rifleman_Helmet_Desert_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-3
		//Desert
		//Visor
		class 53rd_1_3_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_3_Medic_Helmet_Desert_Visor:53rd_1_3_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_3_JTAC_Helmet_Desert_Visor:53rd_1_3_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_3_Grenaider_Helmet_Desert_Visor:53rd_1_3_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_3_Autorifleman_Helmet_Desert_Visor:53rd_1_3_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_3_AT_Helmet_Desert_Visor:53rd_1_3_Rifleman_Helmet_Desert_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Desert";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-3
		//Woodland
		//No Visor
		class 53rd_1_3_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_3_Medic_Helmet_Woodland_NVisor:53rd_1_3_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_3_JTAC_Helmet_Woodland_NVisor:53rd_1_3_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_3_Grenaider_Helmet_Woodland_NVisor:53rd_1_3_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_3_Autorifleman_Helmet_Woodland_NVisor:53rd_1_3_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_3_AT_Helmet_Woodland_NVisor:53rd_1_3_Rifleman_Helmet_Woodland_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-3
		//Woodland
		//Visor
		class 53rd_1_3_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_3_Medic_Helmet_Woodland_Visor:53rd_1_3_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_3_JTAC_Helmet_Woodland_Visor:53rd_1_3_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_3_Grenaider_Helmet_Woodland_Visor:53rd_1_3_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_3_Autorifleman_Helmet_Woodland_Visor:53rd_1_3_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_3_AT_Helmet_Woodland_Visor:53rd_1_3_Rifleman_Helmet_Woodland_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Woodland";
		Type = "Anti_Tank";
		Visor = "Yes";
		};
		
		//1-3
		//Winter
		//No Visor
		class 53rd_1_3_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "No";
		};
		class 53rd_1_3_Medic_Helmet_Winter_NVisor:53rd_1_3_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "Medic";
		Visor = "No";
		};
		class 53rd_1_3_JTAC_Helmet_Winter_NVisor:53rd_1_3_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "JTAC";
		Visor = "No";
		};
		class 53rd_1_3_Grenaider_Helmet_Winter_NVisor:53rd_1_3_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "Grenadier";
		Visor = "No";
		};
		class 53rd_1_3_Autorifleman_Helmet_Winter_NVisor:53rd_1_3_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "Autorifleman";
		Visor = "No";
		};
		class 53rd_1_3_AT_Helmet_Winter_NVisor:53rd_1_3_Rifleman_Helmet_Winter_NVisor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "Anti_Tank";
		Visor = "No";
		};
		
		//1-3
		//Winter
		//Visor
		class 53rd_1_3_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "Rifleman";
		Visor = "Yes";
		};
		class 53rd_1_3_Medic_Helmet_Winter_Visor:53rd_1_3_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "Medic";
		Visor = "Yes";
		};
		class 53rd_1_3_JTAC_Helmet_Winter_Visor:53rd_1_3_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "JTAC";
		Visor = "Yes";
		};
		class 53rd_1_3_Grenaider_Helmet_Winter_Visor:53rd_1_3_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "Grenadier";
		Visor = "Yes";
		};
		class 53rd_1_3_Autorifleman_Helmet_Winter_Visor:53rd_1_3_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "Autorifleman";
		Visor = "Yes";
		};
		class 53rd_1_3_AT_Helmet_Winter_Visor:53rd_1_3_Rifleman_Helmet_Winter_Visor
		{
		model = "HephaestusCamoHelmets";
		Section = "OneThree";
		Camo = "Winter";
		Type = "Anti_Tank";
		Visor = "Yes";
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
		model = "HephaestusCamoArmor";
		Section = "Apollo";
		Camo = "Desert";
		Type = "Rifleman";
		};
		class 53rd_Apollo_WD:53rd_Apollo_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Apollo";
		Camo = "Woodland";
		Type = "Rifleman";
		};
		class 53rd_Apollo_SN:53rd_Apollo_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Apollo";
		Camo = "Winter";
		Type = "Rifleman";
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
		model = "HephaestusCamoArmor";
		Section = "Apollo";
		Camo = "Desert";
		Type = "NoShoulders";
		};
		class 53rd_Apollo_WD_NS:53rd_Apollo_UB_NS
		{
		model = "HephaestusCamoArmor";
		Section = "Apollo";
		Camo = "Woodland";
		Type = "NoShoulders";
		};
		class 53rd_Apollo_WT_NS:53rd_Apollo_UB_NS
		{
		model = "HephaestusCamoArmor";
		Section = "Apollo";
		Camo = "Winter";
		Type = "NoShoulders";
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
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Urban";
		Type = "Medic";
		};
		class 53rd_Uniform_JTAC_UB:53rd_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Urban";
		Type = "JTAC";
		};
		class 53rd_Uniform_GL_UB:53rd_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Urban";
		Type = "Grenadier";
		};
		class 53rd_Uniform_AR_UB:53rd_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Urban";
		Type = "Autorifleman";
		};
		class 53rd_Uniform_AT_UB:53rd_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Urban";
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
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Desert";
		Type = "Medic";
		};
		class 53rd_Uniform_JTAC_DS:53rd_Rifleman_DS
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Desert";
		Type = "JTAC";
		};
		class 53rd_Uniform_GL_DS:53rd_Rifleman_DS
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Desert";
		Type = "Grenadier";
		};
		class 53rd_Uniform_AR_DS:53rd_Rifleman_DS
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Desert";
		Type = "Autorifleman";
		};
		class 53rd_Uniform_AT_DS:53rd_Rifleman_DS
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Desert";
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
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Woodland";
		Type = "Medic";
		};
		class 53rd_Uniform_JTAC_WD:53rd_Rifleman_WD
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Woodland";
		Type = "JTAC";
		};
		class 53rd_Uniform_GL_WD:53rd_Rifleman_WD
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Woodland";
		Type = "Grenadier";
		};
		class 53rd_Uniform_AR_WD:53rd_Rifleman_WD
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Woodland";
		Type = "Autorifleman";
		};
		class 53rd_Uniform_AT_WD:53rd_Rifleman_WD
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Woodland";
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
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Winter";
		Type = "Medic";
		};
		class 53rd_Uniform_JTAC_SN:53rd_Rifleman_SN
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Winter";
		Type = "JTAC";
		};
		class 53rd_Uniform_GL_SN:53rd_Rifleman_SN
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Winter";
		Type = "Grenadier";
		};
		class 53rd_Uniform_AR_SN:53rd_Rifleman_SN
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Winter";
		Type = "Autorifleman";
		};
		class 53rd_Uniform_AT_SN:53rd_Rifleman_SN
		{
		model = "HephaestusCamoArmor";
		Section = "Hephaestus";
		Camo = "Winter";
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
		model = "HephaestusCamoArmor";
		Section = "Atlas";
		Camo = "Woodland";
		Type = "Rifleman";
		};
		class 53rd_A_Rifleman_SN:53rd_A_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Atlas";
		Camo = "Winter";
		Type = "Rifleman";
		};
		class 53rd_A_Rifleman_DS:53rd_A_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Atlas";
		Camo = "Desert";
		Type = "Rifleman";
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
		model = "HephaestusCamoArmor";
		Section = "Atlas";
		Camo = "Woodland";
		Type = "Platoon";
		};
		class 53rd_A_P_Rifleman_SN:53rd_A_P_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Atlas";
		Camo = "Winter";
		Type = "Platoon";
		};
		class 53rd_A_P_Rifleman_DS:53rd_A_P_Rifleman_UB
		{
		model = "HephaestusCamoArmor";
		Section = "Atlas";
		Camo = "Desert";
		Type = "Platoon";
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
		model = "AtlasCustomHelms";
		Camo = "Snow";
		Person = "Hellfire";
		};
		class 53rd_Atlas_Hellfire_Custom_Helmet_DS:53rd_Atlas_Hellfire_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Desert";
		Person = "Hellfire";
		}; 
		class 53rd_Atlas_Hellfire_Custom_Helmet_WD:53rd_Atlas_Hellfire_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Woodland";
		Person = "Hellfire";
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
		model = "AtlasCustomHelms";
		Camo = "Snow";
		Person = "LoneWulf";
		};
		class 53rd_Atlas_LoneWulf_Custom_Helmet_DS:53rd_Atlas_LoneWulf_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Desert";
		Person = "LoneWulf";
		}; 
		class 53rd_Atlas_LoneWulf_Custom_Helmet_WD:53rd_Atlas_LoneWulf_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Woodland";
		Person = "LoneWulf";
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
		model = "AtlasCustomHelms";
		Camo = "Snow";
		Person = "Serpent";
		};
		class 53rd_Atlas_Serpent_Custom_Helmet_DS:53rd_Atlas_Serpent_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Desert";
		Person = "Serpent";
		}; 
		class 53rd_Atlas_Serpent_Custom_Helmet_WD:53rd_Atlas_Serpent_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Woodland";
		Person = "Serpent";
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
		model = "AtlasCustomHelms";
		Camo = "Snow";
		Person = "Tsuki";
		}; 
		class 53rd_Atlas_Tsuki_Custom_Helmet_DS
		{
		model = "AtlasCustomHelms";
		Camo = "Desert";
		Person = "Tsuki";
		};
		class 53rd_Atlas_Tsuki_Custom_Helmet_WD
		{
		model = "AtlasCustomHelms";
		Camo = "Woodland";
		Person = "Tsuki";
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
		model = "AtlasCustomHelms";
		Camo = "Snow";
		Person = "Texas";
		};
		class 53rd_Atlas_Texas_Custom_Helmet_Desert:53rd_Atlas_Texas_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Desert";
		Person = "Texas";
		};
		class 53rd_Atlas_Texas_Custom_Helmet_WD:53rd_Atlas_Texas_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Woodland";
		Person = "Texas";
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
		model = "AtlasCustomArmors";
		Camo = "Snow";
		Person = "Hellfire";
		};
		class 53rd_Atlas_Hellfire_Armor_DS:53rd_Atlas_Hellfire_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Desert";
		Person = "Hellfire";
		};
		class 53rd_Atlas_Hellfire_Armor_WD:53rd_Atlas_Hellfire_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Woodland";
		Person = "Hellfire";
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
		model = "AtlasCustomArmors";
		Camo = "Snow";
		Person = "LoneWulf";
		};
		class 53rd_Atlas_LoneWulf_Armor_DS:53rd_Atlas_LoneWulf_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Desert";
		Person = "LoneWulf";
		};
		class 53rd_Atlas_LoneWulf_Armor_WD:53rd_Atlas_LoneWulf_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Woodland";
		Person = "LoneWulf";
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
		model = "AtlasCustomArmors";
		Camo = "Snow";
		Person = "Serpent";
		};
		class 53rd_Atlas_Serpent_Armor_DS:53rd_Atlas_Serpent_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Desert";
		Person = "Serpent";
		};
		class 53rd_Atlas_Serpent_Armor_WD:53rd_Atlas_Serpent_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Woodland";
		Person = "Serpent";
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
		model = "AtlasCustomArmors";
		Camo = "Snow";
		Person = "Tsuki";
		};
		class 53rd_Atlas_Tsuki_Armor_DS
		{
		model = "AtlasCustomArmors";
		Camo = "Desert";
		Person = "Tsuki";
		};
		class 53rd_Atlas_Tsuki_Armor_WD
		{
		model = "AtlasCustomArmors";
		Camo = "Woodland";
		Person = "Tsuki";
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
		model = "AtlasCustomArmors";
		Camo = "Snow";
		Person = "Texas";
		};
		class 53rd_Atlas_Texas_Armor_Desert:53rd_Atlas_Texas_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Desert";
		Person = "Texas";
		};
		class 53rd_Atlas_Texas_Armor_Woodland:53rd_Atlas_Texas_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Woodland";
		Person = "Texas";
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
        model = "Atlashelms";
		Type = "MedicV";
        Camo = "Urban";
		};
		class 53rd_Atlas_CH252_NV
		{
		model = "Atlashelms";
		Type = "Normal";
        Camo = "Urban";
		};
		class 53rd_HaloInf_Marine_WDL_UNSC_NV_headgear:53rd_Atlas_CH252_NV
		{
        model = "Atlashelms";
		Type = "Medic";
        Camo = "Urban";
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
        model = "Atlashelms";
        Type = "Scout_Gold";
        Camo = "Snow";
        };
		class Atlas_Scout_Desert:Atlas_Scout_Urban
        {
        model = "Atlashelms";
        Type = "Scout_Gold";
        Camo = "Desert";
        };
		class Atlas_Scout_Woodland:Atlas_Scout_Urban
        {
        model = "Atlashelms";
        Type = "Scout_Gold";
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
        model = "Atlashelms";
        Type = "Scout_PL";
        Camo = "Snow";
        };
		class Atlas_P_Scout_Desert:Atlas_P_Scout_Urban
        {
        model = "Atlashelms";
        Type = "Scout_PL";
        Camo = "Desert";
        };
		class Atlas_P_Scout_Woodland:Atlas_P_Scout_Urban
        {
        model = "Atlashelms";
        Type = "Scout_PL";
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
		model = "AtlasTeamArmors";
		Camo = "Snow";
		Type = "Command";
		};
		class 53rd_Atlas_PL_uniform_DS
		{
		model = "AtlasTeamArmors";
		Camo = "Desert";
		Type = "Command";
		};
		class 53rd_Atlas_PL_uniform_WD
		{
		model = "AtlasTeamArmors";
		Camo = "Woodland";
		Type = "Command";
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
		model = "AtlasTeamArmors";
		Camo = "Snow";
		Type = "Gold";
		};
		class 53rd_Atlas_Gold_uniform_DS
		{
		model = "AtlasTeamArmors";
		Camo = "Desert";
		Type = "Gold";
		};
		class 53rd_Atlas_Gold_uniform_WD
		{
		model = "AtlasTeamArmors";
		Camo = "Woodland";
		Type = "Gold";
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
		model = "AtlasTeamArmors";
		Camo = "Snow";
		Type = "Purple";
		};
		class 53rd_Atlas_Purple_uniform_DS
		{
		model = "AtlasTeamArmors";
		Camo = "Desert";
		Type = "Purple";
		};
		class 53rd_Atlas_Purple_uniform_WD
		{
		model = "AtlasTeamArmors";
		Camo = "Woodland";
		Type = "Purple";
		};
	};
};




