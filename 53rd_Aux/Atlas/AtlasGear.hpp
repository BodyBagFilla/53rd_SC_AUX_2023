class XtdGearModels
{
	class CfgWeapons
	{

//////////////////////////////////////////////////////////////////////////////
////////////////////////// Atlas //////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class AtlasHelmets
		{
			label = "53rd Atlas Helmets";
			author = "Styx";
			options[] = {"Type","HelmetCamo","MOS","Visor"};
			class Type
			{
				label = "Type";
				values[] = {"Marine","AA"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Marine
				{
					label = "Marine";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class AA
				{
					label = "Air-Assault";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
			};
			class HelmetCamo
			{
				label = "Helmet";
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
			class MOS
			{
				label = "MOS";
				values[] = {"Rifleman","Medic","Platoon","PlatoonM"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.6,0.0,0.0,1)";
				};
				class Platoon
				{
					label = "Platoon";
					image = "#(rgb,8,8,3)color(0.141,0.020,0.020,1)";
				};
				class PlatoonM
				{
					label = "PlatoonM";
					image = "#(rgb,8,8,3)color(0.141,0.020,0.020,1)";
				};
			};
			class Visor
			{
				label = "Visor";
				values[] = {"On","Off"};
				alwaysSelectable = 0;
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
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
			};
		};

		class AtlasUniform
		{
			label = "53rd Atlas Armor";
			author = "Styx";
			options[] = {"ArmorCamo","MOS"};
			class ArmorCamo
			{
				label = "Armor";
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
			class MOS
			{
				label = "MOS";
				values[] = {"Rifleman","Medic","Platoon"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Platoon
				{
					label = "Platoon";
					image = "#(rgb,8,8,3)color(0.141,0.020,0.020,1)";
				};
			};
		};
	

		class AtlasHelmetsCustom
		{
			label = "53rd Atlas Custom Helmets";
			author = "Styx";
			options[] = {"Person","HelmetCamo","Visor"};
			class Person
			{
				label = "Person";
				values[] = {"Hellfire","Scarecrow","Toxic"};
				alwaysSelectable = 1;
				changeingame = 0;
                changedelay  = 0;			

			};
			class HelmetCamo
			{
				label = "Helmet";
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
			class Visor
			{
				label = "Visor";
				values[] = {"On","Off"};
				alwaysSelectable = 0;
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
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
			};
		};

		class AtlasUniformCustom
		{
			label = "53rd Atlas Custom Armor";
			author = "Styx";
			options[] = {"Person","ArmorCamo"};
			class Person
			{
				label = "Person";
				values[] = {"Hellfire"};
				alwaysSelectable = 1;
				changeingame = 0;
                changedelay  = 0;
			};
			class ArmorCamo
			{
				label = "Armor";
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

//////////////////////////////////////////////////////////////////////////////
//////////////////////////Air Assailt ////////////////////////////////////////
///////////////////////// Rifleman ///////////////////////////////////////////	

		class 53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_Atlas_AAHelmet_Woodland:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_Atlas_AAHelmet_Desert:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		};
		class 53rd_Atlas_AAHelmet_Winter:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		};

////////////////////////// Medic ////////////////////////////////////////////

		class 53rd_Atlas_AAHelmet_Medic_Urban:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Urban";
		MOS = "Medic";
		};
		class 53rd_Atlas_AAHelmet_Medic_Woodland:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Woodland";
		MOS = "Medic";
		};
		class 53rd_Atlas_AAHelmet_Medic_Desert:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Desert";
		MOS = "Medic";
		};
		class 53rd_Atlas_AAHelmet_Medic_Winter:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Winter";
		MOS = "Medic";
		};

////////////////////////// Platoon //////////////////////////////////////////

		class 53rd_Atlas_AAHelmet_Platoon_Urban:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Urban";
		MOS = "Platoon";
		};
		class 53rd_Atlas_AAHelmet_Platoon_Woodland:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Woodland";
		MOS = "Platoon";
		};
		class 53rd_Atlas_AAHelmet_Platoon_Desert:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Desert";
		MOS = "Platoon";
		};
		class 53rd_Atlas_AAHelmet_Platoon_Winter:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Winter";
		MOS = "Platoon";
		};

