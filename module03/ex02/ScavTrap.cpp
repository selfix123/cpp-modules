#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

ScavTrap::ScavTrap(): _gateKeeper(false) {
	if (CALL)
		cout << CYAN "Default ScavTrap constructor " WHITE << endl;
	this->_damagePoint = 20;
	this->_energyPoint = 50;
	this->_hitPoint = 100;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _gateKeeper(false) {
	if (CALL)
		cout << CYAN "Default ScavTrap constructor " WHITE << endl;
	this->_name = name;
	this->_damagePoint = 20;
	this->_energyPoint = 50;
	this->_hitPoint = 100;
}

ScavTrap::ScavTrap(const ScavTrap &inst): ClapTrap(inst) {
	if (CALL)
		cout << CYAN "Copy ScavTrap constructor " WHITE << endl;
}

ScavTrap::~ScavTrap() {
	if (CALL)
		cout << CYAN "ScavTrap destructor" WHITE << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs) {
	if (CALL)
		cout << CYAN "ScavTrap operator = overide" WHITE << endl;
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoint = rhs._energyPoint;
	this->_damagePoint = rhs._damagePoint;
	return *this;
}

void ScavTrap::guardGate(){
	if (this->_hitPoint == 0){
		cout << RED "ScavTrap " << GREEN << this->_name << PURPLE " is now dead, sorry:(" WHITE << endl;
		return;
	}
	if (this->_energyPoint == 0){
		cout << RED "ScavTrap " << GREEN << this->_name << PURPLE" cannot guard the gate due to missing energy!" WHITE << endl;
		return;
	}
	if (this->_gateKeeper == true){
		cout << RED "ScavTrap " << GREEN << this->_name << CYAN " gateKeeper mode ofline" WHITE << endl;
		this->_gateKeeper = false;
		this->_energyPoint--;
	}
	else{
		cout << RED "ScavTrap " << GREEN << this->_name << CYAN " gateKeeper mode activated!" WHITE << endl;
		this->_gateKeeper = true;
		this->_energyPoint--;
	}
}

void ScavTrap::attack(std::string name){
	if (this->_hitPoint == 0){
		cout << RED "ScavTrap " WHITE << GREEN << this->_name << WHITE << PURPLE " is dead, he cant attack :(" WHITE << endl;
		return;
	}
	if (this->_energyPoint == 0){
		cout << RED "ScavTrap " WHITE << GREEN << this->_name << WHITE << PURPLE " don\'t have energy left, he cant attack :(" WHITE << endl;
		return;
	}
	cout << RED "ScavTrap " WHITE << GREEN << this->_name << WHITE << CYAN " dealt " WHITE << PURPLE << GREEN << this->_damagePoint << WHITE << RED " damage to " WHITE << GREEN << name << WHITE << endl;
	this->_energyPoint--;
}
