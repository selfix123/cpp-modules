#include "easyFind.hpp"
#include <exception>
#include <vector>

int main(void){
	std::vector<int> vec;
	std::vector<int>::const_iterator it;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	try {
		it = easyFind(vec, 10);
		std::cout << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}