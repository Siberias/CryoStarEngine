#include "Precompiled.h"

#include "LogType.h"

using namespace CryoStar;

std::map<LogType, std::string> LogTypeSerialisation::s_serialisationMap;
std::map<std::string, LogType> LogTypeSerialisation::s_deserialisationMap;

void LogTypeSerialisation::InitialiseSerialisation()
{
	s_serialisationMap = 
	{
		{ LogType::DEBUG,	"DEBUG"		},
		{ LogType::INFO,	"INFO"		},
		{ LogType::WARNING, "WARNING"	},
		{ LogType::ERROR,	"ERROR"		},
		{ LogType::VERBOSE,	"VERBOSE"	}
	};

	s_deserialisationMap =
	{
		{ "DEBUG",	 LogType::DEBUG		},
		{ "INFO",	 LogType::INFO		},
		{ "WARNING", LogType::WARNING	},
		{ "ERROR",	 LogType::ERROR,	},
		{ "VERBOSE", LogType::VERBOSE	}
	};
}

const std::string& LogTypeSerialisation::AsString(const LogType& logType)
{
	return s_serialisationMap[logType];
}

const LogType& LogTypeSerialisation::AsType(const std::string& logString)
{
	return s_deserialisationMap[logString];
}