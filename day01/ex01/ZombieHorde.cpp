#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
    Zombie *mas_zomb = new Zombie[n];
    int     i;

    i = 0;
    while (i < n)
    {
        mas_zomb[i].define_name(name);
        mas_zomb[i].announce();
        i++;
    }
    return (mas_zomb);
}