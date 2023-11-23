#pragma once

#include "Contact.hpp"
#include <iomanip>
#define MAX_CONTACT 8

class PhoneBook{

	public:
		PhoneBook();
		~PhoneBook();
		void	PrintOneContact(int index);
		void	DisplayContact(void);
		void	AddContact(Contact contact);
		void	printTable(void);


	private:
		Contact book[MAX_CONTACT];
		int		nb_contact;
		int		contact_index;
};
