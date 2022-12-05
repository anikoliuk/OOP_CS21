#pragma once
using namespace std;
class Triangle {
private:
    int a;
    int b;
    int angle;
public:

    Triangle(int a = 10, int b = 16, int angle = 45) {
        this->a = a;
        this->b = b;
        this->angle = angle;
    }

    void SetAngel(int angle) {
        this->angle = angle;
    }

    void GetInfo() {
        cout << "Info from Base" << endl;
        cout << "Square:" << GetSquare() << endl << "Perimeter:" << Perimeter() << endl << endl;
    }


    virtual double GetSquare() {
        cout << "Square Method from base" << endl;
        return (a * b * sin(angle)) / 2;
    }

    virtual double Perimeter() {
        cout << "Perimeter Method from base" << endl;
        return a + b + sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(angle));
    }

};
