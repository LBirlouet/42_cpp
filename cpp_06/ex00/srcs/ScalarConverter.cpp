#include "../includes/ScalarConverter.hpp"

// default constructor (Orthodox Canonical Form)
ScalarConverter::ScalarConverter(){
    std::cout<<"[ScalarConverter] default constructor called" <<std::endl;
}

// constructor with param
ScalarConverter::ScalarConverter(const std::string& _str) : str(_str){
    std::cout<<"[ScalarConverter] constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
ScalarConverter::ScalarConverter(const ScalarConverter& cp){
    std::cout<<"[ScalarConverter] Copy constructor called"<<std::endl;
    *this = cp;
}

// assignment operator (Orthodox Canonical Form)
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& cp){
	(void)cp;
    std::cout << "[Bureaucrat] Copy assignment operator called" << std::endl;
	return *this;
}

// default destructor (Orthodox Canonical Form)
ScalarConverter::~ScalarConverter(void){
    std::cout<<"[ScalarConverter] default destructor called" <<std::endl;
}

// converter char
char ScalarConverter::convChar(){   
    return (static_cast<char>(convFloat()));
}

// converter int
int ScalarConverter::convInt(){
    return (atoi(this->str.c_str()));
}

// converter float
float ScalarConverter::convFloat(){
    return (atof(this->str.c_str()));
}

// converter double
double ScalarConverter::convDouble(){
    return static_cast<double>(convFloat());
}

// converter
void ScalarConverter::conv(){
    const char param_char = convChar();
    const int param_int = convInt();
    const float param_float = convFloat();
    const double param_double = convDouble();

    if (param_char < CHAR_MIN || param_char > CHAR_MAX || param_float != param_float)
        std::cout << "char: impossible" << std::endl;
    else if (isprint(param_char))
        std::cout << "char: " << param_char << std::endl;
    else
        std::cout << "char: non displayable" << std::endl;

    if (param_int < INT_MIN || param_int > INT_MAX || param_float != param_float)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << param_int << std::endl;

    if (param_float - param_int == 0){
        std::cout << "float: " << param_float << ".0f" << std::endl;
        std::cout << "double: " << param_double << ".0" << std::endl;
    }
    else{
        std::cout << "float: " << param_float << "f" << std::endl;
        std::cout << "double: " << param_double << std::endl;
    }
}