#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;
    std::string level;

    if (argc != 2)
		return (0);
	level = argv[1];
	karen.complain( level );
	return (0);
}
