#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _isSigned;
	const int _signGrade;
	const int _execGrade;

public:
	// Constructors / Destructor
	AForm();
	AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm &inst);
	virtual ~AForm();

	// Operator Overload
	AForm& operator=(const AForm &rhs);

	// Functions
	const std::string &getName() const;
	bool getIsSigned() const;
	const int &getSignGrade() const;
	const int &getExecGrade() const;

	void setIsSigned(bool maybe);

	void beSigned(Bureaucrat &bob);

	class GradeTooLowException : public std::exception{
		public: 
			const char *what(void) const throw();
	};
	class GradeTooHightException : public std::exception{
		public: 
			const char *what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &rhs);

// AForm_HPP