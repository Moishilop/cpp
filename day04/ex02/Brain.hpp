#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ar[100];
    public:
        Brain();
        Brain(std::string type);
        Brain(const Brain& copy);
        Brain& operator=(const Brain& brain);
        virtual ~Brain();
};

#endif