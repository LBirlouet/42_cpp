#include "../includes/Bureaucrat.hpp"

int main()
{

	std::cout << "\n============ creating bureaucrats ============\n" << std::endl;

	Bureaucrat boss("boss", 1);
	std::cout << boss << std::endl;

	std::cout << "\n============ CHECKKKKKKKK ============\n" << std::endl;


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

	std::cout << "\n============= testing exceptions =============\n" << std::endl;
	
	try {Bureaucrat toohigh("toohigh", 0);}
	catch(const std::exception& exep) {std::cerr << exep.what() << std::endl;}

	try {Bureaucrat toolow("toolow", 160);}
	catch(const std::exception& exep) {std::cerr << exep.what() << std::endl;}

	try {boss.upGrade();}
	catch(const std::exception& exep) {std::cerr << exep.what() << std::endl;}
		
	try {intern.downGrade();}
	catch(const std::exception& exep) {std::cerr << exep.what() << std::endl;}
	
	std::cout << "\n==============================================\n" << std::endl;
}