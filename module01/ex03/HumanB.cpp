#include "HumanB.hpp"
#include "Weapon.hpp"

using std::cout;
using std::endl;

HumanB::HumanB(std::string humanName) {
	this->name = humanName;
	std::cout << "HumanA constructor " << std::endl;
}

void HumanB::attack(void){
	cout << this->name << " attacks with their " << this->weapon->getType() << endl;
}

HumanB::~HumanB() {
	std::cout << "HumanA destructor" << std::endl;
}

const std::string& HumanB::getWeapon(void) const 
{
	return (this->name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
