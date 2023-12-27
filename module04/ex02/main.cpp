#include "AAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define	NB	20

int	main(void)
{
	AAnimal	*animal[NB];

	for (int i = 0; i < NB / 2; i++) {
		animal[i] = new Dog();
	}
	for (int i = NB / 2; i < NB; i++) {
		animal[i] = new Cat();
	}
	for (int i = 0; i < NB; i++) {
		delete animal[i];
	}
	return 0;
}