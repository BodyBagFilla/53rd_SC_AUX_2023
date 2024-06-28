class XtdGearModels
{
	class CfgWeapons
	{

//////////////////////////////////////////////////////////////////////////////
////////////////////////// Ares //////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class AresHelmets_PLACEHOLDER
		{
			label = "53rd Ares Helmets";
			author = "Styx";
			options[] = {"Type","HelmetMOS"};
			class Type
			{
				label = "Type";
				values[] = {"M56SR"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class M56SH
				{
					label = "M56SR";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
			};
			class HelmetMOS
			{
				label = "MOS";
				values[] = {"RA","Rifleman","Medic","Lead","Platoon"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class RA
				{
					label = "Ride Along";
					image = "#(rgb,8,8,3)color(0.6,0.6,0.0,1)";
				};
				class Rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.89,0.85,0.79,1)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.6,0.0,0.0,1)";
				};
				class Lead
				{
					label = "Lead";
					image = "#(rgb,8,8,3)color(0.38,0.25,0.32,1)";
				};
				class Platoon
				{
					label = "Platoon";
					image = "#(rgb,8,8,3)color(0.8,0.33,0.0,1)";
				};
			};
		};

		class AresArmor_PLACEHOLDER
		{
			label = "53rd Ares Armor";
			author = "Styx";
			options[] = 
			{
				"Type",
				"ArmorMOS",
				"Radio"
			};
			class Type
			{
				label = "Type";
				values[] = 
				{
					"NoShoulder",
					"Base",
					"CQB",
					"Sniper"
				};
				alwaysSelectable = 0;
				changeingame = 1;
                changedelay  = 0;
				class NoShoulder
				{
					label = "No Shoulder";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Base
				{
					label = "Base";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class CQB
				{
					label = "CQB";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Sniper
				{
					label = "Sniper";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};	
			};		
			class ArmorMOS
			{
				label = "MOS";
				values[] = {"RA","Rifleman","Medic","Lead","PLead"};
				alwaysSelectable = 0;
				changeingame = 1;
                changedelay  = 0;
				class RA
				{
					label = "Ride Along";
					image = "#(rgb,8,8,3)color(0.6,0.6,0.0,1)";
				};
				class Rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.89,0.85,0.79,1)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.6,0.0,0.0,1)";
				};
				class Lead
				{
					label = "Lead";
					image = "#(rgb,8,8,3)color(0.38,0.25,0.32,1)";
				};
				class PLead
				{
					label = "Platoon";
					image = "#(rgb,8,8,3)color(0.8,0.33,0.0,1)";
				};
			};
			class Radio
			{
				label = "Radio";
				values[] = {"None","Left","Right"};
				alwaysSelectable = 0;
				changeingame = 1;
                changedelay  = 0;
				class None
				{
					label = "None";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Left
				{
					label = "Left";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Right
				{
					label = "Right";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
			};
		};

		class AresCustomHelmets_PLACEHOLDER
		{
			label = "53rd Ares Custom Armor";
			author = "Styx";
			options[] = 
			{
				"Person",
			};
			class Person
			{
				label = "Person";
				values[] = 
				{
					"Aqyrys",
					"Baxoje",
					"Bjorn",
					"BooBen",
					"Kenobi",
					"Ullr"

				};
				alwaysSelectable = 0;
				changeingame = 1;
                changedelay  = 0;
			};		

		};

		class AresCustomArmor_PLACEHOLDER
		{
			label = "53rd Ares Custom Armor";
			author = "Styx";
			options[] = 
			{
				"Person",
			};
			class Person
			{
				label = "Person";
				values[] = 
				{
					"Aqyrys"

				};
				alwaysSelectable = 0;
				changeingame = 1;
                changedelay  = 0;
			};		

		};





//////////////////////////////////////////////////////////////////////////////
////////////////////////// Nox ///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class NoxHelmets
		{
			label = "53rd Nox Helmets";
			author = "Styx";
			options[] = {"Type","HelmetCamo","Team","Alt"};
			class Type
			{
				label = "Type";
				values[] = {"M56SR","Scout"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class M56SR
				{
					label = "M56SR";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Scout
				{
					label = "Scout";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};

			};
			class HelmetCamo
			{
				label = "Helmet Camo";
				values[] = {"Urban","Woodland","Arid","Winter"};
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
				class Arid
				{
					label = "Arid";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class Team
			{
				label = "Team";
				values[] = {"Red","Blue","RLead","BLead"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Red
				{
					label = "Red";
					image = "#(rgb,8,8,3)color(0.5,0.0,0.0,1)";
				};
				class Blue
				{
					label = "Blue";
					image = "#(rgb,8,8,3)color(0.2,0.25,0.4,1)";
				};
				class RLead
				{
					label = "Red Lead";
					image = "#(rgb,8,8,3)color(0.5,0.0,0.0,1)";
				};
				class BLead
				{
					label = "Blue Lead";
					image = "#(rgb,8,8,3)color(0.2,0.25,0.4,1)";
				};

			};
			class Alt
			{
				label = "Alt";
				values[] = {"One","Two"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class One
				{
					label = "One";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Two
				{
					label = "Two";
					image = "#(rgb,8,8,3)color(0.2,0.25,0.4,1)";
				};
			};
		};	

		class NoxUniform
		{
			label = "53rd Nox Uniform";
			author = "Styx";
			options[] = {"Type","Camo","Alt"};
			class Type
			{
				label = "Type";
				values[] = {"BDU","FGhillie","HGhillie"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 5;
				class BDU
				{
					label = "M56S BDU";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class FGhillie
				{
					label = "Full Ghillie";
					image = "\53rd_Aux\Ares\Nox\Nogo.paa";
				};
				class HGhillie
				{
					label = "Half Ghillie";
					image = "\53rd_Aux\Ares\Nox\No.paa";
				};
			};
			class Camo
			{
				label = "Undersuit Camo";
				values[] = {"Urban","Jungle","Woodland","Arid","Winter"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Urban
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Jungle
				{
					label = "Jungle";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Arid
				{
					label = "Arid";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class Alt
			{
				label = "Alt";
				values[] = {"One","Two"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class One
				{
					label = "One";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Two
				{
					label = "Two";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
			};
		};	

		class NoxArmor
		{
			label = "53rd Nox Armor";
			author = "Styx";
			options[] = {"VestCamo","Team","Shoulders"};
			class VestCamo
			{
				label = "Vest Camo";
				values[] = {"Urban","Woodland","Desert","Winter"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 5;
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
					label = "Arid";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Winter
				{
					label = "Winter";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};

			};
			class Team
			{
				label = "Team";
				values[] = {"Red","Blue","RLead","BLead"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Red
				{
					label = "Red";
					image = "#(rgb,8,8,3)color(0.5,0.0,0.0,1)";
				};
				class Blue
				{
					label = "Blue";
					image = "#(rgb,8,8,3)color(0.2,0.25,0.4,1)";
				};
				class RLead
				{
					label = " Red Lead";
					image = "#(rgb,8,8,3)color(0.5,0.0,0.0,1)";
				};
				class BLead
				{
					label = " Blue Lead";
					image = "#(rgb,8,8,3)color(0.2,0.25,0.4,1)";
				};					
			};
			class Shoulders
			{
				label = "Shoulders";
				values[] = {"On","Off"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class On
				{
					label = "On";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Off
				{
					label = "Off";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
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
//////////////////////////Ares Helmets////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////	

		class 53rd_Ares_Helmet_Rifleman
		{
		model = "AresHelmets_PLACEHOLDER";
		Type = "M56SR";
		HelmetMOS = "Rifleman";
		};
		class 53rd_Ares_Helmet_Medic:53rd_Ares_Helmet_Rifleman
		{
		Type = "M56SR";
		HelmetMOS = "Medic";
		};
		class 53rd_Ares_Helmet_Lead:53rd_Ares_Helmet_Rifleman
		{
		Type = "M56SR";
		HelmetMOS = "Lead";
		};
		class 53rd_Ares_Helmet_Platoon:53rd_Ares_Helmet_Rifleman
		{
		Type = "M56SR";
		HelmetMOS = "Platoon";
		};
		class 53rd_Ares_Helmet_RideAlong:53rd_Ares_Helmet_Rifleman
		{
		Type = "M56SR";
		HelmetMOS = "RA";
		};
//////////////////////////////////////////////////////////////////////////////
//////////////////////////Ares Armor//////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Ares_Vest_NoShoulder_Rifleman
		{
		model = "AresArmor_PLACEHOLDER";
		Type = "NoShoulder";
		ArmorMOS ="Rifleman";
		Radio = "None";		
		};
		class 53rd_Ares_Vest_NoShoulder_Medic:53rd_Ares_Vest_NoShoulder_Rifleman
		{
		Type = "NoShoulder";
		ArmorMOS ="Medic";
		Radio = "None";	
		};
		class 53rd_Ares_Vest_NoShoulder_Lead:53rd_Ares_Vest_NoShoulder_Rifleman
		{
		Type = "NoShoulder";
		ArmorMOS ="Lead";
		Radio = "None";	
		};
		class 53rd_Ares_Vest_NoShoulder_Platoon:53rd_Ares_Vest_NoShoulder_Rifleman
		{
		Type = "NoShoulder";
		ArmorMOS ="PLead";
		Radio = "None";	
		};

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Ares_Vest_Base_Rifleman
		{
		model = "AresArmor_PLACEHOLDER";
		Type = "Base";
		ArmorMOS ="Rifleman";
		Radio = "None";		
		};
		class 53rd_Ares_Vest_Base_Medic:53rd_Ares_Vest_Base_Rifleman
		{
		Type = "Base";
		ArmorMOS ="Medic";
		Radio = "None";	
		};
		class 53rd_Ares_Vest_Base_Lead:53rd_Ares_Vest_Base_Rifleman
		{
		Type = "Base";
		ArmorMOS ="Lead";
		Radio = "None";	
		};
		class 53rd_Ares_Vest_Base_Platoon:53rd_Ares_Vest_Base_Rifleman
		{
		Type = "Base";
		ArmorMOS ="PLead";
		Radio = "None";	
		};
		class 53rd_Ares_Vest_Base_RideAlong:53rd_Ares_Vest_Base_Rifleman
		{
		model = "AresArmor_PLACEHOLDER";
		Type = "Base";
		ArmorMOS ="RA";
		Radio = "None";		
		};


//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Ares_Vest_BaseLR_Rifleman:53rd_Ares_Vest_Base_Rifleman
		{
		model = "AresArmor_PLACEHOLDER";
		Type = "Base";
		ArmorMOS ="Rifleman";
		Radio = "Left";		
		};
		class 53rd_Ares_Vest_BaseLR_Medic:53rd_Ares_Vest_BaseLR_Rifleman
		{
		Type = "Base";
		ArmorMOS ="Medic";
		Radio = "Left";	
		};
		class 53rd_Ares_Vest_BaseLR_Lead:53rd_Ares_Vest_BaseLR_Rifleman
		{
		Type = "Base";
		ArmorMOS ="Lead";
		Radio = "Left";	
		};
		class 53rd_Ares_Vest_BaseLR_Platoon:53rd_Ares_Vest_BaseLR_Rifleman
		{
		Type = "Base";
		ArmorMOS ="PLead";
		Radio = "Left";	
		};
		class 53rd_Ares_Vest_BaseLR_RideAlong:53rd_Ares_Vest_BaseLR_Rifleman
		{
		Type = "Base";
		ArmorMOS ="RA";
		Radio = "Left";	
		};

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Ares_Vest_BaseRR_Rifleman:53rd_Ares_Vest_Base_Rifleman
		{
		model = "AresArmor_PLACEHOLDER";
		Type = "Base";
		ArmorMOS ="Rifleman";
		Radio = "Right";		
		};
		class 53rd_Ares_Vest_BaseRR_Medic:53rd_Ares_Vest_BaseLR_Rifleman
		{
		Type = "Base";
		ArmorMOS ="Medic";
		Radio = "Right";	
		};
		class 53rd_Ares_Vest_BaseRR_Lead:53rd_Ares_Vest_BaseLR_Rifleman
		{
		Type = "Base";
		ArmorMOS ="Lead";
		Radio = "Right";	
		};
		class 53rd_Ares_Vest_BaseRR_Platoon:53rd_Ares_Vest_BaseLR_Rifleman
		{
		Type = "Base";
		ArmorMOS ="PLead";
		Radio = "Right";	
		};
		class 53rd_Ares_Vest_BaseRR_RideAlong:53rd_Ares_Vest_BaseLR_Rifleman
		{
		Type = "Base";
		ArmorMOS ="RA";
		Radio = "Right";	
		};
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Ares_Vest_CQB_Rifleman:53rd_Ares_Vest_Base_Rifleman
		{
		model = "AresArmor_PLACEHOLDER";
		Type = "CQB";
		ArmorMOS ="Rifleman";
		Shoulders = "Yes";		
		};
		class 53rd_Ares_Vest_CQB_Medic:53rd_Ares_Vest_CQB_Rifleman
		{
		Type = "CQB";
		ArmorMOS ="Medic";
		Shoulders = "Yes";	
		};
		class 53rd_Ares_Vest_CQB_Lead:53rd_Ares_Vest_CQB_Rifleman
		{
		Type = "CQB";
		ArmorMOS ="Lead";
		Shoulders = "Yes";	
		};
		class 53rd_Ares_Vest_CQB_Platoon:53rd_Ares_Vest_CQB_Rifleman
		{
		Type = "CQB";
		ArmorMOS ="PLead";
		Shoulders = "Yes";	
		};
		
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Ares_Vest_Sniper_Rifleman:53rd_Ares_Vest_Base_Rifleman
		{
		model = "AresArmor_PLACEHOLDER";
		Type = "Sniper";
		ArmorMOS ="Rifleman";
		Shoulders = "Yes";		
		};
		class 53rd_Ares_Vest_Sniper_Medic:53rd_Ares_Vest_Sniper_Rifleman
		{
		Type = "Sniper";
		ArmorMOS ="Medic";
		Shoulders = "Yes";	
		};
		class 53rd_Ares_Vest_Sniper_Lead:53rd_Ares_Vest_Sniper_Rifleman
		{
		Type = "Sniper";
		ArmorMOS ="Lead";
		Shoulders = "Yes";	
		};
		class 53rd_Ares_Vest_Sniper_Platoon:53rd_Ares_Vest_Sniper_Rifleman
		{
		Type = "Sniper";
		ArmorMOS ="PLead";
		Shoulders = "Yes";	
		};
		



//////////////////////////////////////////////////////////////////////////////
////////////////////////// Nox ///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
////////////////////////// Helmets ///////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
		class 53rd_Nox_Helmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "M56SR";
		HelmetCamo = "Urban";
		Team = "RLead";
		Alt = "One";
		};

		class 53rd_Nox_Helmet_Rifleman_Red_Urban:53rd_Nox_Helmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "M56SR";
		HelmetCamo = "Urban";
		Team = "Red";
		Alt = "One";
		};		
		
		class 53rd_Nox_Helmet_Red_Woodland:53rd_Nox_Helmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "M56SR";
		HelmetCamo = "Woodland";
		Team = "Red";
		Alt = "One";
		};
		class 53rd_Nox_Helmet_Red_Desert:53rd_Nox_Helmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "M56SR";
		HelmetCamo = "Arid";
		Team = "Red";
		Alt = "One";
		};
		class 53rd_Nox_Helmet_Red_Winter:53rd_Nox_Helmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "M56SR";
		HelmetCamo = "Winter";
		Team = "Red";
		Alt = "One";
		};

		class 53rd_Nox_Helmet_Blue_Urban
		{
		model = "NoxHelmets";
		Type = "M56SR";
		HelmetCamo = "Urban";
		Team = "BLead";
		Alt = "One";
		};
		class 53rd_Nox_Helmet_Rifleman_Blue_Urban:53rd_Nox_Helmet_Blue_Urban
		{
		model = "NoxHelmets";
		Type = "M56SR";
		HelmetCamo = "Urban";
		Team = "Blue";
		Alt = "One";
		};		
		class 53rd_Nox_Helmet_Blue_Woodland:53rd_Nox_Helmet_Blue_Urban
		{
		model = "NoxHelmets";
		Type = "M56SR";
		HelmetCamo = "Woodland";
		Team = "Blue";
		Alt = "One";
		};
		class 53rd_Nox_Helmet_Blue_Desert:53rd_Nox_Helmet_Blue_Urban
		{
		model = "NoxHelmets";
		Type = "M56SR";
		HelmetCamo = "Arid";
		Team = "Blue";
		Alt = "One";
		};
		class 53rd_Nox_Helmet_Blue_Winter:53rd_Nox_Helmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "M56SR";
		HelmetCamo = "Winter";
		Team = "Blue";
		Alt = "One";
		};

//////////////////////////////////////////////////////////////////////////////
////////////////////////// Scout /////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Urban";
		Team = "RLead";
		Alt = "One";
		};
		class 53rd_Nox_ScoutHelmet_Rifleman_Red_Urban:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Urban";
		Team = "Red";
		Alt = "One";
		};
		class 53rd_Nox_ScoutHelmet_Red_Woodland:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Woodland";
		Team = "Red";
		Alt = "One";
		};
		class 53rd_Nox_ScoutHelmet_Red_Desert:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Arid";
		Team = "Red";
		Alt = "One";
		};
		class 53rd_Nox_ScoutHelmet_Red_Winter:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Winter";
		Team = "Red";
		Alt = "One";
		};
		class 53rd_Nox_ScoutHelmet_Red2_Urban:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Urban";
		Team = "RLead";
		Alt = "Two";
		};
		
		class 53rd_Nox_ScoutHelmet_Rifleman_Red2_Urban:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Urban";
		Team = "Red";
		Alt = "Two";
		};
		class 53rd_Nox_ScoutHelmet_Red2_Woodland:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Woodland";
		Team = "Red";
		Alt = "Two";
		};
		class 53rd_Nox_ScoutHelmet_Red2_Desert:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Arid";
		Team = "Red";
		Alt = "Two";
		};
		class 53rd_Nox_ScoutHelmet_Red2_Winter:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Winter";
		Team = "Red";
		Alt = "Two";
		};

		class 53rd_Nox_ScoutHelmet_Blue_Urban:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Urban";
		Team = "BLead";
		Alt = "One";
		};
		class 53rd_Nox_ScoutHelmet_Rifleman_Blue_Urban:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Urban";
		Team = "Blue";
		Alt = "One";
		};
		class 53rd_Nox_ScoutHelmet_Blue_Woodland:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Woodland";
		Team = "Blue";
		Alt = "One";
		};
		class 53rd_Nox_ScoutHelmet_Blue_Desert:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Arid";
		Team = "Blue";
		Alt = "One";
		};
		class 53rd_Nox_ScoutHelmet_Blue_Winter:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Winter";
		Team = "Blue";
		Alt = "One";
		};

		class 53rd_Nox_ScoutHelmet_Blue2_Urban:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Urban";
		Team = "BLead";
		Alt = "Two";
		};
		class 53rd_Nox_ScoutHelmet_Rifleman_Blue2_Urban:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Urban";
		Team = "Blue";
		Alt = "Two";
		};
		class 53rd_Nox_ScoutHelmet_Blue2_Woodland:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Woodland";
		Team = "Blue";
		Alt = "Two";
		};
		class 53rd_Nox_ScoutHelmet_Blue2_Desert:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Arid";
		Team = "Blue";
		Alt = "Two";
		};
		class 53rd_Nox_ScoutHelmet_Blue2_Winter:53rd_Nox_ScoutHelmet_Red_Urban
		{
		model = "NoxHelmets";
		Type = "Scout";
		HelmetCamo = "Winter";
		Team = "Blue";
		Alt = "Two";
		};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////UNIFORMS & Ghillies///////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		class 53rd_Nox_Uniform_Urban
		{
		model = "NoxUniform";
		Type = "BDU";
		Camo = "Urban";
		Alt = "One";
		};
		class 53rd_Ares_Nox_Ghillie_Urban_Full:53rd_Nox_Uniform_Urban
		{
		Type = "FGhillie";
		Alt = "One";
		};
		class 53rd_Ares_Nox_Ghillie_Urban_Half:53rd_Nox_Uniform_Urban
		{
		Type = "HGhillie";
		Alt = "One";
		};

		//Arid
		class 53rd_Nox_Uniform_Arid
		{
		model = "NoxUniform";
		Type = "BDU";
		Camo = "Arid";
		Alt = "One";
		};
		class 53rd_Ares_Nox_Ghillie_Arid_Full:53rd_Nox_Uniform_Arid
		{
		Type = "FGhillie";
		Alt = "One";
		};
		class 53rd_Ares_Nox_Ghillie_SemiArid_Full:53rd_Nox_Uniform_Arid
		{
		Type = "FGhillie";
		Alt = "Two";
		};		
		class 53rd_Ares_Nox_Ghillie_Arid_Half:53rd_Nox_Uniform_Arid
		{
		Type = "HGhillie";
		Alt = "One";
		};

		//Winter
		class 53rd_Nox_Uniform_Winter
		{
		model = "NoxUniform";
		Type = "BDU";
		Camo = "Winter";
		Alt = "One";
		};
		class 53rd_Ares_Nox_Ghillie_Winter_Full:53rd_Nox_Uniform_Winter
		{
		Type = "FGhillie";
		Alt = "One";
		};
		class 53rd_Ares_Nox_Ghillie_Winter_Half:53rd_Nox_Uniform_Winter
		{
		Type = "HGhillie";
		Alt = "One";		
		};

		//Woodland
		class 53rd_Nox_Uniform_Woodland2
		{
		model = "NoxUniform";
		Type = "BDU";
		Camo = "Woodland";
		Alt = "One";
		};
		class 53rd_Ares_Nox_Ghillie_Lush_Full:53rd_Nox_Uniform_Woodland2
		{
		Type = "FGhillie";
		Alt = "One";
		};
		class 53rd_Ares_Nox_Ghillie_Lush2_Full:53rd_Nox_Uniform_Woodland2
		{
		Type = "FGhillie";
		Alt = "Two";
		};
		class 53rd_Ares_Nox_Ghillie_SemiArid_Half:53rd_Nox_Uniform_Woodland2
		{
		Type = "HGhillie";
		Alt = "One";
		};

		//Jungle
		class 53rd_Nox_Uniform_Woodland
		{
		model = "NoxUniform";
		Type = "BDU";
		Camo = "Jungle";
		Alt = "One";
		};
		class 53rd_Ares_Nox_Ghillie_Jungle_Full:53rd_Nox_Uniform_Woodland
		{
		Type = "FGhillie";
		Alt = "One";
		};
		class 53rd_Ares_Nox_Ghillie_Jungle2_Full:53rd_Nox_Uniform_Woodland
		{
		Type = "FGhillie";
		Alt = "Two";
		};
		class 53rd_Ares_Nox_Ghillie_Woodland_Half:53rd_Nox_Uniform_Woodland
		{
		Type = "HGhillie";
		Alt = "One";
		};

//////////////////////////////////////////////////////////////////////////////
////////////////////////// Armor /////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Nox_Vest_Red_Urban
		{
		model = "NoxArmor";
		VestCamo = "Urban";
		Team = "RLead";
		Shoulders = "On";
		};
		class 53rd_Nox_Vest_Red_Woodland:53rd_Nox_Vest_Red_Urban
		{
		model = "NoxArmor";
		VestCamo = "Woodland";
		Team = "Red";
		Shoulders = "On";
		};
		class 53rd_Nox_Vest_Red_Winter:53rd_Nox_Vest_Red_Urban
		{
		model = "NoxArmor";
		VestCamo = "Winter";
		Team = "Red";
		Shoulders = "On";
		};
		class 53rd_Nox_Vest_Red_Desert:53rd_Nox_Vest_Red_Urban
		{
		model = "NoxArmor";
		VestCamo = "Desert";
		Team = "Red";
		Shoulders = "On";
		};		
		class 53rd_Nox_Vest_Red_Rifleman_Urban:53rd_Nox_Vest_Red_Urban
		{
		model = "NoxArmor";
		VestCamo = "Urban";
		Team = "Red";
		Shoulders = "On";
		};			

		class 53rd_Nox_Vest_Blue_Urban
		{
		model = "NoxArmor";
		VestCamo = "Urban";
		Team = "BLead";
		Shoulders = "On";
		};
		class 53rd_Nox_Vest_Blue_Woodland:53rd_Nox_Vest_Blue_Urban
		{
		model = "NoxArmor";
		VestCamo = "Woodland";
		Team = "Blue";
		Shoulders = "On";
		};
		class 53rd_Nox_Vest_Blue_Winter:53rd_Nox_Vest_Blue_Urban
		{
		model = "NoxArmor";
		VestCamo = "Winter";
		Team = "Blue";
		Shoulders = "On";
		};
		class 53rd_Nox_Vest_Blue_Desert:53rd_Nox_Vest_Blue_Urban
		{
		model = "NoxArmor";
		VestCamo = "Desert";
		Team = "Blue";
		Shoulders = "On";
		};
		class 53rd_Nox_Vest_Blue_Rifleman_Urban:53rd_Nox_Vest_Blue_Urban
		{
		model = "NoxArmor";
		VestCamo = "Urban";
		Team = "Blue";
		Shoulders = "On";
		};

//////////////////////////////////////////////////////////////////////////////
////////////////////////// Armor, no Shoulders ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Nox_Vest_Red_Ghillie_Urban
		{
		model = "NoxArmor";
		VestCamo = "Urban";
		Team = "RLead";
		Shoulders = "Off";
		};
		class 53rd_Nox_Vest_Red_Ghillie_Woodland:53rd_Nox_Vest_Red_Ghillie_Urban
		{
		model = "NoxArmor";
		VestCamo = "Woodland";
		Team = "Red";
		Shoulders = "Off";
		};
		class 53rd_Nox_Vest_Red_Ghillie_Winter:53rd_Nox_Vest_Red_Ghillie_Urban
		{
		model = "NoxArmor";
		VestCamo = "Winter";
		Team = "Red";
		Shoulders = "Off";
		};
		class 53rd_Nox_Vest_Red_Ghillie_Desert:53rd_Nox_Vest_Red_Ghillie_Urban
		{
		model = "NoxArmor";
		VestCamo = "Desert";
		Team = "Red";
		Shoulders = "Off";
		};		
		class 53rd_Nox_Vest_Red_Rifleman_Ghillie_Urban:53rd_Nox_Vest_Red_Ghillie_Urban
		{
		model = "NoxArmor";
		VestCamo = "Urban";
		Team = "Red";
		Shoulders = "Off";
		};

		class 53rd_Nox_Vest_Blue_Ghillie_Urban
		{
		model = "NoxArmor";
		VestCamo = "Urban";
		Team = "BLead";
		Shoulders = "Off";
		};
		class 53rd_Nox_Vest_Blue_Ghillie_Woodland:53rd_Nox_Vest_Blue_Ghillie_Urban
		{
		model = "NoxArmor";
		VestCamo = "Woodland";
		Team = "Blue";
		Shoulders = "Off";
		};
		class 53rd_Nox_Vest_Blue_Ghillie_Winter:53rd_Nox_Vest_Blue_Ghillie_Urban
		{
		model = "NoxArmor";
		VestCamo = "Winter";
		Team = "Blue";
		Shoulders = "Off";
		};
		class 53rd_Nox_Vest_Blue_Ghillie_Desert:53rd_Nox_Vest_Blue_Ghillie_Urban
		{
		model = "NoxArmor";
		VestCamo = "Desert";
		Team = "Blue";
		Shoulders = "Off";
		};	

		class 53rd_Nox_Vest_Blue_Rifleman_Ghillie_Urban:53rd_Nox_Vest_Blue_Ghillie_Urban
		{
		model = "NoxArmor";
		VestCamo = "Urban";
		Team = "Blue";
		Shoulders = "Off";
		};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		class 53rd_Aqua_Recon
		{
		model = "AresCustomHelmets_PLACEHOLDER";
		Person = "Aqyrys";
		};

		class 53rd_Ares_Baxoje_Helmet
		{
		model = "AresCustomHelmets_PLACEHOLDER";
		Person = "Baxoje";
		};

		class 53rd_Ares_Bjorn_Helmet
		{
		model = "AresCustomHelmets_PLACEHOLDER";
		Person = "Bjorn";
		};

		class 53rd_Ares_BooBen_Helmet
		{
		model = "AresCustomHelmets_PLACEHOLDER";
		Person = "BooBen";
		};

		class 53rd_Kenobi_Recon
		{
		model = "AresCustomHelmets_PLACEHOLDER";
		Person = "Kenobi";
		};

		class 53rd_Ares_Ullr_Helmet_Urban
		{
		model = "AresCustomHelmets_PLACEHOLDER";
		Person = "Ullr";
		};

		class 53rd_Ares_Aqyrys_Vest
		{
		model = "AresCustomArmor_PLACEHOLDER";
		Person = "Aqyrys";
		};

	};
};



