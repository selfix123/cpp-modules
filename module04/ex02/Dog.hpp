#pragma once

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* ideas;
	public:
		Dog();
		Dog(const Dog &inst);
		Dog& operator=(const Dog &rhs) ;
		const std::string &getType() const;
		void makeSound() const;
		~Dog();
};