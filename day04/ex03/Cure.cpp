#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
}

Cure::Cure(const Cure& copy)
{
	*this = copy;
}

Cure& Cure::operator=(const Cure& obj)
{
    type = obj.type;
	return (*this);
}

Cure::~Cure(){}

AMateria* Cure::clone() const
{
	AMateria *cure = new Cure();
    return (cure);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}