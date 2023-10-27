#pragma once
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	Weapon *weapon;
	std::string name;

public:
	HumanA(std::string humanName, Weapon &weaponType);
	HumanA();
	void setWeapon(Weapon &weapon);
	const std::string& getType(void) const;
	void attack();
	~HumanA();
};
