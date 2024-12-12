#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{

public:

    WrongAnimal();
    WrongAnimal(std::string _type);
	virtual ~WrongAnimal();
    void    setType(std::string _type);
    std::string    getType() const;
    virtual void    makeSound() const;

private:

    std::string type;

};

#endif