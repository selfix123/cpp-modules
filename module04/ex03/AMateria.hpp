#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:

	public:
		AMateria();
		~AMateria();
		AMateria& operator=(const AMateria &rhs);
		AMateria(const AMateria &inst);
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};