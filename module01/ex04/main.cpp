#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
	std::string line;
	std::string name = av[1];
	std::string old_word = av[2];
	std::string new_word = av[3];
	std::ifstream file;
	std::ofstream outfile;
	if (ac != 4){
		std::cerr << "Need 4 arguments" << std::endl;
		return 0;
	}
	file.open(name, std::ios::in);
	outfile.open(name + ".replace", std::ios::out);
	while (getline(file, line))
	{
		int start = line.find(old_word, 0);
		while (start != std::string::npos){
			line = line.substr(0, start) + new_word + line.substr(start + old_word.length(), line.length());
			start = line.find(old_word, 0);
		}
		outfile << line + '\n';
	}
	file.close();
	return 1;
}