#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Hello WrongCat!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Goodbye WrongCat!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
    this->type = copy.type;
    std::cout << "The copy constructor of WrongCat has been called" << std:: endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
    this->type = wrongCat.type;
    std::cout << "Operator of WrongCat has been called" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat says meow!" << std::endl;
}