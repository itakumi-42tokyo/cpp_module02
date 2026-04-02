class Fixed {
	private:
		int _fixedPointNumber;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed& operator=(Fixed a);
		friend void swap(Fixed& first, Fixed& second);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );


};