#pragma once

#include <iostream>

template<typename T>
T max(T nb1, T nb2){
	return (nb1 > nb2 ? nb1 : nb2);
}

template<typename T>
T min(T nb1, T nb2){
	return (nb1 < nb2 ? nb1 : nb2);
}

template<typename T>
void swap(T &a, T &b){
	T temp = a;
	a = b;
	b = temp;
}