#include "Precompiled.h"

#include "Entity.h"

#include <Analysis/GlobalLogger.h>

using namespace CryoStar;

Entity::Entity()
	: m_identifier(ENTITY_INVALID_IDENTITY)
	, m_name("")
{
	Logging::LogDebug("Entity", "Default constructor called");
}

Entity::Entity(const Entity& other)
	: Entity()
{
	Logging::LogDebug("Entity", "Copy constructor called");
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

bool Entity::operator== (const Entity& other) const
{
	return m_identifier == other.m_identifier;
}

void Entity::Swap(Entity& first, Entity& second)
{
	std::swap(first.m_identifier, second.m_identifier);
	std::swap(first.m_name, second.m_name);
}

//IPoolable Implementation
void Entity::Setup()
{
	//TODO: Retrieve an ID from the manager
}

void Entity::Teardown()
{
	//TODO: Return the ID to the manager

	m_identifier = ENTITY_INVALID_IDENTITY;
}

void CryoStar::Entity::AssignIdentifier(EntityIDType identifier)
{
	if (m_identifier != ENTITY_INVALID_IDENTITY)
	{
		Logging::LogError("Entity", "This Entity has already been assigned an Identifier!");
	}
	else
	{
		m_identifier = identifier;
	}
}