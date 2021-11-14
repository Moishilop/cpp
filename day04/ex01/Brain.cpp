#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; ++i)
        this->ar[i] = "some new idea";
    std::cout << "Hello Brain!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Goodbye Brain!" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    std::cout << "The copy constructor of Cat has been called" << std:: endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain& brain)
{
    for (int i = 0; i < 100; ++i)
        this->ar[i] = brain.ar[i];
    std::cout << "Operator of Brain has been called" << std::endl;
    return (*this);
}