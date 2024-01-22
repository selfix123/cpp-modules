#include "AForm.hpp"
#include <iostream>

AForm::AForm():_signGrade(25), _execGrade(150){
	std::cout << "Default AForm constructor " << std::endl;
}

AForm::AForm(std::string name,int signGrade, int execGrade):_name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << "Default AForm constructor " << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHightException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &inst):_name(inst.getName()),  _isSigned(inst.getIsSigned()),_signGrade(inst.getSignGrade()), _execGrade(inst.getExecGrade()){
	std::cout << "Copy AForm constructor " << std::endl;
	*this = inst;
}

AForm::~AForm() {
	std::cout << "AForm destructor" << std::endl;
}

AForm& AForm::operator=(const AForm &rhs) {
	std::cout << "AForm operator = overide" << std::endl;
	if (this != &rhs)
		this->_isSigned = rhs._isSigned;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const AForm &rhs){
	os << rhs.getName() << " is a Aform with " << rhs.getSignGrade() << " to sign and " << rhs.getExecGrade() << " to execute" << std::endl;
	return os;
}

void AForm::beSigned(Bureaucrat &bob){

	if (bob.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	else
		_isSigned = true;
}

const std::string &AForm::getName() const{
	return _name;
}

bool AForm::getIsSigned() const{
	return _isSigned;
}

const int &AForm::getSignGrade() const{
	return _signGrade;
}

const int &AForm::getExecGrade() const{
	return _execGrade;
}

const char *AForm::GradeTooHightException::what(void) const throw(){
	return ("Grade too hight!!");
}

const char *AForm::GradeTooLowException::what(void) const throw(){
	return ("Grade too low!!");
}
