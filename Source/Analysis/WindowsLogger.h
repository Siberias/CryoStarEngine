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

		virtual void Log(const std::string& builtMessage) const override;
	};
}