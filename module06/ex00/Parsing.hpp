#include <iostream>
#include <climits>
#include <iomanip>

enum {
	NONE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL
};

class Parsing{
	private:
	std::string _str;
	int _type;
	int _intValue;
	double _doubleValue;
	float _floatValue;
	char _charValue;

	public:

	Parsing();
	Parsing(std::string str);
	Parsing(const Parsing &inst);
	Parsing& operator=(const Parsing &rhs);
	~Parsing();

	void charConv();
	void intConv();
	void floatConv();
	void doubleConv();
	void specConv();

	bool isInt();
	bool isChar();
	bool isFloat();
	void setType();
	bool isDouble();
	bool isSpecial();
	int countChar(char target);

};