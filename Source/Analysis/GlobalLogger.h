#pragma once

namespace CryoStar
{
	//Utility functions to enable easy logging anywhere in the code
	namespace Logging
	{
		void LogDebug	(const std::string& tag, const std::string& message);
		void LogInfo	(const std::string& tag, const std::string& message);
		void LogWarning	(const std::string& tag, const std::string& message);
		void LogError	(const std::string& tag, const std::string& message);
		void LogVerbose	(const std::string& tag, const std::string& message);
	}
}