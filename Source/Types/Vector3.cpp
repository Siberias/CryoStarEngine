#include "Precompiled.h"

#include "Vector3.h"

#include <algorithm>

using namespace CryoStar;

Vector3::Vector3()
	: X(0.0f)
	, Y(0.0f)
	, Z(0.0f)
{

}

Vector3::Vector3(const Vector3& other)
	: Vector3(other.X, other.Y, other.Z)
{

}

Vector3::Vector3(Vector3&& other)
	: Vector3()
{
	Swap(*this, other);
}

Vector3::~Vector3()
{

}

void Vector3::Swap(Vector3& first, Vector3& second)
{
	std::swap(first.X, second.X);
	std::swap(first.Y, second.Y);
	std::swap(first.Z, second.Z);
}

Vector3& Vector3::operator= (Vector3 other)
{
	Swap(*this, other);
	
	return *this;
}

Vector3::Vector3(float x, float y, float z)
	: Vector3(X, Y, Z)
{

}

Vector3::Vector3(float all)
	: Vector3(all, all, all)
{
}


