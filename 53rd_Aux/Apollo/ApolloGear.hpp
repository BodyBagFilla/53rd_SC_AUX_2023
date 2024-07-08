class XtdGearModels
{
	class CfgWeapons
	{


 
//////////////////////////////////////////////////////////////////////////////
////////////////////////// Apollo ////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class ApolloArmor
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
				changeingame = 1;
                changedelay  = 0;
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



		class ApolloCustomArmor
		{
			label = "53rd Apollo Custom Armor";
			author = "Sisyphus";
			options[] = {"Person","Camo","Variant"};
			class Person
			{
				label = "Person";
				values[] = {"Saiko"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;			
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
				changeingame = 1;
                changedelay  = 0;
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

		class ApolloCustomHelmet
		{
			label = "Apollo Custom Helmet";
			author = "53rd Aux Team";
			options[] = {"Person","Helm_Camo","Type"};

			class Person
			{
				label = "Person";
				values[] = {"Crunchy","Kantus","Saiko"};
				alwaysSelectable = 1;
				changeingame = 1;
				changedelay  = 0;
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
				label = "Visor";
				values[] = {"On","Off"};
				class On
				{
					label = "On";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Off
				{
					label = "Off";
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
		model = "ApolloHelmets";
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
		model = "ApolloHelmets";
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
		model = "ApolloHelmets";
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
		model = "ApolloHelmets";
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
		model = "ApolloArmor";
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
		model = "ApolloArmor";
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
		model = "ApolloArmor";
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
		model = "ApolloArmor";
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



////////////////////////////// Saiko /////////////////////////////////
		class 53rd_Saiko_Helmet_Urban_No_Visor
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Saiko";
		Type = "Off";
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
		Type = "On";
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

		Variant = "Base";
		};

		class 53rd_Apollo_Saiko_Urban_Camo:53rd_Apollo_Urban_Saiko
		{
		Camo = "Urban";
		Variant = "Full";
		};

		class 53rd_Apollo_Saiko_Urban_Camo_3:53rd_Apollo_Urban_Saiko
		{
		Camo = "Urban";
		Variant = "Top";
		};

		class 53rd_Apollo_Saiko_Urban_Camo_4:53rd_Apollo_Urban_Saiko
		{
		Camo = "Urban";
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
		Camo = "Woodland";
		Variant = "Full";
		};

		class 53rd_Apollo_Saiko_Woodland_Camo_3:53rd_Apollo_Woodland_Saiko
		{
		Camo = "Woodland";
		Variant = "Top";
		};

		class 53rd_Apollo_Saiko_Woodland_Camo_4:53rd_Apollo_Woodland_Saiko
		{
		Camo = "Woodland";
		Variant = "Bottom";
		};

////////////////////////////// Crunchy /////////////////////////////////
		class 53rd_Crunchy_EODHelmet_Urban
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Crunchy";
		};
		class 53rd_Crunchy_EODHelmet_Woodland:53rd_Crunchy_EODHelmet_Urban
		{
		Helm_Camo = "Woodland";
		};


////////////////////////////// Kantus /////////////////////////////////
		class 53rd_Kantus_EODHelmet_Urban
		{
		model = "ApolloCustomHelmet";
		Helm_Camo = "Urban";
		Person = "Kantus";
		Type = "Visor";
		};
		class 53rd_Kantus_EODHelmet_Woodland:53rd_Kantus_EODHelmet_Urban
		{
		Helm_Camo = "Woodland";
		};

		
	};
};



