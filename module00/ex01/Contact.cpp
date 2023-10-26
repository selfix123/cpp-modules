#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string secret){
	this->first_name = fname;
	this->last_name = lname;
	this->nickname = nname;
	this->phone_number = phone;
	this->darkest_secret = secret;

	std::cout << GREEN "Constructor called!" RESET << std::endl;
}

Contact::~Contact(){
	std::cout << RED "Destructor called Contact!" RESET << std::endl;
}

const std::string Contact::get_name(void) const
{
	return this->first_name;
}

const std::string Contact::get_lname(void) const
{
	return this->last_name;
}

const std::string Contact::get_nname(void) const
{
	return this->nickname;
}

const std::string Contact::get_phone(void) const
{
	return this->phone_number;
}

const std::string Contact::get_secret(void) const
{
	return this->darkest_secret;
}
