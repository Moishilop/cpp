#include <iostream>
#include <tgmath.h>

class Fixed
{
	private:
		int 	fixed_point_value;
		static 	const int bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed &copy);
		Fixed& operator*(const Fixed &obj);
		Fixed& operator+(const Fixed &obj);
		Fixed& operator-(const Fixed &obj);
		Fixed& operator/(const Fixed &obj);

		bool operator>(const Fixed &obj) const; 
		bool operator<(const Fixed &obj) const;
		bool operator>=(const Fixed &obj) const; 
		bool operator<=(const Fixed &obj) const;
		bool operator!=(const Fixed &obj) const;
		bool operator==(const Fixed &obj) const;

		Fixed operator++(int); //фиктивная переменная
		Fixed& operator++();
		Fixed operator--(int); //фиктивная переменная
		Fixed& operator--();

		static Fixed& min(Fixed &obj1, Fixed &obj2);
		static Fixed& max(Fixed &obj1, Fixed &obj2);
		static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
		static const Fixed& max(const Fixed& obj1, const Fixed& obj2);

		Fixed(const int num);
		Fixed(const float num);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt(void) const;
};

std::ostream& operator<< (std::ostream& os, const Fixed &obj);