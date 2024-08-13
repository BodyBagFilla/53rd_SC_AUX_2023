class XtdGearModels
{
	class CfgWeapons
	{

//////////////////////////////////////////////////////////////////////////////
////////////////////////// Hephaestus ////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class HephHelmets
		{
			label = "53rd Hephaestus Helmets";
			author = "Styx";
			options[] = {"Type","Section","HelmetCamo","MOS","Visor"};
			class Type
			{
				label = "Type";
				values[] = {"Marine","Sealed"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Marine
				{
					label = "Marine";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Sealed
				{
					label = "Sealed";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
			};
			class Section
			{
				label = "Section";
				values[] = {"Reservist","Asterion","Kerberos","Hydra"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Asterion
				{
					label = "Asterion";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Kerberos
				{
					label = "Kerberos";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Hydra
				{
					label = "Hydra";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
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
				values[] = {"Rifleman","Medic"};
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

		class HephUniform
		{
			label = "53rd Hephaestus Armor";
			author = "Styx";
			options[] = {"Section","ArmorCamo","MOS"};
			class Section
			{
				label = "Section";
				values[] = {"Reservist","Asterion","Kerberos","Hydra"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Asterion
				{
					label = "Asterion";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Kerberos
				{
					label = "Kerberos";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Hydra
				{
					label = "Hydra";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
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
			class MOS
			{
				label = "MOS";
				values[] = {"Rifleman","Medic","AT","Autorifle","Gren","JTAC","SL"};
				alwaysSelectable = 1;
				changeingame = 1;
                changedelay  = 0;
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.6,0.0,0.0,1)";
				};
			};
		};
	

		class HephHelmetsCustom
		{
			label = "53rd Hephaestus Custom Helmets";
			author = "Styx";
			options[] = {"Person","HelmetCamo","Visor"};
			class Person
			{
				label = "Person";
				values[] = {"Angel","Body","Icon","Panzer","Roberto"};
				alwaysSelectable = 1;
				changeingame = 1;
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

		class HephUniformCustom
		{
			label = "53rd Hephaestus Custom Armor";
			author = "Styx";
			options[] = {"Person","ArmorCamo"};
			class Person
			{
				label = "Person";
				values[] = {"Body","Panzer"};
				alwaysSelectable = 1;
				changeingame = 1;
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
//////////////////// Hephaestus Helmets //////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
////////////////////////// Marine /////////////////////////////////////////////
///////////////////////// Reservist ///////////////////////////////////////////	

		class 53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Reservist"
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Reservist_Helmet_Woodland:53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Reservist"	
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Reservist_Helmet_Winter:53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Reservist"		
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Reservist_Helmet_Desert:53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Reservist"
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		Visor = "On";
		};

///////////////////////// 1-1 ///////////////////////////////////////////	
		class 53rd_Heph_Mino_Helmet_Urban:53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Mino_Helmet_Woodland:53rd_Heph_Mino_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"	
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Mino_Helmet_Winter:53rd_Heph_Mino_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Mino_Helmet_Desert:53rd_Heph_Mino_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		Visor = "On";
		};


		class 53rd_Heph_Mino_Medic_Helmet_Urban:53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Urban";
		MOS = "Medic";
		Visor = "On";
		};
		class 53rd_Heph_Mino_Medic_Helmet_Woodland:53rd_Heph_Mino_Medic_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"	
		HelmetCamo = "Woodland";
		MOS = "Medic";
		Visor = "On";
		};
		class 53rd_Heph_Mino_Medic_Helmet_Winter:53rd_Heph_Mino_Medic_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Winter";
		MOS = "Medic";
		Visor = "On";
		};
		class 53rd_Heph_Mino_Medic_Helmet_Desert:53rd_Heph_Mino_Medic_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Desert";
		MOS = "Medic";
		Visor = "On";
		};


///////////////////////// 1-2 ///////////////////////////////////////////	
		class 53rd_Heph_Kerb_Helmet_Urban:53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Kerb_Helmet_Woodland:53rd_Heph_Kerb_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"	
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Kerb_Helmet_Winter:53rd_Heph_Kerb_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Kerb_Helmet_Desert:53rd_Heph_Kerb_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		Visor = "On";
		};


		class 53rd_Heph_Kerb_Medic_Helmet_Urban:53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Urban";
		MOS = "Medic";
		Visor = "On";
		};
		class 53rd_Heph_Kerb_Medic_Helmet_Woodland:53rd_Heph_Kerb_Medic_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"	
		HelmetCamo = "Woodland";
		MOS = "Medic";
		Visor = "On";
		};
		class 53rd_Heph_Kerb_Medic_Helmet_Winter:53rd_Heph_Kerb_Medic_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Winter";
		MOS = "Medic";
		Visor = "On";
		};
		class 53rd_Heph_Kerb_Medic_Helmet_Desert:53rd_Heph_Kerb_Medic_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Desert";
		MOS = "Medic";
		Visor = "On";
		};


///////////////////////// 1-3 ///////////////////////////////////////////	
		class 53rd_Heph_Hydra_Helmet_Urban:53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Hydra"
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Hydra_Helmet_Woodland:53rd_Heph_Hydra_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Hydra"	
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Hydra_Helmet_Winter:53rd_Heph_Hydra_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Hydra"
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		Visor = "On";
		};
		class 53rd_Heph_Hydra_Helmet_Desert:53rd_Heph_Hydra_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Hydra"
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		Visor = "On";
		};




////////////////////////// No Visor ////////////////////////////////////////////
///////////////////////// Reservist ///////////////////////////////////////////	
		class 53rd_Heph_Reservist_Helmet_NoVisor_Urban:53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Reservist"
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Reservist_Helmet_NoVisor_Woodland:53rd_Heph_Reservist_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Reservist"
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Reservist_Helmet_NoVisor_Winter:53rd_Heph_Reservist_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Reservist"
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Reservist_Helmet_NoVisor_Desert:53rd_Heph_Reservist_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Reservist"
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		Visor = "Off";
		};

///////////////////////// 1-1 ///////////////////////////////////////////
		class 53rd_Heph_Mino_Helmet_NoVisor_Urban:53rd_Heph_Mino_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Mino_Helmet_NoVisor_Woodland:53rd_Heph_Mino_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Mino_Helmet_NoVisor_Winter:53rd_Heph_Mino_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Mino_Helmet_NoVisor_Desert:53rd_Heph_Mino_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		Visor = "Off";
		};


		class 53rd_Heph_Mino_Medic_Helmet_NoVisor_Urban:53rd_Heph_Reservist_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Urban";
		MOS = "Medic";
		Visor = "Off";
		};
		class 53rd_Heph_Mino_Medic_Helmet_NoVisor_Woodland:53rd_Heph_Mino_Medic_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"	
		HelmetCamo = "Woodland";
		MOS = "Medic";
		Visor = "Off";
		};
		class 53rd_Heph_Mino_Medic_Helmet_NoVisor_Winter:53rd_Heph_Mino_Medic_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Winter";
		MOS = "Medic";
		Visor = "Off";
		};
		class 53rd_Heph_Mino_Medic_Helmet_NoVisor_Desert:53rd_Heph_Mino_Medic_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Asterion"
		HelmetCamo = "Desert";
		MOS = "Medic";
		Visor = "Off";
		};


