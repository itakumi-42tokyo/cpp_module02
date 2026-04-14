#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->fixedPointNumber_ = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a) {
	std::cout << "Copy constructor called" << std::endl;
}
//*this = a; permanently loop

Fixed& Fixed::operator=(Fixed a) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointNumber_ = a.getRawBits();
	return (*this);
}

void swap(Fixed& first, Fixed& second) {
	std::swap(first.fixedPointNumber_, second.fixedPointNumber_);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPointNumber_);
}

void Fixed::setRawBits(int const raw) {
	fixedPointNumber_ = raw;	
	std::cout << "setRawBits member function called" << std::endl;
}
