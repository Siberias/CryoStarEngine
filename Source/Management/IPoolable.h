#pragma once

namespace CryoStar
{
	class IPoolable
	{
		virtual void Setup() = 0;
		virtual void Teardown() = 0;
	};
}