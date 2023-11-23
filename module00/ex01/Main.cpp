#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook phonebook;
	Contact	  contact;
	std::string cmd;

	std::cout << GREEN "Welcome to my phonebook!" RESET << std::endl;
	std::cout << RED "Here are some rules to follow!:" RESET << std::endl;
	std::cout << CYAN "	1. Only use the following commands: ADD SEARCH EXIT" RESET << std::endl; 
	std::cout << CYAN "	2. Only use numbers when asked too!" RESET << std::endl;
	while (std::cout << BLUE "Command: " RESET && std::getline(std::cin, cmd) && !std::cin.eof())
	{
		if (cmd == "ADD")
		{
			std::string name, last_name, nick_name, phone_number, darkest_secret;
			std::cout << "first name: ";
			std::getline(std::cin, name);
			std::cout << "last name: ";
			std::getline(std::cin, last_name);
			std::cout << "nick name: ";
			std::getline(std::cin, nick_name);
			std::cout << "phone number: ";
			std::getline(std::cin, phone_number);
			std::cout << "darkest secret: ";
			std::getline(std::cin, darkest_secret);
			if (!name.length() || last_name == "" || nick_name == "" || phone_number == "" || darkest_secret == "")
				std::cout << "No empty line will be accepted" << std::endl;
			else
			{
				Contact contact(name, last_name, nick_name, phone_number, darkest_secret);
				phonebook.AddContact(contact);
			}
		}
		else if (cmd == "SEARCH")
		{
			phonebook.DisplayContact();
			std::cout << "Enter the index of the contact you wish to see: ";
			std::getline(std::cin, cmd);
			if (cmd.length() != 1 || !std::isdigit(cmd[0]))
				std::cout << "Only numbers will be accepted" << std::endl;
			else
				phonebook.PrintOneContact(std::stoi(cmd));
		}
		else if (cmd == "EXIT")
			return (0);
	}
	return (0);
}
