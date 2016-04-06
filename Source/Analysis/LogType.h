#pragma once

#include <map>

namespace CryoStar
{
	enum class LogType
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR,
		VERBOSE
	};

	struct LogTypeSerialisation
	{
	public:
		static void InitialiseSerialisation();

		static const std::string& AsString(const LogType& logType);
		static const LogType& AsType(const std::string& logString);

	private:
		static std::map<LogType, std::string> s_serialisationMap;
		static std::map<std::string, LogType> s_deserialisationMap;
	};
}