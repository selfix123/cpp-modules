#include "AAnimal.hpp"

AAnimal::AAnimal():_type("No type"){
	if (CALL)
		std::cout << "Default Aanimal constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &inst) {
	std::cout << "Copy AAnimal constructor " << std::endl;
	*this = inst;
}

AAnimal& AAnimal::operator=(const AAnimal &rhs) {
	std::cout << "AAnimal operator = overide" << std::endl;
	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

void AAnimal::makeSound(void) const{
	std::cout << "Some Aanimal sound" << std::endl;
}

const std::string &AAnimal::getType() const{
	return this->_type;
}

AAnimal::~AAnimal(){
	if (CALL)
		std::cout << "AAnimal destructor" << std::endl;
}
