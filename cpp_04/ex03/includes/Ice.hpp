#ifndef ICE_HPP
#define ICE_HPP

#include "iostream"

class Ice
{

public:

    Ice();
    ~Ice();
    Ice(const Ice& cp);
    Ice   &operator = (const Ice &cp);

};


#endif