#include "../includes/Bureaucrat.hpp"

// default constructor (Orthodox Canonical Form)
Bureaucrat::Bureaucrat(){
    std::cout<<"[Bureaucrat] default constructor called" <<std::endl;
    this->grade = 150;
}

// constructor with arg
Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name){
    std::cout<<"[Bureaucrat] constructor with argument called" <<std::endl;
    if (Grade < 1)
        throw GradeTooHighException();
    if (Grade > 150)
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
    std::cout << "[Bureaucrat] Copy assignment operator called" << std::endl;
    if (this != &cp) {
        this->grade = cp.grade;
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

// up grade
void    Bureaucrat::upGrade(void){
    if (this->grade == 1)
        throw GradeTooHighException();
    else
        this->grade--;
}

// down grade
void    Bureaucrat::downGrade(void){
    if (this->grade == 150)
        throw GradeTooLowException();
    else
        this->grade++;
}

// exeption for grade too high
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "[Bureaucrat] Grade is too high!";
}

// exeption for grade too low
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "[Bureaucrat] Grade is too low!";
}

// overload for output
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade : " << bureaucrat.getGrade();
    return os;
}