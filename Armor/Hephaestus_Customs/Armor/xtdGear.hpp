class XtdGearModels
{
	class CfgWeapons
	{
		class HephaestusCamoCustoms
		{
			label = "53rd Custom Helmets";
			author = "Ithias";
			options[] = {"Helm_Camo","Person","Type","dp"};
			
			class Helm_Camo
			{
				label = "Helm Camo";
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
			class Person
			{
				label = "Person";
				values[] = {"Body","Cherry","Panzer","Ryu","Tikals","Saiko","Theta","Limitz","Cap","Angel","Dalton","Foster",};
				class Body
				{
					label = "Body";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Cherry
				{
					label = "Cherry";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Panzer
				{
					label = "Panzer";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Ryu
				{
					label = "Ryu";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Tikals
				{
					label = "Tikals";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Saiko
				{
					label = "Saiko";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Theta
				{
					label = "Theta";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Limitz
				{
					label = "Limitz";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Cap
				{
					label = "Cap";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Dalton				
				{
					label = "Dalton";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};					
				class Foster				
				{
					label = "Foster";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};					
				class Angel				
				{
					label = "Angel";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};	
			};
			class Type
			{
				label = "Type";
				values[] = {"Visor","NoVISOR","CUSTOM"};
				class Visor
				{
					label = "Visor";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class NoVISOR
				{
					label = "NoVISOR";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class CUSTOM
				{
					label = "CUSTOM";
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
		class HephaestusCustomCamo
		{
			label = "Hephaestus Custom Vests";
			author = "Body";
			options[] = {"Vest_Camo","Person"};
			
			class Vest_Camo
			{
				label = "Vest Camo";
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
			class Person
			{
				label = "Person";
				values[] = {"Fixer","Body","Panzer","Cherry","Ryu","Saiko","Theta","Dalton","Foster"};
				class Fixer
				{
					label = "Fixer";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Body
				{
					label = "Body";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Panzer
				{
					label = "Panzer";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Cherry
				{
					label = "Cherry";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Ryu
				{
					label = "Ryu";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Saiko
				{
					label = "Saiko";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Theta
				{
					label = "Theta";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};		
				class Dalton
				{
					label = "Dalton";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};	
				class Foster
				{
					label = "Foster";
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
        
		//Bodyy
		class 53rd_Body_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Body";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Body_Helmet_Woodland_No_Visor:53rd_Body_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Body_Helmet_Desert_No_Visor:53rd_Body_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Body_Helmet_Urban_No_Visor:53rd_Body_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Urban";
		};
		
		class 53rd_Body_Helmet_Urban_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Body";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Body_Helmet_Woodland_Visor:53rd_Body_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Body_Helmet_Desert_Visor:53rd_Body_Helmet_Urban_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Body_Helmet_Winter_Visor:53rd_Body_Helmet_Urban_Visor
		{
		Helm_Camo = "Snow";
		};
        
		//Cherryy
		//No Visor
		class 53rd_Cherry_Helmet_Urban_No_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Cherry";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Cherry_Helmet_Woodland_No_Visor:53rd_Cherry_Helmet_Urban_No_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Cherry_Helmet_Desert_No_Visor:53rd_Cherry_Helmet_Urban_No_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Cherry_Helmet_Winter_No_Visor:53rd_Cherry_Helmet_Urban_No_Visor
		{
		Helm_Camo = "Urban";
		};
		//VISOR
		class 53rd_Cherry_Helmet_Urban_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Cherry";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Cherry_Helmet_Woodland_Visor:53rd_Cherry_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Cherry_Helmet_Desert_Visor:53rd_Cherry_Helmet_Urban_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Cherry_Helmet_Winter_Visor:53rd_Cherry_Helmet_Urban_Visor
		{
		Helm_Camo = "Snow";
		};
		
		//Tikals
		class Tikals_Custom_Helmet_UB
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Tikals";
		Type = "Visor";
        dp="no";
		};
		class Tikals_AA_Helmet_DS:Tikals_Custom_Helmet_UB
		{
		Helm_Camo = "Desert";
		};
		class Tikals_AA_Helmet_WN:Tikals_Custom_Helmet_UB
		{
		Helm_Camo = "Snow";
		};
		class Tikals_AA_Helmet_WD:Tikals_Custom_Helmet_UB
		{
		Helm_Camo = "Woodland";
		};
		
		//RYU
		class 53rd_Ryu_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Ryu";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Ryu_Helmet_Woodland_No_Visor:53rd_Ryu_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Ryu_Helmet_Desert_No_Visor:53rd_Ryu_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Ryu_Helmet_Urban_No_Visor:53rd_Ryu_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Urban";
		};
		
		class 53rd_Ryu_Helmet_Urban_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Ryu";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Ryu_Helmet_Woodland_Visor:53rd_Ryu_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Ryu_Helmet_Desert_Visor:53rd_Ryu_Helmet_Urban_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Ryu_Helmet_Winter_Visor:53rd_Ryu_Helmet_Urban_Visor
		{
		Helm_Camo = "Snow";
		};
		
		//Saiko
		class 53rd_Saiko_Helmet_Winter_NV
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Saiko";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Saiko_Helmet_Woodland_NV:53rd_Saiko_Helmet_Winter_NV
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Saiko_Helmet_Desert_NV:53rd_Saiko_Helmet_Winter_NV
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Saiko_Helmet_Urban_NV:53rd_Saiko_Helmet_Winter_NV
		{
		Helm_Camo = "Urban";
		};
		
		class 53rd_Saiko_Helmet_Urban
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Saiko";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Saiko_Helmet_Woodland:53rd_Saiko_Helmet_Urban
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Saiko_Helmet_Desert:53rd_Saiko_Helmet_Urban
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Saiko_Helmet_Winter:53rd_Saiko_Helmet_Urban
		{
		Helm_Camo = "Snow";
		};
	
	
		//Panzer
		class 53rd_Panzer_Helmet_Winter_NV
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Panzer";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Panzer_Helmet_Woodland_NV:53rd_Panzer_Helmet_Winter_NV
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Panzer_Helmet_Desert_NV:53rd_Panzer_Helmet_Winter_NV
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Panzer_Helmet_Urban_NV:53rd_Panzer_Helmet_Winter_NV
		{
		Helm_Camo = "Urban";
		};
		
		class 53rd_Panzer_Helmet_Urban
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Panzer";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Panzer_Helmet_Woodland:53rd_Panzer_Helmet_Urban
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Panzer_Helmet_Desert:53rd_Panzer_Helmet_Urban
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Panzer_Helmet_Winter:53rd_Panzer_Helmet_Urban
		{
		Helm_Camo = "Snow";
		};
	/* // PENDING HELMET MODEL UPDATE // 
		//Theta
		class 53rd_Theta_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Theta";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Theta_Helmet_Woodland_No_Visor:53rd_Theta_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Theta_Helmet_Desert_No_Visor:53rd_Theta_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Theta_Helmet_Urban_No_Visor:53rd_Theta_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Urban";
		};

		class 53rd_Theta_Helmet_Urban_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Theta";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Theta_Helmet_Woodland_Visor:53rd_Theta_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Theta_Helmet_Desert_Visor:53rd_Theta_Helmet_Urban_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Theta_Helmet_Winter_Visor:53rd_Theta_Helmet_Urban_Visor
		{
		Helm_Camo = "Snow";
		};
   */ 
		//Cap
		class 53rd_Cap_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Cap";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Cap_Helmet_Woodland_No_Visor:53rd_Cap_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Cap_Helmet_Desert_No_Visor:53rd_Cap_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Cap_Helmet_Urban_No_Visor:53rd_Cap_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Urban";
		};
		
		class 53rd_Cap_Helmet_Urban_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Cap";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Cap_Helmet_Woodland_Visor:53rd_Cap_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Cap_Helmet_Desert_Visor:53rd_Cap_Helmet_Urban_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Cap_Helmet_Winter_Visor:53rd_Cap_Helmet_Urban_Visor
		{
		Helm_Camo = "Snow";
		};
		
		//Limitz
		class 53rd_Limitz_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Limitz";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Limitz_Helmet_Woodland_No_Visor:53rd_Limitz_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Limitz_Helmet_Desert_No_Visor:53rd_Limitz_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Limitz_Helmet_Urban_No_Visor:53rd_Limitz_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Urban";
		};
		
		class 53rd_Limitz_Helmet_Urban_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Limitz";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Limitz_Helmet_Woodland_Visor:53rd_Limitz_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Limitz_Helmet_Desert_Visor:53rd_Limitz_Helmet_Urban_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Limitz_Helmet_Winter_Visor:53rd_Limitz_Helmet_Urban_Visor
		{
		Helm_Camo = "Snow";
		};	



		//Angel
		class 53rd_Angel_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Angel";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Angel_Helmet_Woodland_No_Visor:53rd_Angel_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Angel_Helmet_Desert_No_Visor:53rd_Angel_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Angel_Helmet_Urban_No_Visor:53rd_Angel_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Urban";
		};
		
		class 53rd_Angel_Helmet_Urban_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Angel";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Angel_Helmet_Woodland_Visor:53rd_Angel_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Angel_Helmet_Desert_Visor:53rd_Angel_Helmet_Urban_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Angel_Helmet_Winter_Visor:53rd_Angel_Helmet_Urban_Visor
		{
		Helm_Camo = "Snow";
		};

		//Foster
		class 53rd_Foster_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Foster";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Foster_Helmet_Woodland_No_Visor:53rd_Foster_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Foster_Helmet_Desert_No_Visor:53rd_Foster_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Foster_Helmet_Urban_No_Visor:53rd_Foster_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Urban";
		};
		
		class 53rd_Foster_Helmet_Urban_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Foster";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Foster_Helmet_Woodland_Visor:53rd_Foster_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Foster_Helmet_Desert_Visor:53rd_Foster_Helmet_Urban_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Foster_Helmet_Winter_Visor:53rd_Foster_Helmet_Urban_Visor
		{
		Helm_Camo = "Snow";
		};	


		//Dalton
		class 53rd_Dalton_Helmet_Winter_No_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Snow";
		Person = "Dalton";
		Type = "NoVISOR";
        dp="no";
		};
		class 53rd_Dalton_Helmet_Woodland_No_Visor:53rd_Dalton_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Dalton_Helmet_Desert_No_Visor:53rd_Dalton_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Dalton_Helmet_Urban_No_Visor:53rd_Dalton_Helmet_Winter_No_Visor
		{
		Helm_Camo = "Urban";
		};
		
		class 53rd_Dalton_Helmet_Urban_Visor
		{
		model = "HephaestusCamoCustoms";
		Helm_Camo = "Urban";
		Person = "Dalton";
		Type = "Visor";
        dp="no";
		};
		class 53rd_Dalton_Helmet_Woodland_Visor:53rd_Dalton_Helmet_Urban_Visor
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Dalton_Helmet_Desert_Visor:53rd_Dalton_Helmet_Urban_Visor
		{
		Helm_Camo = "Desert";
		};
		class 53rd_Dalton_Helmet_Winter_Visor:53rd_Dalton_Helmet_Urban_Visor
		{
		Helm_Camo = "Snow";
		};	
				
		
		///////////////////////////////////////////////////////
		//                   END OF HELMETS                  //
		//////////////////////////////////////////////////////
		//                     ARMOR START                  //
		/////////////////////////////////////////////////////
		
	/*
		//Fixer
		class 53rd_Custom_Fixer_Woodland
		{
		model = "HephaestusCustomCamo";
		Vest_Camo = "Woodland";
		Person = "Fixer";
		};
		class 53rd_Custom_Armor_Fixer_Desert:53rd_Custom_Fixer_Woodland
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Custom_Armor_Fixer_Snow:53rd_Custom_Fixer_Woodland
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Fixer_Urban:53rd_Custom_Fixer_Woodland
		{
		Vest_Camo = "Urban";
		};
	*/
		//Body
		class 53rd_Body_UB
		{
		model = "HephaestusCustomCamo";
		Vest_Camo = "Urban";
		Person = "Body";
		};
		class 53rd_Body_DS:53rd_Body_UB
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Body_SN:53rd_Body_UB
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Body_WD:53rd_Body_UB
		{
		Vest_Camo = "Woodland";
		};
		
		//Body
		class 53rd_Saiko_UB
		{
		model = "HephaestusCustomCamo";
		Vest_Camo = "Urban";
		Person = "Saiko";
		};
		class 53rd_Saiko_DS:53rd_Saiko_UB
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Saiko_SN:53rd_Saiko_UB
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Saiko_WD:53rd_Saiko_UB
		{
		Vest_Camo = "Woodland";
		};
		//RYU
		class 53rd_Ryu_UB
		{
		model = "HephaestusCustomCamo";
		Vest_Camo = "Urban";
		Person = "Ryu";
		};
		class 53rd_Ryu_DS:53rd_Ryu_UB
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Ryu_SN:53rd_Ryu_UB
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Ryu_WD:53rd_Ryu_UB
		{
		Vest_Camo = "Woodland";
		};

        //Panzer
		class 53rd_Armor_Panzer_Desert
		{
		model = "HephaestusCustomCamo";
		Vest_Camo = "Desert";
		Person = "Panzer";
		};
		class 53rd_Armor_Panzer_Winter:53rd_Armor_Panzer_Desert
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Armor_Panzer_Urban:53rd_Armor_Panzer_Desert
		{
		Vest_Camo = "Urban";
		};
		class 53rd_Armor_Panzer_Woodland:53rd_Armor_Panzer_Desert
		{
		Vest_Camo = "Woodland";
		};

        //Cherry
		class 53rd_Cherry_DS
		{
		model = "HephaestusCustomCamo";
		Vest_Camo = "Desert";
		Person = "Cherry";
		};
		class 53rd_Cherry_SN:53rd_Cherry_DS
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Cherry_UB:53rd_Cherry_DS
		{
		Vest_Camo = "Urban";
		};
		class 53rd_Cherry_WD:53rd_Cherry_DS
		{
		Vest_Camo = "Woodland";
		};

        //Theta
		class 53rd_Armor_Theta_Woodland
		{
		model = "HephaestusCustomCamo";
		Vest_Camo = "Woodland";
		Person = "Theta";
		};
		class 53rd_Armor_Theta_Desert:53rd_Armor_Theta_Woodland
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Armor_Theta_Winter:53rd_Armor_Theta_Woodland
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Armor_Theta_Urban:53rd_Armor_Theta_Woodland
		{
		Vest_Camo = "Urban";
		};
		
        //Dalton
		class 53rd_Armor_Dalton_Woodland
		{
		model = "HephaestusCustomCamo";
		Vest_Camo = "Woodland";
		Person = "Dalton";
		};
		class 53rd_Armor_Dalton_Desert:53rd_Armor_Dalton_Woodland
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Armor_Dalton_Winter:53rd_Armor_Dalton_Woodland
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Armor_Dalton_Urban:53rd_Armor_Dalton_Woodland
		{
		Vest_Camo = "Urban";
		};		

        //Foster
		class 53rd_Armor_Foster_Woodland
		{
		model = "HephaestusCustomCamo";
		Vest_Camo = "Woodland";
		Person = "Foster";
		};
		class 53rd_Armor_Foster_Desert:53rd_Armor_Foster_Woodland
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Armor_Foster_Winter:53rd_Armor_Foster_Woodland
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Armor_Foster_Urban:53rd_Armor_Foster_Woodland
		{
		Vest_Camo = "Urban";
		};		

	};
};