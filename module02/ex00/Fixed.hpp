#pragma once

#include <iostream>

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
	void setRawBits(int const raw);
	Fixed& operator=(const Fixed &rhs);
};
