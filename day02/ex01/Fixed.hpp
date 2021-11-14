#include <iostream>
#include <tgmath.h>

class Fixed
{
	private:
		int fixed_point_value;
		static const int bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed &copy);
		Fixed(const int num);
		Fixed(const float num);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt(void) const;
};

std::ostream& operator<< (std::ostream& os, const Fixed &obj);