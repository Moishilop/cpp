//
// Created by Diedre Zoom on 9/14/21.
//Construction with an unsigned int n as a parameter: creates an array of n elements, initialized by default. (Tip: try to compile int * a = new int();, then
//display *a.)

#ifndef DAY07_ARRAY_HPP
#define DAY07_ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
public:
    Array() : _n(0) { this->ar = new T; }
    Array(unsigned int n) : _n(n)
    {
        this->ar = new T[n];
        unsigned int i = 0;
        while (i < n) {
            this->ar[i] = T();
            i++;
        }
    }
    Array(const Array<T>& copy) { *this = copy; }
    Array<T> &operator=(Array<T> const &obj);

    T& operator[](const int index);
    T& operator[](const int index) const;

    int size() const;
    class MoreThanLimit : public std::exception{
    public:
        virtual const char* what() const throw()
        {
            return ("MoreThanLimit");
        }
    };
    class LessThanZero : public std::exception{
    public:
        virtual const char* what() const throw() {
            return ("LessThanZero");
        };
    };
    ~Array(){
        if (ar)
            delete[] ar;
    }
private:
    T *ar;
    unsigned int _n;
};

template <typename T>
T& Array<T>::operator[](const int index)
{
    if (index >= this->size())
        throw Array<T>::MoreThanLimit();
    if (index < 0)
        throw Array<T>::LessThanZero();
    return this->ar[index];
}

template <typename T>
T& Array<T>::operator[](const int index) const
{
    if (index >= this->size())
        throw Array<T>::MoreThanLimit();
    if (index < 0)
        throw Array<T>::LessThanZero();
    return this->ar[index];
}

template <typename T>
int Array<T>::size() const
{
    return (this->_n);
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &obj)
{
    if (this == &obj)
        return (*this);
    this->_n = obj._n;
    this->ar = new T[this->_n];
    unsigned int i = 0;
    while (i < _n) {
        ar[i] = obj.ar[i];
        i++;
    }
    return (*this);
}

#endif //DAY07_ARRAY_HPP
