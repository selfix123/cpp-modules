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
			iter(number, 5, printElem<size_t>);
			iter(number, 5, increment<size_t>);
			std::cout << std::endl;
			iter(number, 5, printElem<size_t>);
			std::cout << std::endl;
			iter(number, 5, decrement<size_t>);
			iter(number, 5, printElem<size_t>);
		}
}