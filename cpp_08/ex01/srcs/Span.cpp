#include "../includes/Span.hpp"

// default constructor (Orthodox Canonical Form)
Span::Span() : maxSize(0){
    std::cout<<"[Span] default constructor called" <<std::endl;
}

// constructor
Span::Span(unsigned int N) : maxSize(N){
    std::cout<<"[Span] constructor called" <<std::endl;
}

// assignment operator (Orthodox Canonical Form)
Span::Span(const Span& cp) : maxSize(cp.maxSize), numbers(cp.numbers) {
    std::cout << "[Span] Copy constructor called" << std::endl;
}

// assignment operator (Orthodox Canonical Form)
Span& Span::operator=(const Span& cp){
    if (this != &cp){
        maxSize = cp.maxSize;
        numbers = cp.numbers;
    }
    std::cout << "[Span] Copy assignment operator called" << std::endl;
    return *this;
}

// default destructor (Orthodox Canonical Form)
Span::~Span(void){
    std::cout<<"[Span] default destructor called" <<std::endl;
}

// add a number to the Span
void Span::addNumber(int number){
    if (numbers.size() >= maxSize)
        throw std::overflow_error("Cannot add number: Span is already full.");
    numbers.push_back(number);
}

// add  range to the Span
void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (std::distance(begin, end) + numbers.size() > maxSize)
        throw std::overflow_error("Cannot add numbers: Span would exceed max size.");
    numbers.insert(numbers.end(), begin, end);
}

// find the minimum difference
int Span::shortestSpan() const{
    if (numbers.size() < 2)
        throw std::logic_error("Not enough numbers to determine a span.");
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedNumbers.size(); ++i)
        minSpan = std::min(minSpan, sortedNumbers[i] - sortedNumbers[i - 1]);
    return minSpan;
}

// find the maximum difference
int Span::longestSpan() const{
    if (numbers.size() < 2)
        throw std::logic_error("Not enough numbers to determine a span.");

    int minNum = *std::min_element(numbers.begin(), numbers.end());
    int maxNum = *std::max_element(numbers.begin(), numbers.end());

    return (maxNum - minNum);
}

// print numbers
void Span::printNumbers() const{
    std::cout << "[Span] Stored numbers: ";
    if (numbers.empty()){
        std::cout << "No numbers stored." << std::endl;
        return;
    }

    for (size_t i = 0; i < numbers.size(); ++i){
        std::cout << numbers[i];
        if (i < numbers.size() - 1)
            std::cout << ", ";
    }
    std::cout << std::endl;
}
