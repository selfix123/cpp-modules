#pragma once

#include <iostream>

#define CALL 1

class WrongAnimal{

	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &inst);
		WrongAnimal& operator=(const WrongAnimal &rhs);
		virtual ~WrongAnimal();
		const std::string &getType() const;
		void makeSound() const;
};