#include "RPN.hpp"
#include <exception>
#include <stdexcept>


bool checkArg(std::string src)
{
	int nbOperators = 0;
	int nbNumbers = 2;

	if (src.length() > 2 && !std::isdigit(src[0]) && !std::isdigit(src[1]))
		return (false);
	for (size_t i = 2; i < src.length(); i++)
	{
		if (src[i] == '+' || src[i] == '-' || src[i] == '*' || src[i] == '/')
			nbOperators++;
		else if (std::isdigit(src[i]))
			nbNumbers++;
		else
			return (false);
	}
	if (nbOperators != nbNumbers - 1){
		std::cout << "Invalid number of operator!" << std::endl;
		return (false);
	}
	return (true);
}

int main(int ac, char **av){

	if (ac != 2){
		std::cout << "You need to use: " << av[0] << "0123456789+-/*" << std::endl;
		return 0;
	}

	if (checkArg(av[1])){
		try {
			RPN a(av[1]);
			a.RpnCalculation();
		} catch (std::exception &e) {
			std::cout << "Oh wow I caught something lets see what it is:" << e.what() << std::endl;

		}
	}
	return 0;
}