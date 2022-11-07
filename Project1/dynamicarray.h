#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <iostream>
using namespace std;

template <typename T>
class Array
{
    T *arr;
    int size;
    int index;

public:
    Array();
    void add(T value);
    T get(int index);
    void print();
};

template <typename T>
Array<T>::Array() : size(1), index(0)
{
    arr = new T[size];
}

template <typename T>
void Array<T>::add(T value)
{
    if (index >= size)
    {
        int newSize = size * 2;
        T *newArr = new T[newSize];
        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        size = newSize;
    }
    arr[index] = value;
    index += 1;
}

template <typename T>
T Array<T>::get(int index)
{
    return arr[index];
}

template <typename T>
void Array<T>::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

#endif // DYNAMICARRAY_H
