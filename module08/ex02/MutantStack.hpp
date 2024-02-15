#include <iostream>
#include <stack>


#pragma once

template <typename T>
class MutantStack : std::stack<T>
{
private:

public:
	MutantStack():std::stack<T>(){};
	MutantStack(const MutantStack &inst): std::stack<T>(inst){};
	~MutantStack(){};
	MutantStack& operator=(const MutantStack &rhs){
		std::stack<T>::operator=(rhs);
		return *this;
	}
	typedef typename std::stack<T>::container_type::const_iterator it;
	it begin(){return (std::stack<T>::c.begin());};
	it end() {return (std::stack<T>::c.end());};
};
