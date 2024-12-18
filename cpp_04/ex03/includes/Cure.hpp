#ifndef CURE_HPP
#define CURE_HPP

#include "iostream"

class Cure
{

public:

    Cure();
    ~Cure();
    Cure(const Cure& cp);
    Cure   &operator = (const Cure &cp);

};

#endif