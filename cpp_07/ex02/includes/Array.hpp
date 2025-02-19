#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "iostream"
#include "cstdlib"
#include "ctime"


template <typename T>
class Array{

public:
    //default constructor
    Array() : arraySize(0), data(NULL){
    }
    //constructor with arg
    Array(unsigned int n) : arraySize(n){
        data = new T[n]();
    }

    //cp constructor
    Array(const Array& cp) : arraySize(cp.arraySize){
        data = new T[arraySize];
        for (unsigned int i = 0; i < arraySize; ++i)
            data[i] = cp.data[i];
    }

    //assignement operator
    Array& operator=(const Array& cp){
        if (this != &cp){
            delete[] data;
            arraySize = cp.arraySize;
            data = new T[arraySize];
            for (unsigned int i = 0; i < arraySize; ++i)
                data[i] = cp.data[i];
        }
        return *this;
    }
    //destructor
    ~Array(){
        delete[] data;
    }

    //overload operator[]
    T& operator[](int index) {
        if (index < 0 || static_cast<unsigned int>(index) >= arraySize) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    //overload operator[] for const
    const T& operator[](int index) const{
        if (index < 0 || static_cast<unsigned int>(index) >= arraySize)
            throw std::out_of_range("Index out of bounds");
        return data[index];
    }

    //recover array size
    unsigned int size() const{
        return (arraySize);
    }

private:
    unsigned int arraySize;
    T* data;

};



#endif