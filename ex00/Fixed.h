class Fixed {
	private:
		int fixedPointNumber_;
		static const int fractionalBits_ = 8;

	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed& operator=(Fixed a);
		friend void swap(Fixed& first, Fixed& second);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );


};
