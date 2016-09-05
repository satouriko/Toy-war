//
// Created by lijiahao on 9/5/16.
//

#ifndef TOY_WAR_VECTOR_H
#define TOY_WAR_VECTOR_H

#include <vector>

template<typename T>
std::ostream &operator<<(std::ostream &os, const std::vector <T> &v);

template<typename T>
std::vector <T> operator+(const std::vector <T> &lhs, const std::vector <T> &rhs);

#include "Vector.cpp"

#endif //TOY_WAR_VECTOR_H
