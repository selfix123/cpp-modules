#pragma once

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed
{
private:
	int _nbr;
	static const int _bits = 8;
	
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &inst);
	Fixed(const float &nb);
	Fixed(const int &nb);

	int getRawBits(void) const;
	int toInt(void) const;
	float toFloat(void) const;
	void setRawBits(int const raw);
	Fixed& operator=(const Fixed &rhs);

	bool operator!=(const Fixed &rhs);
	bool operator>=(const Fixed &rhs);
	bool operator<=(const Fixed &rhs);
	bool operator>(const Fixed &rhs);
	bool operator==(const Fixed &rhs);
	bool operator<(const Fixed &rhs);

	Fixed operator+(const Fixed &rhs);
	Fixed operator-(const Fixed &rhs);
	Fixed operator/(const Fixed &rhs);
	Fixed operator*(const Fixed &rhs);

	static Fixed min(Fixed &nb1, Fixed &nb2);
	static Fixed min(Fixed const &nb1, Fixed const &nb2);

	static Fixed max(Fixed &nb1, Fixed &nb2);
	static Fixed max(Fixed const &nb1, Fixed const &nb2);

	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);
};
std::ostream &operator<<(std::ostream &os, const Fixed &rhs);