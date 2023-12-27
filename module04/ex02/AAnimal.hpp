#pragma once

#include <iostream>

#define CALL 1

class AAnimal{

	protected:
		std::string _type;

	public:
		AAnimal();
		AAnimal(const AAnimal &inst);
		AAnimal& operator=(const AAnimal &rhs);
		virtual ~AAnimal();
		const std::string &getType() const;
		virtual void makeSound() const = 0;
};