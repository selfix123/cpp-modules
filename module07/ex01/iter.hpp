#pragma once

#include <iostream>

template <typename T>
void iter(T *array, size_t size, T func(T content)){
	for (size_t i = 0; i < size;i++)
		array[i] = func(array[i]);
}

template <typename T, typename PTRF>
void iter(T *array, size_t size, PTRF func(T &content)){
	for (size_t i = 0; i < size;i++)
		func(array[i]);
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