#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a;
    ScavTrap c(a);
    ScavTrap scav("Boss");
    ScavTrap b("Carl");

    scav.attack("Carl");
    b.takeDamage(2);
    b.beRepaired(3);
    b.attack("Boss");
    scav.takeDamage(5);
    b.attack("Boss");
    scav.takeDamage(5);
    scav.beRepaired(3);
    c.guardGate();
    return (0);
}