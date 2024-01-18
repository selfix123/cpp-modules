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