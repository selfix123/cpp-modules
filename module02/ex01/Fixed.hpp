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

};
std::ostream &operator<<(std::ostream &os, const Fixed &rhs);


