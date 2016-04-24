#pragma once

#include <vector>

template <typename T>
void SafeDelete(T*& ptr)
{
	delete ptr;
	ptr = nullptr;
}

template <typename T>
void SafeArrayDelete(T*& ptr)
{
	delete[] ptr;
	ptr = NULL;
}

template <typename T>
void SafeVectorDelete(std::vector<T*>& vector)
{
	for (size_t i = 0; i < vector.size(); ++i)
	{
		SafeDelete(vector[i]);
	}

	vector.clear();
}