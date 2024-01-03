#pragma once

#include  "AMateria.hpp"

class IMateriaSource
{
private:

public:
	// Constructors / Destructor
	IMateriaSource();
	IMateriaSource(const IMateriaSource &inst);
	virtual ~IMateriaSource() {}

	IMateriaSource& operator=(const IMateriaSource &rhs);

	// Functions
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};
