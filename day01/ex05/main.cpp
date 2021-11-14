#include "Karen.hpp"

int main(void)
{
    std::string level[4] = {"DEBUG", "ERROR", "WARNING", "INFO"};
    int i;

    Karen karen;
    while (1)
    {
        i = rand() % 4 + 0;
		std::cout << i << " ";
        karen.complain( level[i] );
        usleep(800000);
    }
    return (0);
}