#pragma once

#include <iostream>
#include <vector>

class Span
{
private:
	std::vector<int> _vec;
	unsigned int _n;

public:
	// Constructors / Destructor
	Span();
	Span(unsigned int n);
	Span(const Span &inst);
	~Span();

	// Operator Overload
	Span& operator=(const Span &rhs);

	// Functions
	void addNumber(int nb);
	void addMoreNumber(int start, int finish);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	std::vector<int> getVec() const;
	int getN() const;
};

// Span_HPP