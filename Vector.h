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
    vector<T> a;
    size_t dim;
public:
    MyVector(vector<T>::iterator bg, vector<T>::iterator ed);
    MyVector(T myArray[], size_t length);
    MyVector(T x, T y);
    MyVector(T x, T y, T z);

    const vector<T>& get_V() const ;
    T get_n(unsigned n);
    size_t get_dim();
    bool set_n(unsigned n, T x);


};

#endif //TOY_WAR_VECTOR_H
