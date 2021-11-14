#include "Zombie.hpp"

Zombie *newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
    Zombie *zomb = newZombie("Gena");
    delete zomb;

    randomChump("Vera");
    return(0);
}