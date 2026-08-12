#include <iostream>
#include <cmath>
#include "Fixed.h"

Fixed::Fixed(void) : fixedPointNumber_(0) {
	std::cout << "Default constructor called" << std::endl;
}

//　if input is 1, internal number is 1 << 8.
Fixed::Fixed(int a) : fixedPointNumber_(a << fractionalBits_) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float a) : fixedPointNumber_(roundf(a * (1 << fractionalBits_))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a) : fixedPointNumber_(a.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& a) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointNumber_ = a.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed& a) const {
  return this->fixedPointNumber_ > a.fixedPointNumber_;
}

bool Fixed::operator<(const Fixed& a) const {
  return this->fixedPointNumber_ < a.fixedPointNumber_;
}

bool Fixed::operator>=(const Fixed& a) const {
  return this->fixedPointNumber_ >= a.fixedPointNumber_;
}

bool Fixed::operator<=(const Fixed& a) const {
  return this->fixedPointNumber_ <= a.fixedPointNumber_;
}

bool Fixed::operator==(const Fixed& a) const {
  return this->fixedPointNumber_ == a.fixedPointNumber_;
}

bool Fixed::operator!=(const Fixed& a) const {
  return this->fixedPointNumber_ != a.fixedPointNumber_;
}

Fixed Fixed::operator+(const Fixed& a) const {
  Fixed result;
  result.setRawBits(fixedPointNumber_ + a.fixedPointNumber_);
  return result;
}

Fixed Fixed::operator-(const Fixed& a) const {
  Fixed result;
  result.setRawBits(fixedPointNumber_ - a.fixedPointNumber_);
  return result;
}

// overflow
Fixed Fixed::operator*(const Fixed& a) const {
  Fixed result;
  result.setRawBits(fixedPointNumber_ * a.fixedPointNumber_ / (1 << fractionalBits_));
  return result;
}

Fixed Fixed::operator/(const Fixed& a) const {
  Fixed result;
  result.setRawBits(fixedPointNumber_ * (1 << fractionalBits_) / a.fixedPointNumber_ );
  return result;
}

Fixed& Fixed::operator++() {
  fixedPointNumber_ += 1;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed temp = *this;
  fixedPointNumber_ += 1;
  return temp;
}

Fixed& Fixed::operator--() {
  fixedPointNumber_ -= 1;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed temp = *this;
  fixedPointNumber_ -= 1;
  return temp;
}

std::ostream& operator<<(std::ostream& os, const Fixed& a) {
	os << a.toFloat();
	return (os);
}

float Fixed::toFloat(void) const {
	float f = static_cast<float>(this->getRawBits()) / (1 << fractionalBits_);	
	return f;
}

int Fixed::toInt(void) const {
  int raw = this->getRawBits();
  int integer = raw >> fractionalBits_;
	return integer;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return (fixedPointNumber_);
}

void Fixed::setRawBits(int const raw) {
	fixedPointNumber_ = raw;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
  if (a < b)
    return a;
  return b;  
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a < b)
      return a;
  return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
  if (a > b)
    return a;
  return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
   if (a > b)
    return a;
  return b;
}
