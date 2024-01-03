#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>

Character::Character(): _floorIndex(0){
	std::cout << "Default Character constructor " << std::endl;
	for(int i = 0; i < MAX_SPELL;i++)
		this->_book[i] = NULL;
	for (int i = 0; i < MAX_DROPPED;i++)
		this->_floor[i] = NULL;
}

Character::Character(std::string name):_name(name), _floorIndex(0){
	for(int i = 0; i < MAX_SPELL;i++)
		this->_book[i] = NULL;
	for (int i = 0; i < MAX_DROPPED;i++)
		this->_floor[i] = NULL;
}

Character::Character(const Character &inst) {
	std::cout << "Copy Character constructor " << std::endl;
}

Character::~Character() {
	std::cout << "Character destructor" << std::endl;
	for (int i = 0; i < MAX_SPELL;i++){
		if (_book[i])
			delete _book[i];
	}
	for (int i = 0; i < MAX_DROPPED;i++){
		if (_floor[i])
			delete _floor[i];
	}
}

Character& Character::operator=(const Character &rhs) {
	std::cout << "Character operator = overide" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		for (int i = 0; i < MAX_SPELL;i++){
			if (_book[i])
				this->_book[i] = rhs._book[i];
		}
		for (int i = 0; i < MAX_DROPPED;i++){
			if (_floor[i])
				this->_floor[i] = rhs._floor[i];
		}
	}
	return *this;
}

std::string const & Character::getName() const{
	return this->_name;
}

void Character::unequip(int idx){
	if (idx >=0 && idx <= 3){
		_floor[_floorIndex] = _book[idx];
		_floorIndex++;
		_book[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx >=0 && idx <= 3)
		_book[idx]->use(target);
}

void Character::equip(AMateria* m){
	for(int i = 0; i < MAX_SPELL;i++){
		if (this->_book[i] == NULL){
			this->_book[i] = m;
			std::cout << "New spell added to your spell book!" << std::endl;
			break;
		}
		else if (i == 3)
			std::cout << "Spell book already full!" << std::endl;
	}
}
