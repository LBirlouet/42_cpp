#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "iostream"

class IMateriaSource
{

public:

    IMateriaSource();
    ~IMateriaSource();
    IMateriaSource(const IMateriaSource& cp);
    IMateriaSource   &operator = (const IMateriaSource &cp);

};



#endif