///////////////////////// 1-2 ///////////////////////////////////////////
		class 53rd_Heph_Kerb_Helmet_NoVisor_Urban:53rd_Heph_Kerb_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Kerb_Helmet_NoVisor_Woodland:53rd_Heph_Kerb_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Kerb_Helmet_NoVisor_Winter:53rd_Heph_Kerb_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Kerb_Helmet_NoVisor_Desert:53rd_Heph_Kerb_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		Visor = "Off";
		};


		class 53rd_Heph_Kerb_Medic_Helmet_NoVisor_Urban:53rd_Heph_Kerb_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Urban";
		MOS = "Medic";
		Visor = "Off";
		};
		class 53rd_Heph_Kerb_Medic_Helmet_NoVisor_Woodland:53rd_Heph_Kerb_Medic_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Woodland";
		MOS = "Medic";
		Visor = "Off";
		};
		class 53rd_Heph_Kerb_Medic_Helmet_NoVisor_Winter:53rd_Heph_Kerb_Medic_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Winter";
		MOS = "Medic";
		Visor = "Off";
		};
		class 53rd_Heph_Kerb_Medic_Helmet_NoVisor_Desert:53rd_Heph_Kerb_Medic_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Kerberos"
		HelmetCamo = "Desert";
		MOS = "Medic";
		Visor = "Off";
		};


