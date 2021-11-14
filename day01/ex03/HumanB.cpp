#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name)
{
	std::cout << "Constructor of HumanB was called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor of HumanB was called" << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon_class)
{
	weapon = &weapon_class;
}