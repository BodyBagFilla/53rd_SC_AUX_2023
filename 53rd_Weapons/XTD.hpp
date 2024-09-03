class XtdGearModels {
	class CfgWeapons {
		class MA5 {
			label = "MA5";
			author = "Sigma";
			options[] = { "variant", "other" };

			class variant {
				alwaysSelectable = 1;
				label = "Model";
				values[] = {
					"MA5A",
					"MA5B",
					"MA5C"
				};
				class MA5A {
					label = "MA5A";
				};
				class MA5B {
					label = "MA5B";
				};
				class MA5C {
					label = "MA5C";
				};
			};
			class other
			{
				alwaysSelectable = 1;
				label = "Underbarrel";
				values[] = { "none","GL" };
				class none
				{
					label = "None";
				};
				class GL
				{
					label = "GL";
				};
			};
		};

		class MA32 {
			label = "MA32";
			author = "Sigma";
			options[] = { "other" };
			class other {
				alwaysSelectable = 1;
				label = "Underbarrel";
				values[] = { "none","GL" };
				class none
				{
					label = "None";
				};
				class GL
				{
					label = "GL";
				};
			};
		};

		class MA37 {
			label = "MA37";
			author = "Sigma";
			options[] = { "other" };
			class other {
				alwaysSelectable = 1;
				label = "Underbarrel";
				values[] = { "none","GL" };
				class none
				{
					label = "None";
				};
				class GL
				{
					label = "GL";
				};
			};
		};

		class BR55 {
			label = "BR55";
			author = "Sigma";
			options[] = {"variant", "other"};
			class variant {
				alwaysSelectable = 1;
				label = "Model";
				values[] = {
					"BR55",
					"BR55HB"
				};
				class BR55 {
					label = "BR55";
				};
				class BR55HB {
					label = "BR55-HB";
				};
			};
			class other
			{
				alwaysSelectable = 1;
				label = "Underbarrel";
				values[] = { "none","GL" };
				class none
				{
					label = "None";
				};
				class GL
				{
					label = "GL";
				};
			};
		};

		class ARM {
			label = "ARM-37";
			author = "Sigma";
			options[] = { "variant", "other" };
			class variant {
				alwaysSelectable = 1;
				label = "Model";
				values[] = {
					"Standard",
					"DMR"					
				};
				class Standard {
					label = "Standard";
				};
				class DMR {
					label = "DMR";
				};

			};
			class other
			{
				alwaysSelectable = 1;
				label = "Underbarrel";
				values[] = { "none","GL","SHT"};
				class none
				{
					label = "None";
				};
				class GL
				{
					label = "GL";
				};
				class SHT {
					label = "Breacher";
				};
			};
		};
		
		class RiotShield {
			label = "Riot Shield";
			author = "Sigma";
			options[] = { "weapon", "camo"};

			class weapon {
				alwaysSelectable = 1;
				label = "Model";
				values[] = {
					"M6G",
					"M6C",
					"M7",
					"Bulldog"				
				};
				class M6G {
					label = "M6G";
				};
				class M6C {
					label = "M6C";
				};
				class M7 {
					label = "M7";
				};
				class Bulldog {
					label = "Bulldog";
				};
			};
			class camo {
				alwaysSelectable = 1;
				label = "Camo";
				values[] =
				{
					"Standard",
					"Urban",
					"Snow",
					"Desert"
				};
				class Standard
				{
					label = "Standard";
					image = "#(rgb,8,8,3)color(0.404,0.427,0.329,1)";
				};
				class Snow
				{
					label = "Snow";
					image = "#(rgb,8,8,3)color(0.804,0.804,0.804,1)";
				};
				class Desert
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.494,0.439,0.361,1)";
				};
				class Urban
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.255,0.255,0.255,1)";
				};
			};
		};
		class SRS {
			label = "SRS99";
			author = "Sigma";
			options[] = { "weapon" };

			class weapon {
				alwaysSelectable = 1;
				label = "Model";
				values[] = {
					"AM",
					"Fang",
					"C",
					"D"
				};
				class AM {
					label = "SRS99-AM";
				};
				class Fang {
					label = "SRS99C (Fang)";
				};
				class C {
					label = "SRS99C";
				};
				class D {
					label = "SRS99D";
				};
			};
		};

		class Mk11 {
			label = "Mk11";
			author = "Sigma";
			options[] = { "camo" };
			class camo {
				alwaysSelectable = 1;
				label = "Camo";
				values[] = {
					"Black",
					"Olive",
					"Desert"
				};
			};
		};

		class Commando {
			label = "Commando";
			author = "Sigma";
			options[] = { "camo" };
			class camo {
				alwaysSelectable = 1;
				label = "Camo";
				values[] =
				{
					"Olive",
					"Black",
					"White",
					"Red",
					"Blue",
					"Tan"
				};
				class Olive {
					label = "Olive";
					image = "#(rgb,8,8,3)color(0.404,0.427,0.329,1)";
				};
				class Black {
					label = "Black";
					image = "#(rgb,8,8,3)color(0,0,0,1)";
				};
				class White {
					label = "White";
					image = "#(rgb,8,8,3)color(0.7,0.7,0.7,1)";
				};
				class Red {
					label = "Red";
					image = "#(rgb,8,8,3)color(0.69,0.12,0.2,1)";
				};
				class Blue {
					label = "Blue";
					image = "#(rgb,8,8,3)color(0.07,0.12,0.75,1)";
				};
				class Tan {
					label = "Tan";
					image = "#(rgb,8,8,3)color(0.82,0.70,0.54,1)";
				};
			};
		};

		class M7 {
			label = "M7";
			author = "Sigma";
			options[] = { "variant" };
			class variant {
				alwaysSelectable = 1;
				label = "Model";
				values[] =
				{
					"Caseless",
					"Fleet"
				};
				class Caseless {
					label = "Caseless";
				};
				class Fleet {
					label = "Fleet";
				};
			};
		};
		
		class MRS {
			label = "MRS";
			author = "Sigma";
			options[] = {"variant"};
			class variant {
				alwaysSelectable = 1;
				label = "Model";
				values[] =
				{
					"MRS10",
					"MRS10LS1"
				};
				class MRS10 {
					label = "MRS-10";
				};
				class MRS10LS1 {
					label = "MRS-10L-S1";
				};
			};
		};
		
		class M45 {
			label = "M45";
			author = "Sigma";
			options[] = { "variant" };
			class variant {
				alwaysSelectable = 1;
				label = "Model";
				values[] =
				{
					"M45",
					"M45_Tac",
					"M45E",
					"M45E_Tac"
				};
				class M45 {
					label = "M45";
				};
				class M45_Tac {
					label = "M45 Tac";
				};
				class M45E {
					label = "M45E";
				};
				class M45E_Tac {
					label = "M45E Tac";
				};
			};
		};
		class Bulldog {
			label = "Bulldog";
			author = "Sigma";
			options[] = { "variant" };
			class variant {
				alwaysSelectable = 1;
				label = "Camo";
				values[] =
				{
					"Base",
					"Winter",
					"Desert",
					"Olive",
					"Innie"
				};
				class Base {
					label = "Standard";
				};
				class Winter {
					label = "Winter";
				};
				class Desert {
					label = "Desert";
				};
				class Olive {
					label = "Olive";
				};
				class Innie {
					label = "Innie";
				};
			};
		};
		class M739 {
			label = "M739";
			author = "Sigma";
			options[] = { "variant" };
			class variant {
				alwaysSelectable = 1;
				label = "Camo";
				values[] =
				{
					"Black",
					"White"
				};
				class Black {
					label = "Black";
				};
				class White {
					label = "White";
				};
			};
		};
	};
};
class XtdGearInfos {
	class CfgWeapons {
		//M739
		class 53rd_UNSC_M739{
			model = "M739";
			variant = "Black";
		};	
		class 53rd_UNSC_M739_White{
			model = "M739";
			variant = "White";
		};

