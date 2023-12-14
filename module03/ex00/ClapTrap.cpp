#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name):_damagePoint(0), _energyPoint(10), _hitPoint(10){
	this->_name = name;
	if (CALL)
		std::cout << "Default ClapTrap constructor " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &inst) {
	if (CALL)
		std::cout << "Copy ClapTrap constructor " << std::endl;
}

ClapTrap::~ClapTrap() {
	if (CALL)
		std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs) {
	if (CALL)
		std::cout << "ClapTrap operator = overide" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target){
	if (this->_energyPoint == 0 || this->_hitPoint == 0){
		std::cout << RED "ClapTrap " WHITE << GREEN << this->_name << RED " cannot attack. He is either missing in action or doesn't have energy!" << std::endl;
		return ;
	}
	std::cout << RED "ClapTrap " WHITE << GREEN << this->_name << BLUE" attacks " << target << " for " RED << this->_damagePoint << " damage point!" WHITE<< std::endl;
	this->_energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << RED "ClapTrap " << GREEN << this->_name  << BLUE " took "<< amount << " damage from fall damage!" WHITE << std::endl;
	this->_hitPoint -= amount;
	if (this->_hitPoint <= 0){
		std::cout << RED "Claptrap "<< GREEN << this->_name<< PURPLE" died from fall damage, sorry for your loss!:(" WHITE << std::endl;
		return ;
	}
	else
		std::cout << RED "ClapTrap " << GREEN << this->_name << BLUE " has " << this->_hitPoint << " health point left before going to heaven!" WHITE << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyPoint == 0 || this->_hitPoint == 0){
		std::cout << RED "ClapTrap " << GREEN <<  this->_name << PURPLE " Cannot heal itself. He is either missing in action or doesn't have enough energy!" << std::endl;
		return ;
	}
	else
		std::cout << RED "ClapTrap " << GREEN << this->_name << PURPLE " heals itself for " << amount << " health points" WHITE <<std::endl;
	this->_hitPoint += amount;
	std::cout << RED "Claptrap " << GREEN << this->_name << BLUE " now has " << this->_hitPoint << " health" WHITE << std::endl;
	this->_energyPoint--;
}
