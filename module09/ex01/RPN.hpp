#pragma once

#include <iostream>
#include <stack>
#include <stdexcept>


class RPN
{
private:
	std::string _input;
	int _a;
	int _b;
	std::stack<int>  _stack;

public:
	// Constructors / Destructor
	RPN(std::string str);
	RPN(const RPN &inst);
	~RPN();

	// Operator Overload
	RPN& operator=(const RPN &rhs);

	// Functions
	void loop();
	void popNumber();
	void RpnCalculation();
	void parseInput();

};
