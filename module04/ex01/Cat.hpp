#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain* ideas;
	public:
		Cat();
		Cat(const Cat &inst);
		Cat& operator=(const Cat &rhs) ;
		const std::string &getType() const;
		void makeSound() const;
		~Cat();

		void setIdea(int i, std::string string);
		const std::string &getIdea(int i) const;
};