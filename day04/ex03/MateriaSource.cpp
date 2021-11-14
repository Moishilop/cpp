#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(): count(0) 
{
    int i = -1;
    while (++i < 4)
        materia[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	this->count = obj.count;
	for(int i = 0; i < 4; ++i)
		this->materia[i] = obj.materia[i]->clone();
    return (*this);
}

MateriaSource::~MateriaSource()
{
    int i = -1;
    while (++i < this->count)
        delete materia[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (this->count == 4 && m == nullptr)
        return ;
	for (int i = 0; i < this->count; ++i)
	{
		if (this->materia[i] == m)
			return ;
	}
    this->materia[this->count] = m;
    this->count++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = -1;
    while (++i < 4)
    {
        if (this->materia[i]->getType() == type)
            return (this->materia[i]->clone());
    }
    return (nullptr);
}