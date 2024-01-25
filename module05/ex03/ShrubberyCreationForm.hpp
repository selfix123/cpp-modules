#pragma once

#include "AForm.hpp"
#include <fstream>


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
	virtual void execute(Bureaucrat const &bob) const;

	std::string getTarget() const;
};

// ShrubberyCreationForm_HPP