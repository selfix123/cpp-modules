#include "Ice.hpp"
#include <iostream>

Ice::Ice() {
	std::cout << "Default Ice constructor " << std::endl;
}

Ice::Ice(const Ice &inst) {
	std::cout << "Copy Ice constructor " << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor" << std::endl;
}

Ice& Ice::operator=(const Ice &rhs) {
	std::cout << "Ice operator = overide" << std::endl;
	return *this;
}

void	Ice::use(ICharacter &target){
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria* Ice::clone() const{
	AMateria *clone = new Ice(*this);
	return clone;
}