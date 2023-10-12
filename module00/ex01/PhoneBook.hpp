#pragma once

#include "Contact.hpp"
#include <iostream>
#define MAX_CON 8

class PhoneBook{

	public:
		PhoneBook();
		~PhoneBook();
		void	PhoneBook::PrintOneContact(int index);
		void	PhoneBook::DisplayContact(void);


	private:
		Contact book[MAX_CON];
		int		nb_contact;
		int		contact_index;
};
