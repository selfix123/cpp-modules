#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	wrongcat->makeSound();
	wrongmeta->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wrongcat;
	delete wrongmeta;
return 0;
}