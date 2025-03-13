#include "../includes/BitcoinExchange.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        return (1);
    }
    BitcoinExchange exchange("data.csv");
    exchange.compareData(av[1]);

}