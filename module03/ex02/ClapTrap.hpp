#pragma once

#include <iostream>


# define ITALIC "\033[3m"
# define BLACK "\e[1;30m"
# define BLUE "\033[34m"
# define RED "\033[31m"
# define RESET "\033[0m"
# define GREEN "\033[32m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"

# define CALL 1

class ClapTrap
{
protected:
	int _hitPoint;
	int _energyPoint;
	int _damagePoint;
	std::string _name;

public:
	ClapTrap(std::string name);
	ClapTrap();
	ClapTrap(const ClapTrap &inst);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap& operator=(const ClapTrap &rhs);

};
