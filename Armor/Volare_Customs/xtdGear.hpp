class XtdGearModels
{
	class CfgWeapons
	{
		class VolareCustomHelm
		{
			label = "Volare Custom Helmets";
			author = "Fixer";
			options[] = {"Person","dp"};
			class Person
			{
				label = "Person";
				values[] = {"Bigben","Amatsu","Lovey","Ferret","Ghillie","AK"};
				changeingame = 1;
                changedelay  = 0;
				class Bigben
				{
					label = "Big Ben";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Amatsu
				{
					label = "Amatsu";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Lovey
				{
					label = "Lovey";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Ferret
				{
					label = "Ferret";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Ghillie
				{
					label = "Ghillie";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class AK
				{
					label = "Ghillie";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class dp
			{
				label = "Polarization";
				values[] = {"yes","no"};
				changeingame = 1;
                changedelay  = 0;
				class yes
				{
					label = "Yes?";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class no
				{
					label = "no.";
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
        //helmets
		//Bigben
		class 53rd_Custom_Helmet_BigBen
		{
		model = "VolareCustomHelm";
		Person = "Bigben";
        dp="yes";
		};
		class 53rd_Custom_Helmet_BigBen_dp
		{
		model = "VolareCustomHelm";
		Person = "Bigben";
        dp="no";
		};
		//Amatsu
		class 53rd_Custom_Helmet_Amatsu
		{
		model = "VolareCustomHelm";
		Person = "Amatsu";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Amatsu_dp
		{
		model = "VolareCustomHelm";
		Person = "Amatsu";
        dp="no";
		};
		//Lovey
		class 53rd_Custom_Helmet_Lovey
		{
		model = "VolareCustomHelm";
		Person = "Lovey";
        dp="yes";
		};
		//Ferret
		class 53rd_Custom_Helmet_Ferret
		{
		model = "VolareCustomHelm";
		Person = "Ferret";
        dp="yes";
		};
		//Ghillie
		class 53rd_Custom_Helmet_Ghillie
		{
		model = "VolareCustomHelm";
		Person = "Ghillie";
        dp="yes";
		};
		//AK
		class 53rd_Custom_Helmet_AK
		{
		model = "VolareCustomHelm";
		Person = "AK";
        dp="yes";
		};
		
        
        //armors
	};
};