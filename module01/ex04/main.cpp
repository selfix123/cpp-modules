#include <cstring>
#include <fstream>
#include <iostream>
#include <ostream>

int main(int ac, char **av)
{
	if (ac < 4){
		std::cerr << "Need 4 arguments" << std::endl;
		return 0;
	}
	std::string line;
	std::string name = av[1];
	if (name.empty()){
		std::cerr << "Invalid arguments 1" << std::endl;
		return 0;
	}
	std::string old_word = av[2];
	if (old_word.empty()){
		std::cerr << "Invalid arguments 2" << std::endl;
		return 0;
	}
	std::string new_word = av[3];
	if (new_word.empty()){
		std::cerr << "Invalid arguments 3" << std::endl;
		return 0;
	}
	std::ifstream file;
	std::ofstream outfile;
	file.open(name, std::ios::in);
	if (file.fail()){
		std::cerr << "Invalid file" << std::endl;
		return 0;
	}
	outfile.open(name + ".replace", std::ios::out);
	if (outfile.fail()){
		std::cerr << "Invalid outfile" << std::endl;
		return 0;
	}
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