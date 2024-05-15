#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(){
	if (CALL)
		std::cout << "Default AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type) {
	if (CALL)
		std::cout << "AMateria constructor " << std::endl;
}

AMateria::AMateria(const AMateria &inst) {
	if (CALL)
		std::cout << "Copy AMateria constructor " << std::endl;
}

AMateria::~AMateria() {
	if (CALL)
		std::cout << "AMateria destructor" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &rhs) {
	if (CALL)
		std::cout << "AMateria operator = overide" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

void	AMateria::use(ICharacter &target){
	std::cout << "AMateria use on " << target.getName() << std::endl;
}

std::string const & AMateria::getType() const{
	return this->_type;
}