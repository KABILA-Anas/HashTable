#ifndef PAIR_H
#define PAIR_H
#include <iostream>

using namespace std;

template <class T>
class Pair
{
    public:
        Pair(string, T);
        string getKey();
        T getValue();
        virtual ~Pair();

    private:
        string key;
        T value;
};

#endif // PAIR_H