///////////////////////// 1-3 ///////////////////////////////////////////
		class 53rd_Heph_Hydra_Helmet_NoVisor_Urban:53rd_Heph_Hydra_Helmet_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Hydra"
		HelmetCamo = "Urban";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Hydra_Helmet_NoVisor_Woodland:53rd_Heph_Hydra_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Hydra"
		HelmetCamo = "Woodland";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Hydra_Helmet_NoVisor_Winter:53rd_Heph_Hydra_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Hydra"
		HelmetCamo = "Winter";
		MOS = "Rifleman";
		Visor = "Off";
		};
		class 53rd_Heph_Hydra_Helmet_NoVisor_Desert:53rd_Heph_Hydra_Helmet_NoVisor_Urban
		{
		model = "HephHelmets";
		Type = "Marine";
		Section = "Hydra"
		HelmetCamo = "Desert";
		MOS = "Rifleman";
		Visor = "Off";
		};


//////////////////////////////////////////////////////////////////////////////
//////////////////// Hephaestus Uniform //////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
///////////////////////// Reserves ///////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

		class 53rd_Heph_Uni_Reservist_Urban
		{
		model = "HephUniform";
		Section = "Reservist";
		ArmorCamo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Uni_Reservist_Woodland:53rd_Heph_Uni_Reservist_Urban
		{
		model = "HephUniform";
		Section = "Reservist";
		ArmorCamo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Uni_Reservist_Winter:53rd_Heph_Uni_Reservist_Urban
		{
		model = "HephUniform";
		Section = "Reservist";
		ArmorCamo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Uni_Reservist_Desert:53rd_Heph_Uni_Reservist_Urban
		{
		model = "HephUniform";
		Section = "Reservist";
		ArmorCamo = "Desert";
		MOS = "Rifleman";
		};		

//////////////////////////////////////////////////////////////////////////////
///////////////////////// Asterion ///////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


///////////////////////// Rifleman ///////////////////////////////////////////	

		class 53rd_Heph_Mino_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Mino_Rifleman_Woodland:53rd_Heph_Mino_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Mino_Rifleman_Winter:53rd_Heph_Mino_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Mino_Rifleman_Desert:53rd_Heph_Mino_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Desert";
		MOS = "Rifleman";
		};

////////////////////////// Medic ///////////////////////////////////////////

		class 53rd_Heph_Mino_Medic_Urban:53rd_Heph_Mino_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Urban";
		MOS = "Medic";
		};
		class 53rd_Heph_Mino_Medic_Woodland:53rd_Heph_Mino_Medic_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Woodland";
		MOS = "Medic";
		};
		class 53rd_Heph_Mino_Medic_Winter:53rd_Heph_Mino_Medic_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Winter";
		MOS = "Medic";
		};
		class 53rd_Heph_Mino_Medic_Desert:53rd_Heph_Mino_Medic_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Desert";
		MOS = "Medic";
		};


////////////////////////// Autorifle //////////////////////////////////////////

		class 53rd_Heph_Mino_Autorifle_Urban:53rd_Heph_Mino_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Urban";
		MOS = "Autorifle";
		};
		class 53rd_Heph_Mino_Autorifle_Woodland:53rd_Heph_Mino_Autorifle_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Woodland";
		MOS = "Autorifle";
		};
		class 53rd_Heph_Mino_Autorifle_Winter:53rd_Heph_Mino_Autorifle_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Winter";
		MOS = "Autorifle";
		};
		class 53rd_Heph_Mino_Autorifle_Desert:53rd_Heph_Mino_Autorifle_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Desert";
		MOS = "Autorifle";
		};


