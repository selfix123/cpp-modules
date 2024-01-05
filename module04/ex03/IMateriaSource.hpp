#pragma once

#include  "AMateria.hpp"

class IMateriaSource
{
public:
	// Constructors / Destructor
	virtual ~IMateriaSource() {}

	// Functions
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};
