#pragma once
#include <iostream>

# define RESET "\033[0m"
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
# define DEFAULT "\033[39m"
# define ERASE_LINE "\033[2K\r"
# define HORDE 10

class Zombie
{
private:
	std::string zombieName;

public:
	Zombie(std::string zombieName);
	Zombie();
	void announce();
	void setName(std::string name);
	~Zombie();

};
	Zombie* zombieHorde( int N, std::string name );
