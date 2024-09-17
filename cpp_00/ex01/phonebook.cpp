#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook(void)
{
	contact_nb = 0;
	for(short i(0); i < 8; i++)
	{
		contact[i].initFirstName("NONE");
		contact[i].initLastName("NONE");
		contact[i].initNickName("NONE");
		contact[i].initPhoneNum("NONE");
		contact[i].initSecret("NONE");
	}
}

Phonebook::~Phonebook(void){
	return ;
}

int	check_exit(std::string userInput){
	std::string str ("EXIT");

	if (str.compare(userInput) != 0)
		return (1);
	std::cout << "You leave the Phonebook"<<std::endl;
	return (0);
}

bool	is_digits_only(const std::string& str){
	for (unsigned long i(0); i < str.size();i++){
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

void	Phonebook::addContact(){
	std::string userInput ("NONE");
	if (contact_nb > 7)
		contact_nb = 0;
	/*first name*/
	system("clear");
	std::cout<<"select your first name : ";
	std::cin>>userInput;
	if (std::cin.eof())
		check_exit("EXIT");
	contact[contact_nb].initFirstName(userInput);
	/*last name*/
	system("clear");
	std::cout<<"select your last name : ";
	std::cin>>userInput;
	if (std::cin.eof()){
		check_exit("EXIT");
		exit(0);
	}
	contact[contact_nb].initLastName(userInput);
	/*ncikname name*/
	system("clear");
	std::cout<<"select your nickname : ";
	std::cin>>userInput;
	if (std::cin.eof()){
		check_exit("EXIT");
		exit(0);
	}
	contact[contact_nb].initNickName(userInput);
	/*phone number*/
	get_imput:
	system("clear");
	std::cout<<"select your phone number : ";
	std::cin>>userInput;
	if (std::cin.eof()){
		check_exit("EXIT");
		exit(0);
	}
	if (!is_digits_only(userInput))
		goto get_imput;
	contact[contact_nb].initPhoneNum(userInput);
	/*secret*/
	system("clear");
	std::cout<<"select your secret : ";
	std::cin>>userInput;
	if (std::cin.eof()){
		check_exit("EXIT");
		exit(0);
	}
	contact[contact_nb].initSecret(userInput);
	system("clear");
	std::cout<<"Contact created"<<std::endl;
	std::cout<<"First Name : "<<contact[contact_nb].recoverFirstName()<<std::endl;
	std::cout<<"Last Name : "<<contact[contact_nb].recoverLastName()<<std::endl;
	std::cout<<"Nickname : "<<contact[contact_nb].recoverNickName()<<std::endl;
	std::cout<<"Phone number : "<<contact[contact_nb].recoverPhoneNum()<<std::endl;
	std::cout<<"Secret : "<<contact[contact_nb].recoverSecret()<<std::endl;
	contact_nb++;
}

std::string	crop_name(std::string str){
	std::string spaces = "          ";
	if(str.size() == 10)
		return (str);
	else if (str.size() < 10)
		return (spaces.substr(0, (10 - str.size())) + str);
	return (str.substr(0,9) + '.');
}

int	recoverIndex(const std::string userInput){
	int	index;

	index = std::atoi(userInput.c_str());
	if (index > 7 || index < 0)
		return (-1);
	return (index);
}

void	Phonebook::showAllContacts(){
	system("clear");
	std::string userInput;
	std::cout<<"     INDEX|FIRST NAME| LAST NAME|  NICKNAME"<<std::endl;
	std::cout<<std::endl;
	for(int i = 0; i < 8; i++){
		std::cout<<"         "<<i<<"|"<< crop_name(contact[i].recoverFirstName())<<"|"<<crop_name(contact[i].recoverLastName())<<"|"<<crop_name(contact[i].recoverNickName())<<std::endl;
	}
	get_imput:
	std::cout<<"Choose an index : ";
	std::cin>>userInput;
	if (std::cin.eof()){
		check_exit("EXIT");
		exit(0);
	}
	if (!check_exit(userInput))
		exit(0);
	std::cout<<std::endl;
	int index = recoverIndex(userInput);
	if (!is_digits_only(userInput) || index == -1)
		goto get_imput;
	std::cout<<"FIRST NAME : "<<contact[index].recoverFirstName()<<std::endl;
	std::cout<<"LAST NAME : "<<contact[index].recoverLastName()<<std::endl;
	std::cout<<"NICKNAME : "<<contact[index].recoverNickName()<<std::endl;
	std::cout<<"PHONE NUMBER : "<<contact[index].recoverPhoneNum()<<std::endl;
	std::cout<<"SECRET : "<<contact[index].recoverSecret()<<std::endl;
}

int main()
{
	std::string userInput ("NONE");
	std::string add ("ADD");
	std::string search ("SEARCH");
	Phonebook Phonebook;

	system("clear");
	std::cout<<"Welcome in your PhoneBook"<<std::endl<<"Please choose an option"<<std::endl;
	while(check_exit(userInput)){
		std::cout<<std::endl<<"ADD  |  SEARCH  |  EXIT"<<std::endl;
		std::cin>>userInput;
		if (std::cin.eof()){
			check_exit("EXIT");
			exit(0);
		}
		if (add.compare(userInput) == 0)
			Phonebook.addContact();
		if (search.compare(userInput) == 0)
			Phonebook.showAllContacts();
	}
}
