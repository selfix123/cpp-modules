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

template<typename T>
	void insertionSort(T &arr, int left, int midle) {
	for (int i = left; i < midle; i++) {
		int tempVal = arr[i + 1];
		int j = i + 1;
		while (j > left && arr[j - 1] > tempVal) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = tempVal;
	}
	for (int i = left; i <= midle; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl << std::endl;
}

template<typename T>
void merge(T& arr, int left, int midle, int right) {
	int n1 = midle - left + 1;
	int n2 = right - midle;
	T LA(n1), RA(n2);

	std::copy(arr.begin() + left, arr.begin() + midle + 1, LA.begin());
	std::copy(arr.begin() + midle + 1, arr.begin() + right + 1, RA.begin());

	int RIDX = 0;
	int LIDX = 0;
	for (int i = left; i < right - left + 1 ; i++) {
		if (RIDX == n2) {
			arr[i] = LA[LIDX];
			LIDX++;
		} else if (LIDX == n1) {
			arr[i] = RA[RIDX];
			RIDX++;
		} else if (RA[RIDX] > LA[LIDX]) {
			arr[i] = LA[LIDX];
			LIDX++;
		} else {
			arr[i] = RA[RIDX];
			RIDX++;
		}
	}
}

template<typename T>
void sort(T& arr, int left, int right, int &len) {
	if (right - left > len) {
		int midle = (left + right) / 2;
		sort(arr, left, midle, len);
		sort(arr, midle + 1, right, len);
		merge(arr, left, midle, right);
	} else {
		insertionSort(arr, left, right);
	}
}