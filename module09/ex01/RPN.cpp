#include "RPN.hpp"
#include <stdexcept>

RPN::RPN(std::string str): _input(str) {
	std::cout << "Default RPN constructor " << std::endl;
}

RPN::RPN(const RPN &inst) {
	std::cout << "Copy RPN constructor " << std::endl;
}

RPN::~RPN() {
	std::cout << "RPN destructor" << std::endl;
}

RPN& RPN::operator=(const RPN &rhs) {
	std::cout << "RPN operator = overide" << std::endl;
	if (this != &rhs) {
		_a = rhs._a;
		_b = rhs._b;
		_stack = rhs._stack;
	}
	return *this;
}

void RPN::printInput(){
	std::cout << _input << std::endl;
}

void RPN::parseInput(){
	int i = 0;
	size_t find = _input.find_first_not_of("0123456789+-/*");

	while (_input[++i])
		if (find == std::string::npos)
			throw std::runtime_error("Wrong input! Please put a valid RPN input");
}

void RPN::RpnCalculation(char const c){
	if (_stack.size() < 2)
		throw std::out_of_range("Stack too small missing operator or number!");

	int nb1, nb2;
	int res;

	nb1 = _stack.top();
	_stack.pop();
	nb2 = _stack.top();
	_stack.pop();

	if (c == '+')
		res = nb1 + nb2;
	else if (c == '-')
		res = nb1 - nb2;
	else if (c == '/' && c != '0')
		res = nb1 / nb2;
	else if (c == '*')
		res = nb1 * nb2;
	else
		throw std::out_of_range("Invalid operation!");
	_stack.push(res);
}

void RPN::loop(){
	
}
