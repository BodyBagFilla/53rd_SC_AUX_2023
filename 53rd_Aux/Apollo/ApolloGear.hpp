class XtdGearModels
{
	class CfgWeapons
	{


 
//////////////////////////////////////////////////////////////////////////////
////////////////////////// Apollo ////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class ApolloArmorPLACEHOLDER
		{
			label = "53rd Apollo Armor";
			author = "Sisyphus";
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
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Engineer
				{
					label = "Engineer";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
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
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.13,0.25,0.13,1)";
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


		class ApolloHelmetsPLACEHOLDER
		{
			label = "53rd Apollo Helmets";
			author = "Sisyphus";
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
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Crewman
				{
					label = "Crewman";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Engineer
				{
					label = "Engineer";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
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
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.13,0.25,0.13,1)";
				};
			};

			class Visor
			{
				label = "Visor";
				values[] = {"No","Yes"};
				alwaysSelectable = 0;
				changeingame = 1;
                changedelay  = 0;
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



		class ApolloCustomArmorPLACEHOLDER
		{
			label = "53rd Apollo Custom Armor";
			author = "Sisyphus";
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
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Saiko
				{
					label = "Saiko";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
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
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.13,0.25,0.13,1)";
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

		class ApolloCustomHelmetPLACEHOLDER
		{
			label = "Apollo Custom Helmet";
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
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.13,0.25,0.13,1)";
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


	};		
};



class XtdGearInfos
{
    class CfgWeapons 
    {


//////////////////////////////////////////////////////////////////////////////
//////////////////////////Apollo Helmets////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////	

		//No Visor
		class 53rd_Apollo_Helmet_Urban_No_Visor
		{
		model = "ApolloHelmetsPLACEHOLDER";
		Helmet = "Marine";
		Camo = "Urban";
		Visor = "No";
		};
		class 53rd_Apollo_Helmet_Woodland_No_Visor:53rd_Apollo_Helmet_Urban_No_Visor
		{
		Helmet = "Marine";
		Camo = "Woodland";
		Visor = "No";
		};

		
		//Visor
		class 53rd_Apollo_Helmet_Urban_Visor
		{
		model = "ApolloHelmetsPLACEHOLDER";
		Helmet = "Marine";
		Camo = "Urban";
		Visor = "Yes";
		};
		class 53rd_Apollo_Helmet_Woodland_Visor:53rd_Apollo_Helmet_Urban_Visor
		{
		Helmet = "Marine";
		Camo = "Woodland";
		Visor = "Yes";
		};

		////CREW////
		class 53rd_Apollo_Crew_Helmet_Urban
		{
		model = "ApolloHelmetsPLACEHOLDER";
		Helmet = "Crewman";
		Camo = "Urban";

		};
		class 53rd_Apollo_Crew_Helmet_Woodland:53rd_Apollo_Crew_Helmet_Urban
		{
		Camo = "Woodland";
		};

		////EOD////
		class 53rd_Apollo_EODHelmet_Urban
		{
		model = "ApolloHelmetsPLACEHOLDER";
		Helmet = "Engineer";
		Camo = "Urban";

		};
		class 53rd_Apollo_EODHelmet_Woodland:53rd_Apollo_EODHelmet_Urban
		{
		Helmet = "Engineer";
		Camo = "Woodland";
		};


//////////////////////////////////////////////////////////////////////////////
//////////////////////////Apollo Armor////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////	



		class 53rd_Apollo_Crewman_Urban_Camo_1
		{
		model = "ApolloArmorPLACEHOLDER";
		Section = "Crewman";
		Camo = "Urban";
		Variant = "Base";
		};

		class 53rd_Apollo_Crewman_Urban_Camo_2:53rd_Apollo_Crewman_Urban_Camo_1
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Crewman_Urban_Camo_3:53rd_Apollo_Crewman_Urban_Camo_1
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Crewman_Urban_Camo_4:53rd_Apollo_Crewman_Urban_Camo_1
		{
		Variant = "Bottom";
		};



		class 53rd_Apollo_Crewman_Woodland_Camo_1:53rd_Apollo_Crewman_Urban_Camo_1
		{
		model = "ApolloArmorPLACEHOLDER";
		Section = "Crewman";
		Camo = "Woodland";
		Variant = "Base";
		};

		class 53rd_Apollo_Crewman_Woodland_Camo_2:53rd_Apollo_Crewman_Woodland_Camo_1
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Crewman_Woodland_Camo_3:53rd_Apollo_Crewman_Woodland_Camo_1
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Crewman_Woodland_Camo_4:53rd_Apollo_Crewman_Woodland_Camo_1
		{
		Variant = "Bottom";
		};



		class 53rd_Apollo_Engineer_Urban_Camo_1:53rd_Apollo_Crewman_Urban_Camo_1
		{
		model = "ApolloArmorPLACEHOLDER";
		Section = "Engineer";
		Camo = "Urban";
		Variant = "Base";
		};

		class 53rd_Apollo_Engineer_Urban_Camo_2:53rd_Apollo_Engineer_Urban_Camo_1
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Engineer_Urban_Camo_3:53rd_Apollo_Engineer_Urban_Camo_1
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Engineer_Urban_Camo_4:53rd_Apollo_Engineer_Urban_Camo_1
		{
		Variant = "Bottom";
		};	

		class 53rd_Apollo_Engineer_Woodland_Camo_1:53rd_Apollo_Crewman_Urban_Camo_1
		{
		model = "ApolloArmorPLACEHOLDER";
		Section = "Engineer";
		Camo = "Woodland";
		Variant = "Base";
		};

		class 53rd_Apollo_Engineer_Woodland_Camo_2:53rd_Apollo_Engineer_Woodland_Camo_1
		{
		Variant = "Full";
		};

		class 53rd_Apollo_Engineer_Woodland_Camo_3:53rd_Apollo_Engineer_Woodland_Camo_1
		{
		Variant = "Top";
		};

		class 53rd_Apollo_Engineer_Woodland_Camo_4:53rd_Apollo_Engineer_Woodland_Camo_1
		{
		Variant = "Bottom";
		};


//////////////////////////////////////////////////////////////////////////////
//////////////////////////Apollo Custom Armor/////////////////////////////////
//////////////////////////////////////////////////////////////////////////////	


////////////////////////////// Ryuu /////////////////////////////////

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


////////////////////////////// 
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



////////////////////////////// Saiko /////////////////////////////////
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

////////////////////////////// 
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

////////////////////////////// Crunchy /////////////////////////////////
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


////////////////////////////// Kantus /////////////////////////////////
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

////////////////////////////// Helix /////////////////////////////////
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



		
	};
};



