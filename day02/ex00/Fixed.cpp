#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point_value = copy.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value);
}

void Fixed::setRawBits( int const raw )
{
	fixed_point_value = raw;
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; }

const int Fixed::bits = 8;