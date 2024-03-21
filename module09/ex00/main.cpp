#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "Use: " << av[0] << " <path>" << std::endl;
		return (0);
	}
	try
	{
		BitcoinExchange money(av[1]);
		money.fillMap();
		//money.printDb();
		money.getRate();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