///////////////////////////// AT //////////////////////////////////////////////

		class 53rd_Heph_Mino_AT_Urban:53rd_Heph_Mino_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Urban";
		MOS = "AT";
		};
		class 53rd_Heph_Mino_AT_Woodland:53rd_Heph_Mino_AT_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Woodland";
		MOS = "AT";
		};
		class 53rd_Heph_Mino_AT_Winter:53rd_Heph_Mino_AT_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Winter";
		MOS = "AT";
		};
		class 53rd_Heph_Mino_AT_Desert:53rd_Heph_Mino_AT_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Desert";
		MOS = "AT";
		};

//////////////////////////// Gren /////////////////////////////////////////////

		class 53rd_Heph_Mino_Gren_Urban:53rd_Heph_Mino_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Urban";
		MOS = "Gren";
		};
		class 53rd_Heph_Mino_Gren_Woodland:53rd_Heph_Mino_Gren_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Woodland";
		MOS = "Gren";
		};
		class 53rd_Heph_Mino_Gren_Winter:53rd_Heph_Mino_Gren_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Winter";
		MOS = "Gren";
		};
		class 53rd_Heph_Mino_Gren_Desert:53rd_Heph_Mino_Gren_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Desert";
		MOS = "Gren";
		};


//////////////////////////// JTAC /////////////////////////////////////////////

		class 53rd_Heph_Mino_JTAC_Urban:53rd_Heph_Mino_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Urban";
		MOS = "JTAC";
		};
		class 53rd_Heph_Mino_JTAC_Woodland:53rd_Heph_Mino_JTAC_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Woodland";
		MOS = "JTAC";
		};
		class 53rd_Heph_Mino_JTAC_Winter:53rd_Heph_Mino_JTAC_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Winter";
		MOS = "JTAC";
		};
		class 53rd_Heph_Mino_JTAC_Desert:53rd_Heph_Mino_JTAC_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Desert";
		MOS = "JTAC";
		};


///////////////////////////// SL //////////////////////////////////////////////

		class 53rd_Heph_Mino_SL_Urban:53rd_Heph_Mino_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Urban";
		MOS = "SL";
		};
		class 53rd_Heph_Mino_SL_Woodland:53rd_Heph_Mino_SL_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Woodland";
		MOS = "SL";
		};
		class 53rd_Heph_Mino_SL_Winter:53rd_Heph_Mino_SL_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Winter";
		MOS = "SL";
		};
		class 53rd_Heph_Mino_SL_Desert:53rd_Heph_Mino_SL_Urban
		{
		model = "HephUniform";
		Section = "Asterion";
		ArmorCamo = "Desert";
		MOS = "SL";
		};

//////////////////////////////////////////////////////////////////////////////
///////////////////////// Kerberos ///////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
///////////////////////// Rifleman ///////////////////////////////////////////	

		class 53rd_Heph_Kerb_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Kerb_Rifleman_Woodland:53rd_Heph_Kerb_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Kerb_Rifleman_Winter:53rd_Heph_Kerb_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Kerb_Rifleman_Desert:53rd_Heph_Kerb_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Desert";
		MOS = "Rifleman";
		};

////////////////////////// Medic ///////////////////////////////////////////

		class 53rd_Heph_Kerb_Medic_Urban:53rd_Heph_Kerb_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Urban";
		MOS = "Medic";
		};
		class 53rd_Heph_Kerb_Medic_Woodland:53rd_Heph_Kerb_Medic_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Woodland";
		MOS = "Medic";
		};
		class 53rd_Heph_Kerb_Medic_Winter:53rd_Heph_Kerb_Medic_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Winter";
		MOS = "Medic";
		};
		class 53rd_Heph_Kerb_Medic_Desert:53rd_Heph_Kerb_Medic_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Desert";
		MOS = "Medic";
		};


