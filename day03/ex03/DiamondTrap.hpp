#ifndef DIAMINDTRAP_HPP
# define DIAMINDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap& operator=(const DiamondTrap& diamond);
        ~DiamondTrap();
        void info(void);
        void whoAmI(void);
        void attack(std::string const & target);
};

#endif