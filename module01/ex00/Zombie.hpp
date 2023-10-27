#pragma once

# include <iostream>

class Zombie
{
private:
	std::string name;

public:
	// Constructors / Destructor
	Zombie(std::string zombieName);
	~Zombie();
	void announce(void);

};

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );


