#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <stdexcept>

Intern::Intern() {
	//std::cout << "Default Intern constructor " << std::endl;
}

Intern::Intern(const Intern &inst) {
	(void) inst;
	//std::cout << "Copy Intern constructor " << std::endl;
}

Intern::~Intern() {
	//std::cout << "Intern destructor" << std::endl;
}

Intern& Intern::operator=(const Intern &rhs) {
	//std::cout << "Intern operator = overide" << std::endl;
	if (this != &rhs) {
	}
	return *this;
}

AForm *Intern::makeForm(std::string name, std::string target){
	static std::string types[] = {"president form", "robot form", "shrubbery form"};
	int i = 0;
	AForm *form = NULL;
	for (i = 0; i < 3;i++){
		if (types[i] == name)
			break;
	}
		switch (i) {
			case 0:
				form =  new PresidentialPardonForm(target);
				break;
			case 1:
				form = new RobotomyRequestForm(target);
				break;
			case 2:
				form = new ShrubberyCreationForm(target);
				break;
			default:
				throw std::invalid_argument("Invalid form!");
		}
		if (form)
			std::cout << "Intern creates " << form->getName() << std::endl;
		return form;
}
