#pragma once

namespace CryoStar
{
	class Vector3
	{
	public:
		//Construction, destruction and assignment
		Vector3();
		Vector3(const Vector3& other);
		Vector3(Vector3&& other);
		~Vector3();
		Vector3& operator= (Vector3 other);
		void Swap(Vector3& first, Vector3& second);

		//Custom constructors
		Vector3(float x, float y, float z);
		Vector3(float all);

	public:
		float X = 0.0f;
		float Y = 0.0f;
		float Z = 0.0f;
	};
}