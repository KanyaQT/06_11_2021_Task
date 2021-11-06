#pragma once

#include <iostream>

#define STANDARD_DYNAMIC_ARRAY_NODE_SIZE 2

template<typename T>
class DynamicArrayNode
{
private:
	T* _items;
	int _size;
public:
	DynamicArrayNode();
	DynamicArrayNode(int size);
	~DynamicArrayNode();

	int size();

	T& operator[](int index);
};