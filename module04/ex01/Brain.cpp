#include "Brain.hpp"

Brain::Brain(){
	if (CALL)
		std::cout << "Default Brain contructor" << std::endl;
}

Brain::Brain(const Brain &inst){
	if (CALL)
		std::cout << "Copy Brain constructor " << std::endl;
	*this = inst;
}

Brain& Brain::operator=(const Brain &rhs) {
	if (CALL)
		std::cout << "Brain operator = overide" << std::endl;
	if (this != &rhs) {
		for(int i = 0; i < 100;i++)
			this->_ideas[i] = rhs._ideas[i];
	} 
	return *this;
}

Brain::~Brain(){
	if (CALL)
		std::cout << "Brain destructor called" << std::endl;
}

const std::string &Brain::getIdea(int i) const{
	return this->_ideas[i];
}

void Brain::setIdea(int i, std::string str){
	this->_ideas[i] = str;
}
