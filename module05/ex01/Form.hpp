#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _signGrade;
	const int _execGrade;

public:
	// Constructors / Destructor
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &inst);
	~Form();

	// Operator Overload
	Form& operator=(const Form &rhs);

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

std::ostream &operator<<(std::ostream &os, const Form &rhs);

// Form_HPP