#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*  _bag[4];
	int			_nbMateria;

public:
	// Constructors / Destructor
	MateriaSource();
	MateriaSource(const MateriaSource &inst);
	~MateriaSource();

	// Operator Overload
	MateriaSource& operator=(const MateriaSource &rhs);

	// Functions
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
