#include "Array.hpp"

int main(void){
	Array<std::string> strArray(5);
	strArray[0] = "Sup,";
	strArray[1] = "I";
	strArray[2] = "am";
	strArray[3] = "a";
	strArray[4] = "burger";
	strArray.printElem();

	try {
		strArray[5] = "Im out of bound lmao";
		strArray.printElem();
	} catch (std::exception &e) {
		std::cout << "Exeption caught: " << e.what() << std::endl;
	}
}