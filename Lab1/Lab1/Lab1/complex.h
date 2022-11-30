#include<functional>
using namespace std;

class complex {
public:
    double first, second;
    complex() {
        first = 0; second = 0;
    }
    complex(double f, double i) {
        first = f; second = i;
    }
    void set();
    void display();

    complex& operator++ () {
        this->first++;
        this->second++;
        return *this;
    }

    complex operator++ (int) {
        complex prev = *this;
        ++* this;
        return prev;
    }

    complex operator + (complex const& obj) {
        complex c1, c2, res;
        res.first = first + obj.first;
        res.second = second + obj.second;
        return res;
    }
  

};



void complex::set() {
    cout << "Enter Real part: ";
    cin >> first;
    cout << "Enter Imaginary Part: ";
    cin >> second;
}

void complex::display() {
    if (second < 0)
        if (second == -1)
            cout << "The complex number is: " << first << "- i" << endl;
        else
            cout << "The complex number is: " << first << second << "i" << endl;
    else
        if (second == 1)
            cout << "The complex number is: " << first << " + i" << endl;
        else
            cout << "The complex number is: " << first << " + " << second << "i" << endl;
}

complex sqr(complex n1) {
    complex res;
    double temp1 = n1.first * n1.first; 
    double temp2 = n1.first * n1.second; 
    double temp3 = n1.first * n1.second; 
    double temp4 = -1 * n1.second * n1.second; 
    res.first = temp1 + temp4; 
    res.second = temp2 + temp3; 
    return res;
}



