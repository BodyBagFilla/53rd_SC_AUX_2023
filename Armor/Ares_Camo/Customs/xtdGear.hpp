class XtdGearModels
{
	class CfgWeapons
	{
		class AresCustomHelmets
		{
			label = "53rd Ares Custom Headwear";
			author = "Body";
			options[] = {"Person"};
			class Person
			{
				label = "Person";
				values[] = {"Aqyrys","Kenobi","Bjorn","Booben","Baxoje"};
				changeingame = 1;
                changedelay  = 0;
				class Aqyrys
				{
					label = "Aqyrys";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Kenobi
				{
					label = "Kenobi";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Bjorn
				{
					label = "Bjorn";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Booben
				{
					label = "Booben";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};				
				class Baxoje
				{
					label = "Baxoje";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};					
				
			};
		};
	};
};

class XtdGearInfos
{
    class CfgWeapons 
    {

		class 53rd_Aqua_Recon
		{
		model = "AresCustomHelmets";
		Person = "Aqyrys";
		};

		class 53rd_Kenobi_Recon
		{
		model = "AresCustomHelmets";
		Person = "Kenobi";
		};

		class 53rd_Ares_Bjorn_Helmet
		{
		model = "AresCustomHelmets";
		Person = "Bjorn";
		};

		class 53rd_Ares_Boonben_Helmet
		{
		model = "AresCustomHelmets";
		Person = "Booben";
		};		

		class 53rd_Ares_Baxoje_Helmet
		{
		model = "AresCustomHelmets";
		Person = "Baxoje";
		};	




	};
};





