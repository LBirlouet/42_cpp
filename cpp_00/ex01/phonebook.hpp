#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Contact
{

public:

	Contact(void);
	~Contact(void);

	void	initFirstName(std::string);
	void	initLastName(std::string);
	void	initNickName(std::string);
	void	initPhoneNum(std::string);
	void	initSecret(std::string);

	std::string	recoverFirstName(void);
	std::string	recoverLastName(void);
	std::string	recoverNickName(void);
	std::string	recoverPhoneNum(void);
	std::string	recoverSecret(void);

private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_num;
	std::string secret;
};

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