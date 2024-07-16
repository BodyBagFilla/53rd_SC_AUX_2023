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
		
		//add camo to these later
		class RiotShield {
			label = "Riot Shield";
			author = "Sigma";
			options[] = { "weapon" };

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
			/*class camo
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
				};*/
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
					"Fang"
				};
				class AM {
					label = "SRS99-AM";
				};
				class Fang {
					label = "SRS99 (Fang)";
				};

			};
		};
	};
};
class XtdGearInfos {
	class CfgWeapons {
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
		};
		class 53rd_M6C_Riot_Shield{
			model = "RiotShield";
			weapon = "M6C";
		};
		class 53rd_M7_Riot_Shield{
			model = "RiotShield";
			weapon = "M7";
		};
		class 53rd_Bulldog_Riot_Shield{
			model = "RiotShield";
			weapon = "Bulldog";
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
	};
};
