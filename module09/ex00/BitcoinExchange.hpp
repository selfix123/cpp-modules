#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <stdexcept>

class BitcoinExchange
{
private:
	std::map<std::string, float> 	_map;
	std::ifstream 		_file[2];
	std::string 		_date;
	float				_value;
	std::string			_path;
	std::string			_line;

public:
	// Constructors / Destructor
	BitcoinExchange();
	BitcoinExchange(std::string str);
	BitcoinExchange(const BitcoinExchange &inst);
	~BitcoinExchange();

	// Operator Overload
	BitcoinExchange& operator=(const BitcoinExchange &rhs);

	// Functions
	void checkIfCsv(const std::string csvFile);
	void fillMap();
	void checkHeader();
};
