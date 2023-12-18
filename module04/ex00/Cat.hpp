#pragma once

#include "Animal.hpp"

class Cat : public Animal{
	private:

	public:
		Cat();
		Cat(const Cat &inst);
		Cat& operator=(const Cat &rhs) ;
		const std::string &getType() const;
		void makeSound() const;
		~Cat();

};