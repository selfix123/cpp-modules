#include "MateriaSource.hpp"
#include "ICharacter.hpp"

MateriaSource::MateriaSource():_nbMateria(0) {
	if (CALL)
		std::cout << "Default MateriaSource constructor " << std::endl;
	for(int i = 0; i < MAX_SPELL;i++)
		this->_bag[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &inst) {
	if (CALL)
		std::cout << "Copy MateriaSource constructor " << std::endl;
}

MateriaSource::~MateriaSource() {
	if (CALL)
		std::cout << "MateriaSource destructor" << std::endl;
	for(int i = 0; i < MAX_SPELL;i++)
		delete this->_bag[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs) {
	if (CALL)
		std::cout << "MateriaSource operator = overide" << std::endl;
	if (this != &rhs) {
		_nbMateria = rhs._nbMateria;
		for (int i = 0; i < MAX_SPELL;i++){
			if (_bag[i])
				delete _bag[i];
			_bag[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m){
	if (_nbMateria < 4){
		_bag[_nbMateria] = m;
		std::cout << BLUE "Materia "<< _bag[_nbMateria]->getType()  << " learned!" RESET << std::endl;
		_nbMateria++;
	}
	else
		std::cout << RED "Bag full already!" RESET << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	if (_nbMateria == 0)
		return 0;
	for (int i = 0; i < MAX_SPELL;i++){
		if (_bag[i] && _bag[i]->getType() == type){
			std::cout << BLUE "Materia " << _bag[i]->getType() <<" created!" RESET << std::endl;
			return _bag[i]->clone();
		}
	}
	return 0;
}