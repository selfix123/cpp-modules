#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	std::string inputFile, outputFile, line;	
	std::ifstream file(av[1]);

	line.find(av[2], 0);
	
	while (std::getline(file, line))
	{
		std::cout << line << std::endl;
	}
}