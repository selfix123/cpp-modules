#include "Parsing.hpp"

Parsing::Parsing():_str(""), _type(NONE){
}

Parsing::Parsing(std::string str):_str(str), _type(NONE){
}

Parsing::Parsing(const Parsing &inst){
	*this = inst;
}

Parsing& Parsing::operator=(const Parsing &rhs) {
	(void)rhs;
	std::cout << "Parsing operator = overide" << std::endl;
	return *this;
}

Parsing::~Parsing(){
}

int Parsing::countChar(char target){
	int count = 0;
	for (int i = 0; i < _str.length();i++){
		if (_str[i] == target)
			count++;
	}
	return count;
}

bool Parsing::isSpecial(){
	std::string str[] = {"nan", "nanf", "-inf", "-inff", "+inf", "+inff"};
	for (int i = 0; i < 6;i++)
		if (str[i] == _str)
			return (_type = SPECIAL, true);
	return false;
}

bool Parsing::isChar(){
	if (_str.length() > 1 && !isascii(_str[0]) && std::isdigit(_str[0]))
		return false;
	return (_type = CHAR, true);
}

bool Parsing::isInt(){
	if (_str[0] == '-'){
		for (int i = 1; i < _str.length();i++)
			if (!std::isdigit(_str[i]))
				return false;
	}
	else
		for (int i = 0; i < _str.length();i++)
			if (!std::isdigit(_str[i]))
				return false;
	try {
		std::stoi(_str);
	} catch (const std::exception &e) {
		return false;
	}
	return (_type = INT , true);
}

bool Parsing::isFloat(){
	if (_str[0] != '-' && countChar('-') > 0 || countChar('.') != 1 || countChar('f') != 1 || _str.back() != 'f')
		return false;
	for (int i = 0; i < _str.length();i++)
		if (!std::isdigit(_str[i]) && _str[i] != '.' && _str[i] != 'f')
			return false;
	try {
		std::stof(_str);
	} catch (const std::exception &e) {
		return false;
	}
	return true;
}

bool Parsing::isDouble(){
	if ((_str[0] != '-' && countChar('-') > 0) || countChar('.') != 1)
		return false;
	for (int i = 0; i < _str.length();i++)
		if (!std::isdigit(_str[i]) && _str[i] != '.')
			return false;
	try {
		std::stod(_str);
	} catch (const std::exception &e) {
		return false;
	}
	return (_type = DOUBLE, true);
}

void Parsing::charConv(){
	char tmp = _str[0];
	if (std::isprint(tmp))
		std::cout << tmp << std::endl;
	else
		std::cout << "Impossible" << std::endl;
	_intValue = static_cast<int>(tmp);
	std::cout << "integer: " << _intValue << std::endl;
	_floatValue = static_cast<float>(tmp);
	std::cout << "float: " << _floatValue << std::endl;
	_doubleValue = static_cast<double>(tmp);
	std::cout << "double: " << _doubleValue << std::endl;
}

void Parsing::intConv(){
	int tmp = std::stoi(_str);
	if (std::isprint(tmp))
		std::cout << tmp << std::endl;
	else if (!isascii(tmp))
		std::cout << "Not printable" << std::endl;
	else
		std::cout << "Impossible" << std::endl;

	_intValue = static_cast<int>(tmp);
	std::cout << "integer: " << _intValue << std::endl;
	_floatValue = static_cast<float>(tmp);
	std::cout << "float: " << _floatValue << std::endl;
	_doubleValue = static_cast<double>(tmp);
	std::cout << "double: " << _doubleValue << std::endl;
}

void Parsing::floatConv(){
	float tmp = std::stof(_str);
	if (std::isprint(tmp))
		std::cout << tmp << std::endl;
	else if (!isascii(tmp))
		std::cout << "Not printable" << std::endl;
	else
		std::cout << "Impossible" << std::endl;

	_intValue = static_cast<int>(tmp);
	std::cout << "integer: " << _intValue << std::endl;
	_floatValue = static_cast<float>(tmp);
	std::cout << "float: " << _floatValue << std::endl;
	_doubleValue = static_cast<double>(tmp);
	std::cout << "double: " << _doubleValue << std::endl;
}

void Parsing::setType(){
	isSpecial();
	isDouble();
	isChar();
	isFloat();
	isInt();

	switch (_type) {
		case CHAR:
			charConv();
			break;
		case INT:
			intConv();
			break;
		case FLOAT:
			break;
		case DOUBLE:
			break;
		case SPECIAL:
			break;
		default:
			std::cout << "Error" << std::endl << "Wrong input cmon bro!" << std::endl;
	}
}
