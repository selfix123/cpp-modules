#pragma once
#include <iostream>

class Contact
{
	public:
		Contact();
		Contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string secret);
		~Contact();
		const std::string get_name(void) const;
		const std::string get_lname(void) const;
		const std::string get_nname(void) const;
		const std::string get_phone(void) const;
		const std::string get_secret(void) const;

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};
