#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(){
	if (CALL)
		std::cout << "Default Dog constructor" << std::endl;
	this->_type = "Dog";
	this->ideas = new Brain();
}

Dog::Dog(const Dog &inst){
	if (CALL)
		std::cout << "Copy Dog constructor " << std::endl;
	*this = inst;
}

Dog& Dog::operator=(const Dog &rhs) {
	if (CALL)
		std::cout << "Dog operator = overide" << std::endl;
	if (this != &rhs) {
		_type = rhs._type;
		this->ideas = new Brain(*rhs.ideas);
	} 
	return *this;
}

Dog::~Dog(){
	if (CALL)
		std::cout << "Dog destructor called" << std::endl;
	delete this->ideas;
}

void Dog::makeSound() const{
	std::cout << " Woof Woof" << std::endl;
}

void Dog::setIdea(int i, std::string string){
	this->ideas->setIdea(i, string);
}

const std::string &Dog::getIdea(int i) const{
	return this->ideas->getIdea(i);
}

const std::string &Dog::getType() const{
	return this->_type;
}
