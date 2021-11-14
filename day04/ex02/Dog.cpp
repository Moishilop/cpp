#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << this->brain << std::endl;
    std::cout << "Hello Dog!" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Goodbye Dog!" << std::endl;
}

Dog::Dog(const Dog& copy)
{
    this->type = copy.type;
    if (copy.brain)
        this->brain = new Brain();
    else
        this->brain = 0;
    std::cout << this->brain << std::endl;
    std::cout << "The copy constructor of Dog has been called" << std:: endl;
}

Dog& Dog::operator=(const Dog& dog)
{
    if (this == &dog)
        return (*this);
    if (this->brain)
        delete this->brain;
    this->type = dog.type;
    if (dog.brain)
        this->brain = new Brain();
    else
        this->brain = 0;
    std::cout << "Operator of Dog has been called" << std::endl;
    return (*this);
}

void Dog::makeSound()
{
    std::cout << "\x1b[34mDog says gav!\x1b[0m" << std::endl;
}
