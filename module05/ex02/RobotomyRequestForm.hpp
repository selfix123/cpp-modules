#pragma once

#include "AForm.hpp"
#include <iostream>
#include <unistd.h>

class RobotomyRequestForm : public AForm
{
private:
	std::string _target;

public:
	// Constructors / Destructor
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &inst);
	~RobotomyRequestForm();

	// Operator Overload
	RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);

	// Functions
	virtual void execute(Bureaucrat const &bob) const;

	std::string getTarget() const;

};

// RobotomyRequestForm_HPP