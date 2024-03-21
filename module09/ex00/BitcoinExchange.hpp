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
	std::string 		_date, _value;
	float				_rate;
	std::string			_path, _dbPath;
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
	std::string skipChar(const std::string &line, char c);
	void printDb(void);
	bool checkDate(const std::string str);
	int nbrOfDay(int month);
	void getRate();
	void fillMap();
	void checkHeader();
};
