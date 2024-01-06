#include "Cat.hpp"

Cat::Cat(){
	if (CALL)
		std::cout << "Default Cat constructor" << std::endl;
	this->_type = "Cat";
	this->ideas = new Brain();
}

Cat::Cat(const Cat &inst){
	if (CALL)
		std::cout << "Copy Cat constructor " << std::endl;
	*this = inst;
}

Cat& Cat::operator=(const Cat &rhs) {
	if (CALL)
		std::cout << "Cat operator = overide" << std::endl;
	if (this != &rhs) {
		_type = rhs._type;
	} 
	return *this;
}

Cat::~Cat(){
	if (CALL)
		std::cout << "Cat destuctor called" << std::endl;
	delete  this->ideas;
}

void Cat::makeSound() const{
	std::cout << " Meaow Meaow " << std::endl;
}

void Cat::setIdea(int i, std::string string){
	this->ideas->setIdea(i, string);
}

const std::string &Cat::getIdea(int i) const{
	return this->ideas->getIdea(i);
}

const std::string &Cat::getType() const{
	return this->_type;
}
