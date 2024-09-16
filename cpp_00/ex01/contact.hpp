#ifndef CONTACT_HPP
# define CONTACT_HPP
#include "iostream"
#include "string"

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

#endif
