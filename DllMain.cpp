/*
		Perfect Hook

		Author:		godly
		Version:	beta
		Date:		05.09.18 / 9th May 2018

		Half-Life + Mods like Counter-Strike, Team-Fortress...
		Its made both for legit and rage play
		It uses OpenGL for the reason its what i know best + its just simpler, especially in this game
		Enjoy and have fun
*/

// Include global file
#include "DllMain.h"

// First function to get called
BOOL WINAPI DllMain(HANDLE _DllHandle, DWORD _Reason, void* _Reserved)
{
	// On Dynamic Link Library injection
	if (_Reason == DLL_PROCESS_ATTACH)
	{
		return TRUE;
	}

	// On Dynamic Link Library removal
	if (_Reason == DLL_PROCESS_DETACH)
	{

	}

	return FALSE;
}