#ifndef SPAN_HPP
#define SPAN_HPP

#include "iostream"
#include "algorithm"
#include "limits"
#include "stdexcept"
#include "vector"

class Span{

public:

    Span();
    Span(unsigned int N);
    Span(const Span& cp);
    Span& operator=(const Span& cp);
    ~Span();

    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;
    void printNumbers() const;

private:

    unsigned int maxSize;
    std::vector<int> numbers;
};



#endif