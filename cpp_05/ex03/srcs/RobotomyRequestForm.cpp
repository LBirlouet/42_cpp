#include "../includes/RobotomyRequestForm.hpp"
#include "cstdlib"

// default constructor (Orthodox Canonical Form)
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", "default target", 72, 45){
    std::cout<<"[RobotomyRequestForm] default constructor called" <<std::endl;
}

// constructor with arg
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", target, 72, 45){
    std::cout<<"[RobotomyRequestForm] default constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cp) : AForm(cp){
}

// copy constructor (Orthodox Canonical AForm)
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
    this->AForm::operator=(other);
    return (*this);
}

// default destructor (Orthodox Canonical Form)
RobotomyRequestForm::~RobotomyRequestForm(){
}

// execute
void    RobotomyRequestForm::execute(const Bureaucrat &caller) const{
    (void)caller;
    if (this->getSigned() != "yes")
        throw AFormNotSignedException();
    if (this->getGradeToSign() > 72 || this->getGradeToExec() > 45)
        throw GradeTooLowException();
    std::cout << "[Robotomy] some drilling sounds" << std::endl;
    srand(time(0)); 
    if (rand() % 2 == 0)
        std::cout << this->getTarget() << " has been robotomized" << std::endl;
    else
        std::cout << this->getTarget() << " has failed to be robotomized" << std::endl;
}
