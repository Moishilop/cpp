#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    FragTrap frag("Frag_Boss");
    FragTrap frag_Carl("Frag_Carl");

    ScavTrap scav("Boss");
    ScavTrap b("Carl");

    DiamondTrap diamond("D");
    DiamondTrap Di(diamond);

    std::cout <<"---------------" << std::endl;
    diamond.info();
    diamond.whoAmI();
    diamond.attack("Boss");
    Di.guardGate();
    return (0);
}