#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &inst){}

PmergeMe::~PmergeMe(){}

PmergeMe& PmergeMe::operator=(const PmergeMe &rhs){
	*this = rhs;
	return *this;
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
	for (int i = 0; i < _vec.size();i++)
		std::cout << _vec[i] << std::endl;
}

void PmergeMe::printDeque() {
	for (int i = 0; i < _deque.size(); i++)
		std::cout << _deque[i] << std::endl;
}

void PmergeMe::sortVector() {

}

void PmergeMe::sortDeque() {
	
}
