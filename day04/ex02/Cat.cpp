#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    this->type = "cat";
    this->brain = new Brain();
    std::cout << this->brain << std::endl;
    std::cout << "Hello Cat!" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Goodbye Cat!" << std::endl;
}

Cat::Cat(const Cat& copy)
{
    this->type = copy.type;
    if (copy.brain)
        this->brain = new Brain();
    else
        this->brain = 0;
    std::cout << "The copy constructor of Cat has been called" << std:: endl;
}

Cat& Cat::operator=(const Cat& cat)
{
    if (&cat == this)
        return (*this);
    if (this->brain)
        delete this->brain;
    this->type = cat.type;
    if (cat.brain)
        this->brain = new Brain();
    else
        this->brain = 0;
    std::cout << this->brain << std::endl;
    std::cout << "Operator of Cat has been called" << std::endl;
    return (*this);
}

void Cat::makeSound()
{
    std::cout << "\x1b[33mCat says meow!\x1b[0m" << std::endl;
}