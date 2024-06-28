Params ["_type", "_markertype"];

// ship classes
// systesm
// planets
// spartans
// battles


private _RPNames = [
	"%1 Foxtrot", "%1 Golf ", "%1 Hotel", 
	"%1 India", "%1 Juliet", "%1 Kilo", 
	"%1 Lima", "%1 Mike", "%1 November", 
	"%1 Oscar", "%1 Papa", "%1 Quebec", 
	"%1 Romeo", "%1, Seirra", "%1 Tango"
];
private _id = missionNamespace getVariable ["QUI_RPID", 0];
private _RPID = format ["_USER_DEFINED #%1/%2/%3" , clientOwner, _id, 0];
createMarkerLocal [_RPID, ace_player, 0, ace_player];
_RPID setMarkerColorLocal "colorYellow";
_RPID setMarkerTextLocal format [(_RPNames select _id), _type];
_RPID setMarkerPosLocal ace_player;
_RPID setMarkerType _markerType;

if (_id == count _RPNames - 1 ) then {
	missionNamespace setVariable ["QUI_RPID", 0 , true];
}
else{
	missionNamespace setVariable ["QUI_RPID", _ID + 1, true];
};