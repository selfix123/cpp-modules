#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook phonebook;
	Contact	  contact;
	std::string cmd;

	std::cout << "Welcome to my phone book" << std::endl;
	while (1)
	{
		std::getline(std::cin, cmd);
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
			if (name == "" || last_name == "" || nick_name == "" || phone_number == "" || darkest_secret == "")
				std::cout << "No empty line will be accepted" << std::endl;
			else
			{
				Contact contact(name, last_name, nick_name, phone_number, darkest_secret);
				phonebook.AddContact(contact);
			}
		}
		else if (cmd == "SEARCH")
		{
			std::string index;
			phonebook.DisplayContact();
			std::cout << "Enter the index of the contact you wish to see: " << std::endl; 
			std::getline(std::cin, index);
			try {
				phonebook.PrintOneContact(std::stoi(index));
			}
			catch (const std::exception& e) {
				std::cout << "A number is required bozo🤡" << std::endl;
			}
		}
		else if (cmd == "Exit")
			return (0);
	}
	return (0);
}
