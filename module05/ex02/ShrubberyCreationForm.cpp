#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("Shrubbery Form", 145, 137), _target(target) {
	std::cout << "Default ShrubberyCreationForm constructor " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &inst): AForm(inst) {
	std::cout << "Copy ShrubberyCreationForm constructor " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	std::cout << "ShrubberyCreationForm operator = overide" << std::endl;
	if (this != &rhs) {
	}
	return *this;
}

void	ShrubberyCreationForm::CreationFile(Bureaucrat &bob){
	std::ofstream asciiFile;

	if (bob.getGrade() < this->getExecGrade())
		throw GradeTooLowException();
	if (!this->getIsSigned())
		throw std::invalid_argument("Form not signed!");
	asciiFile.open(this->_target + "_shrubbery");
	if (!asciiFile.is_open())
		throw std::invalid_argument("cannot open file");
	asciiFile << "..  ...  ...  ...  ...  ...  ."  << std::endl;
	asciiFile << " ...  ...   ..   ..   ..   .. " << std::endl;
	asciiFile << "..  ...  . ..:::^::. .  ...  ." << std::endl;
	asciiFile << "..  ... ..~7JYYYY5JJ~.  ...  ." << std::endl;
	asciiFile << " ...    ^5GPGBBGBBGPP?~~.  .. " << std::endl;
	asciiFile << "..  ...7YGBGBGGPPBGGPGGP7..  ." << std::endl;
	asciiFile << " ... .YBB######BGB#BGBBG5^ .. " << std::endl;
	asciiFile << "..  .:7P#&&&####BBPGB#BP7:.  ." << std::endl;
	asciiFile << " ...   ^7?55?!PBPGYYJP55:  ..." << std::endl;
	asciiFile << ".......   ..:^7Y~Y!. .:: ....." << std::endl;
	asciiFile << "..  ...  ... :7P?! ...  ...  ." << std::endl;
	asciiFile << "...  ...   ..^G7..   ..   .. " << std::endl;
	asciiFile << "..  ...  ...  ^P:  ...  ...  ." << std::endl;
	asciiFile << "...  ...   ...Y...   ..   .." << std::endl;
	asciiFile << "..  ...  ...  ...  ...  ...  ." << std::endl;

	asciiFile.close();
}
