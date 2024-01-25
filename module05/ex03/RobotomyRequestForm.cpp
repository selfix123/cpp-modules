#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("Robotomy", 72, 45), _target(target) {
	std::cout << "Default RobotomyRequestForm constructor " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &inst):AForm(inst) {
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

std::string RobotomyRequestForm::getTarget() const{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &bob) const{
	if (bob.getGrade() < this->getExecGrade())
		throw GradeTooLowException();
	else if (!this->getIsSigned())
		throw std::invalid_argument("Form not signed bizz bizz bre bre peter leur cheville");
	else{
		for (int i = 0; i < 5;i++){
			std::cout << "(Robot noise): bre bre bre bre bre bre bre bre bre bre" << std::endl;
			usleep(5000);
		}
		std::srand(static_cast<unsigned int>(std::time(0)));
		if (std::rand() % 2 == 1)
			std::cout << this->getTarget() << " has been robotomized!" << std::endl;
		else
			std::cout << this->getTarget() << " failed to robotomized!" << std::endl;
	}
}
