#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

// template for print
template<class T>
void print(T &c){
    std::cout << c << std::endl;
}

// template for iter
template <typename T>
void iter(T* ptr, size_t size, void(*function)(T& param)){
	for (size_t i = 0; i < size; i++)
		function(ptr[i]);
}

#endif