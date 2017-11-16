#include "component.hpp"

params ["_configName","_winText","_winners","_winTextParams"];

if (missionNamespace getVariable ["grad_endings_endingInProgress",false]) exitWith {};
missionNamespace setVariable ["grad_endings_endingInProgress",true];
INFO_1("Ending %1 in progress.",_configName);


call GRAD_replay_fnc_stopRecord;

[{
	REPLAY_FINISHED
}, {
   params ["_configName","_winText","_winners","_winTextParams"];

   [_configName,_winText,_winners,_winTextParams] remoteExec ["grad_endings_fnc_endMissionClient",0,false];
}, [_configName,_winText,_winners,_winTextParams]] call CBA_fnc_waitUntilAndExecute;