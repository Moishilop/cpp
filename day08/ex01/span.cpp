#include "span.hpp"

Span::Span() : _n(0) {}
Span::Span(unsigned int n): _n(n) {}

Span::Span(const Span& copy)
{
    *this = copy;
}

Span & Span::operator=(const Span &obj)
{
    this->_n = obj._n;
    this->my_vector = obj.my_vector;
    return (*this);
}

Span::~Span(){}

void Span::addNumber(int n)
{
    if (my_vector.size() == _n)
        throw TheContainerIsFull();
    else
        my_vector.push_back(n);
}

void Span::addNumber(int n, unsigned int count)
{
    if (my_vector.size() + count > _n)
        throw TheContainerIsFull();
    else
    {
        std::vector<int>::iterator it = my_vector.end() - 1;
        my_vector.insert(it, count, n);
    }
}

int Span::shortestSpan()
{
    if (my_vector.size() == 0 || my_vector.size() == 1)
        throw ThereisNoSpanToFind();
    else
    {
        std::vector <int> tmp;

        int next;
        int min = INT_MAX;

        tmp = my_vector;
        sort(tmp.begin(), tmp.end());
        std::vector<int>::iterator it = tmp.begin();
        while (it != tmp.end() - 1)
        {
            next = *(it);
            it++;
            min = std::min(min, *it - next);
        }
        return (min);
    }
}

int Span::longestSpan()
{
    if (my_vector.size() == 0 || my_vector.size() == 1)
        throw ThereisNoSpanToFind();
    else
    {
        std::vector <int> tmp;

        tmp = my_vector;
        sort(tmp.begin(), tmp.end());
        return (*(tmp.end() - 1) - *tmp.begin());
    }
}

