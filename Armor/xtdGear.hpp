class XtdGearModels
{
	class CfgWeapons
	{

//////////////////////////////////////////////////////////////////////////////
////////////////////////// Atlas /////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class AtlasArmor
		{
			label = "53rd Atlas Armor";
			author = "Body";
			options[] = {"Section","Camo","MOS"};
			class Section
			{
				label = "Section";
				values[] = {"Atlas"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;

				class Atlas
				{
					label = "Atlas";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
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
			class MOS
			{
				label = "MOS";
				values[] = {"Rifleman","Platoon"};
				class Rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Platoon
				{
					label = "Platoon";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};

			};
		};

		class AtlasCustomHelms
		{
			label = "Atlas Custom Helmets";
			author = "53rd Aux Team";
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
				values[] = {"Hellfire","LoneWulf","Serpent","Tsuki","Texas", "Axe","Scarecrow","Toxic"};
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
				class Axe
				{
					label = "Axe";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};				
				class Scarecrow
				{
					label = "Scarecrow";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};	
				class Toxic
				{
					label = "Toxic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};					
			};
		};

		class AtlasHelmets
		{
			label = "53rd Atlas Helmets";
			author = "Body";
			options[] = {"Helmet","Camo","MOS","Visor"};
			class Helmet
			{
				label = "Helmet";
				values[] = {"Marine","Scout"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;

				class Marine
				{
					label = "Marine";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Scout
				{
					label = "Scout";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
			};
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Winter"};
				alwaysSelectable = 1;
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
			
			class MOS
			{
				label = "MOS";
				values[] = {"Rifleman","Medic","Platoon","PlatoonM"};
				class Rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			class Platoon
				{
					label = "Platoon";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			class PlatoonM
				{
					label = "Platoon Medic";
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

		class AtlasCustomArmors
		{
			label = "Atlas Custom Armors"
			author = "53rd Aux Team";
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
				values[] = {"Hellfire","LoneWulf","Serpent","Tsuki","Texas","Axe"};
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
				class Axe
				{
					label = "Axe";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};				
			};
		};   

        class AtlasTeamArmors
		{
			label = "Atlas Team Armors"
			author = "53rd Aux Team";
			options[] = {"Camo","MOS"};
			
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
			class MOS
			{
				label = "MOS";
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

 
//////////////////////////////////////////////////////////////////////////////
////////////////////////// Apollo ////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class ApolloArmor
		{
			label = "53rd Apollo Armor";
			author = "Body";
			options[] = {"Section","Camo","Variant"};
			class Section
			{
				label = "Section";
				values[] = {"Crewman","Engineer"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;

				class Crewman
				{
					label = "Crewman";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Engineer
				{
					label = "Engineer";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};				
			};
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland"};
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
			};
			class Variant
			{
				label = "Variant";
				values[] = {"Base","Full","Top","Bottom"};
				class Base
				{
					label = "Base";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Full
				{
					label = "Full";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Top
				{
					label = "Top";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Bottom
				{
					label = "Bottom";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};

		class ApolloCustomArmor
		{
			label = "53rd Apollo Custom Armor";
			author = "Body";
			options[] = {"Person","Camo","Variant"};
			class Person
			{
				label = "Person";
				values[] = {"Ryuu","Saiko"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;

				class Ryuu
				{
					label = "Ryuu";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Saiko
				{
					label = "Saiko";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};				
			};
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland"};
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
			};
			class Variant
			{
				label = "Variant";
				values[] = {"Base","Full","Top","Bottom"};
				class Base
				{
					label = "Base";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Full
				{
					label = "Full";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Top
				{
					label = "Top";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Bottom
				{
					label = "Bottom";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};

		class ApolloHelmets
		{
			label = "53rd Apollo Helmets";
			author = "Body";
			options[] = {"Helmet","Camo","Visor"};
			class Helmet
			{
				label = "Helmet";
				values[] = {"Marine","Crewman","Engineer"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;

				class Marine
				{
					label = "Marine";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Crewman
				{
					label = "Crewman";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Engineer
				{
					label = "Engineer";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
			};
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland"};
				alwaysSelectable = 1;
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

		class ApolloCustomHelmet
		{
			label = "Apollo Custom Helmet"
			author = "53rd Aux Team";
			options[] = {"Person","Helm_Camo","Type"};

			class Person
			{
				label = "Person";
				values[] = {"Crunchy","Ryuu","Helix","Saiko","Kantus"};
				alwaysSelectable = 1;
				changeingame = 1;
				changedelay  = 0;
				class Crunchy
				{
					label = "Crunchy";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Ryuu
				{
					label = "Ryuu";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Helix
				{
					label = "Helix";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};			
				class Saiko
				{
					label = "Saiko";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};	
				class Kantus
				{
					label = "Kantus";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};	
			};
			class Helm_Camo
			{
				label = "Helm Camo";
				values[] = {"Urban","Woodland"};
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
			};
			class Type
			{
				label = "Type";
				values[] = {"Visor","NoVISOR"};
				class Visor
				{
					label = "Visor";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class NoVISOR
				{
					label = "NoVISOR";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};			
		};


//////////////////////////////////////////////////////////////////////////////
////////////////////////// Ares //////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class AresHelmets
		{
			label = "53rd Ares Helmets";
			author = "Body";
			options[] = {"Camo","MOS","Visor"};
			class MOS
			{
				label = "MOS";
				values[] = {"RA","Rifleman","Medic","SL","TL","Platoon"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class RA
				{
					label = "Ride Along";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
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
				class SL
				{
					label = "SL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class TL
				{
					label = "TL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};


		class AresArmor
		{
			label = "Ares Vests";
			author = "Body";
			options[] = {"Shoulders","MOS"};
			class Shoulders
			{
				label = "Shoulders";
				values[] = {"Normal","CQB","Sniper"};
				changeingame = 1;
                changedelay  = 0;
				class Normal
				{
					label = "Normal";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class CQB
				{
					label = "CQB";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Sniper
				{
					label = "Sniper";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class MOS
			{
				label = "MOS";
				values[] = {"Rifleman","RA","Medic","PL","TL","SL"};
				class Regular
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class RA
				{
					label = "RA";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class PL
				{
					label = "Platoon";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class TL
				{
					label = "TL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class SL
				{
					label = "SL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};


//////////////////////////////////////////////////////////////////////////////
////////////////////////// Hephaestus ////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class HephaestusArmor
		{
			label = "53rd Hephaestus Armor";
			author = "Body";
			options[] = {"Section","Camo","MOS"};
			class Section
			{
				label = "Section";
				values[] = {"H1_1","H1_2","H1_3","Reservist"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class H1_1
				{
					label = "1-1";
					image = "#(rgb,210,180,140)color(0.4,0.4,0.4,1)";
				};
				class H1_2
				{
					label = "1-2";
					image = "#(rgb,113,121,126)color(0.8,0.8,0.8,1)";
				};
				class H1_3
				{
					label = "1-3";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Reservist
				{
					label = "Reservist";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
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

			class MOS
			{
				label = "MOS";
				values[] = {"Rifleman","Medic","Autorifleman","Anti_Tank","JTAC","Grenadier","Lead"};
				class Rifleman
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
					label = "Anti-Tank";
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
				class Lead
				{
					label = "Lead";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};

		class HephaestusCamoHelmets
		{
			label = "53rd Headwear";
			author = "Body";
			options[] = {"Section","Camo","MOS","Visor"};
			class Section
			{
				label = "Section";
				values[] = {"Reservist","S1_1","S1_2","S1_3"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Reservist
				{
					label = "Reservist";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class S1_1
				{
					label = "1-1";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class S1_2
				{
					label = "1-2";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
				class S1_3
				{
					label = "1-3";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
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
			class MOS
			{
				label = "MOS";
				values[] = {"RA","Rifleman","Sealed","Medic","Platoon","Mike","SL","TL"};
				class RA
				{
					label = "RA";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
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
				class SL
				{
					label = "SL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class TL
				{
					label = "TL";
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

//////////////////////////////////////////////////////////////////////////////
////////////////////////// Extra /////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


        class SoftCover
		{
			label = "Soft Covers"
			author = "53 Aux Team";
			options[] = {"Beret","Boonie","Beanie","Patrol"};
			
			class Beret
			{
				label = "Beret";
				values[] = {"Apollo","Ares","Atlas","Hephaestus","Volare","Medical1","Medical2"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Apollo
				{
					label = "Apollo";
				};
				class Ares
				{
					label = "Ares";
				};
				class Atlas
				{
					label = "Atlas";
				};
				class Hephaestus
				{
					label = "Hephaestus";
				};
				class Volare
				{
					label = "Volare";
				};
				class Medical1
				{
					label = "Medical #1";
				};				
				class Medical2
				{
					label = "Medical #2";
				};
			};
			class Boonie
			{
				label = "Boonie";
				values[] = {"Urban","Woodland","Desert","Winter"};
				alwaysSelectable = 1;
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

			class Beanie
			{
				label = "Beanie";
				values[] = {"Urban","Woodland","Desert","Winter"};
				alwaysSelectable = 1;
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

			class Patrol
			{
				label = "Patrol";
				values[] = {"Cap",};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Cap
				{
					label = "Cap";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
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
		MOS = "Sealed";
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
		MOS = "Rifleman";
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
		MOS = "Rifleman";
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
		MOS = "Rifleman";
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
		MOS = "Rifleman";
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
		MOS = "Rifleman";
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
		MOS = "Rifleman";
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
		MOS = "Rifleman";
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
		MOS = "Rifleman";
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
		MOS = "Medic";
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
		MOS = "Medic";
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
		MOS = "Medic";
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
		MOS = "Medic";
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
		MOS = "Medic";
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
		MOS = "Medic";
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
		MOS = "Medic";
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
		MOS = "Medic";
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

//////////////////////////////////////////////////////////////////////////////
//////////////////////////Atlas Helmets///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		//No Visor
		class 53rd_A_Rifleman_Helmet_Urban_No_Visor
		{
		model = "AtlasHelmets";
		Helmet = "Marine";
		Camo = "Urban";
		MOS = "Rifleman";
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
		model = "AtlasHelmets";
		Helmet = "Marine";
		Camo = "Urban";
		MOS = "Rifleman";
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
		

//////////////////////
		//No Visor
		class 53rd_A_Medic_Helmet_Urban_No_Visor
		{
		model = "AtlasHelmets";
		Helmet = "Marine";
		Camo = "Urban";
		MOS = "Medic";
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
		
		//Atlas Reservist
		//Visor
		class 53rd_A_Medic_Helmet_Urban_Visor
		{
		model = "AtlasHelmets";
		Helmet = "Marine";
		Camo = "Urban";
		MOS = "Medic";
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
		model = "AtlasHelmets";
		Helmet = "Marine";
		Camo = "Urban";
		MOS = "Platoon";
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
		model = "AtlasHelmets";
		Helmet = "Marine";
		Camo = "Urban";
		MOS = "Platoon";
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

		//Atlas Platoon
		// NO Visor
		class 53rd_A_P_M_Rifleman_Helmet_Urban_No_Visor
		{
		model = "AtlasHelmets";
		Helmet = "Marine";
		Camo = "Urban";
		MOS = "PlatoonM";
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
		
		//Atlas Platoon
		//Visor
		class 53rd_A_P_M_Rifleman_Helmet_Urban_Visor
		{
		model = "AtlasHelmets";
		Helmet = "Marine";
		Camo = "Urban";
		MOS = "PlatoonM";
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

        //Atlas Team Helmets
        //Gold Helmet
		class Atlas_Scout_Urban
		{
		model = "AtlasHelmets";
		Helmet = "Scout";
		Camo = "Urban";
		MOS = "Rifleman";
		};
        class Atlas_Scout_Winter:Atlas_Scout_Urban
        {
        Camo = "Winter";
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
		model = "AtlasHelmets";
		Helmet = "Scout";
		Camo = "Urban";
		MOS = "Platoon";
		};
        class Atlas_P_Scout_Winter:Atlas_P_Scout_Urban
        {
        Camo = "Winter";
        };
		class Atlas_P_Scout_Desert:Atlas_P_Scout_Urban
        {
        Camo = "Desert";
        };
		class Atlas_P_Scout_Woodland:Atlas_P_Scout_Urban
        {
        Camo = "Woodland";
        };
 


 


//////////////////////////////////////////////////////////////////////////////
//////////////////////////Hephaestus Armor///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//////////////////////////Mino Armors/////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
		//Urban
		class 53rd_MinoRifle_Urban
		{
		model = "HephaestusArmor";
		Section = "H1_1";
		Camo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_MinoMed_Urban:53rd_MinoRifle_Urban
		{
		MOS = "Medic";
		};
		class 53rd_MinoJTAC_Urban:53rd_MinoRifle_Urban
		{
		MOS = "JTAC";
		};
		class 53rd_MinoGren_Urban:53rd_MinoRifle_Urban
		{
		MOS = "Grenadier";
		};
		class 53rd_MinoAutoRifle_Urban:53rd_MinoRifle_Urban
		{
		MOS = "Autorifleman";
		};
		class 53rd_MinoAT_Urban:53rd_MinoRifle_Urban
		{
		MOS = "Anti_Tank";
		};
		class 53rd_MinoSL_Urban:53rd_MinoRifle_Urban
		{
		MOS = "Lead";
		};
	
		//Desert
		class 53rd_MinoRifle_Desert
		{
		model = "HephaestusArmor";
		Section = "H1_1";
		Camo = "Desert";
		MOS = "Rifleman";
		};
		class 53rd_MinoMed_Desert:53rd_MinoRifle_Desert
		{
		MOS = "Medic";
		};
		class 53rd_MinoJTAC_Desert:53rd_MinoRifle_Desert
		{
		MOS = "JTAC";
		};
		class 53rd_MinoGren_Desert:53rd_MinoRifle_Desert
		{
		MOS = "Grenadier";
		};
		class 53rd_MinoAutoRifle_Desert:53rd_MinoRifle_Desert
		{
		MOS = "Autorifleman";
		};
		class 53rd_MinoAT_Desert:53rd_MinoRifle_Desert
		{
		MOS = "Anti_Tank";
		};
		class 53rd_MinoSL_Desert:53rd_MinoRifle_Desert
		{
		MOS = "Lead";
		};
		
		//Winter
		class 53rd_MinoRifle_Winter
		{
		model = "HephaestusArmor";
		Section = "H1_1";
		Camo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_MinoMed_Winter:53rd_MinoRifle_Winter
		{
		MOS = "Medic";
		};
		class 53rd_MinoJTAC_Winter:53rd_MinoRifle_Winter
		{
		MOS = "JTAC";
		};
		class 53rd_MinoGren_Winter:53rd_MinoRifle_Winter
		{
		MOS = "Grenadier";
		};
		class 53rd_MinoAutoRifle_Winter:53rd_MinoRifle_Winter
		{
		MOS = "Autorifleman";
		};
		class 53rd_MinoAT_Winter:53rd_MinoRifle_Winter
		{
		MOS = "Anti_Tank";
		};
		class 53rd_MinoSL_Winter:53rd_MinoRifle_Winter
		{
		MOS = "Lead";
		};		
	
		//Woodland
		class 53rd_MinoRifle_Woodland
		{
		model = "HephaestusArmor";
		Section = "H1_1";
		Camo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_MinoMed_Woodland:53rd_MinoRifle_Woodland
		{
		MOS = "Medic";
		};
		class 53rd_MinoJTAC_Woodland:53rd_MinoRifle_Woodland
		{
		MOS = "JTAC";
		};
		class 53rd_MinoGren_Woodland:53rd_MinoRifle_Woodland
		{
		MOS = "Grenadier";
		};
		class 53rd_MinoAutoRifle_Woodland:53rd_MinoRifle_Woodland
		{
		MOS = "Autorifleman";
		};
		class 53rd_MinoAT_Woodland:53rd_MinoRifle_Woodland
		{
		MOS = "Anti_Tank";
		};
		class 53rd_MinoSL_Woodland:53rd_MinoRifle_Woodland
		{
		MOS = "Lead";
		};		

//////////////////////////////////////////////////////////////////////////////
/////////////////////////////Kerb Armors//////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
		//Urban
		class 53rd_KerbRifle_Urban
		{
		model = "HephaestusArmor";
		Section = "H1_2";
		Camo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_KerbMed_Urban:53rd_KerbRifle_Urban
		{
		MOS = "Medic";
		};
		class 53rd_KerbJTAC_Urban:53rd_KerbRifle_Urban
		{
		MOS = "JTAC";
		};
		class 53rd_KerbGren_Urban:53rd_KerbRifle_Urban
		{
		MOS = "Grenadier";
		};
		class 53rd_KerbAutoRifle_Urban:53rd_KerbRifle_Urban
		{
		MOS = "Autorifleman";
		};
		class 53rd_KerbAT_Urban:53rd_KerbRifle_Urban
		{
		MOS = "Anti_Tank";
		};	
		class 53rd_KerbSL_Urban:53rd_KerbRifle_Urban
		{
		MOS = "Lead";
		};		
	
		//Desert
		class 53rd_KerbRifle_Desert
		{
		model = "HephaestusArmor";
		Section = "H1_2";
		Camo = "Desert";
		MOS = "Rifleman";
		};
		class 53rd_KerbMed_Desert:53rd_KerbRifle_Desert
		{
		MOS = "Medic";
		};
		class 53rd_KerbJTAC_Desert:53rd_KerbRifle_Desert
		{
		MOS = "JTAC";
		};
		class 53rd_KerbGren_Desert:53rd_KerbRifle_Desert
		{
		MOS = "Grenadier";
		};
		class 53rd_KerbAutoRifle_Desert:53rd_KerbRifle_Desert
		{
		MOS = "Autorifleman";
		};
		class 53rd_KerbAT_Desert:53rd_KerbRifle_Desert
		{
		MOS = "Anti_Tank";
		};
		class 53rd_KerbSL_Desert:53rd_KerbRifle_Desert
		{
		MOS = "Lead";
		};		
	
	
		//Winter
		class 53rd_KerbRifle_Winter
		{
		model = "HephaestusArmor";
		Section = "H1_2";
		Camo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_KerbMed_Winter:53rd_KerbRifle_Winter
		{
		MOS = "Medic";
		};
		class 53rd_KerbJTAC_Winter:53rd_KerbRifle_Winter
		{
		MOS = "JTAC";
		};
		class 53rd_KerbGren_Winter:53rd_KerbRifle_Winter
		{
		MOS = "Grenadier";
		};
		class 53rd_KerbAutoRifle_Winter:53rd_KerbRifle_Winter
		{
		MOS = "Autorifleman";
		};
		class 53rd_KerbAT_Winter:53rd_KerbRifle_Winter
		{
		MOS = "Anti_Tank";
		};	
		class 53rd_KerbSL_Winter:53rd_KerbRifle_Winter
		{
		MOS = "Lead";
		};	

	
		//Woodland
		class 53rd_KerbRifle_Woodland
		{
		model = "HephaestusArmor";
		Section = "H1_2";
		Camo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_KerbMed_Woodland:53rd_KerbRifle_Woodland
		{
		MOS = "Medic";
		};
		class 53rd_KerbJTAC_Woodland:53rd_KerbRifle_Woodland
		{
		MOS = "JTAC";
		};
		class 53rd_KerbGren_Woodland:53rd_KerbRifle_Woodland
		{
		MOS = "Grenadier";
		};
		class 53rd_KerbAutoRifle_Woodland:53rd_KerbRifle_Woodland
		{
		MOS = "Autorifleman";
		};
		class 53rd_KerbAT_Woodland:53rd_KerbRifle_Woodland
		{
		MOS = "Anti_Tank";
		};		
		class 53rd_KerbSL_Woodland:53rd_KerbRifle_Woodland
		{
		MOS = "Lead";
		};	

//////////////////////////////////////////////////////////////////////////////	
////////////////////////////Hydra Armors/////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
		//Urban
		class 53rd_HydraRifle_Urban
		{
		model = "HephaestusArmor";
		Section = "H1_3";
		Camo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_HydraMed_Urban:53rd_HydraRifle_Urban
		{
		MOS = "Medic";
		};
		class 53rd_HydraJTAC_Urban:53rd_HydraRifle_Urban
		{
		MOS = "JTAC";
		};
		class 53rd_HydraGren_Urban:53rd_HydraRifle_Urban
		{
		MOS = "Grenadier";
		};
		class 53rd_HydraAutoRifle_Urban:53rd_HydraRifle_Urban
		{
		MOS = "Autorifleman";
		};
		class 53rd_HydraAT_Urban:53rd_HydraRifle_Urban
		{
		MOS = "Anti_Tank";
		};	
		class 53rd_HydraSL_Urban:53rd_HydraRifle_Urban
		{
		MOS = "Lead";
		};		
	
		//Desert
		class 53rd_HydraRifle_Desert
		{
		model = "HephaestusArmor";
		Section = "H1_3";
		Camo = "Desert";
		MOS = "Rifleman";
		};
		class 53rd_HydraMed_Desert:53rd_HydraRifle_Desert
		{
		MOS = "Medic";
		};
		class 53rd_HydraJTAC_Desert:53rd_HydraRifle_Desert
		{
		MOS = "JTAC";
		};
		class 53rd_HydraGren_Desert:53rd_HydraRifle_Desert
		{
		MOS = "Grenadier";
		};
		class 53rd_HydraAutoRifle_Desert:53rd_HydraRifle_Desert
		{
		MOS = "Autorifleman";
		};
		class 53rd_HydraAT_Desert:53rd_HydraRifle_Desert
		{
		MOS = "Anti_Tank";
		};
		class 53rd_HydraSL_Desert:53rd_HydraRifle_Desert
		{
		MOS = "Lead";
		};		
	
		//Winter
		class 53rd_HydraRifle_Winter
		{
		model = "HephaestusArmor";
		Section = "H1_3";
		Camo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_HydraMed_Winter:53rd_HydraRifle_Winter
		{
		MOS = "Medic";
		};
		class 53rd_HydraJTAC_Winter:53rd_HydraRifle_Winter
		{
		MOS = "JTAC";
		};
		class 53rd_HydraGren_Winter:53rd_HydraRifle_Winter
		{
		MOS = "Grenadier";
		};
		class 53rd_HydraAutoRifle_Winter:53rd_HydraRifle_Winter
		{
		MOS = "Autorifleman";
		};
		class 53rd_HydraAT_Winter:53rd_HydraRifle_Winter
		{
		MOS = "Anti_Tank";
		};	
		class 53rd_HydraSL_Winter:53rd_HydraRifle_Winter
		{
		MOS = "Lead";
		};	

	
		//Woodland
		class 53rd_HydraRifle_Woodland
		{
		model = "HephaestusArmor";
		Section = "H1_3";
		Camo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_HydraMed_Woodland:53rd_HydraRifle_Woodland
		{
		MOS = "Medic";
		};
		class 53rd_HydraJTAC_Woodland:53rd_HydraRifle_Woodland
		{
		MOS = "JTAC";
		};
		class 53rd_HydraGren_Woodland:53rd_HydraRifle_Woodland
		{
		MOS = "Grenadier";
		};
		class 53rd_HydraAutoRifle_Woodland:53rd_HydraRifle_Woodland
		{
		MOS = "Autorifleman";
		};
		class 53rd_HydraAT_Woodland:53rd_HydraRifle_Woodland
		{
		MOS = "Anti_Tank";
		};		
		class 53rd_HydraSL_Woodland:53rd_HydraRifle_Woodland
		{
		MOS = "Lead";
		};	

//////////////////////////////////////////////////////////////////////////////	
////////////////////////////Reservist Armor/////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		//Urban
		class 53rd_Rifleman_UB
		{
		model = "HephaestusArmor";
		Section = "Reservist";
		Camo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_Uniform_Medic_UB:53rd_Rifleman_UB
		{
		MOS = "Medic";
		};
		
		//Desert
		class 53rd_Rifleman_DS
		{
		model = "HephaestusArmor";
		Section = "Reservist";
		Camo = "Desert";
		MOS = "Rifleman";
		};
		class 53rd_Uniform_Medic_DS:53rd_Rifleman_DS
		{
		MOS = "Medic";
		};
		
		//Woodland
		class 53rd_Rifleman_WD
		{
		model = "HephaestusArmor";
		Section = "Reservist";
		Camo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_Uniform_Medic_WD:53rd_Rifleman_WD
		{
		MOS = "Medic";
		};
		
		//Winter
		class 53rd_Rifleman_SN
		{
		model = "HephaestusArmor";
		Section = "Reservist";
		Camo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_Uniform_Medic_SN:53rd_Rifleman_SN
		{
		MOS = "Medic";
		};


//////////////////////////////////////////////////////////////////////////////
//////////////////////////Atlas Armors////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
		
		//Atlas Armor
		class 53rd_A_Rifleman_UB
		{
		model = "AtlasArmor";
		Section = "Atlas";
		Camo = "Urban";
		MOS = "Rifleman";
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
		model = "AtlasArmor";
		Section = "Atlas";
		Camo = "Urban";
		MOS = "Platoon";
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




//////////////////////////////////////////////////////////////////////////////
//////////////////////////Apollo Helmets////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////	

		//No Visor
		class 53rd_Apollo_Helmet_Urban_No_Visor
		{
		model = "ApolloHelmets";
		Helmet = "Marine";
		Camo = "Urban";
		Visor = "No";
		};
		class 53rd_Apollo_Helmet_Woodland_No_Visor:53rd_Apollo_Helmet_Urban_No_Visor
		{
		Camo = "Woodland";
		};

		
		//Visor
		class 53rd_Apollo_Helmet_Urban_Visor
		{
		model = "ApolloHelmets";
		Helmet = "Marine";
		Camo = "Urban";
		Visor = "Yes";
		};
		class 53rd_Apollo_Helmet_Woodland_Visor:53rd_Apollo_Helmet_Urban_Visor
		{
		Camo = "Woodland";
		};

		////CREW////
		class 53rd_Apollo_Crew_Helmet_Urban
		{
		model = "ApolloHelmets";
		Helmet = "Crewman";
		Camo = "Urban";

		};
		class 53rd_Apollo_Crew_Helmet_Woodland:53rd_Apollo_Crew_Helmet_Urban
		{
		Camo = "Woodland";
		};

		////EOD////
		class 53rd_Apollo_Engineer_Helmet_Urban
		{
		model = "ApolloHelmets";
		Helmet = "Engineer";
		Camo = "Urban";

		};
		class 53rd_Apollo_Engineer_Helmet_Woodland:53rd_Apollo_Engineer_Helmet_Urban
		{
		Camo = "Woodland";
		};

	//Crunchy
		class 53rd_Crunchy_Engineer_Helmet_Urban
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Crunchy";
		Type = "Visor";
		};
		class 53rd_Crunchy_Engineer_Helmet_Woodland:53rd_Crunchy_Engineer_Helmet_Urban
		{
		Helm_Camo = "Woodland";
		};

	//Kantus
		class 53rd_Kantus_Engineer_Helmet_Urban
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Kantus";
		Type = "Visor";
		};
		class 53rd_Kantus_Engineer_Helmet_Woodland:53rd_Kantus_Engineer_Helmet_Urban
		{
		Helm_Camo = "Woodland";
		};


		//Helix
		class 53rd_Helix_Helmet_Urban_No_Visor
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Helix";
		Type = "NoVISOR";
		};
		class 53rd_Helix_Helmet_Woodland_No_Visor:53rd_Helix_Helmet_Urban_No_Visor
		{
		Helm_Camo = "Woodland";
		};
		
		class 53rd_Helix_Helmet_Urban_Visor
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Helix";
		Type = "Visor";
		};
		class 53rd_Helix_Helmet_Woodland_Visor:53rd_Helix_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};


		//RYUU
		class 53rd_Ryuu_Helmet_Urban_No_Visor
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Ryuu";
		Type = "NoVISOR";
		};
		class 53rd_Ryuu_Helmet_Woodland_No_Visor:53rd_Ryuu_Helmet_Urban_No_Visor
		{
		Helm_Camo = "Woodland";
		};

		class 53rd_Ryuu_Helmet_Urban_Visor
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Ryuu";
		Type = "Visor";
		};
		class 53rd_Ryuu_Helmet_Woodland_Visor:53rd_Ryuu_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};


		//Saiko
		class 53rd_Saiko_Helmet_Urban_No_Visor
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Saiko";
		Type = "NoVISOR";
		};
		class 53rd_Saiko_Helmet_Woodland_No_Visor:53rd_Saiko_Helmet_Urban_No_Visor
		{
		Helm_Camo = "Woodland";
		};

		class 53rd_Saiko_Helmet_Urban_Visor
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Saiko";
		Type = "Visor";
		};
		class 53rd_Saiko_Helmet_Woodland_Visor:53rd_Saiko_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};


//////////////////////////////////////////////////////////////////////////////
//////////////////////////Apollo Armor////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////	

		class 53rd_Apollo_Urban_Crewman
		{
		model = "ApolloArmor";
		Section = "Crewman";
		Camo = "Urban";
		Variant = "Base";
		};

		class 53rd_Apollo_Crewman_Urban_Camo:53rd_Apollo_Urban_Crewman
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Crewman_Urban_Camo_3:53rd_Apollo_Urban_Crewman
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Crewman_Urban_Camo_4:53rd_Apollo_Urban_Crewman
		{
		Variant = "Bottom";
		};

		class 53rd_Apollo_Woodland_Crewman
		{
		model = "ApolloArmor";
		Section = "Crewman";
		Camo = "Woodland";
		Variant = "Base";
		};

		class 53rd_Apollo_Crewman_Woodland_Camo:53rd_Apollo_Woodland_Crewman
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Crewman_Woodland_Camo_3:53rd_Apollo_Woodland_Crewman
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Crewman_Woodland_Camo_4:53rd_Apollo_Woodland_Crewman
		{
		Variant = "Bottom";
		};

		class 53rd_Apollo_Urban_Engineer
		{
		model = "ApolloArmor";
		Section = "Engineer";
		Camo = "Urban";
		Variant = "Base";
		};

		class 53rd_Apollo_Engineer_Urban_Camo:53rd_Apollo_Urban_Engineer
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Engineer_Urban_Camo_3:53rd_Apollo_Urban_Engineer
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Engineer_Urban_Camo_4:53rd_Apollo_Urban_Engineer
		{
		Variant = "Bottom";
		};	

		class 53rd_Apollo_Woodland_Engineer
		{
		model = "ApolloArmor";
		Section = "Engineer";
		Camo = "Woodland";
		Variant = "Base";
		};

		class 53rd_Apollo_Engineer_Woodland_Camo:53rd_Apollo_Woodland_Engineer
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Engineer_Woodland_Camo_3:53rd_Apollo_Woodland_Engineer
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Engineer_Woodland_Camo_4:53rd_Apollo_Woodland_Engineer
		{
		Variant = "Bottom";
		};


//////////////////////////////////////////////////////////////////////////////
//////////////////////////Apollo Custom Armor////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////	


		class 53rd_Apollo_Urban_Ryuu
		{
		model = "ApolloCustomArmor";
		Person = "Ryuu";
		Camo = "Urban";
		Variant = "Base";
		};

		class 53rd_Apollo_Ryuu_Urban_Camo:53rd_Apollo_Urban_Ryuu
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Ryuu_Urban_Camo_3:53rd_Apollo_Urban_Ryuu
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Ryuu_Urban_Camo_4:53rd_Apollo_Urban_Ryuu
		{
		Variant = "Bottom";
		};

		class 53rd_Apollo_Woodland_Ryuu
		{
		model = "ApolloCustomArmor";
		Person = "Ryuu";
		Camo = "Woodland";
		Variant = "Base";
		};

		class 53rd_Apollo_Ryuu_Woodland_Camo:53rd_Apollo_Woodland_Ryuu
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Ryuu_Woodland_Camo_3:53rd_Apollo_Woodland_Ryuu
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Ryuu_Woodland_Camo_4:53rd_Apollo_Woodland_Ryuu
		{
		Variant = "Bottom";
		};



		class 53rd_Apollo_Urban_Saiko
		{
		model = "ApolloCustomArmor";
		Person = "Saiko";
		Camo = "Urban";
		Variant = "Base";
		};

		class 53rd_Apollo_Saiko_Urban_Camo:53rd_Apollo_Urban_Saiko
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Saiko_Urban_Camo_3:53rd_Apollo_Urban_Saiko
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Saiko_Urban_Camo_4:53rd_Apollo_Urban_Saiko
		{
		Variant = "Bottom";
		};

		class 53rd_Apollo_Woodland_Saiko
		{
		model = "ApolloCustomArmor";
		Person = "Saiko";
		Camo = "Woodland";
		Variant = "Base";
		};

		class 53rd_Apollo_Saiko_Woodland_Camo:53rd_Apollo_Woodland_Saiko
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Saiko_Woodland_Camo_3:53rd_Apollo_Woodland_Saiko
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Saiko_Woodland_Camo_4:53rd_Apollo_Woodland_Saiko
		{
		Variant = "Bottom";
		};



//////////////////////////////////////////////////////////////////////////////
//////////////////////////Ares Helmets////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////	

		class 53rd_Ares_RA_H3_Helmet
		{
		model = "AresHelmets";
		Section = "Ares";
		Camo = "Urban";
		MOS = "RA";
		};
		class 53rd_Ares_Rifleman_H3_Helmet:53rd_Ares_RA_H3_Helmet
		{
		MOS = "Rifleman";
		};
		class 53rd_Ares_Medic_H3_Helmet:53rd_Ares_RA_H3_Helmet
		{
		MOS = "Medic";
		};
		class 53rd_Ares_TL_H3_Helmet:53rd_Ares_RA_H3_Helmet
		{
		MOS = "TL";
		};
		class 53rd_Ares_SL_H3_Helmet:53rd_Ares_RA_H3_Helmet
		{
		MOS = "SL";
		};
		
		class 53rd_Ares_PL_H3_Helmet:53rd_Ares_RA_H3_Helmet
		{
		MOS = "Platoon";
		};
		
		
	
//////////////////////////////////////////////////////////////////////////////
//////////////////////////Ares Armor////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
		//NORMAL
		class 53rd_Ares_MA_Vest_Rifleman
		{
		model = "AresArmor";
		Shoulders = "Normal";
		MOS = "Rifleman";
		};
		class 53rd_Ares_MA_Vest_PL:53rd_Ares_MA_Vest_Rifleman
		{
		MOS = "PL";
		};
		class 53rd_Ares_MA_Vest_RA:53rd_Ares_MA_Vest_Rifleman
		{
		MOS = "RA";
		};
		class 53rd_Ares_MA_Vest_SL:53rd_Ares_MA_Vest_Rifleman
		{
		MOS = "SL";
		};
		class 53rd_Ares_MA_Vest_TL:53rd_Ares_MA_Vest_Rifleman
		{
		MOS = "TL";
		};
		class 53rd_Ares_MA_Vest_Medic:53rd_Ares_MA_Vest_Rifleman
		{
		MOS = "Medic";
		};
		//CQB
		class 53rd_Ares_MA_Vest_Rifleman_CQB
		{
		model = "AresArmor";
		Shoulders = "CQB";
		MOS = "Rifleman";
		};
		class 53rd_Ares_MA_Vest_RA_CQB:53rd_Ares_MA_Vest_Rifleman_CQB
		{
		MOS = "RA";
		};
		class 53rd_Ares_MA_Vest_PL_CQB:53rd_Ares_MA_Vest_Rifleman_CQB
		{
		MOS = "PL";
		};
		class 53rd_Ares_MA_Vest_SL_CQB:53rd_Ares_MA_Vest_Rifleman_CQB
		{
		MOS = "SL";
		};
		class 53rd_Ares_MA_Vest_TL_CQB:53rd_Ares_MA_Vest_Rifleman_CQB
		{
		MOS = "TL";
		};
		class 53rd_Ares_MA_Vest_Medic_CQB:53rd_Ares_MA_Vest_Rifleman_CQB
		{
		MOS = "Medic";
		};
		//SNIPER
		class 53rd_Ares_MA_Vest_Rifleman_Sniper
		{
		model = "AresArmor";
		Shoulders = "Sniper";
		MOS = "Rifleman";
		};
		class 53rd_Ares_MA_Vest_RA_Sniper:53rd_Ares_MA_Vest_Rifleman_Sniper
		{
		MOS = "RA";
		};
		class 53rd_Ares_MA_Vest_PL_Sniper:53rd_Ares_MA_Vest_Rifleman_Sniper
		{
		MOS = "PL";
		};
		class 53rd_Ares_MA_Vest_SL_Sniper:53rd_Ares_MA_Vest_Rifleman_Sniper
		{
		MOS = "SL";
		};
		class 53rd_Ares_MA_Vest_TL_SNIPER:53rd_Ares_MA_Vest_Rifleman_Sniper
		{
		MOS = "TL";
		};
		class 53rd_Ares_MA_Vest_Medic_Sniper:53rd_Ares_MA_Vest_Rifleman_Sniper
		{
		MOS = "Medic";
		};
		
//////////////////////////////////////////////////////////////////////////////
//////////////////////////Atlas Custom Helmets////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
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

		//Scarecrow
		class 53rd_Scarecrow_Helmet_Urban
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "Scarecrow";
		};
		class 53rd_Scarecrow_Helmet_Winter:53rd_Scarecrow_Helmet_Urban
		{
		Camo = "Snow";
		};
		class 53rd_Scarecrow_Helmet_Desert:53rd_Scarecrow_Helmet_Urban
		{
		Camo = "Desert";
		}; 
		class 53rd_Scarecrow_Helmet_Woodland:53rd_Scarecrow_Helmet_Urban
		{
		Camo = "Woodland";
		}; 

		//Toxic
		class 53rd_Toxic_Helmet_Urban
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "Toxic";
		};
		class 53rd_Toxic_Helmet_Winter:53rd_Toxic_Helmet_Urban
		{
		Camo = "Snow";
		};
		class 53rd_Toxic_Helmet_Desert:53rd_Toxic_Helmet_Urban
		{
		Camo = "Desert";
		}; 
		class 53rd_Toxic_Helmet_Woodland:53rd_Toxic_Helmet_Urban
		{
		Camo = "Woodland";
		}; 
		
		//Axe
		class 53rd_Axe_Helmet_Urban
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "Axe";
		};
		class 53rd_Axe_Helmet_Winter:53rd_Axe_Helmet_Urban
		{
		Camo = "Snow";
		};
		class 53rd_Axe_Helmet_Desert:53rd_Axe_Helmet_Urban
		{
		Camo = "Desert";
		}; 
		class 53rd_Axe_Helmet_Woodland:53rd_Axe_Helmet_Urban
		{
		Camo = "Woodland";
		}; 		

//////////////////////////////////////////////////////////////////////////////
//////////////////////////Atlas Custom Armor////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
		
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
 
		//Axe
		class 53rd_Atlas_Axe_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Urban";
		Person = "Axe";
		};
		class 53rd_Atlas_Axe_Armor_SN:53rd_Atlas_Axe_Armor
		{
		Camo = "Snow";
		};
		class 53rd_Atlas_Axe_Armor_DS:53rd_Atlas_Axe_Armor
		{
		Camo = "Desert";
		};
		class 53rd_Atlas_Axe_Armor_WD:53rd_Atlas_Axe_Armor
		{
		Camo = "Woodland";
		};

 

//////////////////////////////////////////////////////////////////////////////
//////////////////////////Atlas Helmets////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

        class 53rd_Atlas_CH252
		{
		model = "Atlashelms";
		MOS = "NormalV";
        Camo = "Urban";
		};
		class 53rd_Ranger_CH252_MD: 53rd_Atlas_CH252
		{
		MOS = "MedicV";
		};
		class 53rd_Atlas_CH252_NV
		{
		model = "Atlashelms";
		MOS = "Normal";
        Camo = "Urban";
		};
		class 53rd_HaloInf_Marine_WDL_UNSC_NV_headgear:53rd_Atlas_CH252_NV
		{
		MOS = "Medic";
		}; 
        

        //Atlas Team Armor
        //Command
		class 53rd_Atlas_PL_uniform
		{
		model = "AtlasTeamArmors";
		Camo = "Urban";
		MOS = "Command";
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
		MOS = "Gold";
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
		MOS = "Purple";
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

//////////////////////////////////////////////////////////////////////////////
//////////////////////////Soft Covers////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		 //Beret
		class 53_Apollo_Beret
		{
		model = "SoftCover";
		Beret = "Apollo";
		};
		class 53_Ares_Beret
		{
		model = "SoftCover";
		Beret = "Ares";
		};
		class 53_Atlas_Beret
		{
		model = "SoftCover";
		Beret = "Atlas";
		};
		class 53_Heph_Beret
		{
		model = "SoftCover";
		Beret = "Hephaestus";
		};
		class 53_Volare_Beret
		{
		model = "SoftCover";
		Beret = "Volare";
		};
		class 53rd_Med_Beret_Red
		{
		model = "SoftCover";
		Beret = "Medical1";
		};
		class 53rd_Med_Beret_Gold
		{
		model = "SoftCover";
		Beret = "Medical2";
		};
		//Boonie
		class 53rd_Boonie_Urban
		{
		model = "SoftCover";
		Boonie = "Urban";
		};
		class 53rd_Boonie_Desert
		{
		model = "SoftCover";
		Boonie = "Desert";
		};
		class 53rd_Boonie_Woodland
		{
		model = "SoftCover";
		Boonie = "Woodland";
		};
		class 53rd_Boonie_Winter
		{
		model = "SoftCover";
		Boonie = "Winter";
		};		
		
		
			//Beanie
		class 53rd_Beanie_Urban
		{
		model = "SoftCover";
		Beanie = "Urban";
		};
		class 53rd_Beanie_Desert
		{
		model = "SoftCover";
		Beanie = "Desert";
		};
		class 53rd_Beanie_Woodland
		{
		model = "SoftCover";
		Beanie = "Woodland";
		};
		class 53rd_Beanie_Winter
		{
		model = "SoftCover";
		Beanie = "Winter";
		};		
				
		class 53rd_PCap_Black
		{
		model = "SoftCover";
		Patrol = "Cap";
		};				
		
		
	};
};



