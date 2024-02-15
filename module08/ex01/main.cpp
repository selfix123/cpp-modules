#include "Span.hpp"

int main(){
	Span span(50000);
	int nb = (span.getN() / 2) * -1;
	try {
		for (int i = 0; i < span.getN();i++)
			span.addNumber(nb++);
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.shortestSpan() << std::endl;
	
	} catch (std::exception &e) {
		std::cout << "Would you look at that,I found a exception lets see what it is: " << e.what() << std::endl;
	}
}