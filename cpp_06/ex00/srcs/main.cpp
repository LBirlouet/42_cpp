#include "../includes/ScalarConverter.hpp"

int main(int ac, char **av){
if (ac != 2)
    std::cout << "Bad Synthax !" << std::endl;

else{
    ScalarConverter::conv(av[1]);
}
}