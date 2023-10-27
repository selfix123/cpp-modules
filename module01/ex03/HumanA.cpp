#include "HumanA.hpp"

using std::cout;
using std::endl;

HumanA::HumanA(std::string humanName, Weapon &weaponType) {
	this->name = humanName;
	this->weapon = &weaponType;
	std::cout << "HumanA constructor " << std::endl;
}

HumanA::HumanA() {
	std::cout << "Default HumanA constructor " << std::endl;
}

void HumanA::attack(void){
	cout << this->name << " attacks with their " << this->weapon->getType() << endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA destructor" << std::endl;
}

const std::string& HumanA::getType(void) const 
{
	return (this->name);
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}