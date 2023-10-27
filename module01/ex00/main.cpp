#include "Zombie.hpp"

int main(void)
{
	Zombie *zack = newZombie("zack");
	zack->announce();
	Zombie *raph = newZombie("raph");
	raph->announce();
	randomChump("random");
	randomChump("cbtEnjoyer");
	delete zack;
	delete raph;
}