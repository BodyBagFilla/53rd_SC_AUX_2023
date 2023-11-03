class XtdGearModels
{
	class CfgWeapons
	{
		class VolareHelm
		{
			label = "Volare Helmets";
			author = "Seven";
			options[] = {"type","pol","Armor"};
			
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
				values[] = {"blk","blu","red","silver","Snow"};
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
				class red
				{
					label = "Red";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class silver
				{
					label = "silver";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class snow
				{
					label = "Snow";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class pol
			{
				label = "Polarization";
				values[] = {"on","off"};
				changeingame = 1;
                changedelay  = 0;
				class on
				{
					label = "On";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class off
				{
					label = "Off";
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
        //Helmets
        class 53rd_VX19_Black_Helmet
		{
		model = "VolareHelm";
		Armor = "Pilot";
		type = "blk";
		pol = "on";
		};
		class 53rd_VX19_Blue_Helmet:53rd_VX19_Black_Helmet
		{
		type = "blu";
		};
		class 53rd_VX19_Red_Helmet:53rd_VX19_Black_Helmet
		{
		type = "red";
		};
		class 53rd_VX19_Snow_Helmet:53rd_VX19_Black_Helmet
		{
		type = "snow";
		};
        
        
        //dp
        class 53rd_VX19_Black_Helmet_dp
		{
		model = "VolareHelm";
		Armor = "Pilot";
		type = "blk";
		pol = "off";
		};
		class 53rd_VX19_Blue_Helmet_dp:53rd_VX19_Black_Helmet_dp
		{
		type = "blu";
		};
		class 53rd_VX19_Red_Helmet_dp:53rd_VX19_Black_Helmet_dp
		{
		type = "red";
		};
		class 53rd_VX19_Snow_Helmet_dp:53rd_VX19_Black_Helmet_dp
		{
		type = "snow";
		};
		
///////////////////////COMBAT HELMET///////////////////////////////
        class 53rd_UNSC_PilotHelmet
		{
		model = "VolareHelm";
		Armor = "Combat";
		type = "blk";
		pol = "on";
		};
		class 53rd_UNSC_PilotHelmet_Silver:53rd_UNSC_PilotHelmet
		{
		type = "silver";
		};
		class 53rd_UNSC_PilotHelmet_blue:53rd_UNSC_PilotHelmet
		{
		type = "blu";
		};
		class 53rd_UNSC_PilotHelmet_NCO:53rd_UNSC_PilotHelmet
		{
		type = "red";
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