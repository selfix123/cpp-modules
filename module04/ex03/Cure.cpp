#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure"){
	std::cout << "Default Cure constructor " << std::endl;
}

Cure::Cure(const Cure &inst):AMateria(inst) {
	std::cout << "Copy Cure constructor " << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor" << std::endl;
}

Cure& Cure::operator=(const Cure &rhs) {
	std::cout << "Cure operator = overide" << std::endl;		
	return *this;
}

void	Cure::use(ICharacter &target){
	std::cout << "heal's " << target.getName() << "'s wounds" << std::endl;
}

AMateria* Cure::clone() const{
	AMateria *clone = new Cure(*this);
	return clone;
}
