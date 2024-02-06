#include <iostream>

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
	int _type;
	int _intValue;
	double _doubleValue;
	float _floatValue;
	char _charValue;
	std::string _str;

	public:

	Parsing();
	Parsing(std::string str);
	Parsing(const Parsing &inst);
	Parsing& operator=(const Parsing &rhs);
	~Parsing();

	void charConv();
	void intConv();
	void floatConv();


	bool isInt();
	bool isChar();
	bool isFloat();
	void setType();
	bool isDouble();
	bool isSpecial();
	int countChar(char target);

};