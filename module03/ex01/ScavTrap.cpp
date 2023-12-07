#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default ScavTrap constructor " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &inst) {
	std::cout << "Copy ScavTrap constructor " << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout << "ScavTrap operator = overide" << std::endl;
	if (this != &rhs) {
	}
	return *this;
}