#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_book[MAX_SPELL];
	AMateria *_floor[MAX_DROPPED];
	int		_floorIndex;
public:
	// Constructors / Destructor
	Character();
	Character(std::string name);
	Character(const Character &inst);
	~Character();

	// Operator Overload
	Character& operator=(const Character &rhs);

	// Functions
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void free_inventory();
};

// Character_HPP