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
    bool operator>(const Fixed& a) const;
    bool operator<(const Fixed& a) const;
    bool operator>=(const Fixed& a) const;
    bool operator<=(const Fixed& a) const;
    bool operator==(const Fixed& a) const;
    bool operator!=(const Fixed& a) const;
    
    Fixed operator+(const Fixed& a) const;
    Fixed operator-(const Fixed& a) const;
    Fixed operator*(const Fixed& a) const;
    Fixed operator/(const Fixed& a) const;
    
    Fixed& operator++();
    Fixed operator++(int); 
    Fixed& operator--();
    Fixed operator--(int);

		float toFloat(void) const ;
		int toInt(void) const ;
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
    
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& a);

#endif