////////////////////////// Autorifle //////////////////////////////////////////

		class 53rd_Heph_Kerb_Autorifle_Urban:53rd_Heph_Kerb_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Urban";
		MOS = "Autorifle";
		};
		class 53rd_Heph_Kerb_Autorifle_Woodland:53rd_Heph_Kerb_Autorifle_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Woodland";
		MOS = "Autorifle";
		};
		class 53rd_Heph_Kerb_Autorifle_Winter:53rd_Heph_Kerb_Autorifle_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Winter";
		MOS = "Autorifle";
		};
		class 53rd_Heph_Kerb_Autorifle_Desert:53rd_Heph_Kerb_Autorifle_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Desert";
		MOS = "Autorifle";
		};


///////////////////////////// AT //////////////////////////////////////////////

		class 53rd_Heph_Kerb_AT_Urban:53rd_Heph_Kerb_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Urban";
		MOS = "AT";
		};
		class 53rd_Heph_Kerb_AT_Woodland:53rd_Heph_Kerb_AT_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Woodland";
		MOS = "AT";
		};
		class 53rd_Heph_Kerb_AT_Winter:53rd_Heph_Kerb_AT_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Winter";
		MOS = "AT";
		};
		class 53rd_Heph_Kerb_AT_Desert:53rd_Heph_Kerb_AT_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Desert";
		MOS = "AT";
		};

//////////////////////////// Gren /////////////////////////////////////////////

		class 53rd_Heph_Kerb_Gren_Urban:53rd_Heph_Kerb_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Urban";
		MOS = "Gren";
		};
		class 53rd_Heph_Kerb_Gren_Woodland:53rd_Heph_Kerb_Gren_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Woodland";
		MOS = "Gren";
		};
		class 53rd_Heph_Kerb_Gren_Winter:53rd_Heph_Kerb_Gren_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Winter";
		MOS = "Gren";
		};
		class 53rd_Heph_Kerb_Gren_Desert:53rd_Heph_Kerb_Gren_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Desert";
		MOS = "Gren";
		};


//////////////////////////// JTAC /////////////////////////////////////////////

		class 53rd_Heph_Kerb_JTAC_Urban:53rd_Heph_Kerb_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Urban";
		MOS = "JTAC";
		};
		class 53rd_Heph_Kerb_JTAC_Woodland:53rd_Heph_Kerb_JTAC_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Woodland";
		MOS = "JTAC";
		};
		class 53rd_Heph_Kerb_JTAC_Winter:53rd_Heph_Kerb_JTAC_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Winter";
		MOS = "JTAC";
		};
		class 53rd_Heph_Kerb_JTAC_Desert:53rd_Heph_Kerb_JTAC_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Desert";
		MOS = "JTAC";
		};


///////////////////////////// SL //////////////////////////////////////////////

		class 53rd_Heph_Kerb_SL_Urban:53rd_Heph_Kerb_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Urban";
		MOS = "SL";
		};
		class 53rd_Heph_Kerb_SL_Woodland:53rd_Heph_Kerb_SL_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Woodland";
		MOS = "SL";
		};
		class 53rd_Heph_Kerb_SL_Winter:53rd_Heph_Kerb_SL_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Winter";
		MOS = "SL";
		};
		class 53rd_Heph_Kerb_SL_Desert:53rd_Heph_Kerb_SL_Urban
		{
		model = "HephUniform";
		Section = "Kerberos";
		ArmorCamo = "Desert";
		MOS = "SL";
		};


//////////////////////////////////////////////////////////////////////////////
///////////////////////// Hydra //////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
/////////////////////// Rifleman ///////////////////////////////////////////	

		class 53rd_Heph_Hydra_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Urban";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Hydra_Rifleman_Woodland:53rd_Heph_Hydra_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Woodland";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Hydra_Rifleman_Winter:53rd_Heph_Hydra_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Winter";
		MOS = "Rifleman";
		};
		class 53rd_Heph_Hydra_Rifleman_Desert:53rd_Heph_Hydra_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Desert";
		MOS = "Rifleman";
		};

