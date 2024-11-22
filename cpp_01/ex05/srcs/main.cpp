#include "../includes/Harl.hpp"

int main(int ac, char **av){
    if (ac != 2)
        std::cout<<"Error, bad arguments"<<std::endl;
    else{
        Harl harl;

        harl.complain(av[1]);
    }
}