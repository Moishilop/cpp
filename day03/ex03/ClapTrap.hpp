#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
# define GREEN "\x1b[32m"
# define BLUE "\x1b[34m"
# define RED "\x1b[31m"
# define YEL "\x1b[33m"
# define NONE  "\x1b[0m"

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitpoints;
        unsigned int energy_points;
        unsigned int attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ClapTrap& operator=(const ClapTrap& clap);
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        unsigned int get_hitpoints(void);
        unsigned int get_energy_points(void);
        unsigned int get_attack_damage(void);
        std::string get_name(void);
};

#endif