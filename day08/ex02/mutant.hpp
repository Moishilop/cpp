#include <stack>
#include <deque>
#include <iostream>
#include <iterator> 

template <typename T, typename C = std::deque<T> >

class MutantStack : public std::stack<T, C>
{
    public:
        MutantStack(){};
        MutantStack(const MutantStack<T> &copy)
        {
            *this = copy;
        }
        MutantStack & operator=(const MutantStack<T> &obj)
        {
            this->c.operator=(obj.c);
            return (*this);
        }
        virtual ~MutantStack(){};

        typedef typename std::deque<T>::iterator iterator;
        iterator begin(){return (this->c.begin());}
        iterator end(){return (this->c.end());}

};