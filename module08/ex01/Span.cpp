#include "Span.hpp"

Span::Span():_n(0) {}

Span::Span(unsigned int n): _n(n) {}

Span::Span(const Span &inst) {
	*this = inst;
}

Span::~Span() {}

Span& Span::operator=(const Span &rhs) {
	if (this != &rhs) {
		_n = rhs.getN();
		_vec = rhs.getVec();
	}
	return *this;
}

void Span::addNumber(int nb){
	if (getN() < 2 || _vec.size() > static_cast<unsigned int>(getN()))
		throw std::out_of_range("Invalid number of numbers!");
	_vec.push_back(nb);
}

void Span::addMoreNumber(int start, int finish){
	int smallest;
	int biggest;

	if  (start > finish){
		smallest = finish;
		biggest = start;
	}
	else {
		smallest = start;
		biggest = finish;
	}
	while (smallest <= biggest){
		addNumber(smallest);
		smallest++;
	}
	
}

unsigned int Span::shortestSpan(){
	unsigned int min = std::numeric_limits<int>::max();
	for (size_t i = 0; i < _vec.size() - 1;++i){
		for (size_t j = i + 1; j < _vec.size();++j){
			unsigned int tistance = std::abs(_vec[i] - _vec[j]);
			if (tistance < min)
				min = tistance;
		}
	}
	return min;
}

unsigned int Span::longestSpan(){
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
