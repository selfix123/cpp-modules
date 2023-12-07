#include "HumanA.hpp"

using std::cout;
using std::endl;

HumanA::HumanA(std::string humanName, Weapon &weaponType): name(humanName), weapon(weaponType) {

	cout << "HumanA constructor " << endl;
}

void HumanA::attack(void){
	cout << this->name << " attacks with their " << this->weapon.getType() << endl;
}

HumanA::~HumanA() {
	cout << "HumanA destructor" << endl;
}

const std::string& HumanA::getType(void) const 
{
	return (this->name);
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}