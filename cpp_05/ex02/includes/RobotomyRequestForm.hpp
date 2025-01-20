#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "iostream"
#include "AForm.hpp"

class RobotomyRequestForm : virtual public AForm{

public:

	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm& cp);
	RobotomyRequestForm	&operator = (const RobotomyRequestForm &other);
	~RobotomyRequestForm();

	virtual	void	execute(const Bureaucrat &caller) const;

};

#endif