#include "component.hpp"

params ["_winName","_presetParams"];
_presetParams params ["_time",["_condition","true"],["_reminders",[0]]];

_condition = compile _condition;

_time = ["MISSION_DURATION", _time] call BIS_fnc_getParamValue;

[{
    params ["_winName","_condition"];
    [_condition, {[_this] call grad_endings_fnc_endMissionServer}, _winName] call CBA_fnc_waitUntilAndExecute;
}, [_winName,_condition], _time] call CBA_fnc_waitAndExecute;


{
    if (_time > _x) then {
        [{
            _timeText = if (_this < 60) then {format ["%1s",_this]} else {format ["%1min",round (_this/60)]};
            _messageText = format ["There are %1 left in the round",_timeText];
            ["grad_notification1",["TIME",_messageText]] remoteExec ["bis_fnc_showNotification",0,false];
        },_x,_time - _x] call CBA_fnc_waitAndExecute;
    } else {
        ERROR_1("Cannot create a %1 second reminder for timeout. Only %2 seconds max time.",_x,_time);
    };
} forEach _reminders;