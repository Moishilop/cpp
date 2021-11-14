#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

void identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    (a) && (std::cout << "it is class a" << std::endl);
    (b) && (std::cout << "it is class b" << std::endl);
    (c) && (std::cout << "it is class c" << std::endl);
}

void identify(Base& p)
{
    try
    {
        p  = dynamic_cast<B&>(p);
        std::cout << "it is class b" << std::endl;
    }
    catch (const std::bad_cast& e)
    {
        std::cerr << "This is not B" << std::endl;
    }
    try
    {
        p  = dynamic_cast<A&>(p);
        std::cout << "it is class a" << std::endl;
    }
    catch (const std::bad_cast& e)
    {
        std::cerr << "This is not A" << std::endl;
    }
    try
    {
        p = dynamic_cast<C&>(p);
        std::cout << "it is class c" << std::endl;
    }
    catch (const std::bad_cast& e)
    {
        std::cerr << "This is not C" << std::endl;
    }
}

Base* generate(void)
{
    int     i;
    Base *tmp = NULL;

    srand(time(NULL));
    i = rand() % 3 + 0;
    (i == 0) && (tmp = new A);
    (i == 1) && (tmp = new B);
    (i == 2) && (tmp = new C);
    return (tmp);
}

int main(void)
{
    Base *basePTR;

    basePTR = generate();
    identify(basePTR);
    Base &baseRef = *basePTR;
    identify(baseRef);

    delete basePTR;

}