////////////////////////// Medic ///////////////////////////////////////////

		class 53rd_Heph_Hydra_Medic_Urban:53rd_Heph_Hydra_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Urban";
		MOS = "Medic";
		};
		class 53rd_Heph_Hydra_Medic_Woodland:53rd_Heph_Hydra_Medic_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Woodland";
		MOS = "Medic";
		};
		class 53rd_Heph_Hydra_Medic_Winter:53rd_Heph_Hydra_Medic_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Winter";
		MOS = "Medic";
		};
		class 53rd_Heph_Hydra_Medic_Desert:53rd_Heph_Hydra_Medic_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Desert";
		MOS = "Medic";
		};


////////////////////////// Autorifle //////////////////////////////////////////

		class 53rd_Heph_Hydra_Autorifle_Urban:53rd_Heph_Hydra_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Urban";
		MOS = "Autorifle";
		};
		class 53rd_Heph_Hydra_Autorifle_Woodland:53rd_Heph_Hydra_Autorifle_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Woodland";
		MOS = "Autorifle";
		};
		class 53rd_Heph_Hydra_Autorifle_Winter:53rd_Heph_Hydra_Autorifle_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Winter";
		MOS = "Autorifle";
		};
		class 53rd_Heph_Hydra_Autorifle_Desert:53rd_Heph_Hydra_Autorifle_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Desert";
		MOS = "Autorifle";
		};


///////////////////////////// AT //////////////////////////////////////////////

		class 53rd_Heph_Hydra_AT_Urban:53rd_Heph_Hydra_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Urban";
		MOS = "AT";
		};
		class 53rd_Heph_Hydra_AT_Woodland:53rd_Heph_Hydra_AT_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Woodland";
		MOS = "AT";
		};
		class 53rd_Heph_Hydra_AT_Winter:53rd_Heph_Hydra_AT_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Winter";
		MOS = "AT";
		};
		class 53rd_Heph_Hydra_AT_Desert:53rd_Heph_Hydra_AT_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Desert";
		MOS = "AT";
		};

//////////////////////////// Gren /////////////////////////////////////////////

		class 53rd_Heph_Hydra_Gren_Urban:53rd_Heph_Hydra_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Urban";
		MOS = "Gren";
		};
		class 53rd_Heph_Hydra_Gren_Woodland:53rd_Heph_Hydra_Gren_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Woodland";
		MOS = "Gren";
		};
		class 53rd_Heph_Hydra_Gren_Winter:53rd_Heph_Hydra_Gren_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Winter";
		MOS = "Gren";
		};
		class 53rd_Heph_Hydra_Gren_Desert:53rd_Heph_Hydra_Gren_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Desert";
		MOS = "Gren";
		};


//////////////////////////// JTAC /////////////////////////////////////////////

		class 53rd_Heph_Hydra_JTAC_Urban:53rd_Heph_Hydra_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Urban";
		MOS = "JTAC";
		};
		class 53rd_Heph_Hydra_JTAC_Woodland:53rd_Heph_Hydra_JTAC_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Woodland";
		MOS = "JTAC";
		};
		class 53rd_Heph_Hydra_JTAC_Winter:53rd_Heph_Hydra_JTAC_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Winter";
		MOS = "JTAC";
		};
		class 53rd_Heph_Hydra_JTAC_Desert:53rd_Heph_Hydra_JTAC_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Desert";
		MOS = "JTAC";
		};


///////////////////////////// SL //////////////////////////////////////////////

		class 53rd_Heph_Hydra_SL_Urban:53rd_Heph_Hydra_Rifleman_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Urban";
		MOS = "SL";
		};
		class 53rd_Heph_Hydra_SL_Woodland:53rd_Heph_Hydra_SL_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Woodland";
		MOS = "SL";
		};
		class 53rd_Heph_Hydra_SL_Winter:53rd_Heph_Hydra_SL_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Winter";
		MOS = "SL";
		};
		class 53rd_Heph_Hydra_SL_Desert:53rd_Heph_Hydra_SL_Urban
		{
		model = "HephUniform";
		Section = "Hydra";
		ArmorCamo = "Desert";
		MOS = "SL";
		};


