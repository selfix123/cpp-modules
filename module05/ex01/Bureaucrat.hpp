#pragma once

#include <stdexcept>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	// Constructors / Destructor
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &inst);
	~Bureaucrat();

	// Operator Overload
	Bureaucrat& operator=(const Bureaucrat &rhs);

	// Functions

	int getGrade() const;
	std::string getName() const;

	void setGrade(int grade);

	void Increment();
	void Decrement();

	void signForm(Form &form);

	class GradeTooLowException : public std::exception{
		public: 
			const char *what(void) const throw();
	};
	class GradeTooHightException : public std::exception{
		public: 
			const char *what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs);

// Bureaucrat_HPP