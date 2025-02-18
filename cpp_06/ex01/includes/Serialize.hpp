#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include "iostream"
#include "string"
#include "stdint.h"

class Serializer{

public: 

    struct Data{
        std::string name;
        int i;

        Data(int j, const std::string& n) : name(n), i(j){
        }
    };

    static uintptr_t serialize(Data* ptr);

    static Data* deserialize(uintptr_t raw);

private:

    Serializer();
    Serializer(const Serializer &cp);
    Serializer& operator=(const Serializer& cp);
    ~Serializer();
};

#endif