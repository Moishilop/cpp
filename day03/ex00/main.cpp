#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a;
    ClapTrap c(a);
    ClapTrap clap("Boss");
    ClapTrap b("Carl");

    c = clap;
    clap.attack("Carl");
    b.takeDamage(2);
    b.beRepaired(3);
    b.attack("Boss");
    clap.takeDamage(5);
    b.attack("Boss");
    clap.takeDamage(5);
    clap.beRepaired(3);
    return (0);
}