#include "Karen.hpp"

Karen::Karen()
{
    message[0] = &Karen::debug;
    message[1] = &Karen::error;
    message[2] = &Karen::warning;
    message[3] = &Karen::info;
}

Karen::~Karen(){}

void Karen::debug(void)
{
    std::cout << "DEBUG: I love to get extra bacon for " 
    "my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
    "I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "INFO: I cannot believe adding extra "
    "bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. "
    "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "ERROR: This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level )
{
    std::string s[4] = {"DEBUG", "ERROR", "WARNING", "INFO"};
    int i;

    i = 0;
    while (i < 4 && level.compare(s[i]) != 0)
        i++;
    (this->*message[i])();
}
