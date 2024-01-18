#include "AMateria.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());
	ICharacter* Oli = new Character("Oli");
	AMateria* test;
	test = source->createMateria("ice");
	Oli->equip(test);
	test = source->createMateria("cure");
	Oli->equip(test);
	test = source->createMateria("cure");
	Oli->equip(test);
	test = source->createMateria("cure");
	Oli->equip(test);
	test = source->createMateria("ice");
	Oli->equip(test);
	ICharacter* bob = new Character("bob");
	*(Character*)bob = *(Character*)Oli;
	bob->use(0, *bob);
	bob->use(1, *bob);
	bob->use(2, *bob);
	bob->unequip(3);
	delete bob;
	delete Oli;
	delete source;
	delete test;
}

// int main()
// {
// 	IMateriaSource* source = new MateriaSource();
// 	IMateriaSource* test = source;
// 	source->learnMateria(new Ice());
// 	source->learnMateria(new Cure());
// 	ICharacter* Oli = new Character("Oli");
// 	AMateria* test;
// 	test = source->createMateria("ice");
// 	Oli->equip(test);
// 	test = source->createMateria("cure");
// 	Oli->equip(test);
// 	ICharacter* bob = new Character("bob");
// 	Oli->use(0, *bob);
// 	Oli->use(1, *bob);
// 	delete bob;
// 	delete Oli;
// 	delete source;
// 	return 0;
// }