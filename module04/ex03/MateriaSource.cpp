#include "MateriaSource.hpp"

MateriaSource::MateriaSource():_nbMateria(0) {
	std::cout << "Default MateriaSource constructor " << std::endl;
	for(int i = 0; i < MAX_SPELL;i++)
		this->_bag[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &inst) {
	std::cout << "Copy MateriaSource constructor " << std::endl;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor" << std::endl;
	for(int i = 0; i < MAX_SPELL;i++)
		delete this->_bag[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs) {
	std::cout << "MateriaSource operator = overide" << std::endl;
	if (this != &rhs) {
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m){
	if (_nbMateria < 4){
		_bag[_nbMateria] = m;
		std::cout << "Materia learned!" << std::endl;
		_nbMateria++;
	}
	else
		std::cout << "Bag full!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){

}
