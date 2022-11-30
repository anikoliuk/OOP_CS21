#pragma once
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Array
{
    string name;
    int* arr;
    int amount;
public:
    Array();
    Array(string name, int amount);
    // ~Array();
    void fill();
    void display();
    void next();

    int& operator[] (const int index);

    Array& operator * (Array& arrRight)
    {
        int resultSize = 0;
        unordered_set<int> setOfLeftArr(arr, arr + amount);
        for (int i = 0; i < arrRight.amount; i++) {
            if (setOfLeftArr.find(arrRight[i]) != setOfLeftArr.end()) {
                resultSize++;
            }
        }
        Array result("Result", resultSize);
        for (int i = 0, j = 0; i < arrRight.amount; i++) {
            if (setOfLeftArr.find(arrRight[i]) != setOfLeftArr.end()) {
                result[j++] = arrRight[i];
            }
        }
        return result;
    }


    /*
     Array& operator = (Array& arr)
    {
        cout << "Constructor = has been called" << endl;
        this->arr = new int[arr.amount];
        this->amount = arr.amount;
        for (int i = 0; i < arr.amount; i++)
        {
            this->arr[i] = arr[i];
        }
        name = arr.name;

        return *this;
    } */

    Array(Array& arr)
    {
        cout << "Copy constructor has been called" << endl;
        this->arr = new int[arr.amount];
        this->name = arr.name;
        this->amount = arr.amount;
        for (int i = 0; i < amount; i++)
        {
            this->arr[i] = arr[i];
        }
    }

    friend ostream& operator << (ostream& out, Array& arr)
    {
        for (int i = 0; i < arr.amount; i++)
        {
            out << arr[i] << " ";
        }
        out << endl;
        return out;
    }

    friend istream& operator >>(istream& in, Array& arr)
    {
        for (int i = 0; i < arr.amount; i++)
        {
            in >> arr[i];
        }
        return in;
    }
};

