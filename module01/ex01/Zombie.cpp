#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) {
	this->zombieName = name;
}

Zombie::Zombie() {
	std::cout << "Zombie created! " << std::endl;
}

void	Zombie::announce(){
	std::cout << this->zombieName << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->zombieName << " has been destroy! " << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->zombieName = name;
}
