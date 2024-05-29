#include "PmergeMe.hpp"
#include <chrono>
#include <cstdlib>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &inst){(void) inst;}

PmergeMe::~PmergeMe(){}

PmergeMe& PmergeMe::operator=(const PmergeMe &rhs){
	if (this != &rhs) {
	}
	return *this;
}

double PmergeMe::getTime(){
	static std::chrono::high_resolution_clock::time_point T;
	static bool init = false;
	if (!init) {
		T = std::chrono::high_resolution_clock::now();
		init = true;
		return 0;
	}
	init = false;
	std::chrono::duration<double, std::milli> ms = std::chrono::high_resolution_clock::now() - T;
	return ms.count();
}

void PmergeMe::parseInput(int ac, char **av) {
	for (int i = 1; i < ac;i++){
			int number = std::stoi(av[i]);
		if (number < 0)
			throw std::out_of_range("Cannot take negative number!");
		_vec.push_back(number);
		_deque.push_back(number);
	}
	_length = _vec.size();
}

void PmergeMe::printVec() {
	for (unsigned int i = 0; i < _vec.size();i++)
		std::cout << _vec[i] << " ";
}

void PmergeMe::printDeque() {
	for (unsigned int i = 0; i < _deque.size(); i++)
		std::cout << _deque[i] << " ";
}

void PmergeMe::printTime(){
	std::cout << "Time to process a range of " << _length <<  " elements with std::vector : " << _vecTime <<  " us"  << std::endl;
	std::cout << "Time to process a range of " << _length << " elements with std::deque  : " << _dequeTime << " us" << std::endl;
}

void PmergeMe::sortVector(){
	std::cout <<  "Vector\n{"  << std::endl;
	std::cout << "Before ";
	printVec();
	getTime();
	int K = _vec.size() / 2;
	std::cout << std::endl;
	std::cout <<  "After \n";
	sort(_vec, 0, _vec.size() - 1, K);
	printVec();
	_vecTime = getTime();
	std::cout <<  "\n}"  << std::endl;
}

void PmergeMe::sortDeque(){
	std::cout <<  "Deque\n{"  << std::endl;
	std::cout << "Before ";
	printDeque();
	std::cout << std::endl;
	getTime();
	int K = _deque.size() / 2;
	std::cout << std::endl;
	std::cout <<  "After \n";
	sort(_deque, 0, _deque.size() - 1, K);
	printDeque();
	_dequeTime = getTime();
	std::cout <<  "\n}"  << std::endl;
	std::cout << std::endl;
}
