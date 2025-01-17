#include "../includes/Form.hpp"

// default constructor (Orthodox Canonical Form)
Form::Form() : gradetosign(150), gradetoexec(150){
    std::cout<<"[Form] default constructor called" <<std::endl;
}

Form::Form(std::string Name, int GradeSign, int GradeExec) : name(Name), signeed(0), gradetosign(GradeSign), gradetoexec(GradeExec)
{
    if (GradeExec > 150 || GradeSign > 150)
        throw GradeTooLowException();
    if (GradeExec < 1 || GradeSign < 1)
        throw GradeTooHighException();
}

// copy constructor (Orthodox Canonical Form)
Form::Form(const Form& cp)  : name(cp.name), signeed(cp.signeed), gradetosign(cp.gradetosign), gradetoexec(cp.gradetoexec){
    std::cout<<"[Form] Copy constructor called"<<std::endl;
    *this = cp;
}

// assignment operator (Orthodox Canonical Form)
Form& Form::operator=(const Form& cp){
    (void)cp;
    return *this;
}

// default destructor (Orthodox Canonical Form)
Form::~Form(){
    std::cout<<"[Form] default destructor called" <<std::endl;
}

// get name
const std::string Form::getName(void) const{
    return this->name;
}

// get if it's signed
const std::string Form::getSigned(void) const{
    if (this->signeed == 0)
        return "no";
    return "yes";
}

// get grade to sign
int Form::getGradeToSign(void) const{
    return this->gradetosign;
}

// get grade to exec
int Form::getGradeToExec(void) const{
    return this->gradetoexec;
}

// signed
void    Form::beSigned(Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() >= this->gradetosign)
        throw GradeTooLowException();
    if (this->signeed == 1)
        throw FormAlreadySignedException();
    this->signeed = 1;
}

// exeption for grade too high
const char* Form::GradeTooHighException::what() const throw() {
    return "[Form] Grade is too high!";
}

// exeption for grade too low
const char* Form::GradeTooLowException::what() const throw() {
    return "[Form] Grade is too low!";
}

// exeption for form already signed
const char* Form::FormAlreadySignedException::what() const throw() {
    return "[Form] Form is already signed!";
}

// overload for output
std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "[" << form.getName() << "] [signed -> " << std::boolalpha << form.getSigned() << "] [grade to sign : "<< form.getGradeToSign() << "] [grade to exec : " << form.getGradeToExec() << "]" << std::endl;
    return os;
}