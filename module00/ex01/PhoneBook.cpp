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

void	PhoneBook::printTable(void)
{
	std::cout << std::setw(10) << std::right << "index";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "nickname";
	std::cout << std::endl;
}

void	PhoneBook::DisplayContact(void)
{
	this->printTable();
	for (int i = 0; i < this->nb_contact;i++)
	{
		std::cout << std::setw(10) << std::right << i;
		std::cout << "|";
		std::cout << std::setw(10) << std::right << trunc_str(this->book[i].get_name());
		std::cout << "|";
		std::cout << std::setw(10) << std::right << trunc_str(this->book[i].get_lname());
		std::cout << "|";
		std::cout << std::setw(10) << std::right << trunc_str(this->book[i].get_nname());
		std::cout << std::endl;
	}
}

void	PhoneBook::PrintOneContact(int index)
{
	if (index < 0 || index > this->nb_contact - 1)
	{
		std::cout << "Index of your contact is out of bound" << std::endl;
	}
	else{
		std::cout << std::right << std::setw(10) << "first name: " << this->book[index].get_name() << std::endl;
		std::cout << std::right << std::setw(10) << "last name: " << this->book[index].get_lname() << std::endl;
		std::cout << std::right << std::setw(10) << "nick name: " << this->book[index].get_nname() << std::endl;
		std::cout << std::right << std::setw(10) << "phone number: " << this->book[index].get_phone() << std::endl;
		std::cout << std::right << std::setw(10) << "darkest secret: " << this->book[index].get_secret() << std::endl;
	}
}

void	PhoneBook::AddContact(Contact contact)
{
	if (this->nb_contact == MAX_CONTACT && this->contact_index == MAX_CONTACT)
		this->contact_index = 0;
	this->book[this->contact_index] = contact;
	this->contact_index++;
	if (this->nb_contact < MAX_CONTACT)
		this->nb_contact = this->contact_index;
}

PhoneBook::~PhoneBook()
{
	std::cout << RED "Destructor called PhoneBook" RESET << std::endl;
}
