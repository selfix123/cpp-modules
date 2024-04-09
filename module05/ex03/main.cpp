#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void){

std::cout << "-----RobotForm-----" << std::endl;
std::cout << std::endl;
std::cout << "---test1 ok---" << std::endl;
std::cout << std::endl;
	try{
		Intern lara;
		AForm *form = lara.makeForm("robot form", "michel");
		std::cout << form->getName() << std::endl;
		Bureaucrat tommy("tom", 1);
		Bureaucrat jimmy("jimmy", 2);
		Bureaucrat michel("michel", 100);
		std::cout << jimmy << std::endl;
		std::cout << michel << std::endl;
		michel = jimmy;
		tommy.signForm(*form);
		jimmy.executeForm(*form);
		std::cout << jimmy << std::endl;
		std::cout << michel << std::endl;
		delete form;

	}	
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}