#include "Pair.h"

template <class T>
Pair<T>::Pair(string k, T v)
{
    key = k;
    value = v;
}

template <class T>
Pair<T>::~Pair()
{
    //dtor
}

template <class T>
string Pair<T>::getKey()
{
    return key;
}

template <class T>
T Pair<T>::getValue()
{
    return value;
}
