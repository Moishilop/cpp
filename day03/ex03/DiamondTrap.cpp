#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 30;
    std::cout << "\x1b[33mDefault constructor of DIAMOND has been called\x1b[0m" << std:: endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 30;
    std::cout << "\x1b[33mThe param.constructor of DIAMOND has been called\x1b[0m" << std:: endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
    this->name = copy.name;
	this->hitpoints = copy.hitpoints;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    std::cout << "\x1b[33mThe copy constructor of DIAMOND has been called\x1b[0m" << std:: endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamond)
{
    this->name = diamond.name;
	this->hitpoints = diamond.hitpoints;
    this->energy_points = diamond.energy_points;
    this->attack_damage = diamond.attack_damage;
    std::cout << "\x1b[33mOperator of DIAMOND has been called\x1b[0m" << std:: endl;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "\x1b[33mDestructor of DIAMOND has been called\x1b[0m" << std:: endl;
}

void DiamondTrap::info(void)
{
    std::cout << "diamond.name " << name << std::endl;
    std::cout << "diamond.hitpoints " << hitpoints << std::endl;
    std::cout << "diamond.energy_points " << energy_points << std::endl;
    std::cout << "diamond.attack_damage " << attack_damage << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout<< "name is " << name << ", clapTrap_name is " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    this->ScavTrap::attack(target);
}