#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "Default constructor of SCAV has been called" << std:: endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "The param.constructor of SCAV has been called" << std:: endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    this->name = copy.name;
	this->hitpoints = copy.hitpoints;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    std::cout << "The copy constructor of SCAV has been called" << std:: endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav)
{
    this->name = scav.name;
	this->hitpoints = scav.hitpoints;
    this->energy_points = scav.energy_points;
    this->attack_damage = scav.attack_damage;
    std::cout << "Operator of SCAV has been called" << std:: endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of SCAV has been called" << std:: endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std:: endl;
}

void ScavTrap::attack(std::string const & target)
{
    if (this->attack_damage >= 0)
    {
        std::cout<< this->name << " \x1b[32mattacks\x1b[0m " << target << std::endl;
        this->attack_damage -= 5;
    }
    else
        std::cout<< this->name << " can't attack" << std::endl;
}

