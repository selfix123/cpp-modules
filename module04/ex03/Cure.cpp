#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure"){
	if (CALL)
		std::cout << "Default Cure constructor " << std::endl;
}

Cure::Cure(const Cure &inst):AMateria(inst) {
	if (CALL)
		std::cout << "Copy Cure constructor " << std::endl;
}

Cure::~Cure() {
	if (CALL)
		std::cout << "Cure destructor" << std::endl;
}

Cure& Cure::operator=(const Cure &rhs) {
	if (CALL)
		std::cout << "Cure operator = overide" << std::endl;		
	return *this;
}

void	Cure::use(ICharacter &target){
	std::cout << GREEN "heal's " << target.getName() << "'s wounds" RESET << std::endl;
}

AMateria* Cure::clone() const{
	AMateria *clone = new Cure(*this);
	return clone;
}
