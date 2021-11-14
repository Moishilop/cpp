#include "iostream"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
	me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    std::cout << "Let's unequip me " << std::endl;
    std::cout << "--------" << std::endl;
    me->unequip(1);
    std::cout << "0 : " << std::endl;
    me->use(0, *bob);
    std::cout << "1 : " << std::endl;
    me->use(1, *bob);
    std::cout << "2 : " << std::endl;
    me->use(2, *bob);
    std::cout << "--------" << std::endl;
    std::cout << "Let's equip me " << std::endl;
    std::cout << "--------" << std::endl;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << "0 : " << std::endl;
    me->use(0, *bob);
    std::cout << "1 : " << std::endl;
    me->use(1, *bob);
    std::cout << "2 : " << std::endl;
    me->use(2, *bob);
    std::cout << "3 : " << std::endl;
    me->use(3, *bob);
    std::cout << "--------" << std::endl;
    delete bob;
    delete me;
    delete src;
    return 0;
}