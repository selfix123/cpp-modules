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


void PmergeMe::sortVector(){
	std::cout <<  "Vector\n{"  << std::endl;
	std::cout << "Before ";
	printVec();
	std::cout << std::endl;
	int K = _vec.size() / 2;
	sort(_vec, 0, _vec.size() - 1, K);
	std::cout <<  "After ";
	printVec();
	std::cout <<  "}"  << std::endl;
	std::cout << std::endl;
}

void PmergeMe::sortDeque(){
	std::cout <<  "Deque\n{"  << std::endl;
	std::cout << "Before ";
	printDeque();
	std::cout << std::endl;
	int K = _deque.size() / 2;
	sort(_deque, 0, _deque.size() - 1, K);
	std::cout <<  "After ";
	printDeque();
	std::cout <<  "}"  << std::endl;
	std::cout << std::endl;
}
