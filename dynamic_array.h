#pragma once

#include<iostream>
#include "dynamic_array_node+template.h"

template<typename T>
class DynamicArray
{
private:
    DynamicArrayNode<T>* _nodes;
    int _size;
    int _nodeCount;
public:
    DynamicArray();
    ~DynamicArray();

    T& operator[](int index);

    void append(T newValue);
    int size();
};