/////////////////////// Platoon Medic ///////////////////////////////////////

		class 53rd_Atlas_AAHelmet_PlatoonM_Urban:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Urban";
		MOS = "PlatoonM";
		};
		class 53rd_Atlas_AAHelmet_PlatoonM_Woodland:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Woodland";
		MOS = "PlatoonM";
		};
		class 53rd_Atlas_AAHelmet_PlatoonM_Desert:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Desert";
		MOS = "PlatoonM";
		};
		class 53rd_Atlas_AAHelmet_PlatoonM_Winter:53rd_Atlas_AAHelmet_Urban
		{
		model = "AtlasHelmets";
		Type = "AA";
		HelmetCamo = "Winter";
		MOS = "PlatoonM";
		};

		
//////////////////////////////////////////////////////////////////////////////
////////////////////////// Marine ////////////////////////////////////////////
///////////////////////// Rifleman ///////////////////////////////////////////	

		class 53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_Rifleman_Woodland:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_Rifleman_Winter:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_Rifleman_Desert:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		Visor = "On";
		};

////////////////////////// No Visor ////////////////////////////////////////////

		class 53rd_Atlas_Helmet_Rifleman_NoVisor_Urban:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_Rifleman_NoVisor_Woodland:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_Rifleman_NoVisor_Winter:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_Rifleman_NoVisor_Desert:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		Visor = "Off";
		};

///////////////////////// Medic ///////////////////////////////////////////	

		class 53rd_Atlas_Helmet_Medic_Urban:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Urban";
		MOS = "Medic";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_Medic_Woodland:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Woodland";
		MOS = "Medic";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_Medic_Winter:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Winter";
		MOS = "Medic";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_Medic_Desert:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Desert";
		MOS = "Medic";
		Visor = "On";
		};

////////////////////////// No Visor ////////////////////////////////////////////

		class 53rd_Atlas_Helmet_Medic_NoVisor_Urban:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Urban";
		MOS = "Medic";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_Medic_NoVisor_Woodland:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Woodland";
		MOS = "Medic";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_Medic_NoVisor_Winter:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Winter";
		MOS = "Medic";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_Medic_NoVisor_Desert:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Desert";
		MOS = "Medic";
		Visor = "Off";
		};

///////////////////////// Platoon ///////////////////////////////////////////	

		class 53rd_Atlas_Helmet_Platoon_Urban:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Urban";
		MOS = "Platoon";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_Platoon_Woodland:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Woodland";
		MOS = "Platoon";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_Platoon_Winter:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Winter";
		MOS = "Platoon";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_Platoon_Desert:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Desert";
		MOS = "Platoon";
		Visor = "On";
		};

////////////////////////// No Visor ////////////////////////////////////////////

		class 53rd_Atlas_Helmet_Platoon_NoVisor_Urban:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Urban";
		MOS = "Platoon";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_Platoon_NoVisor_Woodland:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Woodland";
		MOS = "Platoon";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_Platoon_NoVisor_Winter:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Winter";
		MOS = "Platoon";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_Platoon_NoVisor_Desert:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Desert";
		MOS = "Platoon";
		Visor = "Off";
		};

///////////////////////// PlatoonM ///////////////////////////////////////////	

		class 53rd_Atlas_Helmet_PlatoonM_Urban:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Urban";
		MOS = "PlatoonM";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_PlatoonM_Woodland:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Woodland";
		MOS = "PlatoonM";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_PlatoonM_Winter:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Winter";
		MOS = "PlatoonM";
		Visor = "On";
		};
		class 53rd_Atlas_Helmet_PlatoonM_Desert:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Desert";
		MOS = "PlatoonM";
		Visor = "On";
		};

