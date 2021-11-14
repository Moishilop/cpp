#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int>  name_vector;
 
    name_vector.push_back(3);
    name_vector.push_back(4);
    name_vector.push_back(6);
    try
    {
        std::cout << easyfind(name_vector, 3) << std::endl;
        std::cout << easyfind(name_vector, 4) << std::endl;
        std::cout << easyfind(name_vector, 6) << std::endl;
        std::cout << easyfind(name_vector, 0) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}