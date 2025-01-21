#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "iostream"
#include "cmath"

class ScalarConverter{

public:

    ScalarConverter();
    ScalarConverter(const std::string& param);
    ScalarConverter(const ScalarConverter& cp);
    ScalarConverter& operator=(const ScalarConverter& cp);
    ~ScalarConverter();

    void    conv();
    char    convChar();
    int     convInt();
    float   convFloat();
    double  convDouble();

private:

     std::string    str;

};

#endif