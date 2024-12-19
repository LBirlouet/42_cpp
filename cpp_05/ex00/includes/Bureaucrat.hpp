#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"

class Bureaucrat
{

public:

    Bureaucrat();
    Bureaucrat(std::string Name);
    Bureaucrat(const Bureaucrat& cp);
    Bureaucrat   &operator = (const Bureaucrat &cp);
	~Bureaucrat();

    std::string getName() const;
    void        setName(std::string Name);

private:

    const std::string name;
    int grade; 
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);


#endif