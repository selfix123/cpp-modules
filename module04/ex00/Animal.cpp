#include "Animal.hpp"

Animal::Animal():_type("No type"){
	if (CALL)
		std::cout << "Default animal constructor" << std::endl;
}

Animal::Animal(const Animal &inst) {
	std::cout << "Copy Animal constructor " << std::endl;
	*this = inst;
}

Animal& Animal::operator=(const Animal &rhs) {
	std::cout << "Animal operator = overide" << std::endl;
	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

void Animal::makeSound(void) const{
	std::cout << "Some animal sound" << std::endl;
}

const std::string &Animal::getType() const{
	return this->_type;
}

Animal::~Animal(){
	if (CALL)
		std::cout << "Animal destructor" << std::endl;
}