////////////////////////// No Visor ////////////////////////////////////////////

		class 53rd_Atlas_Helmet_PlatoonM_NoVisor_Urban:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Urban";
		MOS = "PlatoonM";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_PlatoonM_NoVisor_Woodland:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Woodland";
		MOS = "PlatoonM";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_PlatoonM_NoVisor_Winter:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Winter";
		MOS = "PlatoonM";
		Visor = "Off";
		};
		class 53rd_Atlas_Helmet_PlatoonM_NoVisor_Desert:53rd_Atlas_Helmet_Rifleman_Urban
		{
		model = "AtlasHelmets";
		Type = "Marine";
		HelmetCamo = "Desert";
		MOS = "PlatoonM";
		Visor = "Off";
		};


//////////////////////////////////////////////////////////////////////////////
//////////////////////////Ares Uniforms ////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
///////////////////////// Rifleman ///////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Atlas_Uni_Rifleman_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_Atlas_Uni_Rifleman_Woodland:53rd_Atlas_Uni_Rifleman_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_Atlas_Uni_Rifleman_Winter:53rd_Atlas_Uni_Rifleman_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_Atlas_Uni_Rifleman_Desert:53rd_Atlas_Uni_Rifleman_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Desert";
		MOS = "Rifleman";
		};

//////////////////////////////////////////////////////////////////////////////
///////////////////////// Medic ///////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Atlas_Uni_Medic_Urban:53rd_Atlas_Uni_Rifleman_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Urban";
		MOS = "Medic";
		};
		class 53rd_Atlas_Uni_Medic_Woodland:53rd_Atlas_Uni_Medic_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Woodland";
		MOS = "Medic";
		};
		class 53rd_Atlas_Uni_Medic_Winter:53rd_Atlas_Uni_Medic_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Winter";
		MOS = "Medic";
		};
		class 53rd_Atlas_Uni_Medic_Desert:53rd_Atlas_Uni_Medic_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Desert";
		MOS = "Medic";
		};

//////////////////////////////////////////////////////////////////////////////
///////////////////////// Platoon ////////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Atlas_Uni_Platoon_Urban:53rd_Atlas_Uni_Rifleman_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Urban";
		MOS = "Platoon";
		};
		class 53rd_Atlas_Uni_Platoon_Woodland:53rd_Atlas_Uni_Platoon_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Woodland";
		MOS = "Platoon";
		};
		class 53rd_Atlas_Uni_Platoon_Winter:53rd_Atlas_Uni_Platoon_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Winter";
		MOS = "Platoon";
		};
		class 53rd_Atlas_Uni_Platoon_Desert:53rd_Atlas_Uni_Platoon_Urban
		{
		model = "AtlasUniform";
		ArmorCamo = "Desert";
		MOS = "Platoon";
		};




//////////////////////////////////////////////////////////////////////////////
///////////////////////// CUSTOMS ////////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
///////////////////////// Hellfire ////////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////

///////////////////////// Helmet ///////////////////////////////////////////	

/////// ON HOLD UNTIL AIR ASSAULT RETEXTURE //////


///////////////////////// Armor ///////////////////////////////////////////	

		class 53rd_Atlas_Uni_Hellfire_Urban
		{
		model = "AtlasUniformCustom";
		Person = "Hellfire";
		ArmorCamo = "Urban";
		};
		class 53rd_Atlas_Uni_Hellfire_Woodland:53rd_Atlas_Uni_Hellfire_Urban
		{
		model = "AtlasUniformCustom";
		Person = "Hellfire";
		ArmorCamo = "Woodland";
		};
		class 53rd_Atlas_Uni_Hellfire_Winter:53rd_Atlas_Uni_Hellfire_Urban
		{
		model = "AtlasUniformCustom";
		Person = "Hellfire";
		ArmorCamo = "Winter";
		};
		class 53rd_Atlas_Uni_Hellfire_Desert:53rd_Atlas_Uni_Hellfire_Urban
		{
		model = "AtlasUniformCustom";
		Person = "Hellfire";
		ArmorCamo = "Desert";
		};


//////////////////////////////////////////////////////////////////////////////

















	};
};



