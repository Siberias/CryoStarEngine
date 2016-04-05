#pragma once

namespace CryoStar
{
	class Vector3
	{
	public:
		Vector3();
		~Vector3();

		Vector3(float x, float y, float z);

	public:
		float X;
		float Y; 
		float Z;
	};
}