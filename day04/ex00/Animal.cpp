#include "Animal.hpp"

Animal::Animal():type("animal")
{
    std::cout << "Hello animal!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Goodbye animal!" << std::endl;
}

Animal::Animal(const Animal& copy)
{
    this->type = copy.type;
    std::cout << "The copy constructor of animal has been called" << std:: endl;
}

Animal& Animal::operator=(const Animal& animal)
{
    this->type = animal.type;
    std::cout << "Operator of animal has been called" << std::endl;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "This is a message from abstract animal" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}