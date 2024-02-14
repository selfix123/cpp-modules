#include <stdexcept>
template <typename T>
Array<T>::Array():_n(0), _array(NULL) {}

template <typename T>
Array<T>::Array(unsigned int n):_n(n){
	_array = new T[_n]();
}

template <typename T>
Array<T>::Array(const Array<T> &inst): _n(inst._n) {
	_array = new T[_n];
	for (unsigned int i = 0; i < _n;i++)
		_array[i] = inst._array[i];
}

template <typename T>
Array<T>::~Array<T>() {
	delete [] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &rhs) {
	if (this != &rhs){
		if (_array)
			delete [] _array;
		_n = rhs._n;
		_array = new T[_n];
		for (unsigned int i = 0; i < _n;++i)
			_array[i] = rhs._array[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index){
	if (index >= _n)
		throw std::out_of_range("out of bound!");
	return _array[index];
}

template <typename T>
unsigned Array<T>::size(){
	return _n;
}

template <typename T>
void Array<T>::printElem(){
	for (unsigned int i = 0; i < _n;++i){
		std::cout << _array[i] << std::endl;
	}
	std::cout << std::endl;
}