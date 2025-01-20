#include "../includes/ShrubberyCreationForm.hpp"
#include "fstream"

// default constructor (Orthodox Canonical Form)
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubberycreation", "default target", 145, 137){
    std::cout<<"[ShrubberyCreationForm] default constructor called" <<std::endl;
}

// constructor with arg
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("shrubberycreation", target, 145, 137){
    std::cout<<"[ShrubberyCreationForm] default constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cp) : AForm(cp){
}

// copy constructor (Orthodox Canonical AForm)
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
    this->AForm::operator=(other);
    return (*this);
}

// default destructor (Orthodox Canonical Form)
ShrubberyCreationForm::~ShrubberyCreationForm(){
}

// execute
void    ShrubberyCreationForm::execute(const Bureaucrat &caller) const{
    (void)caller;
    if (this->getSigned() != "yes")
        throw AFormNotSignedException();
    if (this->getGradeToSign() > 145 || this->getGradeToExec() > 137)
        throw GradeTooLowException();
    std::ofstream new_file(this->getTarget() + ("_Shrubbery"));
    if (!new_file.is_open())
        throw std::ofstream::failure(strerror(errno));

    new_file << "         ccee88oo                 ccee88oo                 ccee88oo       " << std::endl;
    new_file << "   C8O8O8Q8PoOb o8oo         C8O8O8Q8PoOb o8oo         C8O8O8Q8PoOb o8oo " << std::endl;
    new_file << "  dOB69QO8PdUOpugoO9bD      dOB69QO8PdUOpugoO9bD      dOB69QO8PdUOpugoO9bD" << std::endl;
    new_file << " CgggbU8OU qOp qOdoUOdcb    CgggbU8OU qOp qOdoUOdcb    CgggbU8OU qOp qOdoUOdcb" << std::endl;
    new_file << "     6OuU  /p u gcoUodpP        6OuU  /p u gcoUodpP        6OuU  /p u gcoUodpP" << std::endl;
    new_file << "       \\\\//  /douUP               \\\\//  /douUP               \\\\//  /douUP" << std::endl;
    new_file << "         \\////                    \\////                    \\\\////       " << std::endl;
    new_file << "          |||/\\                     |||/\\                     |||/\\      " << std::endl;
    new_file << "          |||\\/                     |||\\/                     |||\\/      " << std::endl;
    new_file << "          |||||                     |||||                     |||||       " << std::endl;
    new_file << "    .....//||||\\....          .....//||||\\....          .....//||||\\...." << std::endl;
}