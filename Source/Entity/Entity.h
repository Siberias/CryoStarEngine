#pragma once

#include <Management/IPoolable.h>

namespace CryoStar
{
	//TODO: Accommodate platforms that can't handle 64 bit
	typedef uint64_t EntityIDType;

	const static EntityIDType ENTITY_INVALID_IDENTITY = 0;

	class Entity
		: public IPoolable
	{
	public:
		//Construction, destruction and assignment
		Entity();
		Entity(const Entity& other);
		Entity(Entity&& other);
		virtual ~Entity();
		Entity& operator= (Entity other);
		bool operator== (const Entity& other) const;
		virtual void Swap(Entity& first, Entity& second);

		//Overrides for IPoolable
		virtual void Setup();
		virtual void Teardown();

		//Entity methods
	protected:
		void AssignIdentifier(EntityIDType identifier);

	protected:
		EntityIDType m_identifier;
		std::string m_name;
	};
}