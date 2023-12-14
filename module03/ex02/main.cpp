#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>


int	main(void){
	FragTrap zack("zack");

	//Dead so cannot hight fives
	zack.highFivesGuys();
	zack.takeDamage(100);
	zack.highFivesGuys();

	//Missing energy for hight fives
	// for (int i = 0; i < 100;i++)
	// 	zack.attack("Bob");
	// zack.highFivesGuys();
}
