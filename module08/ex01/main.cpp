#include "Span.hpp"
#include <ostream>

int main(){
	Span span(1000000);
	//int nb = (span.getN() / 2) * -1;
	try {
		span.addMoreNumber(0 ,100000);
		std::cout << "longest span is: " << span.longestSpan() << " !" << std::endl;
		std::cout << "shortest span is: " << span.shortestSpan() << " !" << std::endl;
	
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}