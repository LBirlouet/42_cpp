#include "../includes/PmergeMe.hpp"

// default constructor (Orthodox Canonical Form)
PmergeMe::PmergeMe(){
    std::cout<<"[PmergeMe] constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
PmergeMe::PmergeMe(const PmergeMe& cp){
    std::cout << "[PmergeMe] Copy constructor called" << std::endl;
    *this = cp;
}

// copy assignment operator (Orthodox Canonical Form)
PmergeMe& PmergeMe::operator=(const PmergeMe& cp){
    if (this != &cp){
        vec = cp.vec;
        deq = cp.deq;
    }
    std::cout << "[PmergeMe] Copy assignment operator called" << std::endl;
    return *this;
}

// default destructor (Orthodox Canonical Form)
PmergeMe::~PmergeMe(){
    std::cout<<"[PmergeMe] default destructor called" <<std::endl;
}

// check arguments
bool PmergeMe::checkArg(int ac, char** av){
    if (ac < 2)
        return false;
    for (int i = 1; i < ac; i++){
        std::string arg(av[i]);
        for (size_t j = 0; j < arg.length(); j++){
            if (!isdigit(arg[j])) 
                return false;
        }
        long num = std::atol(arg.c_str());
        if (num > std::numeric_limits<int>::max() || num < 0) 
            return false;
    }
    return true;
}

// sort and calcul time
void PmergeMe::sortAndMeasure() {
    std::vector<int> sortedVec = vec;
    std::deque<int> sortedDeq = deq;

    clock_t startVec = clock();
    mergeInsertSort(sortedVec);
    clock_t endVec = clock();
    double timeVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1e6;

    clock_t startDeq = clock();
    mergeInsertSort(sortedDeq);
    clock_t endDeq = clock();
    double timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1e6;

    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); i++) std::cout << vec[i] << " ";
    std::cout << std::endl;

    std::cout << "After: ";
    for (size_t i = 0; i < sortedVec.size(); i++) std::cout << sortedVec[i] << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " 
              << timeVec << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque: " 
              << timeDeq << " us" << std::endl;
}

// sort for vector
void PmergeMe::mergeInsertSort(std::vector<int>& container){
    if (container.size() < 2) 
        return;

    std::vector<int> mainSeq, pendSeq;
    
    for (size_t i = 0; i + 1 < container.size(); i += 2){
        if (container[i] > container[i + 1])
            std::swap(container[i], container[i + 1]);
        mainSeq.push_back(container[i + 1]);
        pendSeq.push_back(container[i]);
    }

    if (container.size() % 2 != 0)
        mainSeq.push_back(container.back());

    mergeInsertSort(mainSeq);

    for (size_t i = 0; i < pendSeq.size(); ++i) {
        std::vector<int>::iterator pos = std::lower_bound(mainSeq.begin(), mainSeq.end(), pendSeq[i]);
        mainSeq.insert(pos, pendSeq[i]);
    }
    container = mainSeq;
}

// sort for deque
void PmergeMe::mergeInsertSort(std::deque<int>& container){
    if (container.size() < 2)
        return;

    std::deque<int> mainSeq, pendSeq;

    for (size_t i = 0; i + 1 < container.size(); i += 2){
        if (container[i] > container[i + 1])
            std::swap(container[i], container[i + 1]);
        mainSeq.push_back(container[i + 1]);
        pendSeq.push_back(container[i]);
    }

    if (container.size() % 2 != 0)
        mainSeq.push_back(container.back());

    mergeInsertSort(mainSeq);

    for (size_t i = 0; i < pendSeq.size(); ++i){
        std::deque<int>::iterator pos = std::lower_bound(mainSeq.begin(), mainSeq.end(), pendSeq[i]);
        mainSeq.insert(pos, pendSeq[i]);
    }
    container = mainSeq;
}

// add args to containers
void PmergeMe::addToContainers(int num){
    vec.push_back(num);
    deq.push_back(num);
}
