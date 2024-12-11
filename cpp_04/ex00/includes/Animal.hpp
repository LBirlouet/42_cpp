#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

class Animal
{

public:

    Animal();
    Animal(std::string Name);
	~Animal();


private:

    std::string animal_type;

};

#endif