#pragma once

#include "ClapTrap.hpp"

# define ITALIC "\033[3m"
# define BLUE "\033[34m"
# define RED "\033[31m"
# define RESET "\033[0m"
# define GREEN "\033[32m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"


class ScavTrap : public ClapTrap
{
private:
	bool _gateKeeper;

public:
	ScavTrap(std::string name);
	ScavTrap();
	ScavTrap(const ScavTrap &inst);
	~ScavTrap();

	ScavTrap& operator=(const ScavTrap &rhs);
	void guardGate();
	void attack(std::string name);
};
