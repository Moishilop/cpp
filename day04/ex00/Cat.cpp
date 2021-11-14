#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
    this->type = "cat";
    std::cout << "Hello Cat!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Goodbye Cat!" << std::endl;
}

Cat::Cat(const Cat& copy)
{
    this->type = copy.type;
    std::cout << "The copy constructor of Cat has been called" << std:: endl;
}

Cat& Cat::operator=(const Cat& cat)
{
    this->type = cat.type;
    std::cout << "Operator of Cat has been called" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat says meow!" << std::endl;
}