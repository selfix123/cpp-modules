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

	std::cout << std::endl;
	std::cout << "----   Using New   ---" << std::endl;
	std::cout << std::endl;

// std::cout << "test5" << std::endl;
	Bureaucrat *Raph = NULL;
	try{
		Raph = new Bureaucrat("raph", 25);
		std::cout << *Raph << std::endl;
		Raph->Increment();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
		delete Raph;
		Raph = NULL;
	}
	delete Raph;
	std::cout << std::endl;

std::cout << "test6" << std::endl;
	try{
		Raph = new Bureaucrat("raph", 25);
		std::cout << *Raph << std::endl;
		Raph->Decrement();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
		delete Raph;
		Raph = NULL;
	}
	delete Raph;
	std::cout << std::endl;

std::cout << "test7" << std::endl;
	try{
		Raph = new Bureaucrat("raph", 0);
		std::cout << *Raph << std::endl;
		Raph->Increment();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
		delete Raph;
		Raph = NULL;
	}
	delete Raph;
	std::cout << std::endl;

std::cout << "test8" << std::endl;
	try{
		Raph = new Bureaucrat("raph", 151);
		std::cout << *Raph << std::endl;
		Raph->Increment();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
		delete Raph;
		Raph = NULL;
	}
	delete Raph;
	std::cout << std::endl;

std::cout << "test9" << std::endl;
	try{
		Raph = new Bureaucrat("raph", 150);
		std::cout << *Raph << std::endl;
		Raph->Decrement();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
		delete Raph;
		Raph = NULL;
	}
	delete Raph;
	std::cout << std::endl;

std::cout << "test10" << std::endl;
	try{
		Raph = new Bureaucrat("raph", 1);
		std::cout << *Raph << std::endl;
		Raph->Increment();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
		delete Raph;
		Raph = NULL;
	}

	delete Raph;
	return 14;
}