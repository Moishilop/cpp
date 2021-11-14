#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
    this->hitpoints = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "\x1b[34mDefault constructor of FRAG has been called\x1b[0m" << std:: endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "\x1b[34mThe param.constructor of FRAG has been called\x1b[0m" << std:: endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    this->name = copy.name;
	this->hitpoints = copy.hitpoints;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    std::cout << "\x1b[34mThe copy constructor of FRAG has been called\x1b[0m" << std:: endl;
}

FragTrap& FragTrap::operator=(const FragTrap& frag)
{
    this->name = frag.name;
	this->hitpoints = frag.hitpoints;
    this->energy_points = frag.energy_points;
    this->attack_damage = frag.attack_damage;
    std::cout << "\x1b[34mOperator of FRAG has been called\x1b[0m" << std:: endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "\x1b[34mDestructor of FRAG has been called\x1b[0m" << std:: endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->name << " \x1b[34mHigh Fives!\x1b[0m" << std::endl;
}