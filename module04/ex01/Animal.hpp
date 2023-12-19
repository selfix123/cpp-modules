#pragma once

#include <iostream>

#define CALL 1

class Animal{

	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal &inst);
		Animal& operator=(const Animal &rhs);
		virtual ~Animal();
		const std::string &getType() const;
		virtual void makeSound() const;
};