//////////////////////////////////////////////////////////////////////////////
///////////////////////// CUSTOMS ////////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////

///////////////////////// Angel ////////////////////////////////////////////	
////////////////////////////////////////////////////////////////////////////

		class 53rd_Heph_Angel_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Angel";
		HelmetCamo = "Urban";
		Visor = "On";
		};
		class 53rd_Heph_Angel_Helmet_Woodland:53rd_Heph_Angel_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Angel";
		HelmetCamo = "Woodland";
		Visor = "On";
		};
		class 53rd_Heph_Angel_Helmet_Desert:53rd_Heph_Angel_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Angel";
		HelmetCamo = "Desert";
		Visor = "On";
		};
		class 53rd_Heph_Angel_Helmet_Winter:53rd_Heph_Angel_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Angel";
		HelmetCamo = "Winter";
		Visor = "On";
		};

///////////////////////// No Visor ////////////////////////////////////////////	


		class 53rd_Heph_Angel_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Angel";
		HelmetCamo = "Urban";
		Visor = "Off";
		};
		class 53rd_Heph_Angel_Helmet_NoVisor_Woodland:53rd_Heph_Angel_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Angel";
		HelmetCamo = "Woodland";
		Visor = "Off";
		};
		class 53rd_Heph_Angel_Helmet_NoVisor_Desert:53rd_Heph_Angel_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Angel";
		HelmetCamo = "Desert";
		Visor = "Off";
		};
		class 53rd_Heph_Angel_Helmet_NoVisor_Winter:53rd_Heph_Angel_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Angel";
		HelmetCamo = "Winter";
		Visor = "Off";
		};


///////////////////////// Body ////////////////////////////////////////////	
////////////////////////////////////////////////////////////////////////////

		class 53rd_Heph_Body_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Body";
		HelmetCamo = "Urban";
		Visor = "On";
		};
		class 53rd_Heph_Body_Helmet_Woodland:53rd_Heph_Body_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Body";
		HelmetCamo = "Woodland";
		Visor = "On";
		};
		class 53rd_Heph_Body_Helmet_Desert:53rd_Heph_Body_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Body";
		HelmetCamo = "Desert";
		Visor = "On";
		};
		class 53rd_Heph_Body_Helmet_Winter:53rd_Heph_Body_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Body";
		HelmetCamo = "Winter";
		Visor = "On";
		};

///////////////////////// No Visor ////////////////////////////////////////////	


		class 53rd_Heph_Body_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Body";
		HelmetCamo = "Urban";
		Visor = "Off";
		};
		class 53rd_Heph_Body_Helmet_NoVisor_Woodland:53rd_Heph_Body_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Body";
		HelmetCamo = "Woodland";
		Visor = "Off";
		};
		class 53rd_Heph_Body_Helmet_NoVisor_Desert:53rd_Heph_Body_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Body";
		HelmetCamo = "Desert";
		Visor = "Off";
		};
		class 53rd_Heph_Body_Helmet_NoVisor_Winter:53rd_Heph_Body_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Body";
		HelmetCamo = "Winter";
		Visor = "Off";
		};


		class 53rd_Heph_Uni_Body_Urban
		{
		model = "HephUniformCustom";
		Person = "Body";
		ArmorCamo = "Urban";
		};

		class 53rd_Heph_Uni_Body_Woodland:53rd_Heph_Uni_Body_Urban
		{
		model = "HephUniformCustom";
		Person = "Body";
		ArmorCamo = "Woodland";
		};
		class 53rd_Heph_Uni_Body_Desert:53rd_Heph_Uni_Body_Urban
		{
		model = "HephUniformCustom";
		Person = "Body";
		ArmorCamo = "Desert";
		};
		class 53rd_Heph_Uni_Body_Winter:53rd_Heph_Uni_Body_Urban
		{
		model = "HephUniformCustom";
		Person = "Body";
		ArmorCamo = "Winter";
		};



