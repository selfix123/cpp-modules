#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define	NB_ANIMAL	20

int	main(void)
{
	Animal	*animal[NB_ANIMAL];

	for (int i = 0; i < NB_ANIMAL / 2; i++) {
		animal[i] = new Dog();
	}
	for (int i = NB_ANIMAL / 2; i < NB_ANIMAL; i++) {
		animal[i] = new Cat();
	}
	for (int i = 0; i < NB_ANIMAL; i++) {
		delete animal[i];
	}
	return 0;
}