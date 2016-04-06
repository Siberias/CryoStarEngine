#include "Precompiled.h"

#include "WindowsLogger.h"

#include <Windows.h>

using namespace CryoStar;

WindowsLogger::WindowsLogger()
{

}

WindowsLogger::~WindowsLogger()
{

}

void WindowsLogger::Log(const std::string& builtMessage) const
{
	BaseClass::Log(builtMessage);

	std::string modifiedMessage = builtMessage + '\n';

	OutputDebugString(modifiedMessage.c_str());
}