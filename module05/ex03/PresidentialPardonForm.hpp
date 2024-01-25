#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string _target;
public:
	// Constructors / Destructor
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &inst);
	~PresidentialPardonForm();

	// Operator Overload
	PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);

	// Functions
	virtual void execute(Bureaucrat const &bob)const;

	std::string getTarget()const;
};

// PresidentialPardonForm_HPP