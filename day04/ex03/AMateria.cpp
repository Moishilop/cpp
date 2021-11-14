#include "AMateria.hpp"

AMateria::AMateria(): type(""){}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
    this->type = obj.type;
    return (*this);
}

AMateria::~AMateria(){};

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Hello " << target.getName()<< std::endl;
}