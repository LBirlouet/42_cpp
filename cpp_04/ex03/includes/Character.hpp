#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "iostream"

class Character
{

public:

    Character();
    ~Character();
    Character(const Character& cp);
    Character   &operator = (const Character &cp);

};


#endif