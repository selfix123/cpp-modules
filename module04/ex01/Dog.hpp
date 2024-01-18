#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
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

		void setIdea(int i, std::string string);
		const std::string &getIdea(int i) const;
};