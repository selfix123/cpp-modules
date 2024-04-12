#include "Parsing.hpp"
#include <climits>
#include <exception>
#include <string>

Parsing::Parsing():_str(""), _type(NONE){
}

Parsing::Parsing(std::string str):_str(str), _type(NONE){
}

Parsing::Parsing(const Parsing &inst){
	*this = inst;
}

Parsing& Parsing::operator=(const Parsing &rhs) {
	(void)rhs;
	return *this;
}

Parsing::~Parsing(){
}

int Parsing::countChar(char target){
	int count = 0;
	for (size_t i = 0; i < _str.length();i++){
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
	if (_str.length() == 1 && isascii(_str[0]) && !std::isdigit(_str[0]))
		return (_type = CHAR, true);
	return false;
}

bool Parsing::isInt(){
	if (_str[0] == '-'){
		for (size_t i = 1; i < _str.length();i++)
			if (!std::isdigit(_str[i]))
				return false;
	}
	else
		for (size_t i = 0; i < _str.length();i++)
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
	if ((_str[0] != '-' && countChar('-') > 0) || countChar('.') != 1 || countChar('f') != 1 || _str.back() != 'f')
		return false;
	for (size_t i = 0; i < _str.length();i++)
		if (!std::isdigit(_str[i]) && _str[i] != '.' && _str[i] != 'f' && _str[i] != '-')
			return false;
	try {
		std::stof(_str);
	} catch (const std::exception &e) {
		return false;
	}
	return (_type = FLOAT, true);
}

bool Parsing::isDouble(){
	if ((_str[0] != '-' && countChar('-') > 0) || countChar('.') != 1)
		return false;
	for (size_t i = 0; i < _str.length();i++)
		if (!std::isdigit(_str[i]) && _str[i] != '.' && _str[i] != '-')
			return false;
	try {
		std::stod(_str);
	} catch (const std::exception &e) {
		return false;
	}
	return (_type = DOUBLE, true);
}

void Parsing::specConv(){
	std::cout << "char : " << "impossible" << std::endl;
	std::cout << "int : " << "impossible" << std::endl;
	if (_str == "nan" || _str == "nanf"){
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
	}else if (_str == "-inf" || _str == "+inf"){
		std::cout << "float : " << _str + "f" << std::endl;
		std::cout << "double : " << _str << std::endl;
	}else{
		std::cout << "float : " << _str << std::endl;
		std::cout << "double : " << _str.substr(0, _str.length() -1) << std::endl;
	}
}

void Parsing::charConv(){
	char tmp = _str[0];
	if (std::isprint(tmp)){
		_charValue = tmp;
		std::cout << "char: " << _charValue << std::endl;
	}
	else
		std::cout << "char: Not printable" << std::endl;
	_intValue = static_cast<int>(tmp);
	std::cout << "integer: " << _intValue << std::endl;
	_floatValue = static_cast<float>(tmp);
	std::cout << "float: " << std::fixed << std::setprecision(2) << _floatValue << "f" << std::endl;
	_doubleValue = static_cast<double>(tmp);
	std::cout << "double: " << std::fixed << std::setprecision(2) << _doubleValue << std::endl;
}

void Parsing::intConv(){
	int tmp = std::stoi(_str);
	if (std::isprint(tmp)){
		_charValue = tmp;
		std::cout << "char: " << _charValue << std::endl;
	}
	else if (!isascii(tmp))
		std::cout << "char: Not printable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
	_intValue = tmp;
	std::cout << "integer: " << _intValue << std::endl;
	_floatValue = static_cast<float>(tmp);
	std::cout << "float: " << std::fixed << std::setprecision(2) << _floatValue << "f" << std::endl;
	_doubleValue = static_cast<double>(tmp);
	std::cout << "double: " << std::fixed << std::setprecision(2) << _doubleValue << std::endl;
}

void Parsing::floatConv(){
	float tmp = std::stof(_str);
	if (std::isprint(tmp)){
		_charValue = static_cast<char>(tmp);
		std::cout << "char: " << _charValue << std::endl;
	}
	else if (!isascii(tmp))
		std::cout << "char: Not printable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
	try {
		std::stoi(std::to_string(tmp));
		_intValue = static_cast<int>(tmp);
		std::cout << "int: " << _intValue << std::endl;
	} catch (std::exception) {
		std::cout << "int: impossible" << std::endl;
	}
	_floatValue = tmp;
	std::cout << "float: " << std::fixed << std::setprecision(2) << _floatValue << "f" << std::endl;
	_doubleValue = static_cast<double>(tmp);
	std::cout << "double: " << std::fixed << std::setprecision(2) << _doubleValue << std::endl;
}

void Parsing::doubleConv(){
	double tmp = std::stod(_str);
	if (std::isprint(tmp)){
		_charValue = static_cast<char>(tmp);
		std::cout << "char: " << _charValue << std::endl;
	}
	else if (!isascii(tmp))
		std::cout << "char: Not printable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
	try {
		std::stoi(std::to_string(tmp));
		_intValue = static_cast<int>(tmp);
		std::cout << "int: " << _intValue << std::endl;
	} catch (std::exception) {
		std::cout << "int: impossible" << std::endl;
	}
	_floatValue = static_cast<float>(tmp);
	std::cout << "float: " << std::fixed << std::setprecision(2) << _floatValue << "f" << std::endl;
	_doubleValue = tmp;
	std::cout << "double: " << std::fixed << std::setprecision(2) << _doubleValue << std::endl;
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
			floatConv();
			break;
		case DOUBLE:
			doubleConv();
			break;
		case SPECIAL:
			specConv();
			break;
		default:
			std::cout << "Error" << std::endl << "Wrong input cmon bro!" << std::endl;
	}
}
