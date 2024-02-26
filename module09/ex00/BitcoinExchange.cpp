#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::cout << "Default BitcoinExchange constructor " << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &inst) {
	std::cout << "Copy BitcoinExchange constructor " << std::endl;
}

BitcoinExchange::~BitcoinExchange() {
	std::cout << "BitcoinExchange destructor" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &rhs) {
	std::cout << "BitcoinExchange operator = overide" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}