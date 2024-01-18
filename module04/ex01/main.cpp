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
		std::cout << std::endl;
	}
	for (int i = NB_ANIMAL / 2; i < NB_ANIMAL; i++) {
		animal[i] = new Cat();
		std::cout << std::endl;
	}
	for (int i = 0; i < NB_ANIMAL; i++) {
		delete animal[i];
		std::cout << std::endl;
	}

	std::cout << "#--------------------------------------------#" << std::endl;

 	Cat *chat = new Cat;
	chat->setIdea(0, "je ");
	chat->setIdea(1, "ne ");
	chat->setIdea(2, "veux ");
	chat->setIdea(3, "pas ");
	chat->setIdea(4, "bruler ");
	chat->setIdea(5, "le ");
	chat->setIdea(6, "monde ");
	Cat chat2(*chat);
	chat->setIdea(6, "mondeasdasdasd ");
	std::cout << chat2.getIdea(0) << std::endl;
	std::cout << chat2.getIdea(1) << std::endl;
	std::cout << chat2.getIdea(2) << std::endl;
	std::cout << chat2.getIdea(3) << std::endl;
	std::cout << chat2.getIdea(4) << std::endl;
	std::cout << chat2.getIdea(5) << std::endl;
	std::cout << chat2.getIdea(6) << std::endl;
	delete chat;

	return 0;
}