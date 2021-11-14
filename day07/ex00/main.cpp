#include "templates.hpp"

class Check
{
private:
    int _n;
public:
    Check(int n) : _n(n){}
    int getN() const { return (_n); }
    bool operator<(Check const &obj) { return (this->_n < obj._n );}
    bool operator>(Check const &obj) { return (this->_n > obj._n );}
};

std::ostream& operator<<(std::ostream& os, const Check &obj)
{
    os << obj.getN();
    return (os);
}

int main( void )
{   
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    Check obj_1(5);
    Check obj_2(8);
    std::cout << "val_1 " << obj_1 << "; val_2 " << obj_2 << std::endl;
    swap( obj_1, obj_2 );
    std::cout << "val_1 " << obj_1 << "; val_2 " << obj_2 << std::endl;
    std::cout << "min( obj_1, obj_2 ) = " << min( obj_1, obj_2 ) << std::endl;
    std::cout << "max( obj_1, obj_2 ) = " << max( obj_1, obj_2 ) << std::endl;

    return 0; 
}