#include "Fixed.hpp"


Fixed::Fixed(void):_nbr(0) {
	std::cout << "DeFault Fixed constructor " << std::endl;
}

Fixed::Fixed(const Fixed &inst) {
	std::cout << "Copy Fixed constructor " << std::endl;
	*this = inst;
}

Fixed::Fixed(int const &nb){
	this->_nbr = (nb << this->_bits);
	std::cout << " Int constructor called " << std::endl;
}

Fixed::Fixed(float const &nb){
	this->_nbr = std::roundf( nb * (1 << this->_bits));
	std::cout << " float constructor called " << std::endl;
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

float Fixed::toFloat(void) const{
	return (float)this->_nbr / (float)(1 << this->_bits);
}

int Fixed::toInt(void) const{
	return this->_nbr >> this->_bits;
}

int Fixed::getRawBits(void) const{
	return this->_nbr;
}

void Fixed::setRawBits(int const raw){
	this->_nbr = raw;
}
