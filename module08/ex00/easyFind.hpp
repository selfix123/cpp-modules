#pragma once

#include <iostream>

template <typename T>
typename T::const_iterator easyFind(T const first, int second){
	typename T::const_iterator it = std::find(first.begin(), first.end(), second);
	if (it == first.end())
		throw std::invalid_argument("Value not found!");
	return it;
}