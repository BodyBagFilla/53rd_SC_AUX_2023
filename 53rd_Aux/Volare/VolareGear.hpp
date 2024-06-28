class XtdGearModels
{
	class CfgWeapons
	{

		class VolareHelmetsPLACEHOLDER
		{
			label = "53rd Volare Helmets";
			author = "Icarus";
			options[] = {"Type","HelmetCamo"};
			class Type
			{
				label = "Type";
				values[] = {"Pilot","VX19","Foe"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
			};
			class HelmetCamo
			{
				label = "Helmet";
				values[] = {"Black","Silver","Blue","Red"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Black
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Silver
				{
					label = "Silver";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
				class Blue
				{
					label = "Blue";
					image = "#(rgb,8,8,3)color(0.2,0.25,0.4,1)";
				};
				class Red
				{
					label = "Red";
					image = "#(rgb,8,8,3)color(0.5,0.0,0.0,1)";
				};
			};
		};

		class VolareUniformPLACEHOLDER
		{
			label = "53rd Volare Uniform";
			author = "Icarus";
			options[] = {"UniformCamo"};
			class UniformCamo
			{
				label = "Uniform";
				values[] = {"Black","Winter","BlackNCO","WinterNCO"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Black
				{
					label = "Black";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
				class BlackNCO
				{
					label = "Black NCO";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class WinterNCO
				{
					label = "Winter NCO";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};

		};

		class VolareArmorPLACEHOLDER
		{
			label = "53rd Volare Armor";
			author = "Icarus";
			options[] = {"ArmorCamo"};
			class ArmorCamo
			{
				label = "Armor";
				values[] = {"Black","Silver","Blue","Red"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Black
				{
					label = "Black";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Silver
				{
					label = "Silver";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
				class Blue
				{
					label = "Blue";
					image = "#(rgb,8,8,3)color(0.2,0.25,0.4,1)";
				};
				class Red
				{
					label = "Red";
					image = "#(rgb,8,8,3)color(0.5,0.0,0.0,1)";
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
//////////////////////////Helmets/////////////////////////////////////////////		
//////////////////////////////////////////////////////////////////////////////	

		class 53rd_Volare_Helmet_Black
		{
		model = "VolareHelmetsPLACEHOLDER";
		Type = "Pilot";
		HelmetCamo = "Black";
		};
		class 53rd_Volare_Helmet_Silver:53rd_Volare_Helmet_Black
		{
		Type = "Pilot";
		HelmetCamo = "Silver";
		};
		class 53rd_Volare_Helmet_Blue:53rd_Volare_Helmet_Black
		{
		Type = "Pilot";
		HelmetCamo = "Blue";
		};
		class 53rd_Volare_Helmet_Red:53rd_Volare_Helmet_Black
		{
		Type = "Pilot";
		HelmetCamo = "Red";
		};


		class 53rd_Volare_VX19_Helmet_Black:53rd_Volare_Helmet_Black
		{
		model = "VolareHelmetsPLACEHOLDER";
		Type = "VX19";
		HelmetCamo = "Black";
		};
		class 53rd_Volare_VX19_Helmet_Silver:53rd_Volare_Helmet_Black
		{
		Type = "VX19";
		HelmetCamo = "Silver";
		};
		class 53rd_Volare_VX19_Helmet_Blue:53rd_Volare_Helmet_Black
		{
		Type = "VX19";
		HelmetCamo = "Blue";
		};
		class 53rd_Volare_VX19_Helmet_Red:53rd_Volare_Helmet_Black
		{
		Type = "VX19";
		HelmetCamo = "Red";
		};


		class 53rd_Volare_Foe_Helmet_Test:53rd_Volare_Helmet_Black
		{
		Type = "Foe";
		HelmetCamo = "Black";
		};

//////////////////////////////////////////////////////////////////////////////
//////////////////////////Uniform/////////////////////////////////////////////		
//////////////////////////////////////////////////////////////////////////////	

		class 53rd_Volare_Uni_Pilot_Black
		{
		model = "VolareUniformPLACEHOLDER";
		UniformCamo = "Black";
		};
		class 53rd_Volare_Uni_Pilot_Snow:53rd_Volare_Uni_Pilot_Black
		{
		UniformCamo = "Winter";
		};
		class 53rd_Volare_Uni_Pilot_BlackNCO:53rd_Volare_Uni_Pilot_Black
		{
		UniformCamo = "BlackNCO";
		};
		class 53rd_Volare_Uni_Pilot_SnowNCO:53rd_Volare_Uni_Pilot_Black
		{
		UniformCamo = "WinterNCO";
		};



//////////////////////////////////////////////////////////////////////////////
//////////////////////////Armor///////////////////////////////////////////////		
//////////////////////////////////////////////////////////////////////////////	


		class 53rd_UNSC_Pilot_Armor_Black
		{
		model = "VolareArmorPLACEHOLDER";
		ArmorCamo = "Black";
		};
		class 53rd_UNSC_Pilot_Armor_Silver:53rd_UNSC_Pilot_Armor_Black
		{
		ArmorCamo = "Silver";
		};
		class 53rd_UNSC_Pilot_Armor_Blue:53rd_UNSC_Pilot_Armor_Black
		{
		ArmorCamo = "Blue";
		};
		class 53rd_UNSC_Pilot_Armor_Red:53rd_UNSC_Pilot_Armor_Black
		{
		ArmorCamo = "Red";
		};
	};
};