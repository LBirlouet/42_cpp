#include "iostream"
#include "string"
#include "algorithm"
#include "cctype"
#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	contact_nb = 0;
	for(short i = 0; i < 8; i++)
	{
		contact[i].initFirstName("NONE");
		contact[i].initLastName("NONE");
		contact[i].initNickName("NONE");
		contact[i].initPhoneNum("NONE");
		contact[i].initSecret("NONE");
	}
}

Phonebook::~Phonebook(void)
{
	return ;
}


int	check_exit(std::string userInput)
{
	std::string str ("EXIT");

	if (str.compare(userInput) != 0)
		return (1);
	std::cout << "You leave the Phonebook"<<std::endl;
	return (0);
}

bool	is_digits_only(const std::string& str)
{
	return std::all_of(str.begin(), str.end(), ::isdigit);
}

void	Phonebook::addContact()
{
	std::string userInput ("NONE");
	if (contact_nb > 7)
		contact_nb = 0;
	/*first name*/
	system("clear");
	std::cout<<"select your first name : ";
	std::cin>>userInput;
	contact[contact_nb].initFirstName(userInput);
	/*last name*/
	system("clear");
	std::cout<<"select your last name : ";
	std::cin>>userInput;
	contact[contact_nb].initLastName(userInput);
	/*ncikname name*/
	system("clear");
	std::cout<<"select your nickname : ";
	std::cin>>userInput;
	contact[contact_nb].initNickName(userInput);
	/*phone number*/
	get_imput:
	system("clear");
	std::cout<<"select your phone number : ";
	std::cin>>userInput;
	if (!is_digits_only(userInput))
		goto get_imput;
	contact[contact_nb].initPhoneNum(userInput);
	/*secret*/
	system("clear");
	std::cout<<"select your secret : ";
	std::cin>>userInput;
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
//!!!!! check le ctrl D
//?? utiliser get line pour beneficier du split ? pcq pb si tu fais " tt tt"
int main()
{
	std::string userInput ("NONE");
	std::string add ("ADD");
	std::string search ("SEARCH");
	Phonebook Phonebook;

	system("clear");
		std::cout<<"Welcome in your PhoneBook"<<std::endl<<"Please choose an option"<<std::endl;
	// std::cin>>userInput;
	while(check_exit(userInput))
	{
		std::cout<<"ADD | SEARCH | EXIT"<<std::endl;
		std::cin>>userInput;
		if (add.compare(userInput) == 0)
			Phonebook.addContact();
		if (search.compare(userInput)==0)
			
		//if userInpu -> ADD
		//	select_firstname
		//	selec...
		// contact created

		//else if userInput-> SEARCH
		//	afficher tous les contacts
		//	demander de choisir un index
		//	si index valid -> clear et afficher les infos
		//	sinon reprint demander de choisir un index
		//

		// system("clear");
	}
}