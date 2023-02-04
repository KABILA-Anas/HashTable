#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
#include <vector>
#include <Pair.h>
#define SIZE 50000 // Size of the HashTable

using namespace std;

template <class T>
class HashTable
{
    public:
        HashTable();
        int HashFunction(string key);
        void addElement(string, T);
        T getElementValue(string);
        virtual ~HashTable();

    private:
        int const Size = SIZE;
        vector<Pair<T>> Table[SIZE];
};

#endif // HASHTABLE_H
