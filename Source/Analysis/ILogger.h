#pragma once

#include <Analysis/LogType.h>

namespace CryoStar
{
	class ILogger
	{
	public:
		virtual ~ILogger() = default;

		virtual void LogDebug	(const std::string& tag, const std::string& message) const = 0;
		virtual void LogInfo	(const std::string& tag, const std::string& message) const = 0;
		virtual void LogWarning	(const std::string& tag, const std::string& message) const = 0;
		virtual void LogError	(const std::string& tag, const std::string& message) const = 0;
		virtual void LogVerbose	(const std::string& tag, const std::string& message) const = 0;

	protected:
		virtual std::string BuildLogMessage(const LogType& logType, const std::string& tag, const std::string& message) const = 0;
		virtual void Log(const std::string& builtMessage) const = 0;
	};
}