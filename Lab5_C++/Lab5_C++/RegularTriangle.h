#include "Triangle.h"
#pragma once
using namespace std;


class RegularTriangle : public Triangle {

private:
    int a;
    const int angle = 60;

public:

    RegularTriangle(int a = 15) {
        this->a = a;
    }

    void GetInfo() {
        cout << "Info from Regular" << endl;
        cout << "Square:" << GetSquare() << endl << "Perimeter:" << Perimeter() << endl << endl;
    }


    double GetSquare() {
        cout << "Square Method from Regular" << endl;
        return (pow(a, 2) * sqrt(3)) / 4;
    }

    double Perimeter() {
        cout << "Perimeter Method from Regular" << endl;
        return 3 * a;
    }
};

void Task2(Triangle* a) {
    a->GetInfo();
}
