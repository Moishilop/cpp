#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	this->fixed_point_value = copy.fixed_point_value;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

std::ostream& operator<<(std::ostream& os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = num << Fixed::bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = (roundf)(num * (2 << 7));
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits( void ) const
{
	return (fixed_point_value);
}

void Fixed::setRawBits( int const raw )
{
	fixed_point_value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)fixed_point_value / (2 << 7));
}

int Fixed::toInt(void) const
{
	return (fixed_point_value / (2 << 7));
}

const int Fixed::bits = 8;