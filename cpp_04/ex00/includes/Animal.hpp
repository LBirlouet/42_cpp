#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

class Animal
{

public:

    Animal();
    Animal(std::string _type);
	virtual ~Animal();
    void    setType(std::string _type);
    std::string    getType() const;
    virtual void    makeSound() const;

private:

    std::string type;

};

#endif