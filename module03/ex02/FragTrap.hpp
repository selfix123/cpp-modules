#pragma once

#include "ClapTrap.hpp"
#include <iostream>


class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &inst);
	~FragTrap();

	FragTrap& operator=(const FragTrap &rhs);
	void highFivesGuys(void) const;
	void attack(std::string name);
	void error_checker(void) const;

};