#include "../includes/RPN.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cerr << "Error: invalid number of arguments" << std::endl;
        return 1;
    }

    RPN calculate;
    if (!calculate.checkArg(av[1])){
        std::cerr << "Error: invalid arguments" << std::endl;
        return 1;        
    }
    calculate.doOperation(av[1]);
}