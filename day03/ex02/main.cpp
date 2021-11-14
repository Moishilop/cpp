#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap a;
    ScavTrap c(a);
    ScavTrap scav("Boss");
    ScavTrap b("Carl");

    FragTrap frag("Frag_Boss");
    FragTrap frag_Carl("Frag_Carl");

    frag_Carl = frag;
    scav.attack("Carl");
    b.takeDamage(2);
    b.beRepaired(3);
    b.attack("Boss");
    scav.takeDamage(5);
    b.attack("Boss");
    scav.takeDamage(5);
    scav.beRepaired(3);
    c.guardGate();

    std::cout <<"---------------" << std::endl;
    frag.attack("Frag_Carl");
    frag_Carl.takeDamage(10);
    frag_Carl.beRepaired(4);
    frag.highFivesGuys();
    return (0);
}