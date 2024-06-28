
#define MACRO_SCRIPT "[ace map markers preinit.sqf] "

diag_log format[MACRO_DIAG_LOG,format [MACRO_SCRIPT+"Loading"]];


[["Specworks", "Auto Map Markers"], "Building Clear", ["Building Clear", "Mark Building as Clear"], "", {call QUI_fnc_MarkPosition;}, [DIK_DOWN, [false, false, false]]] call cba_fnc_addKeybind;

[["Specworks", "Auto Map Markers"], "Rally Point", ["Rally Point", "Mark Rally Point"], "", {['RP', 'hd_flag'] call QUI_fnc_MarkRP;}, [DIK_INSERT, [false, false, false]]] call cba_fnc_addKeybind;

[["Specworks", "Auto Map Markers"], "Drop Zone", ["Drop Zone", "Mark Drop Zone"], "", {['DZ', 'hd_end'] call QUI_fnc_MarkLZ;}, [DIK_LEFT, [false, false, false]]] call cba_fnc_addKeybind;

[["Specworks", "Auto Map Markers"], "Landing Zone", ["Landing Zone", "Mark Landing Zone"], "", {['LZ', 'hd_pickup'] call QUI_fnc_MarkLZ;}, [DIK_UPARROW, [false, false, false]]] call cba_fnc_addKeybind;

[["Specworks", "Auto Map Markers"], "Casualty Collection Point", ["Casualty Collection Point", "Casualty Collection Point"], "", {['CCP', 'RedCrystal'] call QUI_fnc_MarkCCP;}] call cba_fnc_addKeybind;

[["Specworks", "Auto Map Markers"], "Delete Nearest marker", ["Delete Nearest marker", "Delete Nearest marker"], "", {['hd_dot'] call QUI_fnc_DeleteMarker;}, [DIK_DELETE, [false, false, false]]] call cba_fnc_addKeybind;

[
	"\53rd_Ares\Functions\map_markers\functions\deleteMarker.sqf", 
	"QUI_fnc_DeleteMarker"
] call CBA_fnc_compileFunction;

[
	"\53rd_Ares\Functions\map_markers\functions\markCCP.sqf", 
	"QUI_fnc_MarkCCP"
] call CBA_fnc_compileFunction;

[
	"\53rd_Ares\Functions\map_markers\functions\markLZ.sqf", 
	"QUI_fnc_MarkLZ"
] call CBA_fnc_compileFunction;

[
	"\53rd_Ares\Functions\map_markers\functions\markRP.sqf", 
	"QUI_fnc_MarkRP"
] call CBA_fnc_compileFunction;

[
	"\53rd_Ares\Functions\map_markers\functions\markPosition.sqf", 
	"QUI_fnc_MarkPosition"
] call CBA_fnc_compileFunction;

diag_log format[MACRO_DIAG_LOG,format [MACRO_SCRIPT+"Loaded"]];