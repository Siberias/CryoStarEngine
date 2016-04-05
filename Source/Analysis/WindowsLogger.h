#pragma once

#include <Analysis/BaseLogger.h>

namespace CryoStar
{
	class WindowsLogger : public BaseLogger
	{
		typedef BaseLogger BaseClass;

	public:
		WindowsLogger();
		virtual ~WindowsLogger();

		virtual void LogDebug(const std::string& message, const std::string& tag = "") override;
	};
}