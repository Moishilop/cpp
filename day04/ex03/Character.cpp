#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "string"

Character::Character() : name(""), count(0)
{
	int i = -1;
	while (++i < 4)
		this->inventory[i] = nullptr;
}

Character::Character(std::string name) : name(name), count(0)
{
	int i = -1;
	while (++i < 4)
		this->inventory[i] = nullptr;
}

Character::Character(const Character& copy)
{
	*this = copy;
}

Character& Character::operator=(const Character& obj)
{
    this->name = obj.name;
	this->count = obj.count;
	for(int i = 0; i < 4; ++i)
		this->inventory[i] = obj.inventory[i]->clone();
    return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

Character::~Character()
{
	int i = -1;
	while (++i < this->count)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

void Character::equip(AMateria* m)
{
	if (this->count == 4 || !m)
		return ;
	for (int i = 0; i < this->count; ++i)
	{
		if (this->inventory[i] == m)
			return ;
	}
	this->inventory[this->count] = m;
	this->count++;
}

void Character::unequip(int idx)
{
	AMateria *tmp;
	if (idx >= this->count || idx < 0 || !this->inventory[idx])
		return ;
	while (idx < this->count - 1)
	{	
		tmp = this->inventory[idx];
		this->inventory[idx] = this->inventory[idx + 1];
		delete tmp;
		idx++;
	}
	this->inventory[idx] = nullptr;
	this->count--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= this->count || idx < 0 || !this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}