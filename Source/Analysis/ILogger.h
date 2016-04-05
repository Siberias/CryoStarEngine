#pragma once

#include <string>

namespace CryoStar
{
	class ILogger
	{
	public:
		virtual ~ILogger() = default;

		virtual void LogDebug(const std::string& message, const std::string& tag) = 0;
	};
}