///////////////////////// Panzer ////////////////////////////////////////////	
////////////////////////////////////////////////////////////////////////////

		class 53rd_Heph_Uni_Panzer_Urban
		{
		model = "HephUniformCustom";
		Person = "Panzer";
		ArmorCamo = "Urban";
		};

		class 53rd_Heph_Uni_Panzer_Woodland:53rd_Heph_Uni_Panzer_Urban
		{
		model = "HephUniformCustom";
		Person = "Panzer";
		ArmorCamo = "Woodland";
		};
		class 53rd_Heph_Uni_Panzer_Desert:53rd_Heph_Uni_Panzer_Urban
		{
		model = "HephUniformCustom";
		Person = "Panzer";
		ArmorCamo = "Desert";
		};
		class 53rd_Heph_Uni_Panzer_Winter:53rd_Heph_Uni_Panzer_Urban
		{
		model = "HephUniformCustom";
		Person = "Panzer";
		ArmorCamo = "Winter";
		};


///////////////////////// Icon ////////////////////////////////////////////	
////////////////////////////////////////////////////////////////////////////

		class 53rd_Heph_Icon_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Icon";
		HelmetCamo = "Urban";
		Visor = "On";
		};
		class 53rd_Heph_Icon_Helmet_Woodland:53rd_Heph_Icon_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Icon";
		HelmetCamo = "Woodland";
		Visor = "On";
		};
		class 53rd_Heph_Icon_Helmet_Desert:53rd_Heph_Icon_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Icon";
		HelmetCamo = "Desert";
		Visor = "On";
		};
		class 53rd_Heph_Icon_Helmet_Winter:53rd_Heph_Icon_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Icon";
		HelmetCamo = "Winter";
		Visor = "On";
		};

///////////////////////// No Visor ////////////////////////////////////////////	


		class 53rd_Heph_Icon_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Icon";
		HelmetCamo = "Urban";
		Visor = "Off";
		};
		class 53rd_Heph_Icon_Helmet_NoVisor_Woodland:53rd_Heph_Icon_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Icon";
		HelmetCamo = "Woodland";
		Visor = "Off";
		};
		class 53rd_Heph_Icon_Helmet_NoVisor_Desert:53rd_Heph_Icon_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Icon";
		HelmetCamo = "Desert";
		Visor = "Off";
		};
		class 53rd_Heph_Icon_Helmet_NoVisor_Winter:53rd_Heph_Icon_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Icon";
		HelmetCamo = "Winter";
		Visor = "Off";
		};


///////////////////////// Roberto ////////////////////////////////////////////	
////////////////////////////////////////////////////////////////////////////

		class 53rd_Heph_Roberto_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Roberto";
		HelmetCamo = "Urban";
		Visor = "On";
		};
		class 53rd_Heph_Roberto_Helmet_Woodland:53rd_Heph_Roberto_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Roberto";
		HelmetCamo = "Woodland";
		Visor = "On";
		};
		class 53rd_Heph_Roberto_Helmet_Desert:53rd_Heph_Roberto_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Roberto";
		HelmetCamo = "Desert";
		Visor = "On";
		};
		class 53rd_Heph_Roberto_Helmet_Winter:53rd_Heph_Roberto_Helmet_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Roberto";
		HelmetCamo = "Winter";
		Visor = "On";
		};

///////////////////////// No Visor ////////////////////////////////////////////	


		class 53rd_Heph_Roberto_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Roberto";
		HelmetCamo = "Urban";
		Visor = "Off";
		};
		class 53rd_Heph_Roberto_Helmet_NoVisor_Woodland:53rd_Heph_Roberto_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Roberto";
		HelmetCamo = "Woodland";
		Visor = "Off";
		};
		class 53rd_Heph_Roberto_Helmet_NoVisor_Desert:53rd_Heph_Roberto_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Roberto";
		HelmetCamo = "Desert";
		Visor = "Off";
		};
		class 53rd_Heph_Roberto_Helmet_NoVisor_Winter:53rd_Heph_Roberto_Helmet_NoVisor_Urban
		{
		model = "HephHelmetsCustom";
		Person = "Roberto";
		HelmetCamo = "Winter";
		Visor = "Off";
		};


	};
};



