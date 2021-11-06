#pragma once

#include "dynamic_array_node.h"

using namespace std;

template<typename T>
DynamicArrayNode<T>::DynamicArrayNode()
{
	_size = STANDARD_DYNAMIC_ARRAY_NODE_SIZE;
	_items = new T[_size];
	cout << "Node constructed with size " << _size << endl;
}

template<typename T>
DynamicArrayNode<T>::DynamicArrayNode(int size)
{
	_size = size;
	_items = new T[size];
	cout << "Node constructed with size " << size << endl;
}

template<typename T>
DynamicArrayNode<T>::~DynamicArrayNode()
{
	delete[] _items;
	cout << "Node Destructed with size " << _size << endl;
}

template<typename T>
int DynamicArrayNode<T>::size()
{
	return _size;
}

template<typename T>
T& DynamicArrayNode<T>::operator[](int position)
{
	if (position < _size)
	{
		return _items[position];
	}

	cout << "Index " << position << " is out of range" << endl;
	exit(0);
}