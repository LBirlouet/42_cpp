#include "../includes/Intern.hpp"

// default constructor (Orthodox Canonical Form)
Intern::Intern(){
    std::cout<<"[Intern] default constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
Intern::Intern(const Intern& cp){
    std::cout<<"[Intern] Copy constructor called"<<std::endl;
    *this = cp;
}

// assignment operator (Orthodox Canonical Form)
Intern& Intern::operator=(const Intern& cp){
	(void)cp;
    std::cout << "[Bureaucrat] Copy assignment operator called" << std::endl;
	return *this;
}

// default destructor (Orthodox Canonical Form)
Intern::~Intern(void){
    std::cout<<"[Intern] default destructor called" <<std::endl;
}

// make form
AForm* Intern::makeForm(const std::string &name, const std::string &target) const
{
	if (!(name == "presidential pardon" || name == "robotomy request" || name == "shrubbery creation"))
	 	throw WrongFormException();
	std::string formnames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i = 0;
	AForm* form = NULL;
	while (formnames[i] != name && i < 3)
		i++;
	switch (i)
	{
		case 0:
			form = new PresidentialPardonForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new ShrubberyCreationForm(target);
			break;
	}
	std::cout << "Intern creates " << name << std::endl;
	return form;
}

const char* Intern::WrongFormException::what() const throw() {
    return ("invalid form type");
}