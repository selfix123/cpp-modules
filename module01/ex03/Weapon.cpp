#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) {
	this->type = weaponType;
	std::cout << "Default Weapon constructor " << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor" << std::endl;
}

void Weapon::setType(const std::string name){
	this->type = name;
}

const std::string& Weapon::getType(void) const {
	return (this->type);
}
