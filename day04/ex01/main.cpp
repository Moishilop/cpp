#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() 
{
    std::cout << "\x1b[32mcheck copy constructor\x1b[0m"<< std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    } //tmp del here
    basic.makeSound(); //must work correctly
    std::cout << "\x1b[33mcheck overloading\x1b[0m"<< std::endl;
    Cat cat;
    {
        Cat tmp2;
        tmp2 = cat;
    }
    cat.makeSound(); //must work correctly
    std::cout << "\x1b[34mcreating of mas of objects\x1b[0m"<< std::endl;
    Animal *animal[6];
    int i = -1;
    while (++i < 6)
    {
        if (i < 3)
            animal[i] = new Dog();
        else
             animal[i] = new Cat();
        animal[i]->makeSound();
        std::cout << "--------" << std::endl;
    }
    i = -1;
    while (++i < 6)
        delete animal[i];
}
