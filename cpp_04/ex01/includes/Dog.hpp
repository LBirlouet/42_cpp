#ifndef DOG_HPP
#define DOG_HPP

#include "iostream"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:

    Dog();
    ~Dog();
    Dog(const Dog& cp);
    Dog   &operator = (const Dog &cp);
    void    makeSound() const;

private:

    Brain *brain;
};

#endif