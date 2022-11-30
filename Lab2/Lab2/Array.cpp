#include "Array.h"

Array::Array() : amount(10)
{
    cout << "Default constructor has been called for " + name + " object" << endl;
    arr = new int[amount];
}

Array::Array(string name, int amount) : amount(amount)
{
    cout << "Constructor with parametrs: name, amount has been called for " + name + " object" << endl;
    arr = new int[amount];
    this->name = name;
    for (int i = 0; i < amount; i++)
    {
        arr[i] = i;
    }
}



void Array::fill()
{
    cout << "Constructor without parametrs has been called" << endl;
    int defautlValue = 0;
    for (int i = 0; i < amount - 1; i++)
    {
        arr[i] = defautlValue;
    }
}


 /*Array::~Array()
{
    cout << "For " + name + " has been called Destructor" << endl;
        if (arr != nullptr)
            delete[] arr;
} */


void Array::display()
{
    for (int i = 0; i < amount; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void Array::next()
{
    for (int i = 0; i < amount; i++)
    {
        arr[i] = arr[i] + 1;
    }
}


int& Array::operator[](const int index)
{
    if (index < amount)
        return arr[index];
}
