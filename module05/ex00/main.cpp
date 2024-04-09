#include "Bureaucrat.hpp"

int main(void){

std::cout << "test1" << std::endl;
	try{
		Bureaucrat bob("bob", 150);
		std::cout << bob << std::endl;

		bob.Decrement();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

std::cout << "test2" << std::endl;
	try{
		Bureaucrat bob("bob", 23);
		std::cout << bob << std::endl;
		bob.Decrement();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

std::cout << "test3" << std::endl;
	try{
		Bureaucrat bob("bob", 1);
		std::cout << bob << std::endl;
		bob.Increment();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

std::cout << "test4" << std::endl;
	try{
		Bureaucrat bob("bob", 1);
		std::cout << bob << std::endl;
		bob.Decrement();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}