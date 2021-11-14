#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name );

int main(int argc, char **argv)
{
    std::string name;
    int n;

    if (argc != 3)
    {
        std::cout << "wrong number of args" << std::endl;
        return (0);
    }
    else
    {
        n = atoi(argv[1]);
        if (n <= 0)
            n = 1;
    }
    name = argv[2];
    Zombie *mas_zomb = zombieHorde(n, name);
    delete [] mas_zomb;
    return (0);
}