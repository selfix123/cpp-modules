#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PPF", 25, 5) , _target(target) {
	std::cout << "Default PresidentialPardonForm constructor " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &inst): AForm(inst) {
	std::cout << "Copy PresidentialPardonForm constructor " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	std::cout << "PresidentialPardonForm operator = overide" << std::endl;
	if (this != &rhs) {
	}
	return *this;
}

std::string PresidentialPardonForm::getTarget()const{
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &bob)const{
	if (bob.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	if (!this->getIsSigned())
		throw std::invalid_argument("Form not signed bruv!");
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}
