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
	Fixed(int nb);
	Fixed(const Fixed &inst);

	int getRawBits(void) const;
	int toInt(void) const;
	float toFloat(void) const;
	void setRawBits(int const raw);
	Fixed& operator=(const Fixed &rhs);

};
std::ostream &operator<<(std::ostream &os, const Fixed &rhs);


