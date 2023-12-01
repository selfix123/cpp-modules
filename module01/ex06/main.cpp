#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
		std::cerr << "Use DEBUG INFO WARNING ERROR nothing else" << std::endl;
	else
		harl.complain(av[1]);
}