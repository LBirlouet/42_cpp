#include "../includes/Bureaucrat.hpp"

// default constructor (Orthodox Canonical Form)
Bureaucrat::Bureaucrat(){
    std::cout<<"[Bureaucrat] default constructor called" <<std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name){
    std::cout<<"[Bureaucrat] constructor with argument called" <<std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = Grade;

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

// get grade
int Bureaucrat::getGrade(void)const {
    return this->grade;
}