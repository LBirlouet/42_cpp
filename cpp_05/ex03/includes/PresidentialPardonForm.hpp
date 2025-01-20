#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "iostream"
#include "AForm.hpp"

class PresidentialPardonForm : virtual public AForm{

public:

	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm& cp);
	PresidentialPardonForm	&operator = (const PresidentialPardonForm &other);
	~PresidentialPardonForm();

	virtual	void	execute(const Bureaucrat &caller) const;


};

#endif