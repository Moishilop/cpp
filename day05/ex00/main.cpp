#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat bro("Jack", 0);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bro("Jack", 151);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat bro("Jack", 1);
    std::cout << bro << std::endl;
    try
    {
        bro.increment();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat bru("David", 150);
    std::cout << bru << std::endl;
    try
    {
        bru.decrement();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}