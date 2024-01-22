#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string _target;
public:
	// Constructors / Destructor
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &inst);
	~ShrubberyCreationForm();

	// Operator Overload
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);

	// Functions
	void CreationFile(Bureaucrat &bob);
};

// ShrubberyCreationForm_HPP