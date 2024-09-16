#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "iostream"
#include "string"
#include "contact.hpp"

class Phonebook
{

public:

	Phonebook(void);
	~Phonebook(void);

	void	addContact(void);
	void	showAllContacts(void);

private:

	Contact contact[8];
	int 	contact_nb;
};


#endif
