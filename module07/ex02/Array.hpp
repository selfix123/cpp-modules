#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
	unsigned int _n;
	T *_array;

public:
	// Constructors / Destructor
	Array();
	Array(unsigned int n);
	Array(const Array<T> &inst);
	~Array();

	// Operator Overload
	Array<T>& operator=(const Array<T> &rhs);
	T& operator[](unsigned int index);
	unsigned int size();
	void printElem();
	// Functions

};

#include "Array.tpp"
