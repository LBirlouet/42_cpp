#include "../includes/AForm.hpp"

// default constructor (Orthodox Canonical AForm)
AForm::AForm() : name(""), target(""), signeed(0), gradetosign(150), gradetoexec(150){
    std::cout<<"[AForm] default constructor called" <<std::endl;
}

// constructor with arg (without target)
AForm::AForm(std::string Name, int GradeSign, int GradeExec) : name(Name), target(""), signeed(0), gradetosign(GradeSign), gradetoexec(GradeExec)
{
    if (GradeExec > 150 || GradeSign > 150)
        throw GradeTooLowException();
    if (GradeExec < 1 || GradeSign < 1)
        throw GradeTooHighException();
}

// constructor with arg (with target)
AForm::AForm(std::string Name, std::string Target, int GradeSign, int GradeExec) : name(Name), target(Target), signeed(0), gradetosign(GradeSign), gradetoexec(GradeExec)
{
    if (GradeExec > 150 || GradeSign > 150)
        throw GradeTooLowException();
    if (GradeExec < 1 || GradeSign < 1)
        throw GradeTooHighException();
}

// copy constructor (Orthodox Canonical AForm)
AForm::AForm(const AForm& cp)  : name(cp.name), target(cp.target), signeed(cp.signeed), gradetosign(cp.gradetosign), gradetoexec(cp.gradetoexec){
    std::cout<<"[AForm] Copy constructor called"<<std::endl;
    *this = cp;
}

// assignment operator (Orthodox Canonical AForm)
AForm& AForm::operator=(const AForm& cp){
    (void)cp;
    return *this;
}

// default destructor (Orthodox Canonical AForm)
AForm::~AForm(){
    std::cout<<"[AForm] default destructor called" <<std::endl;
}

// get name
const std::string AForm::getName(void) const{
    return this->name;
}

// get if it's signed
const std::string AForm::getSigned(void) const{
    if (this->signeed == 0)
        return "no";
    return "yes";
}

// get target
const std::string AForm::getTarget(void) const{
    return (this->target);
}

// get grade to sign
int AForm::getGradeToSign(void) const{
    return this->gradetosign;
}

// get grade to exec
int AForm::getGradeToExec(void) const{
    return this->gradetoexec;
}

// signed
void    AForm::beSigned(Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() >= this->gradetosign)
        throw GradeTooLowException();
    if (this->signeed == 1)
        throw AFormAlreadySignedException();
    this->signeed = 1;
}

// exeption for grade too high
const char* AForm::GradeTooHighException::what() const throw() {
    return "[AForm] Grade is too high!";
}

// exeption for grade too low
const char* AForm::GradeTooLowException::what() const throw() {
    return "[AForm] Grade is too low!";
}

// exeption for AForm already signed
const char* AForm::AFormAlreadySignedException::what() const throw() {
    return "[AForm] AForm is already signed!";
}

// exeption for AForm not signed
const char* AForm::AFormNotSignedException::what() const throw() {
    return "[AForm] AForm is not signed!";
}

// overload for output
std::ostream& operator<<(std::ostream& os, const AForm& AForm) {
    os << "[" << AForm.getName() << "] [signed -> " << std::boolalpha << AForm.getSigned() << "] [grade to sign : "<< AForm.getGradeToSign() << "] [grade to exec : " << AForm.getGradeToExec() << "]" << std::endl;
    return os;
}