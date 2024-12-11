#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "iostream"

class WrongCat
{

public:

    WrongCat();
    WrongCat(std::string Name);
	~WrongCat();


private:

    std::string wrong_cat_type;

};

#endif