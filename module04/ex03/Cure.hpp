#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	// Constructors / Destructor
	Cure();
	Cure(const Cure &inst);
	~Cure();

	Cure& operator=(const Cure &rhs);

	// Functions
	AMateria* clone() const;
	void use(ICharacter& target);
};
