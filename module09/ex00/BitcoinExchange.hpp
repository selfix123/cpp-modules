#pragma once

#include <iostream>
#include <map>

class BitcoinExchange
{
private:
	std::map<int, float> _map;
public:
	// Constructors / Destructor
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &inst);
	~BitcoinExchange();

	// Operator Overload
	BitcoinExchange& operator=(const BitcoinExchange &rhs);

	// Functions
	void checkIfCsv(const std::string csvFile);
	void checkHeader();
};
