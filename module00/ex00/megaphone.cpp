#include <iostream>

int main(int ac, char **av)
{
	std::string str;
	if (ac == 1)
		str =  "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1;av[i];i++)
			for (int j = 0;av[i][j];j++)
				str += (char)toupper(av[i][j]);
	}
	std::cout << str << std::endl;
}
