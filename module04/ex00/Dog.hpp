#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	private:


	public:
		Dog();
		Dog(const Dog &inst);
		Dog& operator=(const Dog &rhs) ;
		const std::string &getType() const;
		void makeSound() const;
		~Dog();
};