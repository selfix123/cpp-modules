#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string secret){
	set_fname(fname);
	set_lname(lname);
	set_nname(nname);
	set_phone(phone);
	set_secret(secret);
}

Contact::~Contact(){}

void	Contact::set_fname(std::string fname)
{
	this->first_name = fname;
}

void	Contact::set_lname(std::string lname)
{
	this->last_name = lname;
}

void	Contact::set_nname(std::string nname)
{
	this->nickname = nname;
}

void	Contact::set_phone(std::string phone)
{
	this->phone_number = phone;
}

void	Contact::set_secret(std::string secret)
{
	this->darkest_secret = secret;
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


