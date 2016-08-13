//
// Created by lijiahao on 8/4/16.
//

#include "Vector.h"
#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
MyVector<T>::MyVector(typename vector<T>::iterator bg, typename vector<T>::iterator ed) : a(bg, ed), dim(a.size()) { }
template <typename T>
MyVector<T>::MyVector(T myArray[], size_t length) :  a(myArray, myArray + length), dim(length) { }
//template <typename T>
//MyVector<T>::MyVector() {
//    dim = cnt;
//}
//template <typename T>
//MyVector<T>::MyVector(T x, T... xs) {
//    static unsigned cnt = 0;
//    a.push_back(x);
//    ++cnt;
//    MyVector(xs...);
//}

template <typename T>
const vector<T>& MyVector<T>::get_V() const {
    return a;
}

template <typename T>
const T MyVector<T>::get_n(unsigned n) const {
    return a.at(n-1);
}

template <typename T>
const size_t MyVector<T>::get_dim() const {
    return dim;
}

template <typename T>
bool MyVector<T>::set_n(unsigned n, T x) {
    if(n > 0 && n <= dim)
    {
        a[n - 1] = x;
        return true;
    }
    else
        return false;
}

template <typename T>
ostream& operator<< (ostream& os, const MyVector<T> &v)
{
    os << '(' ;
    for(typename vector<T>::const_iterator iter = v.get_V().begin(); iter != v.get_V().end(); ++iter)
    {
        os << *iter;
        if(iter != v.get_V().end() - 1)
            os << ", ";
    }
    os << ")";
    return os;
}

template <typename T>
MyVector<T> operator+ (const MyVector<T>& lhs, const MyVector<T>& rhs)
{
    MyVector<T> ret(lhs);
    if(lhs.get_dim() != rhs.get_dim())
        throw invalid_argument("Dim does not equal!");
    else
    {
        for(int i = 1; i <= ret.get_dim(); ++i)
            ret.set_n(i, lhs.get_n(i) + rhs.get_n(i));
    }
    return ret;
}