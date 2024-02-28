#include "RPN.hpp"
#include <stdexcept>
#include <string>

RPN::RPN(std::string str): _input(str), _a(0), _b(0) {}

RPN::RPN(const RPN &inst) {
	(void)inst;
	std::cout << "Copy RPN constructor " << std::endl;
}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN &rhs) {
	std::cout << "RPN operator = overide" << std::endl;
	if (this != &rhs) {
		_a = rhs._a;
		_b = rhs._b;
		_stack = rhs._stack;
	}
	return *this;
}

void RPN::RpnCalculation(){
	for (size_t i = 0; i < _input.length();++i){
		if (std::isdigit(_input[i])){
			_stack.push(std::stoi(_input.substr(i ,1)));
		}
		else if (_input[i] == '+'){
			popNumber();
			_stack.push(_a + _b);
		}
		else if (_input[i] == '-'){
			popNumber();
			_stack.push(_a - _b);
		}
		else if (_input[i] == '/'){
			popNumber();
			if (_b == 0)
				throw std::invalid_argument("Divison by 0 is impossible big guy!");
			_stack.push(_a / _b);
		}
		else if (_input[i] == '*'){
			popNumber();
			_stack.push(_a * _b);
		}
		else if (_input[i] != ' ' && _input[i] != '(' && _input[i] != ')')
			throw std::logic_error("Invalid patern detected: need to put space between each number!");
	}
	if (_stack.size() < 1)
		throw std::invalid_argument("Cannot compute the calculation, missing something!");
	else
		std::cout << _stack.top() << std::endl;
}

void RPN::popNumber(){
	if (_stack.size() > 1){
		_b = _stack.top();
		_stack.pop();
		_a = _stack.top();
		_stack.pop();
	}
	else 
		throw std::out_of_range("Need more then one number to compute calculation!");
}
