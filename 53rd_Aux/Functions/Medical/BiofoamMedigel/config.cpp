
class CfgPatches {
	class 53rd_MedicalPLACEHOLDER {
		units[] = 
        {

        };
		weapons[] = 
        {
			"53rd_biofoam",
			"53rd_medigel",
			"53rd_r_biofoam",
			"53rd_r_medigel"

        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class ace_medical_treatment
{
    class Bandaging
    {
        class OPTRE_Biofoam;
        class OPTRE_Medigel;
        class r_biofoam: OPTRE_Biofoam {};
        class r_medigel: OPTRE_Medigel {};
        class nr_biofoam: OPTRE_Biofoam {};
        class nr_medigel: OPTRE_Medigel {};
    };

};

class ace_medical_treatment_actions
{
    class Morphine;
    class OPTRE_Biofoam;
    class OPTRE_Medigel;

	class r_biofoam: OPTRE_Biofoam
	{
		displayName="[R] Biofoam";
		consumeItem=0;
		medicRequired="ace_medical_treatment_medicIV";
		callbackSuccess="fn_treatmentBandageAndPainReduction3.sqf";
		items[]=
		{
			"53rd_r_biofoam"
		};
	};

	class r_medigel: OPTRE_Medigel
	{
		displayName="[R] Medigel";
		consumeItem=0;
		medicRequired="ace_medical_treatment_medicIV";
		callbackSuccess="fn_treatmentBandageAndPainReduction3.sqf";
		items[]=
		{
			"53rd_r_medigel"
		};
	};
	class nr_biofoam: OPTRE_Biofoam
	{
		displayName="Biofoam";
		callbackSuccess="fn_treatmentBandageAndPainReduction2.sqf";
		items[]=
		{
			"53rd_biofoam"
		};
	};
	class nr_medigel: OPTRE_Medigel
	{
		displayName="Medigel";
		callbackSuccess="fn_treatmentBandageAndPainReduction2.sqf";
		items[]=
		{
			"53rd_medigel"
		};
	};
    
};

class cfgWeapons 
{

    class OPTRE_Medigel;
    class OPTRE_Biofoam;

	class 53rd_r_biofoam: OPTRE_Biofoam
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd](R) Biofoam";
	};
	class 53rd_r_medigel: OPTRE_Medigel
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd](R) Medigel";
	};
	class 53rd_biofoam: OPTRE_Biofoam
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd] Biofoam";
	};
	class 53rd_medigel: OPTRE_Medigel
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd] Medigel";
	};
};