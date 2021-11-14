#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
    this->type = "dog";
    std::cout << "Hello Dog!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Goodbye Dog!" << std::endl;
}

Dog::Dog(const Dog& copy)
{
    this->type = copy.type;
    std::cout << "The copy constructor of Dog has been called" << std:: endl;
}

Dog& Dog::operator=(const Dog& dog)
{
    this->type = dog.type;
    std::cout << "Operator of Dog has been called" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog says gav!" << std::endl;
}
