#pragma once

#if defined(PLATFORM_WINDOWS)

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

#endif //PLATFORM_WINDOWS