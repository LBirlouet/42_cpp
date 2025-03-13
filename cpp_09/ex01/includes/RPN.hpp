#ifndef RPN_HPP
#define RPN_HPP

#include "iostream"

class RPN{

public:
    RPN();
    RPN(const RPN &cp);
    RPN& operator=(const RPN &cp);
    ~RPN();

    void checkArg(std::string str);



private:




};

#endif