		//M45
		class 53rd_UNSC_M45{
			model = "M45";
			variant = "M45";
		};
		class 53rd_UNSC_M45_Tac{
			model = "M45";
			variant = "M45_Tac";
		};
		class 53rd_UNSC_M45E{
			model = "M45";
			variant = "M45E";
		};
		class 53rd_UNSC_M45E_Tac{
			model = "M45";
			variant = "M45E_Tac";
		};

		//Bulldog
		class 53rd_UNSC_Bulldog{
			model = "Bulldog";
			variant = "Base";
		};
		class 53rd_UNSC_Bulldog_Winter{
			model = "Bulldog";
			variant = "Winter";
		};
		class 53rd_UNSC_Bulldog_Desert{
			model = "Bulldog";
			variant = "Desert";
		};
		class 53rd_UNSC_Bulldog_Olive{
			model = "Bulldog";
			variant = "Olive";
		};
		class 53rd_UNSC_Bulldog_Innie{
			model = "Bulldog";
			variant = "Innie";
		};

		//MA5A Configurations
		class 53rd_UNSC_MA5A{
			model = "MA5";
			variant = "MA5A";
			other = "none";
		};
		class 53rd_UNSC_MA5AGL{
			model = "MA5";
			variant = "MA5A";
			other = "GL";
		};

