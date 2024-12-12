#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

class Animal
{

public:

    Animal();
    Animal(std::string _type);
    Animal(const Animal& cp);
    Animal   &operator = (const Animal &cp);
	virtual ~Animal();
    void    setType(std::string _type);
    std::string    getType() const;
    virtual void    makeSound() const = 0;

protected:

    std::string type;

};

#endif