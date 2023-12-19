#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("No type"){
	if (CALL)
		std::cout << "Default WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &inst) {
	std::cout << "Copy WrongAnimal constructor " << std::endl;
	*this = inst;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << "WrongAnimal operator = overide" << std::endl;
	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "Some WrongAnimal sound" << std::endl;
}

const std::string &WrongAnimal::getType() const{
	return this->_type;
}

WrongAnimal::~WrongAnimal(){
	if (CALL)
		std::cout << "WrongAnimal destructor" << std::endl;
}