		// MA5B Configurations
		class 53rd_UNSC_MA5B{
			model = "MA5";
			variant = "MA5B";
			other = "none";
		};
		class 53rd_UNSC_MA5BGL{
			model = "MA5";
			variant = "MA5B";
			other = "GL";
		};

		// MA5C Configurations
		class 53rd_UNSC_MA5C{
			model = "MA5";
			variant = "MA5C";
			other = "none";
		};
		class 53rd_UNSC_MA5CGL{
			model = "MA5";
			variant = "MA5C";
			other = "GL";
		};

		//BR55 
		class 53rd_UNSC_br55{
			model = "BR55";
			variant = "BR55";
			other = "none";
		};
		class 53rd_UNSC_br55_gl{
			model = "BR55";
			variant = "BR55";
			other = "GL";
		};
		class 53rd_UNSC_br55_HB{
			model = "BR55";
			variant = "BR55HB";
			other = "none";
		};
		class 53rd_UNSC_br55_HB_gl{
			model = "BR55";
			variant = "BR55HB";
			other = "GL";
		};

		//ARM-37
		class 53rd_UNSC_ARM37{
			model = "ARM";
			variant = "Standard";
			other = "none";
		};
		class 53rd_UNSC_ARM37_DMR{
			model = "ARM";
			variant = "DMR";
			other = "none";
		};
		class 53rd_UNSC_ARM37_GL{
			model = "ARM";
			variant = "Standard";
			other = "GL";
		};
		class 53rd_UNSC_ARM37_SHT{
			model = "ARM";
			variant = "Standard";
			other = "SHT";
		};

		//MA32
		class 53rd_MA32{
			model = "MA32";
			other = "none";
		};
		class 53rd_MA32GL{
			model = "MA32";
			other = "GL";
		};

		//MA37
		class 53rd_MA37{
			model = "MA37";
			other = "none";
		};
		class 53rd_MA37GL{
			model = "MA37";
			other = "GL";
		};

		//Riot Shields
		class 53rd_M6G_Riot_Shield{
			model = "RiotShield";
			weapon = "M6G";
			camo = "Standard";
		};
		class 53rd_M6G_Riot_Shield_Urban{
			model = "RiotShield";
			weapon = "M6G";
			camo = "Urban";
		};
		class 53rd_M6G_Riot_Shield_Snow{
			model = "RiotShield";
			weapon = "M6G";
			camo = "Snow";
		};
		class 53rd_M6G_Riot_Shield_Desert{
			model = "RiotShield";
			weapon = "M6G";
			camo = "Desert";

		};

