#include "Form.hpp"
#include <iostream>

Form::Form(std::string name,int signGrade, int execGrade):_name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade) {
	//std::cout << "Default Form constructor " << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHightException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &inst):_name(inst.getName()),  _isSigned(inst.getIsSigned()),_signGrade(inst.getSignGrade()), _execGrade(inst.getExecGrade()){
	//std::cout << "Copy Form constructor " << std::endl;
	*this = inst;
}

Form::~Form() {
	//std::cout << "Form destructor" << std::endl;
}

Form& Form::operator=(const Form &rhs) {
//	std::cout << "Form operator = overide" << std::endl;
	if (this != &rhs)
		this->_isSigned = rhs._isSigned;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &rhs){
	os << rhs.getName() << " is a form with " << rhs.getSignGrade() << " to sign and " << rhs.getExecGrade() << " to execute" << std::endl;
	return os;
}

void Form::beSigned(Bureaucrat &bob){

	if (bob.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	else
		_isSigned = true;
}

const std::string &Form::getName() const{
	return _name;
}

bool Form::getIsSigned() const{
	return _isSigned;
}

const int &Form::getSignGrade() const{
	return _signGrade;
}

const int &Form::getExecGrade() const{
	return _execGrade;
}

const char *Form::GradeTooHightException::what(void) const throw(){
	return ("Grade too hight!!");
}

const char *Form::GradeTooLowException::what(void) const throw(){
	return ("Grade too low!!");
}
