#ifndef RPN_HPP
#define RPN_HPP

#include "iostream"
#include "string"
#include "stack"

class RPN{

public:
    RPN();
    RPN(const RPN &cp);
    RPN& operator=(const RPN &cp);
    ~RPN();

    bool checkArg(const std::string str);
    void doOperation(const std::string str);

private:

    std::stack<double> nb;


};

#endif