#include "mutant.hpp"


int main()
{
    MutantStack<int> mstack;
    MutantStack<int> new_stack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;

    mstack.pop();
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;

    mstack.push(3); 
    mstack.push(5); // 3, 5
    mstack.push(737); // 3, 5, 737
    MutantStack<int>::iterator it = mstack.begin(); 
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it; }
    std::stack<int> s(mstack);

    new_stack = mstack;
    MutantStack<int>::iterator it_new = new_stack.end();
    it_new--;
    while (!new_stack.empty())
    {
        std::cout << *it_new << std::endl;
        it_new--;
        new_stack.pop();
    }
    if (new_stack.empty())
        std::cout << "This stack is empty" << std::endl;
    else
        std::cout << "This stack is not empty" << std::endl;
    return 0;
}   