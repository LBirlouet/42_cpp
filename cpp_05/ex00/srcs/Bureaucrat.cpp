#include "../includes/Bureaucrat.hpp"

// default constructor (Orthodox Canonical Form)
Bureaucrat::Bureaucrat(){
    std::cout<<"[Bureaucrat] default constructor called" <<std::endl;
}

Bureaucrat::Bureaucrat(std::string Name){
    std::cout<<"[Bureaucrat] constructor with argument called" <<std::endl;
    this->name = Name;
}


// copy constructor (Orthodox Canonical Form)
Bureaucrat::Bureaucrat(const Bureaucrat& cp){
    std::cout<<"[Bureaucrat] Copy constructor called"<<std::endl;
	*this = cp;
}

// assignment operator (Orthodox Canonical Form)
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cp){
    std::cout<<"[Bureaucrat] Copy assignment operator called"<<std::endl;
    if (this != &cp){
        *this = cp;
    }
    return *this;
}

// default destructor (Orthodox Canonical Form)
Bureaucrat::~Bureaucrat(){
    std::cout<<"[Bureaucrat] default destructor called" <<std::endl;
}

// get name
std::string Bureaucrat::getName(void)const {
    return this->name;
}

// set name
void    Bureaucrat::setName(std::string Name){
    this->name = Name;
}