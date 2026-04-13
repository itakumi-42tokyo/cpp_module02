#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->_fixedPointNumber = 0;
}

Fixed::Fixed(const Fixed& a) {
	this->_fixedPointNumber = a._fixedPointNumber;
}

Fixed& Fixed::operator=(Fixed a) {
	this->_fixedPointNumber = a._fixedPointNumber;
	return (*this);
}

void swap(Fixed& first, Fixed& second) {
	std::swap(first._fixedPointNumber, second._fixedPointNumber);
}

Fixed::~Fixed(void) {

}

int getRawBits(void) {

	return ;
}

void setRawBits(int const raw) {

}