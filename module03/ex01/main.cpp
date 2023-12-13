#include "ScavTrap.hpp"
#include <iostream>


int	main(void){
	ScavTrap zack("Zazk");
	ScavTrap raph("Raph");

	//HP test
	zack.takeDamage(1);
	zack.takeDamage(1);
	zack.guardGate();
	zack.takeDamage(1);
	zack.takeDamage(1);
	zack.beRepaired(200);
	zack.takeDamage(150);
	zack.takeDamage(150);
	zack.takeDamage(150);
	zack.attack("Willy");
	zack.guardGate();
	zack.beRepaired(200000000);

	std::cout << std::endl;
	//Energy test
	raph.guardGate();
	for (int i = 0; i < 50; i++){
		raph.attack("Zahhh");
	}
	raph.beRepaired(1500000000);
	raph.guardGate();
	raph.beRepaired(150);
	raph.attack("Zahhh");
	raph.guardGate();

}


// #include "ClapTrap.hpp"

// int main(void){
// 	ClapTrap *bot = new ClapTrap("Zack");

// 	//death
// 	// bot->attack("Someone");
// 	// bot->takeDamage(9);
// 	// bot->beRepaired(8);
// 	// bot->takeDamage(10);

// 	//no more energy
// 	bot->attack("Someone");
// 	bot->attack("Someone");
// 	bot->attack("Someone");
// 	bot->attack("Someone");
// 	bot->beRepaired(8);
// 	bot->beRepaired(8);
// 	bot->beRepaired(8);
// 	bot->beRepaired(8);
// 	bot->attack("Someone");
// 	bot->beRepaired(8);
// 	bot->beRepaired(8);

// 	//normal: no death, no missing energy
// 	// bot->attack("Someone");
// 	// bot->takeDamage(9);
// 	// bot->beRepaired(8);

// 	delete bot;
// }
