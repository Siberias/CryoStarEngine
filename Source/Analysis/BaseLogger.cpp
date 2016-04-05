#include "BaseLogger.h"

#include <iostream>

using namespace CryoStar;

BaseLogger::BaseLogger()
{
}

BaseLogger::~BaseLogger()
{
}

void BaseLogger::LogDebug(const std::string& message, const std::string& tag)
{
	std::cout << tag << "> " << message << std::endl;
}