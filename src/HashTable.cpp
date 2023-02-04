#include "HashTable.h"
#include <Pair.h>
#include <../src/Pair.cpp>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

template <class T>
HashTable<T>::HashTable()
{
    //ctor
}

template <class T>
HashTable<T>::~HashTable()
{
    //dtor
}

/**
This function generate an index for a key(string)
using his caracters ASCII code
*/
template <class T>
int HashTable<T>::HashFunction(string key)
{
    unsigned long index = 0;

    for (int j = 0; key[j]; j++)
        index += key[j];

    return index % SIZE;
}

/**
insert a pair of key and value in the correct place
depending on the index calculated with the hash function
*/
template <class T>
void HashTable<T>::addElement(string key, T value)
{
    int index = HashFunction(key);
    Table[index].push_back(Pair<T>(key, value));
}

/**
return the value for the entered key
*/
template <class T>
T HashTable<T>::getElementValue(string key)
{
    int index, i;
    index = HashFunction(key);
    i = Table[index].size();
    while(i)
    {
        if(Table[index][i-1].getKey() == key)
            return Table[index][i-1].getValue();
        i--;
    }
    cout << "Cette element n existe pas" << endl;
    return -1;
}
