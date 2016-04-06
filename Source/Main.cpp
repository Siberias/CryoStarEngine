#include "Precompiled.h"

#include <iostream>

#include <Analysis/WindowsLogger.h> //TODO: Move out and define for windows only

#include <Analysis/LogType.h> //TODO: Move to where initialisation happens

using namespace CryoStar;

int main(int argc, char* argv)
{
	//TODO: Make a game loop

	//TODO: Move initialisation to an Initialisation function
	LogTypeSerialisation::InitialiseSerialisation();

	WindowsLogger logger;
	logger.LogDebug("Main", "Hello down there!");

	return 0;
}