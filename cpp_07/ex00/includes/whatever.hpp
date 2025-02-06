#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include "iostream"

// template for swap
template <typename T>
void swap(T& i, T& j) {
    T temp = i;
    i = j;
    j = temp;
}

// template for min
template <typename T>
T min(T i, T j) {
    return (i < j) ? i : j;
}

// template for max
template <typename T>
T max(T i, T j) {
    return (i > j) ? i : j;
}

#endif