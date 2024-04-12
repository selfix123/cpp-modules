#pragma once

#include <iostream>

template <typename T>
void iter(T *array, unsigned int len, void function(T &content)) {
	for (unsigned int i = 0; i < len; i++) {
		function(array[i]);
	}
}

template <typename T, typename F>
void iter(T *array, unsigned int len, F function) {
	for (unsigned int i = 0; i < len; i++) {
		function(array[i]);
	}
}

template <typename T>
void increment(T &element){
	element++;
}

template <typename T>
void decrement(T &element){
	element--;
}

template <typename T>
void printElem(T &element){
	std::cout << element << std::endl;
}