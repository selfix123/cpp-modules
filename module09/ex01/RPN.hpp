#pragma once

#include <iostream>
#include <stack>
#include <stdexcept>


class RPN
{
private:
	int _a;
	int _b;
	std::stack<int>  _stack;
	std::string _input;

public:
	// Constructors / Destructor
	RPN(std::string str);
	RPN(const RPN &inst);
	~RPN();

	// Operator Overload
	RPN& operator=(const RPN &rhs);

	// Functions
	void loop();
	void parseInput();
	void printInput();
	void RpnCalculation(char const c);

};
