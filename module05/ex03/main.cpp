#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void){

std::cout << "-----RobotForm-----" << std::endl;
std::cout << std::endl;
std::cout << "---test1 ok---" << std::endl;
std::cout << std::endl;
	try{
		Bureaucrat bob("bob", 45);
		AForm *robot = new RobotomyRequestForm("bob");
		std::cout << bob << std::endl;
		bob.signForm(*robot);
		bob.executeForm(*robot);
		delete robot;
	}	
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 14;
}