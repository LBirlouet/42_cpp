#include <iostream>

int	main(){
    std::string mybrain;
    std::string* stringPTR = &mybrain;
    std::string& stringREF = mybrain;

    mybrain = "HI THIS IS BRAIN";

    std::cout << "Address :" << std::endl;
    std::cout << "memory address of the string variable : " << &mybrain << std::endl;
    std::cout << "memory address held by stringPTR      : " << stringPTR << std::endl;
    std::cout << "memory address held by stringREF      : " << &stringREF << std::endl;

    std::cout << "" << std::endl;

    std::cout << "Value :" << std::endl;
    std::cout << "value of the string variable          : " << mybrain << std::endl;
    std::cout << "value pointed to by stringPTR         : " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF         : " << stringREF << std::endl;
}