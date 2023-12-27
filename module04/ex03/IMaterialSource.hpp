#pragma once

class IMaterialSource
{
private:

public:
	// Constructors / Destructor
	IMaterialSource();
	IMaterialSource(const IMaterialSource &inst);
	~IMaterialSource();

	// Operator Overload
	IMaterialSource& operator=(const IMaterialSource &rhs);

	// Functions
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

// IMaterialSource_HPP