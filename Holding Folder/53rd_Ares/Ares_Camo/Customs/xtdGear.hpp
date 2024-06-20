class XtdGearModels
{
	class CfgWeapons
	{
		class AresCustomHelmets
		{
			label = "53rd Ares Custom Headwear";
			author = "Body";
			options[] = {"Person","Camo"};
			class Person
			{
				label = "Person";
				values[] = {"Aqyrys","Kenobi","Bjorn","Booben","Baxoje","Ullr"};
				changeingame = 1;
				alwaysSelectable = 1;
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
				class Ullr
				{
					label = "Ullr";
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
		};

		class AresCustomArmor
		{
			label = "53rd Ares Custom Armor";
			author = "Body";
			options[] = {"Person","Camo"};
			class Person
			{
				label = "Person";
				values[] = {"Ullr","Aqyrys"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;		
				class Ullr
				{
					label = "Ullr";
					image = "#(rgb255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Aqyrys
				{
					label = "Aqyrys";
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
		};

	};
};

class XtdGearInfos
{
    class CfgWeapons 
    {
////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////CUSTOM HELMETS////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

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

		class 53rd_Ares_Custom_Helmet_Ullr_Urban
		{
		model = "AresCustomHelmets";
		Person = "Ullr";
		Camo = "Urban";
		};	
		class 53rd_Ares_Custom_Helmet_Ullr_Winter: 53rd_Ares_Custom_Helmet_Ullr_Urban
		{
		Camo = "Winter";
		};
		class 53rd_Ares_Custom_Helmet_Ullr_Desert: 53rd_Ares_Custom_Helmet_Ullr_Urban
		{
		Camo = "Desert";
		};
		class 53rd_Ares_Custom_Helmet_Ullr_Woodland: 53rd_Ares_Custom_Helmet_Ullr_Urban
		{
		Camo = "Woodland";
		};


////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////CUSTOM VESTS//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

		class 53rd_Ares_Ullr_Vest_Urban
		{
		model = "AresCustomArmor";
		Person = "Ullr";
		Camo = "Urban";
		};	
		class 53rd_Ares_Ullr_Vest_Winter: 53rd_Ares_Ullr_Vest_Urban
		{
		Camo = "Winter";
		};
		class 53rd_Ares_Ullr_Vest_Woodland: 53rd_Ares_Ullr_Vest_Urban
		{
		Camo = "Woodland";
		};
		class 53rd_Ares_Ullr_Vest_Desert: 53rd_Ares_Ullr_Vest_Urban
		{
		Camo = "Desert";
		};

		class 53rd_Ares_Aqyrys_Vest_Urban
		{
		model = "AresCustomArmor";
		Person = "Aqyrys";
		Camo = "Urban";
		};	
	};
};





