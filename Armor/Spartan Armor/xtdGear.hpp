class XtdGearModels
{
	class CfgWeapons
	{
		class SpartanHelms
		{
			label = "Spartan Helmets";
			author = "Seven";
			options[] = {"type","Camo"};
			
			class type
			{
				label = "Type";
				values[] = {"MKV","EOD","AA"};
				changeingame = 1;
                changedelay  = 0;
				class MKV
				{
					label = "MKV";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class EOD
				{
					label = "EOD";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class AA
				{
					label = "AA";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class Camo
			{
				label = "Helmet_Camo";
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
	};
};
class XtdGearInfos
{
    class CfgWeapons 
    {
		//AA
		class 53rd_AA_Helmet_UB
		{
		model = "SpartanHelms";
		Type = "AA";
		Camo = "Urban";
		};
		class 53rd_AA_Helmet_WD:53rd_AA_Helmet_UB
		{
		Camo = "Woodland";
		};
		class 53rd_AA_Helmet_WN:53rd_AA_Helmet_UB
		{
		Camo = "Snow";
		};
		class 53rd_AA_Helmet_DS:53rd_AA_Helmet_UB
		{
		Camo = "Desert";
		};
		
		//EOD
		class 53rd_EOD_Helmet
		{
		model = "SpartanHelms";
		Type = "EOD";
		Camo = "Urban";
		};
		class 53rd_EOD_Helmet_WD:53rd_EOD_Helmet
		{
		Camo = "Woodland";
		};
		class 53rd_EOD_Helmet_WN:53rd_EOD_Helmet
		{
		Camo = "Snow";
		};
		class 53rd_EOD_Helmet_DS:53rd_EOD_Helmet
		{
		Camo = "Desert";
		};
		
		//MKV
		class 53rd_FC_MJOLNIR_MKV_Helmet_RT
		{
		model = "SpartanHelms";
		Type = "MKV";
		Camo = "Urban";
		};
	};
};