#include "../includes/Bureaucrat.hpp"

int main()
{
	std::cout << "\n============ creating bureaucrats ============\n" << std::endl;

	Bureaucrat boss("boss", 1);
	std::cout << boss << std::endl;

	Bureaucrat employee("employee", 75);
	std::cout << employee << std::endl;

	Bureaucrat intern("intern", 150);
	std::cout << intern << std::endl;

	std::cout << "\n============ upgrade bureaucrats =============\n" << std::endl;

	employee.upGrade();
	std::cout << employee << std::endl;
	intern.upGrade();
	std::cout << intern << std::endl;

	std::cout << "\n=========== downgrade bureaucrats ============\n" << std::endl;

	employee.downGrade();
	std::cout << employee << std::endl;
	intern.downGrade();
	std::cout << intern << std::endl;

	std::cout << "\n=============== creating forms ===============\n" << std::endl;

	Form form1("form1", 150, 150);
	std::cout << form1 << std::endl;
	Form form2("form2", 1, 1);
	std::cout << form2 << std::endl;

	std::cout << "\n=============== signing forms ================\n" << std::endl;

	form1.beSigned(boss);
	std::cout << form1 << std::endl;
	boss.signForm(form1);

	std::cout << "\n============= testing exceptions =============\n" << std::endl;
	
	try { Bureaucrat toohigh("toohigh", 0); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { Bureaucrat toolow("toolow", 160); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { boss.upGrade(); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
		
	try { intern.downGrade(); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { employee.signForm(form2); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { form2.beSigned(employee); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { form1.beSigned(employee); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { Form form3("form3", 160, 160); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { Form form4("form4", 0, 0); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
	
	std::cout << "\n==============================================\n" << std::endl;
}