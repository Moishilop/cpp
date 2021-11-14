#include <iostream>
#include "main.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t c;

    c = reinterpret_cast<uintptr_t>(ptr);
    return (c);
}

Data* deserialize(uintptr_t raw)
{
    Data *data;

    data = reinterpret_cast<Data *>(raw);
    return (data);
}

int main(void)
{
    Data data;
    uintptr_t c;
    data.a = 14;
    Data *tmp;

    std::cout << data.a << std::endl;
    std::cout << &data.a << std::endl;
    c = serialize(&data);
    std::cout << c << std::endl;
    std::cout << deserialize(c) << std::endl;
    tmp = deserialize(c);
    std::cout << tmp->a << std::endl;
}