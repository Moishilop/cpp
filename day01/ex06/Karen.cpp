#include "Karen.hpp"

Karen::Karen()
{
    message[0] = &Karen::error;
    message[1] = &Karen::warning;
    message[2] = &Karen::info;
    message[3] = &Karen::debug;
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
    std::string s[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};
    int i;

    i = 0;
    while (i < 4 && level.compare(s[i]) != 0)
        i++;
	switch(i)
	{
        case(3):
		{	
			std::cout << "[ " << s[3] << " ]" << std::endl;
			(this->*message[3])();
			i--;
			std::cout << std::endl;
		}
		case(2):
		{	
			std::cout << "[ " << s[2] << " ]" << std::endl;
			(this->*message[2])();
			i--;
			std::cout << std::endl;
		}
		case(1):
		{	
			std::cout << "[ " << s[1] << " ]" << std::endl;
			(this->*message[1])();
			i--;
			std::cout << std::endl;
		}
		case(0):
		{	
			std::cout << "[ " << s[0] << " ]" << std::endl;
			(this->*message[0])();
			break ;
			std::cout << std::endl;
		}
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}