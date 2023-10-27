#pragma once
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	Weapon *weapon;
	std::string name;

public:
	HumanB(std::string humanName);
	const std::string& getWeapon(void) const;
	void setWeapon(Weapon &weapon);

	void attack();
	~HumanB();

};
