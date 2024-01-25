#pragma once

#include "AForm.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern
{
private:

public:
	// Constructors / Destructor
	Intern();
	Intern(const Intern &inst);
	~Intern();

	// Operator Overload
	Intern& operator=(const Intern &rhs);

	// Functions
	AForm *makeForm(std::string name, std::string target);
};

// Intern_HPP