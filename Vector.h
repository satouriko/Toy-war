//
// Created by lijiahao on 8/4/16.
//

#ifndef TOY_WAR_VECTOR_H
#define TOY_WAR_VECTOR_H

#include <vector>
#include <cstddef>

template <typename T>
class MyVector {
private:
    std::vector<T> a;
    std::size_t dim;
public:
    MyVector(typename std::vector<T>::iterator bg, typename std::vector<T>::iterator ed);
    MyVector(T myArray[], std::size_t length);
    //MyVector();
    //MyVector(T x, T... xs);

    const std::vector<T>& get_V() const;
    const T get_n(unsigned n) const ;
    const std::size_t get_dim() const;
    bool set_n(unsigned n, T x);


};

#include "Vector.cpp"
#endif //TOY_WAR_VECTOR_H
