class XtdGearModels
{
	class CfgWeapons
	{
		class VolareHelmets
		{
			label = "53rd Volare Helmets";
			author = "Body";
			options[] = {"Helmet","Camo","Visor"};
			class Helmet
			{
				label = "Helmet";
				values[] = {"Crew","Pilot","VX"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;

				class Crew
				{
					label = "Air Crew";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class Pilot
				{
					label = "Pilot";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};
				class VX
				{
					label = "VX";
					image = "#(rgb,255,215,0)color(0.8,0.8,0.8,1)";
				};				
			};
			class Camo
			{
				label = "Camo";
				values[] = {"Black","Red","Blue","Winter"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Black
				{
					label = "Black";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Red
				{
					label = "Red";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Blue
				{
					label = "Blue";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
			};

			class Visor
			{
				label = "Visor";
				values[] = {"No","Yes"};
				class No
				{
					label = "Up";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Yes
				{
					label = "Down";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};

		class VolareUniform
		{
			label = "Volare Uniforms";
			author = "53rd Aux Team";
			options[] = {"Color",};

			class Color
			{
				label = "Color";
				values[] = {"Black","Snow","BlackNCO","SnowNCO"};
				changeingame = 1;
                changedelay  = 0;
				class Black
				{
					label = "Black";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Snow
				{
					label = "Snow";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class BlackNCO
				{
					label = "BlackNCO";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class SnowNCO
				{
					label = "SnowNCO";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class VolareArm
		{
			label = "Volare Armor";
			author = "Seven";
			options[] = {"type","Armor"};
			
			class Armor
			{
				label = "Armor";
				values[] = {"Pilot","Combat"};
				class Pilot
				{
					label = "Pilot";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Combat
				{
					label = "Combat";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class type
			{
				label = "Type";
				values[] = {"blk","blu","silver","nco","FL","snow"};
				changeingame = 1;
                changedelay  = 0;
				class blk
				{
					label = "Black";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class blu
				{
					label = "Blue";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class silver
				{
					label = "silver";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class nco
				{
					label = "nco";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class FL
				{
					label = "flight leader";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class snow
				{
					label = "Snow";
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

  

		class 53rd_VX19_Black_Helmet
		{
		model = "VolareHelmets";
		Helmet = "VX";
		Camo = "Black";
		Visor = "Yes";		
		};
		class 53rd_VX19_Blue_Helmet:53rd_VX19_Black_Helmet
		{
		Camo = "Blue";
		};
		class 53rd_VX19_Red_Helmet:53rd_VX19_Black_Helmet
		{
		Camo = "Red";
		};		
		class 53rd_VX19_Snow_Helmet:53rd_VX19_Black_Helmet
		{
		Camo = "Winter";
		};


		class 53rd_VX19_Black_Helmet_dp
		{
		model = "VolareHelmets";
		Helmet = "VX";
		Camo = "Black";
		Visor = "No";		
		};
		class 53rd_VX19_Blue_Helmet_dp:53rd_VX19_Black_Helmet_dp
		{
		Camo = "Blue";
		};
		class 53rd_VX19_Red_Helmet_dp:53rd_VX19_Black_Helmet_dp
		{
		Camo = "Red";
		};		
		class 53rd_VX19_Snow_Helmet_dp:53rd_VX19_Black_Helmet_dp
		{
		Camo = "Winter";
		}; 

		class 53rd_UNSC_PilotHelmet
		{
		model = "VolareHelmets";
		Helmet = "Pilot";
		Camo = "Black";
		Visor = "No";
		};
		class 53rd_UNSC_PilotHelmet_Silver:53rd_UNSC_PilotHelmet
		{
		Camo = "Winter";
		};
		class 53rd_UNSC_PilotHelmet_blue:53rd_UNSC_PilotHelmet
		{
		Camo = "Blue";
		};
		class 53rd_UNSC_PilotHelmet_NCO:53rd_UNSC_PilotHelmet
		{
		Camo = "Red";
		};
		
		class 53rd_H_Echo419_Helmet
		{
		model = "VolareHelmets";
		Helmet = "Crew";
		Visor = "Yes";

		};
		class 53rd_H_Echo419_HelmetB:53rd_H_Echo419_Helmet
		{
		Visor = "No";
		};


///////////////////////////COMBAT UNIFORM///////////////////////////
        class Volare_BDU_Bl
		{
		model = "VolareUniform";
		Color = "Black";
		};
		class Volare_BDU_B3_Snow:Volare_BDU_Bl
		{
		Color = "Snow";
		};
		class Volare_BDU_Bl_NCO:Volare_BDU_Bl
		{
		Color = "BlackNCO";
		};
		class Volare_BDU_B2_NCO:Volare_BDU_Bl
		{
		Color = "SnowNCO";
		};

///////////////////////////COMBAT ARMOR///////////////////////////
        class 53rd_UNSC_Pilot_Armor_Black
		{
		model = "VolareArm";
		Armor = "Combat";
		type = "blk";
		};
		class 53rd_UNSC_Pilot_Armor_Blue:53rd_UNSC_Pilot_Armor_Black
		{
		type = "blu";
		};
		class 53rd_UNSC_Pilot_Armor_NCO:53rd_UNSC_Pilot_Armor_Black
		{
		type = "nco";
		};
		class 53rd_UNSC_Pilot_Armor_Silver:53rd_UNSC_Pilot_Armor_Black
		{
		type = "silver";
		};

		class 53rd_V_Pilot_Armor_Black
		{
		model = "VolareArm";
		Armor = "Pilot";
		type = "blk";
		};
		class 53rd_V_Pilot_Armor_BU_NCO:53rd_V_Pilot_Armor_Black
		{
		type = "blu";
		};
		class 53rd_V_Pilot_Armor_Black_NCO:53rd_V_Pilot_Armor_Black
		{
		type = "nco";
		};
		class 53rd_V_Pilot_Armor_Red_NCO:53rd_V_Pilot_Armor_Black
		{
		type = "FL";
		};
		class 53rd_V_Pilot_Armor_White:53rd_V_Pilot_Armor_Black
		{
		type = "snow";
		};    		 		
	};
};