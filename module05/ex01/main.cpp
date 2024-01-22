#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){

std::cout << "test1" << std::endl;
	try{
		Bureaucrat bob("bob", 1);
		Form form("The one and only form", 150, 50);
		std::cout << bob << std::endl;

		bob.Decrement();
		bob.signForm(form);
		bob.Decrement();
		bob.signForm(form);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 14;
}