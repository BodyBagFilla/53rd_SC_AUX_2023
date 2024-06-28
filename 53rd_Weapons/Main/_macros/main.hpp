// ============================================================================== Configuration

	#define MACRO_AUTHOR "21st SAB"
	#define MACRO_AUTHOR_PPL "21st SAB"
	#define MACRO_MODNAME 21st_SAB
	#define MACRO_MODNAME_SCRIPT aux_21stSAB
	#define MACRO_MOD_VERSION 0.0.0a
    #define MACRO_MOD_DISPLAY_TAG [21st SAB]

// ============================================================================== End Configuration

// ============================================================================== Macro Functions
	#define MACRO_QUOTE(toQuote) #toQuote

	#define MACRO_QUOTE_SINGLE(toQuote) '##toQuote##'

	#define MACRO_UNDERSCORE_CONCAT(var1,var2) ##var1##_##var2

	#define MACRO_PATCH_NAME(component) MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME,MACRO_UNDERSCORE_CONCAT(patch,component))

	#define MACRO_ITEM_XX(a,b) class _xx_##a {name = a; count = b;}
	#define MACRO_MAG_XX(a,b) class _xx_##a {magazine = a; count = b;}
	#define MACRO_WEAP_XX(a,b) class _xx_##a {weapon = a; count = b;}

	#define MACRO_FNC_NAME(title) MACRO_UNDERSCORE_CONCAT(MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME_SCRIPT,fnc),title)
	#define MACRO_VAR_NAME(varName) MACRO_UNDERSCORE_CONCAT(MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME_SCRIPT,var),varName)
	#define MACRO_EVENT_NAME(varName) MACRO_UNDERSCORE_CONCAT(MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME_SCRIPT,event),varName)
	#define MACRO_CLASSNAME(NAME) MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME,NAME)


	//displaynames TODO
	//#define MACRO_MEDICAL_ITEM_DISPLAYNAME(name) MACRO_MOD_DISPLAY_TAG name;

	// Mag counts
		#define MACRO_MAG_x1(mag)  MACRO_QUOTE(mag)
		#define MACRO_MAG_x2(mag)  MACRO_QUOTE(mag),MACRO_MAG_x1(mag)
		#define MACRO_MAG_x3(mag)  MACRO_QUOTE(mag),MACRO_MAG_x2(mag)
		#define MACRO_MAG_x4(mag)  MACRO_QUOTE(mag),MACRO_MAG_x3(mag)
		#define MACRO_MAG_x5(mag)  MACRO_QUOTE(mag),MACRO_MAG_x4(mag)
		#define MACRO_MAG_x6(mag)  MACRO_QUOTE(mag),MACRO_MAG_x5(mag)
		#define MACRO_MAG_x7(mag)  MACRO_QUOTE(mag),MACRO_MAG_x6(mag)
		#define MACRO_MAG_x8(mag)  MACRO_QUOTE(mag),MACRO_MAG_x7(mag)
		#define MACRO_MAG_x9(mag)  MACRO_QUOTE(mag),MACRO_MAG_x8(mag)
		#define MACRO_MAG_x10(mag) MACRO_QUOTE(mag),MACRO_MAG_x9(mag)
		#define MACRO_MAG_x11(mag) MACRO_QUOTE(mag),MACRO_MAG_x10(mag)
		#define MACRO_MAG_x12(mag) MACRO_QUOTE(mag),MACRO_MAG_x11(mag)
		#define MACRO_MAG_x13(mag) MACRO_QUOTE(mag),MACRO_MAG_x12(mag)
		#define MACRO_MAG_x14(mag) MACRO_QUOTE(mag),MACRO_MAG_x13(mag)
		#define MACRO_MAG_x15(mag) MACRO_QUOTE(mag),MACRO_MAG_x14(mag)

	// Script logging
		#define MACRO_DIAG_LOG "----- 21st SAB scripting log: %1 -----"
		#define MACRO_SCRIPT ""
// ============================================================================== End Macro Functions

// ============================================================================== Macro Constants

	#define MACRO_RPT_LOG "===21st SAB FUNCTION ERROR==="
// ============================================================================== End Macro Constants

// ============================================================================== Macro Mag Weights

	//#define MACRO_XXX 123
	
// ============================================================================== End Macro Mag Weights