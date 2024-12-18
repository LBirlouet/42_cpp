#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "iostream"

class MateriaSource
{

public:

    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource& cp);
    MateriaSource   &operator = (const MateriaSource &cp);

};


#endif