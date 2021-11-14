#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
    std::cout << "Hello WrongAnimal!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Goodbye WrongAnimal!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    this->type = copy.type;
    std::cout << "The copy constructor of WrongAnimal has been called" << std:: endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
    this->type = wrongAnimal.type;
    std::cout << "Operator of WrongAnimal has been called" << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "This is a message from abstract WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}