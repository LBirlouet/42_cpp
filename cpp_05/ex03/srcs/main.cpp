#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Bureaucrat bureaucrat("bureaucrat", 1);

	std::cout << "\n============= Presidential Pardon ============\n" << std::endl;

	AForm* ppf;
	ppf = someRandomIntern.makeForm("presidential pardon", "Antoine");
	bureaucrat.signForm(*ppf);
	bureaucrat.executeForm(*ppf);

	std::cout << "\n=============== Robotomy Request =============\n" << std::endl;

	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	bureaucrat.signForm(*rrf);
	bureaucrat.executeForm(*rrf);

	std::cout << "\n============== Shubbery Creation =============\n" << std::endl;

	AForm* scf;
	scf = someRandomIntern.makeForm("shrubbery creation", "Garden");
	bureaucrat.signForm(*scf);
	bureaucrat.executeForm(*scf);

	std::cout << "\n============= testing exceptions =============\n" << std::endl;

	AForm* tf;
	try {
		tf = someRandomIntern.makeForm("test", "test"); 
		(void)tf;
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
	
	std::cout << "\n==============================================\n" << std::endl;
}