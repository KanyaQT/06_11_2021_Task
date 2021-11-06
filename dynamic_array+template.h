#pragma once

#include "dynamic_array.h"

using namespace std;

template<typename T>
DynamicArray<T>::DynamicArray()
{
	_nodeCount = 1;
	_nodes = new DynamicArrayNode<T>[_nodeCount];
	cout << "Dynamic array constructed" << endl;
}

template<typename T>
DynamicArray<T>::~DynamicArray()
{
	cout << "Dynamic array destroyed" << endl;
	delete[] _nodes;
}

template<typename T>
T& DynamicArray<T>::operator[](int index)
{
	cout << _nodes[0];
}

template<typename T>
void DynamicArray<T>::append(T item)
{
	int last_node_index = _size / STANDARD_DYNAMIC_ARRAY_NODE_SIZE;
	int last_item_index = _size % STANDARD_DYNAMIC_ARRAY_NODE_SIZE;

	bool need_new_node = last_node_index == _nodeCount
					  && last_item_index == 0;

	if (need_new_node)
	{
		DynamicArrayNode<T>* new_nodes = new DynamicArrayNode<T>[_nodeCount + 1];

		for (int i = 0; i < _nodeCount; i++)
		{
			new_nodes[i] = _nodes[i];
		}		

		_nodes = new_nodes;
		_nodes[_nodeCount++][0] = item;
	}
	else
	{
		_nodes[last_node_index][last_item_index] = item;
	}

	_size++;
}

template<typename T>
int DynamicArray<T>::size()
{
	return _size;
}