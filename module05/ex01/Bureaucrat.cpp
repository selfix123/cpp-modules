#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade) {
	std::cout << "Default Bureaucrat constructor " << std::endl;
	if (_grade < 1)
		throw GradeTooLowException();
	else if (_grade > 150)
		throw GradeTooHightException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &inst): _name(inst.getName()), _grade(inst.getGrade()) {
	std::cout << "Copy Bureaucrat constructor " << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs) {
	std::cout << "Bureaucrat operator = overide" << std::endl;
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs){
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (os);
}

void Bureaucrat::beSigned(Form &form){
	try {
		
	} catch (std::exception & e){
		
	}
}


const char *Bureaucrat::GradeTooHightException::what(void) const throw(){
	return ("Grade too hight!!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw(){
	return ("Grade too low!!");
}

std::string Bureaucrat::getName(void) const{
	return _name;
}

int Bureaucrat::getGrade(void) const{
	return _grade;
}

void Bureaucrat::Increment(){
	this->setGrade(this->getGrade() - 1);	
}

void Bureaucrat::Decrement(){
	this->setGrade(this->getGrade() + 1);
}

void Bureaucrat::setGrade(int grade){
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHightException();
	else{
		this->_grade = grade;
		std::cout << "grade is now " << this->_grade << std::endl;
	}
}
