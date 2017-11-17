enableEnvironment [false, true];
disableRemoteSensors false; // pvp only

call compile preprocessfile "USER\setLoadoutRandomization.sqf";
[] execVM "USER\userInit.sqf";
