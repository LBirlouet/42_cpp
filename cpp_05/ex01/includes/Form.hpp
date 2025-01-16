#ifndef FORM_HPP
#define FORM_HPP

#include "iostream"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:

    Form();
    Form(std::string Name, int GradeSign, int GradeExec);
    Form(const Form& cp);
    Form   &operator = (const Form &cp);
    ~Form();

    const std::string getName(void) const;
    const std::string getSigned(void) const;
    int    getGradeToSign(void) const;
    int    getGradeToExec(void) const;
    void    beSigned(Bureaucrat& bureaucrat);

    class GradeTooHighException : public std::exception{
    public:
        virtual const char * what() const throw();
    };

    class GradeTooLowException : public std::exception{
    public:
        virtual const char * what() const throw();
    };

    class FormAlreadySignedException : public std::exception{
    public:
        virtual const char * what() const throw();
    };

private:

    const std::string name;
    bool signeed;
    const int gradetosign;
    const int gradetoexec;

};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif