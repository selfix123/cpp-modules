#include "BitcoinExchange.hpp"
#include <stdexcept>

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

void BitcoinExchange::checkIfCsv(const std::string csvFile){
	if (!csvFile.rfind(".csv"))
		throw std::invalid_argument("File must be a csv file nothing else");
}

void BitcoinExchange::checkHeader(){
	
}
