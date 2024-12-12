#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "iostream"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:

    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat& cp);
    WrongCat   &operator = (const WrongCat &cp);
    void    makeSound() const;
};

#endif