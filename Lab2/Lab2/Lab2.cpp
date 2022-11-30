#include <iostream>
#include "Array.h"


void lab2()
{
	const unsigned int SIZE_A = 10;
	const unsigned int SIZE_B = 10;
	const unsigned int SIZE_D = 10;


	Array A("A", SIZE_A), B("B", SIZE_B);
	cout << A << B << "Enter values for A array:\n";
	cin >> A;
	Array C = A;
	cout << "C array:" << C << endl;
	C.next();
	cout << "C had called next()" << endl;

	cout << C;

	Array D("D", 3);
	D.display();
	D = A * B;
	cout << "D array: ";
	D.display();
	cout << "A array: " << endl;
	A.display();
	cout << "B array: " << endl;
	B.display();

}

int main()
{
	lab2();

}
