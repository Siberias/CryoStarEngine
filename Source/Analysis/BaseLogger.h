#pragma once

#include <Analysis/ILogger.h>

namespace CryoStar
{
	class BaseLogger : public ILogger
	{
	public:
		BaseLogger();
		virtual ~BaseLogger();

		virtual void LogDebug	(const std::string& tag, const std::string& message) const override final;
		virtual void LogInfo	(const std::string& tag, const std::string& message) const override final;
		virtual void LogWarning	(const std::string& tag, const std::string& message) const override final;
		virtual void LogError	(const std::string& tag, const std::string& message) const override final;
		virtual void LogVerbose	(const std::string& tag, const std::string& message) const override final;

	private:
		virtual std::string BuildLogMessage(const LogType& logType, const std::string& tag, const std::string& message) const override final;
	protected:
		virtual void Log(const std::string& builtMessage) const;
	};
}