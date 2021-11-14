#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::~Ice(){}

Ice::Ice(const Ice& copy)
{
	*this = copy;
}

Ice& Ice::operator=(const Ice& obj)
{
    type = obj.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *ice = new Ice();
    return (ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}