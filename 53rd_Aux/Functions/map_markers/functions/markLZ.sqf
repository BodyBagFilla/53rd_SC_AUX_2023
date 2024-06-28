Params ["_type", "_markertype"];

private _LZNames = [
	"%1 Foxtrot", "%1 Golf ", "%1 Hotel", 
	"%1 India", "%1 Juliet", "%1 Kilo", 
	"%1 Lima", "%1 Mike", "%1 November", 
	"%1 Oscar", "%1 Papa", "%1 Quebec", 
	"%1 Romeo", "%1, Seirra", "%1 Tango"
];
private _id = missionNamespace getVariable ["QUI_LZID", 0];
private _LZID = format ["_USER_DEFINED #%1/%2/%3" , clientOwner, _id, 0];//format ["LZname_%1", _id];
createMarkerLocal [_LZID, ace_player, 0, ace_player];
_LZID setMarkerColorLocal "colorYellow";
_LZID setMarkerTextLocal format [(_lzNames select _id), _type];
_LZID setMarkerPosLocal ace_player;
_LZID setMarkerType _markerType;

if (_id == count _lznames - 1 ) then {
	missionNamespace setVariable ["QUI_LZID", 0 , true];
}
else{
	missionNamespace setVariable ["QUI_LZID", _ID + 1, true];
};