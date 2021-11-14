#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hitpoints(10), energy_points(10), attack_damage(0)
{
    std::cout << "Default constructor has been called" << std:: endl;
}

ClapTrap::ClapTrap(std::string name): hitpoints(10), energy_points(10), attack_damage(0)
{
    this->name = name;
    std::cout << "The param.constructor has been called" << std:: endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "The copy constructor has been called" << std:: endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
    this->name = clap.name;
	this->hitpoints = clap.hitpoints;
    this->energy_points = clap.energy_points;
    this->attack_damage = clap.attack_damage;
    std::cout << "Operator has been called" << std:: endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor has been called" << std:: endl;
}

void ClapTrap::attack(std::string const & target)
{
    if (this->attack_damage >= 0)
    {
        std::cout<< this->name << " attack " << target << std::endl;
        this->attack_damage -= 5;
    }
    else
        std::cout<< this->name << " can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<< this->name << " takes damage " << amount << std::endl;
    if (amount > this->hitpoints)
        amount = this->hitpoints;
    this->hitpoints -= amount;
    std::cout<< this->name << " : hitpoints " << this->hitpoints << std::endl;
    if (this->hitpoints <= 0)
       std::cout<< this->name << " died " << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitpoints > 0 && this->energy_points > 0)
    {   
        this->hitpoints += amount;
		this->energy_points--;
        std::cout<< this->name << " has been repaired and returned " << amount << std::endl;
        std::cout<< this->name << " : hitpoints " << this->hitpoints << std::endl;
    }
    else
        std::cout<< this->name << " can't be repaired" << std::endl;
}