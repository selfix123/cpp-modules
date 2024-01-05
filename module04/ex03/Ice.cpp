#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {
	if (CALL)
		std::cout << "Default Ice constructor " << std::endl;
}

Ice::Ice(const Ice &inst): AMateria(inst) {
	if (CALL)
		std::cout << "Copy Ice constructor " << std::endl;
}

Ice::~Ice() {
	if (CALL)
		std::cout << "Ice destructor" << std::endl;
}

Ice& Ice::operator=(const Ice &rhs) {
	if (CALL)
		std::cout << "Ice operator = overide" << std::endl;
	return *this;
}

void	Ice::use(ICharacter &target){
	std::cout << CYAN "shoots an ice bolt at " << target.getName() << RESET << std::endl;
}

AMateria* Ice::clone() const{
	AMateria *clone = new Ice(*this);
	return clone;
}