		class 53rd_M6C_Riot_Shield{
			model = "RiotShield";
			weapon = "M6C";
			camo = "Standard";
		};
		class 53rd_M6C_Riot_Shield_Urban{
			model = "RiotShield";
			weapon = "M6C";
			camo = "Urban";
		};
		class 53rd_M6C_Riot_Shield_Snow{
			model = "RiotShield";
			weapon = "M6C";
			camo = "Snow";
		};		
		class 53rd_M6C_Riot_Shield_Desert{
			model = "RiotShield";
			weapon = "M6C";
			camo = "Desert";
		};

		class 53rd_M7_Riot_Shield{
			model = "RiotShield";
			weapon = "M7";
			camo = "Standard";
		};
		class 53rd_M7_Riot_Shield_Urban{
			model = "RiotShield";
			weapon = "M7";
			camo = "Urban";
		};
		class 53rd_M7_Riot_Shield_Snow{
			model = "RiotShield";
			weapon = "M7";
			camo = "Snow";
		};
		class 53rd_M7_Riot_Shield_Desert{
			model = "RiotShield";
			weapon = "M7";
			camo = "Desert";
		};

		class 53rd_Bulldog_Riot_Shield{
			model = "RiotShield";
			weapon = "Bulldog";
			camo = "Standard";
		};
		class 53rd_Bulldog_Riot_Shield_Urban{
			model = "RiotShield";
			weapon = "Bulldog";
			camo = "Urban";
		};
		class 53rd_Bulldog_Riot_Shield_Snow{
			model = "RiotShield";
			weapon = "Bulldog";
			camo = "Snow";
		};
		class 53rd_Bulldog_Riot_Shield_Desert{
			model = "RiotShield";
			weapon = "Bulldog";
			camo = "Desert";
		};
		
		//Commando
		class 53rd_UNSC_Commando{
			model = "Commando";
			camo = "Black";
		};
		class 53rd_UNSC_Commando_Blue{
			model = "Commando";
			camo = "Blue";
		};
		class 53rd_UNSC_Commando_Standard{
			model = "Commando";
			camo = "Olive";
		};
		class 53rd_UNSC_Commando_Red{
			model = "Commando";
			camo = "Red";
		};
		class 53rd_UNSC_Commando_White{
			model = "Commando";
			camo = "White";
		};
		class 53rd_UNSC_Commando_Tan{
			model = "Commando";
			camo = "Tan";
		};

		//SRS
		class 53rd_UNSC_SRS99_AM{
			model = "SRS";
			weapon = "AM";
		};
		class 53rd_UNSC_SRS99_Fang{
			model = "SRS";
			weapon = "Fang";
		};
		class 53rd_UNSC_SRS99C{
			model = "SRS";
			weapon = "C";
		};
		class 53rd_UNSC_SRS99D{
			model = "SRS";
			weapon = "D";
		};

		//Mk11
		class 53rd_UNSC_MK11{
			model = "Mk11";
			camo = "Black";
		};
		class 53rd_UNSC_MK11_Olive{
			model = "Mk11";
			camo = "Olive";
		};		
		class 53rd_UNSC_MK11_Desert{
			model = "Mk11";
			camo = "Desert";
		};
		//M7
		class 53rd_M7{
			model = "M7";
			variant = "Fleet";
		};
		class  53rd_M7_OPTRE{
			model = "M7";
			variant = "Caseless";
		};

		//MRS10
		class 53rd_UNSC_MRS10{
			model = "MRS";
			variant = "MRS10";
		};
		class 53rd_UNSC_MRS10S1{
			model = "MRS";
			variant = "MRS10LS1";
		};
	};
};
