#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() {
	std::cout << "Default AMateria constructor " << std::endl;
}

AMateria::AMateria(const AMateria &inst) {
	std::cout << "Copy AMateria constructor " << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &rhs) {
	std::cout << "AMateria operator = overide" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}