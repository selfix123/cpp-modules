#pragma once

#include <deque>
#include <iostream>
#include <vector>

class PmergeMe {

    private:
        std::vector<int> _vec;
        std::deque<int> _deque;
        int             _length;

    public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe& operator=(const PmergeMe &rhs);
    PmergeMe(const PmergeMe &inst);

    void printVec();
    void sortDeque();
    void printDeque();
    void sortVector();
    void parseInput(int ac, char **av);
};

template <typename T>
    void insertionSort() {
        
    }