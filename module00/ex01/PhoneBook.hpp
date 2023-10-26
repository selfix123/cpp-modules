#pragma once

#include "Contact.hpp"
#include <iomanip>
#define MAX_CON 8

class PhoneBook{

	public:
		PhoneBook();
		~PhoneBook();
		void	PrintOneContact(int index);
		void	DisplayContact(void);
		void	AddContact(Contact contact);
		void	printTable(void);


	private:
		Contact book[MAX_CON];
		int		nb_contact;
		int		contact_index;
};
