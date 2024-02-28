#include "RPN.hpp"
#include <exception>
#include <stdexcept>

int main(int ac, char **av){

	if (ac != 2){
		std::cout << "You need to use: " << av[0] << "0123456789+-/*" << std::endl;
		return 0;
	}

	try {
		RPN a(av[1]);
		a.RpnCalculation();
	} catch (std::exception &e) {
		std::cout << "Oh wow I caught something lets see what it is:" << e.what() << std::endl;
	
	}
	return 42;
}