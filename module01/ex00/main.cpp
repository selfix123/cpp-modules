#include "Zombie.hpp"

int main(void)
{
	Zombie *zack = newZombie("zack");
	zack->announce();

	randomChump("random");
	delete zack;
}