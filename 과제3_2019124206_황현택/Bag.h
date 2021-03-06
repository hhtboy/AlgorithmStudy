#pragma once
#include <iostream>

template <class T>
class Bag
{
protected:
    T *array;
    int capacity;
    int top;

public:
	Bag()
	{
	}
    virtual ~Bag()
	{
	} 
    virtual int Size() const = 0;
    virtual bool isEmpty() = 0;
    virtual void Push(const T &x) = 0;
    virtual void Pop() = 0;
};


