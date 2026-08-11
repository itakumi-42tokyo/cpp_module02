#ifndef FIXED_H
#define FIXED_H


class Fixed {
	private:
		int fixedPointNumber_;
		static const int fractionalBits_ = 8;

	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed& a);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
