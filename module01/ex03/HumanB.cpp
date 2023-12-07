#include "HumanB.hpp"
#include "Weapon.hpp"

using std::cout;
using std::endl;

HumanB::HumanB(std::string humanName) {
	this->name = humanName;
	this->weapon = NULL;
	cout << "HumanA constructor " << endl;
}

void HumanB::attack(void){
	if (this->weapon)
		cout << this->name << " attacks with their " << this->weapon->getType() << endl;
	else
		cout << this->name << " attacks with their hands" << endl;
}

HumanB::~HumanB() {
	cout << "HumanA destructor" << endl;
}

const std::string& HumanB::getWeapon(void) const 
{
	return (this->name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
