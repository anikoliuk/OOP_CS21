#include <iostream>
#include <cmath>

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


    double GetSquare() {
        return (a * b * sin(angle)) / 2;
    }

    double Perimeter() {
        return a + b + sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(angle));
    }

};



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
        return a * b / 2;
    }

    double Perimeter() {
        return a + b + sqrt(pow(a, 2) + pow(b, 2));
    }
};


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
        return (pow(a, 2) * sqrt(3)) / 4;
    }

    double Perimeter() {
        return 3 * a;
    }


};



int main(int argc, const char* argv[]) {

    Triangle a;
    a.GetInfo();
    RightTriangle b;
    a = b;
    a.GetInfo();
    RegularTriangle c;
    a = c;
    a.GetInfo();
    return 0;
}






// task 3-5

/*
int main(int argc, const char* argv[]) {
    const int SIZE = 5;
    Triangle* arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        bool condition = i % 2 == 0 ? true : false;
        RegularTriangle a(i + 3);
        RightTriangle b(i + 9);
        if (condition) {
            arr[i] = &a;
        }
        else {
            arr[i] = &b;
        }
    }

    for (int i = 0; i < SIZE; i++) {
        arr[i]->GetInfo();
    }

    return 0;
}
*/