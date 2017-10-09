#include "Precompiled.h"

#include "Entity.h"

#include <Analysis/GlobalLogger.h>

using namespace CryoStar;

Entity::Entity()
{
	Logging::LogDebug("Entity", "Default constructor called");
}

Entity::Entity(const Entity& other)
{
	Logging::LogDebug("Entity", "Copy constructor called");

	m_name = other.m_name;
}

Entity::Entity(Entity&& other)
{
	Swap(*this, other);
}

Entity::~Entity()
{

}

Entity& Entity::operator= (Entity other)
{
	Swap(*this, other);

	return *this;
}

void Entity::Swap(Entity& first, Entity& second)
{
	std::swap(first.m_name, second.m_name);
}