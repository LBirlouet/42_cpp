#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"

class Brain
{

public:

    Brain();
    Brain(const Brain& cp);
    Brain   &operator = (const Brain &cp);
	~Brain();

private:

    std::string ideas[100];

};

#endif