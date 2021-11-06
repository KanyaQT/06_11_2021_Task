#include "dynamic_array+template.h"

int main()
{
    DynamicArray<int>* d = new DynamicArray<int>();

    d->append(1);
    d->append(5);
    d->append(3);
    d->append(4);
    d->append(6);

    delete d;
}
