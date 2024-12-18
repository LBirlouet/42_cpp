#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"

class Bureaucrat
{

public:

    Bureaucrat();
    Bureaucrat(const Bureaucrat& cp);
    Bureaucrat   &operator = (const Bureaucrat &cp);
	~Bureaucrat();

private:

    std::string type;

};

#endif