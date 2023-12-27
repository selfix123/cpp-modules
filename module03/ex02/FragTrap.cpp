#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	if (CALL)
		std::cout << "Default FragTrap constructor " << std::endl;
	this->_damagePoint = 30;
	this->_energyPoint = 100;
	this->_hitPoint = 100;
}

FragTrap::FragTrap(std::string name): ClapTrap() {
	if (CALL)
		std::cout << "Default FragTrap constructor " << std::endl;
	this->_damagePoint = 30;
	this->_name = name;
	this->_energyPoint = 100;
	this->_hitPoint = 100;
}

FragTrap::FragTrap(const FragTrap &inst): ClapTrap(inst){
	if (CALL)
		std::cout << "Copy FragTrap constructor " << std::endl;
}

FragTrap::~FragTrap() {
	if (CALL)
		std::cout << "FragTrap destructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs) {
	if (CALL)
		std::cout << "FragTrap operator = overide" << std::endl;
	this->_damagePoint = rhs._damagePoint;
	this->_energyPoint = rhs._energyPoint;
	this->_hitPoint = rhs._hitPoint;
	this->_name = rhs._name;
	return *this;
}

void FragTrap::attack(std::string name){
	if (this->_hitPoint == 0){
		std::cout << RED "FragTrap " WHITE << GREEN << this->_name << WHITE << PURPLE " is dead, he cant attack :(" WHITE << std::endl;
		return;
	}
	if (this->_energyPoint == 0){
		std::cout << RED "FragTrap " WHITE << GREEN << this->_name << WHITE << PURPLE " don\'t have energy left, he cant attack :(" WHITE <<std::endl;
		return;
	}
	std::cout << RED "FragTrap " WHITE << GREEN << this->_name << WHITE << CYAN " dealt " WHITE << PURPLE << GREEN << this->_damagePoint << WHITE << RED " damage to " WHITE << GREEN << name << WHITE << std::endl;
	this->_energyPoint--;
}

void FragTrap::error_checker(void) const{
	if (this->_energyPoint == 0){
		std::cout << RED "FragTrap " << GREEN << this->_name << BLACK " cannot take any hight fives for the moment.";
		std::cout << "He needs to sleep for a bit, he is missing energy:(" << std::endl;
		return ;
	}
	else if (this->_hitPoint == 0){
		std::cout << RED "FragTrap " << GREEN << this->_name << BLACK " is now dead:(. R I P" << std::endl;
		return ;
	}
}

void FragTrap::highFivesGuys(void) const{
	std::string answer;
	error_checker();
	std::cout << BLUE "Hi, my name is " << GREEN << this->_name << BLACK ", do you want a high fives!" WHITE << std::endl;
	while (std::getline(std::cin, answer))
	{
		if (answer == "yes" || answer == "YES"){
			std::cout << RED "FragTrap " << GREEN << this->_name << CYAN " is now happy because you gave him a hight five" WHITE << std::endl;
			return ;
		}
		else
		std::cout << BLUE "Hi, my name is " << GREEN << this->_name << BLACK ", do you want a high fives!" WHITE << std::endl;
	}
}
