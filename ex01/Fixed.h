#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
	private:
		int fixedPointNumber_;
		static const int fractionalBits_ = 8;

	public:
		Fixed();
		Fixed(int);
		Fixed(float);
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed& a);
		float toFloat(void) const ;
		int toInt(void) const ;
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& a);

#endif
