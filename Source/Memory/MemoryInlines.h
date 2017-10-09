#pragma once

#include <vector>

template <typename T>
inline void SafeDelete(T*& ptr)
{
	delete ptr;
	ptr = nullptr;
}

template <typename T>
inline void SafeArrayDelete(T*& ptr)
{
	delete[] ptr;
	ptr = nullptr;
}

template <typename T>
inline void SafeVectorDelete(std::vector<T*>& vector)
{
	for (size_t i = 0; i < vector.size(); ++i)
	{
		SafeDelete(vector[i]);
	}

	vector.clear();
}