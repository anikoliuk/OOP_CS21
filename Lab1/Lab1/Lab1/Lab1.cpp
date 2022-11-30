#include <iostream>
#include "complex.h"

using namespace std;

void Task2() {

    cout << "Task 2. Create object number 1: " << endl;
    complex a;
    a.set();

    cout << "Postfix increment: ";
    a++;
    a.display();
    cout << "And prefix: ";
    ++a;
    a.display();

    cout << "Create object number 2" << endl;
    complex b;
    b.set();
    
 
    cout << "Addition for these two objects: ";
    complex result = a + b;
    result.display();

    cout << "Addition for one object and a number: ";
    complex n1(10,2);
    result = a + n1;
    result.display();

    
}



int main() {
    const int SIZE = 5;
    complex n1, result;
    complex n2(-5, 2), n3(2, 3);
    complex arr[SIZE];
    n1.set();
    result = sqr(n1);
    result.display();
    result = sqr(n2);
    result.display();
    result = sqr(n3);
    result.display();
    
    cout << "Array: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Part " << i + 1 << endl;
        arr[i].display();
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Part " << i + 1 << endl;
        arr[i].set();
    }
    cout << "Results: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Part " << i + 1 << endl;
        result = sqr(arr[i]);
        result.display();
    } 

    Task2();

}
