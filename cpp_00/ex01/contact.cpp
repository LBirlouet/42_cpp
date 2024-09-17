#include "phonebook.hpp"
#include "contact.hpp"

Contact::Contact(void){ 
	return ;
}

Contact::~Contact(void){
	return ;
}

void	Contact::initFirstName(std::string first_name){
	this->first_name = first_name;
}

void	Contact::initLastName(std::string last_name){
	this->last_name = last_name;
}
void	Contact::initNickName(std::string nickname){
	this->nickname = nickname;
}
void	Contact::initPhoneNum(std::string phonenum){
	this->phone_num = phonenum;
}
void	Contact::initSecret(std::string secret)
{
	this->secret = secret;
}

std::string	Contact::recoverFirstName(void){
	return (first_name);
}

std::string	Contact::recoverLastName(void){
	return (last_name);
}

std::string	Contact::recoverNickName(void){
	return (nickname);
}

std::string	Contact::recoverPhoneNum(void){
	return (phone_num);
}

std::string	Contact::recoverSecret(void){
	return (secret);
}
