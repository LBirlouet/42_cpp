#ifndef AFORM_HPP
#define AFORM_HPP

#include "iostream"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

public:

    AForm();
    AForm(std::string name, int gradetosign, int gradetoexec);
    AForm(std::string name, std::string target, int gradetosign, int gradetoexec);
    AForm(const AForm& cp);
    AForm   &operator = (const AForm &cp);
    ~AForm();

    const std::string getName(void) const;
    const std::string getSigned(void) const;
    const std::string getTarget(void) const;
    int    getGradeToSign(void) const;
    int    getGradeToExec(void) const;
    void    beSigned(Bureaucrat& bureaucrat);

    virtual void    execute(const Bureaucrat &executor) const = 0;

    class GradeTooHighException : public std::exception{
    public:
        virtual const char * what() const throw();
    };

    class GradeTooLowException : public std::exception{
    public:
        virtual const char * what() const throw();
    };

    class AFormAlreadySignedException : public std::exception{
    public:
        virtual const char * what() const throw();
    };

    class AFormNotSignedException : public std::exception{
    public:
        virtual const char * what() const throw();
    };
private:

    const std::string name;
    const std::string target;
    bool signeed;
    const int gradetosign;
    const int gradetoexec;

};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif