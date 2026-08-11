#include <iostream>
#include "Fixed.h"

Fixed::Fixed(void) : fixedPointNumber_(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a) : fixedPointNumber_(a.fixedPointNumber_) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& a) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointNumber_ = a.getRawBits();
	return (*this);
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
