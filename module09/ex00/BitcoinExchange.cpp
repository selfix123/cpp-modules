#include "BitcoinExchange.hpp"
#include <cstdio>
#include <regex>
#include <stdexcept>
#include <strstream>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string str): _path(str), _dbPath("data.csv"){}

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
			throw std::invalid_argument("Invalide header");
		std::istringstream iline(_line);
		if (getline(iline, _date, ',') && getline(iline, _value, '\n')){
			std::istringstream (_value) >> _rate;
			if (_date.length() <= 10)
				_map.insert(std::make_pair(_date, _rate));
			else
				throw std::invalid_argument("Error\n not a date or invalid date format");
		}
	}
	_file[0].close();
}

void BitcoinExchange::getRate(){
	_file[1].open(_path);
	if (!_file[1].is_open())
		throw std::invalid_argument("cannot open or find file!");

	getline(_file[1], _line);
	if (_line != "date | value")
		throw std::invalid_argument("Invalid header!");
	while (getline(_file[1], _line)){
		std::istringstream iline(_line);
		if (getline(_file[1], _date, '|') && getline(_file[1], _value, '\n')){
			
		}
	}
	_file[1].close();
}

int BitcoinExchange::nbrOfDay(int year, int month){
	switch (month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			return 28;
	}
}

bool BitcoinExchange::checkDate(const std::string str){
	std::regex date("^\d{4}-\d{2}-\d{2}$");

	if (!std::regex_match(str, date))
		return false;
	for (int i = 0; i < str.length();++i)
		if (!std::isdigit(str[i]) && str[i] != '-')
			return false;
	
	std::istringstream dates(str);
	int year, month, days;
	char delim;
	if (dates >> year >> delim >> month >> days){
		int nbrDay = nbrOfDay(year, month);
		if (days > 0 && days <= nbrDay)
			return true;
		else
			return false;
	}
	return true;
}
