class XtdGearModels
{
	class CfgWeapons
	{
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