#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::~Zombie(void) 
{
	std::cout << this->name << " disappeared" << std::endl;
	return;
}

void    Zombie::announce(void)
{
    std::cout << "<"<< name << "> BraiiiiiiinnnzzzZ..." << std::endl ;
}

void Zombie::define_name( std::string name )
{
    this->name = name;
}
