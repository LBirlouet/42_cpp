#ifndef INTERN_HPP
#define INTERN_HPP

#include "iostream"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{

public:

    Intern();
    Intern(const Intern &cp);
    Intern   &operator = (const Intern &cp);
    ~Intern();

    AForm *makeForm(const std::string &name, const std::string &target) const;

    class WrongFormException : public std::exception{
    public:
        virtual const char* what() const throw();
    };

};

#endif