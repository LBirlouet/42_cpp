#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"

class Bureaucrat
{

public:

    Bureaucrat();
    Bureaucrat(std::string Name, int Grade);
    Bureaucrat(const Bureaucrat& cp);
    Bureaucrat   &operator = (const Bureaucrat &cp);
    ~Bureaucrat();

    std::string getName() const;
    int         getGrade() const;
    
    void    upGrade(void);
    void    downGrade(void);

    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

private:

    const std::string name;
    int grade; 
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);


#endif