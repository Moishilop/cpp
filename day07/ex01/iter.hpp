#include <iostream>

template<typename T>
void iter(T *array, int len, void(*func)(T const &x))
{
    int i = 0;
    if (!array)
        return ;
    while (i < len)
    {
        func(array[i]);
        i++;
    }
}