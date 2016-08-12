//
// Created by lijiahao on 8/4/16.
//

export <typename T> class MyVector;
#include "Vector.h"

MyVector::MyVector(vector<T>::iterator bg, vector<T>::iterator ed) : a(bg, ed), dim(a.size()) { }
MyVector::MyVector(T myArray[], size_t length) :  a(myArray, myArray + length), dim(length) { }
MyVector::MyVector() {
    dim = cnt;
}
MyVector::MyVector(T x, T... xs) {
    static unsigned cnt = 0;
    a.push_back(x);
    ++cnt;
    MyVector(xs...);
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

ostream& operator<< (ostream& os, const MyVector &v)
{
    os << '(' ;
    for(vector<T>::iterator iter = v.get_V().begin(); iter != v.get_V().end(); ++iter)
    {
        os << *iter;
        if(iter != v.get_V().end() - 1)
            os << ', ';
    }
    os << ")";
    return os;
}

operator+ (const MyVector& lhs, const MyVector& rhs)
{
    MyVector ret(lhs);
    for(int i = 1; i <= dim; ++i)
        ret.set_n(lhs.get_n(i) + rhs.get_n(i));
    return &ret;
}