#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->nb_contact = 0;
	this->contact_index = 0;
}

std::string	trunc_str(std::string str)
{
	if (str.length() <= 10)
		return (str);
	else
		return (str.substr(0, 9) + ".");
}

void	PhoneBook::DisplayContact(void)
{
	for (int i = 0; i < this->nb_contact;i++)
	{
		
	}
}

void	PhoneBook::PrintOneContact(int index)
{
	if (index < 1 || index > 8)
		std::cout << "Index of your contact is out of bound" << std::endl;
	else if (index > this->nb_contact)
		std::cout << "Index of your contact is out of bound" << std::endl;
	else{
		std::cout << "first name: " << this->book[index].get_name() << std::endl;
		std::cout << "last name" << this->book[index].get_lname() << std::endl;
		std::cout << "nick name" << this->book[index].get_nname() << std::endl;
	}
}

PhoneBook::~PhoneBook()
{}


