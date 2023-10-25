#pragma once

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#define MAX_CON 4

class PhoneBook{

	public:
		PhoneBook();
		~PhoneBook();
		void	PrintOneContact(int index);
		void	DisplayContact(void);
		void	AddContact(Contact contact);


	private:
		Contact book[MAX_CON];
		int		nb_contact;
		int		contact_index;
};
