#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "iostream"
#include "cmath"
#include "climits"

class ScalarConverter{

public:

    static void    conv(std::string _str);

private:

    ScalarConverter();
    ScalarConverter(const std::string& param);
    ScalarConverter(const ScalarConverter& cp);
    ScalarConverter& operator=(const ScalarConverter& cp);
    ~ScalarConverter();

    char    convChar();
    int     convInt();
    float   convFloat();
    double  convDouble();

    std::string    str;

};

#endif