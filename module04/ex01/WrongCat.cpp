#include "WrongCat.hpp"

WrongCat::WrongCat(){
	if (CALL)
		std::cout << "Default WrongCat constructor" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &inst){
	if (CALL)
		std::cout << "Copy WrongCat constructor " << std::endl;
	*this = inst;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs) {
	if (CALL)
		std::cout << "WrongCat operator = overide" << std::endl;
	if (this != &rhs) {
		_type = rhs._type;
	} 
	return *this;
}

WrongCat::~WrongCat(){
	if (CALL)
		std::cout << "WrongCat destuctor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << " Meaow Meaow " << std::endl;
}

const std::string &WrongCat::getType() const{
	return this->_type;
}
