#include "Fixed.hpp"


Fixed::Fixed(void):_value(0) {
	std::cout << "DeFault Fixed constructor " << std::endl;
}

Fixed::Fixed(const Fixed &inst) {
	std::cout << "Copy Fixed constructor " << std::endl;
	*this = inst;
}

Fixed::Fixed(int const &nb){
	this->_value = (nb << this->_bits);
	std::cout << " Int constructor called " << std::endl;
}

Fixed::Fixed(float const &nb){
	this->_value = std::roundf( nb * (1 << this->_bits));
	std::cout << " float constructor called " << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Fixed destructor" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs) {
	std::cout << "Fixed operator = overide" << std::endl;
	if (this != &rhs) {
		this->_value = rhs._value;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &rhs) {
	return os << rhs.toFloat();
}

bool Fixed::operator==(const Fixed &rhs){
	return (this->toFloat() == rhs.toFloat() ? true : false);
}

bool Fixed::operator!=(const Fixed &rhs){
	return (this->toFloat() != rhs.toFloat() ? true : false);
}

bool Fixed::operator>(const Fixed &rhs){
	return (this->toFloat() > rhs.toFloat() ? true : false);
}

bool Fixed::operator<(const Fixed &rhs){
	return (this->toFloat() < rhs.toFloat() ? true : false);
}

bool Fixed::operator>=(const Fixed &rhs){
	return (this->toFloat() >= rhs.toFloat() ? true : false);
}

bool Fixed::operator<=(const Fixed &rhs){
	return (this->toFloat() <= rhs.toFloat() ? true : false);
}

Fixed Fixed::operator+(const Fixed &rhs){
	Fixed result;

	result.setRawBits(this->_value + rhs._value);
	return result;
}

Fixed Fixed::operator-(const Fixed &rhs){
	Fixed result;

	result.setRawBits(this->_value - rhs._value);
	return (result);
}

Fixed Fixed::operator*(const Fixed &rhs){
	Fixed result;

	result.setRawBits(this->_value * rhs._value);
	return (result);
}

Fixed Fixed::operator/(const Fixed &rhs){
	Fixed result;

	result.setRawBits(this->_value / rhs._value);
	return (result);
}

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2){
	return ((nb1 < nb2) ? nb1 : nb2);
}

const Fixed &Fixed::min(Fixed const  &nb1, Fixed  const &nb2){
	return (nb1 < nb2) ? nb1 : nb2;
}

const Fixed &Fixed::max(Fixed const &nb1, Fixed const &nb2){
	return (nb1 > nb2) ? nb1 : nb2;
}

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2){
	return ((nb1 > nb2) ? nb1 : nb2);
}

Fixed &Fixed::operator++(){
	++this->_value;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed copy = *this;
	++this->_value;
	return copy;
}

Fixed &Fixed::operator--(){
	--this->_value;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed copy = *this;
	--this->_value;
	return copy;
}

float Fixed::toFloat(void) const{
	return (float)this->_value / (float)(1 << this->_bits);
}

int Fixed::toInt(void) const{
	return this->_value >> this->_bits;
}

int Fixed::getRawBits(void) const{
	return this->_value;
}

void Fixed::setRawBits(int const raw){
	this->_value = raw;
}
