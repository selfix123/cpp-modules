#pragma once

#include <deque>
#include <iostream>
#include <vector>

class PmergeMe {

    private:
        std::vector<int> _vec;
        std::deque<int> _deque;
		double			_dequeTime;
		double				_vecTime;
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
	double getTime();
	void printTime();
    void parseInput(int ac, char **av);
};

template<typename T>
	void insertionSort(T &arr, int left, int middle) {
	for (int i = left; i < middle; i++) {
		int tempVal = arr[i + 1];
		int j = i + 1;
		while (j > left && arr[j - 1] > tempVal) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = tempVal;
	}
}

template<typename T>
void merge(T& arr, int left, int middle, int right) {
	int n1 = middle - left + 1;
	int n2 = right - middle;
	T leftArray(n1), rightArray(n2);

	std::copy(arr.begin() + left, arr.begin() + middle + 1, leftArray.begin());
	std::copy(arr.begin() + middle + 1, arr.begin() + right + 1, rightArray.begin());

	int rIndex = 0;
	int lIndex = 0;
	for (int i = left; i < right - left + 1 ; i++) {
		if (rIndex == n2) {
			arr[i] = leftArray[lIndex];
			lIndex++;
		} else if (lIndex == n1) {
			arr[i] = rightArray[rIndex];
			rIndex++;
		} else if (rightArray[rIndex] > leftArray[lIndex]) {
			arr[i] = leftArray[lIndex];
			lIndex++;
		} else {
			arr[i] = rightArray[rIndex];
			rIndex++;
		}
	}
}

template<typename T>
void sort(T& arr, int left, int right, int &len) {
	if (right - left > len) {
		int middle = (left + right) / 2;
		sort(arr, left, middle, len);
		sort(arr, middle + 1, right, len);
		merge(arr, left, middle, right);
	} else {
		insertionSort(arr, left, right);
	}
}