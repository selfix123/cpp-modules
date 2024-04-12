#include "iter.hpp"
#include <cstddef>

int main(void){
	{
		std::string array[] = {"1", "2", "3"};
		iter(array, 3, printElem<std::string>);
	}
		{
			std::cout << std::endl;
			size_t number[] = {1, 2, 3, 4, 5};
			iter(number, 5, printElem);
			iter(number, 5, increment);
			std::cout << std::endl;
			iter(number, 5, printElem);
			std::cout << std::endl;
			iter(number, 5, decrement);
			iter(number, 5, printElem);
		}
}