#include "iter.hpp"

class Awesome
{
    private:
        int _n;
    public:
        Awesome():_n(42){return;};
        int get(void) const {return (this->_n);}
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
    o << rhs.get();
    return (o);
}

template <typename T>
void print(T const &x)
{
    std::cout << x << std::endl;
}

int main(void)
{
    char char_ar[] = {'a', 'b', 'c', 'd', 'e'};
    int  int_ar[] = {1, 2, 3, 4, 5};
    double  double_ar[] = {1.9, 2.89, 3.1, 4.9, 522.2};
    Awesome tmp[5];

    iter(char_ar, 5, print);
    iter(int_ar, 5, print);
    iter(double_ar, 5, print);
    iter(tmp, 5, print);
}