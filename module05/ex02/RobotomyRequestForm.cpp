#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() {
	std::cout << "Default RobotomyRequestForm constructor " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &inst) {
	std::cout << "Copy RobotomyRequestForm constructor " << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	std::cout << "RobotomyRequestForm operator = overide" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}