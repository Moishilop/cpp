#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout <<"CHECKING FOR '*'"<< std::endl;
	std::cout << b << std::endl;

	Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
	std::cout <<"CHECKING FOR '+'"<< std::endl;
	std::cout << c << std::endl;

	Fixed const n( Fixed( 5.05f ) - Fixed( 2 ) );
	std::cout <<"CHECKING FOR '-'"<< std::endl;
	std::cout << n << std::endl;

	Fixed const k( Fixed( 5.05f ) / Fixed( 2 ) );
	std::cout <<"CHECKING FOR '/'"<< std::endl;
	std::cout << k << std::endl;

	std::cout <<"CHECKING FOR '>'"<< std::endl;
	if (k > a)
		std::cout << k << " > " << a << std::endl;
	else
		std::cout << k << " < " << a << std::endl;

	std::cout <<"CHECKING FOR '<'"<< std::endl;
	if (c < b)
		std::cout << c << " < " << b << std::endl;
	else
		std::cout << c << " > " << b << std::endl;

	std::cout <<"CHECKING FOR '>='"<< std::endl;
	if (k >= a)
		std::cout << k << " >= " << a << std::endl;
	else
		std::cout << k << " < " << a << std::endl;

	std::cout <<"CHECKING FOR '<='"<< std::endl;
	if (c <= b)
		std::cout << c << " <= " << b << std::endl;
	else
		std::cout << c << " > " << b << std::endl;

	a = b;
	std::cout <<"CHECKING FOR '=='"<< std::endl;
	if (a == b)
		std::cout << a << " == " << b << std::endl;
	else
		std::cout << a << " != " << b << std::endl;

	std::cout <<"CHECKING FOR '!='"<< std::endl;
	if (b != c)
		std::cout << b << " != " << c << std::endl;
	else
		std::cout << b << " == " << c << std::endl;

	Fixed q;
	std::cout << "-----------" << std::endl;
	std::cout << q << std::endl;
	std::cout << ++q << std::endl;
	std::cout << q << std::endl;
	std::cout << q++ << std::endl;
	std::cout << q << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << --q << std::endl;
	std::cout << q << std::endl;
	std::cout << q-- << std::endl;
	std::cout << q << std::endl;

	std::cout << a << std::endl;
	std::cout << k << std::endl;
	std::cout << Fixed::max( a, k ) << std::endl;
	std::cout << Fixed::min( a, k ) << std::endl;
	return 0;
}