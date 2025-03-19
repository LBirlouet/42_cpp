#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include "iostream"
#include "vector"
#include "deque"
#include "ctime"
#include "cstdlib"
#include "sstream"
#include "limits"

class PmergeMe{

public:
    PmergeMe();
    PmergeMe(const PmergeMe &cp);
    PmergeMe& operator=(const PmergeMe &cp);
    ~PmergeMe();

    static bool checkArg(int ac, char** av);
    void sortAndMeasure();
    void addToContainers(int num);

private:

    std::vector<int> vec;
    std::deque<int> deq;

    void mergeInsertSort(std::vector<int>& container);
    void mergeInsertSort(std::deque<int>& container);
};


#endif