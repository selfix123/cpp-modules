#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string zombieName) {
	this->name = zombieName;
	std::cout << "Default Zombie constructor " << std::endl;
}

void	Zombie::announce(){
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->name << " is destroy" << std::endl;
}
