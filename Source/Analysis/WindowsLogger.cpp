#include "WindowsLogger.h"

#include <Windows.h>

using namespace CryoStar;

WindowsLogger::WindowsLogger()
{

}

WindowsLogger::~WindowsLogger()
{

}

void WindowsLogger::LogDebug(const std::string & message, const std::string& tag)
{
	BaseClass::LogDebug(message);

	//Need at add a newline because the output function won't do that for us
	std::string messageModified = tag + "> " + message + '\n';

	OutputDebugString(messageModified.c_str());
}