#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		// Constructors / Destructor
		Ice();
		Ice(const Ice &inst);
		~Ice();

		// Operator Overload
		Ice& operator=(const Ice &rhs);

		// Functions
		AMateria* clone() const;
		void use(ICharacter& target);
};

// Ice_HPP