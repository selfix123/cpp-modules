#include <iostream>
#include <ostream>

using std::cout;
using std::endl;

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	cout << "address" << endl;
	cout << "string:    " << &str << endl;
	cout << "stringPTR: " << stringPTR << endl;
	cout << "stringREF: " << &stringREF << endl;

	cout << "Values:" << endl;
	cout << "string:    " << str << endl;
	cout << "stringPTR: " << *stringPTR << endl;
	cout << "stringREF: " << stringREF << endl;
}