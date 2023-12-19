#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	private:

	public:
		WrongCat();
		WrongCat(const WrongCat &inst);
		WrongCat& operator=(const WrongCat &rhs) ;
		const std::string &getType() const;
		void makeSound() const;
		~WrongCat();

};