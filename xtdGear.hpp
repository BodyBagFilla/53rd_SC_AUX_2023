class XtdGearModels
{
	class CfgWeapons
	{
		class VolareHelm
		{
			label = "Volare Helmets";
			author = "Seven";
			options[] = {"type","pol"};
			
			class type
			{
				label = "Type";
				values[] = {"blk","blu","red"};
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
	};
};