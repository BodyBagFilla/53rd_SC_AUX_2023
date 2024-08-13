Params ["_type", "_markertype"];

private _CCPNames = [
	"%1 Gamma", "%1 Delta", "%1 Epsilon",
	"%1 Zeta", "%1 Eta", "%1 Theta", 
	"%1 Iota", "%1 Kappa", "%1 Lambda",
	"%1 Mu", "%1 Nu", "%1 Xi",
	"%1 Omnicron", "%1 Pi", "%1 Rho"
];
private _id = missionNamespace getVariable ["QUI_CCPID", 0];
private _CCPID = format ["_USER_DEFINED #%1/%2/%3" , clientOwner, _id, 0];
createMarkerLocal [_CCPID, ace_player, 0, ace_player];
_CCPID setMarkerColorLocal "colorWhite";
_CCPID setMarkerTextLocal format [(_CCPNames select _id), _type];
_CCPID setMarkerPosLocal ace_player;
_CCPID setMarkerType _markerType;

if (_id == count _CCPnames - 1 ) then {
	missionNamespace setVariable ["QUI_CCPID", 0 , true];
}
else{
	missionNamespace setVariable ["QUI_CCPID", _ID + 1, true];
};