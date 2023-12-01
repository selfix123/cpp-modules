#include "Fixed.hpp"
#include <ostream>

Fixed::Fixed():_nbr(0) {
	std::cout << "DeFault Fixed constructor " << std::endl;
}

Fixed::Fixed(const Fixed &inst) {
	std::cout << "Copy Fixed constructor " << std::endl;
	*this = inst;
}

Fixed::~Fixed() {
	std::cout << "Fixed destructor" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs) {
	std::cout << "Fixed operator = overide" << std::endl;
	if (this != &rhs) {
		this->_nbr = rhs._nbr;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &rhs) {
	return os << rhs.toFloat();
}

// bool Fixed::operator==(const Fixed &rhs){
// 	return (this->toFloat() == rhs.toFloat() ? true : false);
// }

float Fixed::toFloat(void) const{
}

int Fixed::toInt(void) const{
}

int Fixed::getRawBits(void) const{
	return this->_nbr;
}

void Fixed::setRawBits(int const raw){
	this->_nbr = raw;
}
