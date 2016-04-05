#include <iostream>

#include <Analysis/WindowsLogger.h> //TODO: Move out and define for windows only

using namespace CryoStar;

int main(int argc, char* argv)
{
	//TODO: Make a game loop

	WindowsLogger logger;
	logger.LogDebug("Hello down there!", "Main");

	return 0;
}