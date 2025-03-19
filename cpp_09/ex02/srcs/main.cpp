#include "../includes/PmergeMe.hpp"

int main(int ac, char **av){
    if (!PmergeMe::checkArg(ac, av)){
        std::cout << "Error : invalid arguments" << std::endl;
        return (1);
    }

    PmergeMe sorter;
    for (int i = 1; i < ac; i++) {
        int num = std::atoi(av[i]);
        sorter.addToContainers(num);
    }

    sorter.sortAndMeasure();
    return 0;

}