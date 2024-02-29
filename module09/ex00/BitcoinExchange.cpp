#include "BitcoinExchange.hpp"
#include <string>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string str): _path(str){}

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

void BitcoinExchange::fillMap(){
	_file[0].open(_path);
	if (!_file[0].is_open())
		throw std::invalid_argument("cannot open file");

	while (std::getline(_file[0], _line)){
		if (_line != "date,exchange_rate")
			throw std::invalid_argument("Invalide header in file");
		std::istringstream iline(_line);
		while (getline(iline, _date, ',') && getline(iline, _value, ',')){
		}
	}
}
