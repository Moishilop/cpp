#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_class) : name(name), weapon(weapon_class)
{
	std::cout << "Constructor of HumanA was called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor of HumanA was called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}