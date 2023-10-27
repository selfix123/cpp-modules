#include "Zombie.hpp"

int main(void)
{
	
	Zombie *zack = zombieHorde(HORDE, "zack");
	for (int i = 0; i < HORDE;i++)
		zack->announce();
	delete [] zack;
}