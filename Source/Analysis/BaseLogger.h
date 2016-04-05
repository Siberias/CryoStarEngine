#pragma once

#include <Analysis/ILogger.h>

namespace CryoStar
{
	class BaseLogger : public ILogger
	{
	public:
		BaseLogger();
		virtual ~BaseLogger();

		virtual void LogDebug(const std::string& message, const std::string& tag = "") override;
	};
}