#include "ClapTrap.hpp"

int main(void){
	ClapTrap *bot = new ClapTrap("Zack");

	//death
	// bot->attack("Someone");
	// bot->takeDamage(9);
	// bot->beRepaired(8);
	// bot->takeDamage(10);
	// bot->takeDamage(10);

	//no more energy
	bot->attack("Someone");
	bot->attack("Someone");
	bot->attack("Someone");
	bot->attack("Someone");
	bot->beRepaired(8);
	bot->beRepaired(8);
	bot->beRepaired(8);
	bot->beRepaired(8);
	bot->attack("Someone");
	bot->beRepaired(8);
	bot->beRepaired(8);

	//normal: no death, no missing energy
	// bot->attack("Someone");
	// bot->takeDamage(9);
	// bot->beRepaired(8);

	delete bot;
}
