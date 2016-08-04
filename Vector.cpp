//
// Created by lijiahao on 8/4/16.
//

export template <typename T> class MyVector;
#include "Vector.h"

MyVector::MyVector(vector<T>::iterator bg, vector<T>::iterator ed) : a(bg, ed), dim(a.size()) { }
MyVector::MyVector(T myArray[], size_t length) :  a(myArray, myArray + length), dim(length) { }
MyVector::MyVector(T x, T y): dim(2) {
    a.push_back(x);
    a.push_back(y);
}
MyVector::MyVector(T x, T y, T z): dim(3) {
    a.push_back(x);
    a.push_back(y);
    a.push_back(z);
}

const vector<T>& MyVector::get_V() const {
    return &a;
}

T MyVector::get_n(unsigned n) {
    return a.at(n+1);
}

size_t MyVector::get_dim() {
    return dim;
}

bool MyVector::set_n(unsigned n, T x) {
    if(n > 0 && n <= dim)
    {
        a[n] = x;
        return true;
    }
    else
        return false;
}

operator+ (const MyVector& lhs, const MyVector& rhs)
{
    MyVector ret(lhs);
    for(int i = 1; i <= dim; ++i)
        ret.set_n(lhs.get_n(i) + rhs.get_n(i));
    return &ret;
}