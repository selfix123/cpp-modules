#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook phonebook;
	Contact contact;
	
	std::string input;
	std::string cmd;
	std::cin >> input;
	if (input == "ADD")
	{
		std::cout << "fist name	"; std::cin >> cmd;
		std::cout << "last name	"; std::cin >> cmd;
		std::cout << "nickname	"; std::cin >> cmd;
		std::cout << "phone number	"; std::cin >> cmd;
		std::cout << "dark secret	"; std::cin >> cmd;
	}
	else if (input == "SEARCH")
	{
		std::cout << "cbt pause" << std::endl;
	}
	else if (input == "EXIT")
	{
		std::cout << "cbt continue" << std::endl;
	}
	else
	{
		std::cout << "you dont deserve cbt treatment" << std::endl;
	}
	std::cout << input << std::endl;
}
