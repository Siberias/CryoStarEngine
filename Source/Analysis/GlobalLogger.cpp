#include "Precompiled.h"

#include "GlobalLogger.h"

#include <Analysis/BaseLogger.h>
#if defined(PLATFORM_WINDOWS)
#include <Analysis/WindowsLogger.h>
#endif //PLATFORM_WINDOWS

using namespace CryoStar;

#if defined(PLATFORM_WINDOWS)
CryoStar::WindowsLogger logger;
#else
CryoStar::BaseLogger logger;
#endif //PLATFORM_WINDOWS

void Logging::LogDebug(const std::string& tag, const std::string& message)
{
	logger.LogDebug(tag, message);
}

void Logging::LogInfo(const std::string& tag, const std::string& message)
{
	logger.LogInfo(tag, message);
}

void Logging::LogWarning(const std::string& tag, const std::string& message)
{
	logger.LogWarning(tag, message);
}

void Logging::LogError(const std::string& tag, const std::string& message)
{
	logger.LogError(tag, message);
}

void Logging::LogVerbose(const std::string& tag, const std::string& message)
{
	logger.LogVerbose(tag, message);
}