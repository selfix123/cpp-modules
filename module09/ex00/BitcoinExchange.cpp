#include "BitcoinExchange.hpp"
#include <cstddef>
#include <map>
#include <stdexcept>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string str): _path(str), _dbPath("data.csv"){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &inst) {
	(void)inst;
}

BitcoinExchange::~BitcoinExchange() {
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &rhs) {
	if (this != &rhs) {
	}
	return *this;
}

void BitcoinExchange::printDb(void){
	std::map<std::string, float>::iterator it;
	for (it = _map.begin(); it != _map.end();it++)
		std::cout << it->first << "|" <<  it->second << std::endl;
}

void BitcoinExchange::fillMap(){
	_file[0].open(_dbPath);
	if (!_file[0].is_open())
		throw std::invalid_argument("cannot open file");
	std::string line;
	while (std::getline(_file[0], line)){
		std::istringstream iline(line);
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
		_line = skipChar(_line, ' ');
		std::istringstream iline(_line);

		if (getline(iline, _date, '|') && getline(iline, _value, '|')){
			std::istringstream(_value) >> _rate;
			if (checkDate(_date)){
				std::map<std::string, float>::iterator it;
				it = _map.lower_bound(_date);
				if (it != _map.begin() && _date != it->first)
					it--;
				if (_value != "0" && _rate == 0)
					std::cout << "error: Invalid rate format -> " << _value << std ::endl;
				else if (_rate < 0)
					std::cout << "error: Invalid format. Not a positive number -> " << _value << std::endl;
				else if (_rate > 1000)
					std::cout << "error: Invalid format. Number too large -> " << _value << std::endl;
				else
					std::cout << _date << " -> " << it->first << " -> " << _rate << " = " << _rate * it->second << std::endl;
			} 
			else
				std::cout << "error: Invalid date format -> " << _date << std::endl;
		}
		else
			std::cout << "error: Invalid line format -> " << _line << std::endl; 
	}
	_file[1].close();
}

int BitcoinExchange::nbrOfDay(int month){
	switch (month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			return 28;
		default:
			return 0;
	}
}

bool BitcoinExchange::checkDate(std::string str){
	if (str[4] != '-' || str[7] != '-' || str.length() != 10)
		return false;
	for (size_t i = 0; i < str.length();i++)
		if (!isdigit(str[i]) && str[i] != '-')
			return false;
	std::istringstream dates(str);
	int year, month, days;
	char delim;
	if ((dates >> year >> delim >> month >> delim >> days)){
		int nbrDay = nbrOfDay(month);
		if (days > 0 && days <= nbrDay)
			return true;
		else
			return false;
	}
	else
		return false;
	return true;
}

std::string BitcoinExchange::skipChar(const std::string &line, char c){
	std::string temp;
	for (size_t i = 0; i < line.length();i++)
		if (line[i] != c)
			temp += line[i];
	return temp;
}
