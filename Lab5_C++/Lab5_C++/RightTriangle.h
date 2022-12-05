#include "Triangle.h"
#pragma once
using namespace std;

class RightTriangle : public Triangle {

private:
    int a;
    int b;
    const int angle = 90;
public:

    RightTriangle(int a = 10, int b = 16) {
        this->a = a;
        this->b = b;
    }

    void GetInfo() {
        cout << "Info from Right" << endl;
        cout << "Square:" << GetSquare() << endl << "Perimeter:" << Perimeter() << endl << endl;
    }


    double GetSquare() {
        cout << "Square Method from Right" << endl;
        return a * b / 2;
    }

    double Perimeter() {
        cout << "Perimeter Method from Right" << endl;
        return a + b + sqrt(pow(a, 2) + pow(b, 2));
    }
};
