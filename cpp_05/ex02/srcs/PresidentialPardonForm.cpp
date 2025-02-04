#include "../includes/PresidentialPardonForm.hpp"

// default constructor (Orthodox Canonical Form)
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", "default target", 25, 5){
    std::cout<<"[PresidentialPardonForm] default constructor called" <<std::endl;
}

// constructor with arg
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", target, 25, 5){
    std::cout<<"[PresidentialPardonForm] default constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cp) : AForm(cp){
}

// copy constructor (Orthodox Canonical AForm)
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
    this->AForm::operator=(other);
    return (*this);
}

// default destructor (Orthodox Canonical Form)
PresidentialPardonForm::~PresidentialPardonForm(){
}

// execute
void    PresidentialPardonForm::execute(const Bureaucrat &caller) const{
    (void)caller;
    if (this->getSigned() != "yes")
        throw AFormNotSignedException();
    if (this->getGradeToSign() > 25 || this->getGradeToExec() > 5)
        throw GradeTooLowException();
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}