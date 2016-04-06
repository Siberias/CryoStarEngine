#include "Precompiled.h"

#include "BaseLogger.h"

#include <iostream>

using namespace CryoStar;

BaseLogger::BaseLogger()
{
}

BaseLogger::~BaseLogger()
{
}

void BaseLogger::LogDebug(const std::string& tag, const std::string& message) const
{
	Log(BuildLogMessage(LogType::DEBUG, tag, message));
}

void BaseLogger::LogInfo(const std::string& tag, const std::string& message) const
{
	Log(BuildLogMessage(LogType::INFO, tag, message));
}

void BaseLogger::LogWarning(const std::string& tag, const std::string& message) const
{
	Log(BuildLogMessage(LogType::WARNING, tag, message));
}

void BaseLogger::LogError(const std::string& tag, const std::string& message) const
{
	Log(BuildLogMessage(LogType::ERROR, tag, message));
}

void BaseLogger::LogVerbose(const std::string& tag, const std::string& message) const
{
	Log(BuildLogMessage(LogType::VERBOSE, tag, message));
}

std::string BaseLogger::BuildLogMessage(const LogType& logType, const std::string& tag, const std::string& message) const
{
	std::string builtLogMessage;

	builtLogMessage.append("<");
	builtLogMessage.append(LogTypeSerialisation::AsString(logType));
	builtLogMessage.append(">");
	builtLogMessage.append(" ");
	builtLogMessage.append(tag);
	builtLogMessage.append(": ");
	builtLogMessage.append(message);

	return builtLogMessage;
}

void BaseLogger::Log(const std::string& builtMessage) const
{
	std::cout << builtMessage << std::endl;
}