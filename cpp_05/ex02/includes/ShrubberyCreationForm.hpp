#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "iostream"
#include "AForm.hpp"

class ShrubberyCreationForm : virtual public AForm{

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm& cp);
	ShrubberyCreationForm	&operator = (const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();

	virtual	void	execute(const Bureaucrat &caller) const;

};

#endif