#pragma once
#include <iostream>
# define ITALIC "\033[3m"
# define BLUE "\033[34m"
# define RED "\033[31m"
# define RESET "\033[0m"
# define GREEN "\033[32m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
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
