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
    this->name = copy.name;
	this->hitpoints = copy.hitpoints;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    std::cout << "The copy constructor has been called" << std:: endl;
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
        std::cout<< this->name << " attacks " << target << std::endl;
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
    if (this->hitpoints > 0)
    {   
        this->hitpoints += amount;
        std::cout<< this->name << " has been repaired and returned " << amount << std::endl;
        std::cout<< this->name << " : hitpoints " << this->hitpoints << std::endl;
    }
    else
        std::cout<< this->name << " can't be repaired" << std::endl;
}

unsigned int ClapTrap::get_hitpoints(void)
{
    return (this->hitpoints);
}

unsigned int ClapTrap::get_energy_points(void)
{
    return (this->energy_points);
}

unsigned int ClapTrap::get_attack_damage(void)
{
    return (this->attack_damage);
}

std::string ClapTrap::get_name(void)
{
    return (this->name);
}

