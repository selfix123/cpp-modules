#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
	private:
		Brain* ideas;
	public:
		Cat();
		Cat(const Cat &inst);
		Cat& operator=(const Cat &rhs) ;
		const std::string &getType() const;
		void makeSound() const;
		~Cat();

};