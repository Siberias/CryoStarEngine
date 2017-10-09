#pragma once

namespace CryoStar
{
	class Entity
	{
	public:
		//Construction, destruction and assignment
		Entity();
		Entity(const Entity& other);
		Entity(Entity&& other);
		virtual ~Entity();
		Entity& operator= (Entity other);
		virtual void Swap(Entity& first, Entity& second);

	protected:
		std::string m_name = "";
	};
}