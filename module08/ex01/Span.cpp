#include "Span.hpp"
#include <cstddef>

Span::Span():_n(0) {}

Span::Span(unsigned int n): _n(n) {}

Span::Span(const Span &inst) {
	*this = inst;
}

Span::~Span() {}

Span& Span::operator=(const Span &rhs) {
	std::cout << "Span operator = overide" << std::endl;
	if (this != &rhs) {
		_n = rhs.getN();
		_vec = rhs.getVec();
	}
	return *this;
}

void Span::addNumber(int nb){
	if (_vec.size() > _n)
		throw std::out_of_range("Out of bound!");
	_vec.push_back(nb);
}

unsigned int Span::shortestSpan(){
	if (_n < 2)
		throw std::length_error("Need more number bro!");
	unsigned int min = std::numeric_limits<int>::max();
	for (size_t i = 0; i < _vec.size() - 1;++i){
		for (size_t j = i + 1; j < _vec.size();++j){
			int tistance = std::abs(_vec[i] - _vec[j]);
			if (tistance < min)
				min = tistance;
		}
	}
	return min;
}

unsigned int Span::longestSpan(){
	if (_n < 2)
		throw std::length_error("Need more number bro!");

	unsigned int min = *std::min_element(_vec.begin(), _vec.end());
	unsigned int max = *std::max_element(_vec.begin(), _vec.end());
	return (max - min);
}

int Span::getN() const{
	return _n;
}

std::vector<int> Span::getVec() const{
	return _vec;
}
