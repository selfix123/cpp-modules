#pragma once

#include <iostream>
#define CALL 1

class Brain{
	private:
		std::string _ideas[100];
	public:
		Brain();
		~Brain();
		Brain& operator=(const Brain &rhs);
		Brain(const Brain &inst);
};