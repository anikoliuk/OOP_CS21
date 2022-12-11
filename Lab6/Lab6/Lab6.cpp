#include <iostream>
using namespace::std;

//Task1
class A {
public:
    int a;
    A() {
        a = 9;
        cout << "Constructor A has been called" << endl;
    }

    ~A() {
        cout << "Destructor A has been called" << endl;
    }
};

class B : public A {
public:
    int b;
    B() {
        b = 3;
        cout << "Constructor B has been called" << endl;
    }

    ~B() {
        cout << "Destructor B has been called" << endl;
    }
};

class C : public B {
public:
    int c;
    C() {
        c = 6;
        cout << "Constructor C has been called" << endl;
    }

    ~C() {
        cout << "Destructor C has been called" << endl;
    }
};

void T1() {
    C c;
}
//Task1


//Task2
class Y {
public:
    Y() { cout << "Y" << endl; }
    ~Y() { cout << "Destructor Y has been called" << endl; }
};

class Z {
public:
    Z() { cout << "Z" << endl; }
    ~Z() { cout << "Destructor Z has been called" << endl; }
};

class X : public Z {
private:
    Y objY;
public:
    X() { cout << "X" << endl; }
    ~X() { cout << "Destructor X has been called" << endl; }
};

void T2() {
    X x;
}
//Task2


//Task3
class A3 {
public:
    int a;
    A3() {
        a = 9;
        cout << "Constructor A has been called" << endl;
    }

    ~A3() {
        cout << "Destructor A has been called" << endl;
    }
};

class B3 {
public:
    int b;
    B3() {
        b = 3;
        cout << "Constructor B has been called" << endl;
    }

    ~B3() {
        cout << "Destructor B has been called" << endl;
    }
};

class C3 : public A3, public B3 {
public:
    int c;
    C3() {
        c = 6;
        cout << "Constructor C has been called" << endl;
    }

    ~C3() {
        cout << "Destructor C has been called" << endl;
    }
};

void T3() {
    C3 c;
}
//Task3



//Task4
class A1 {
public:
    int a1;
    A1() {
        a1 = 9;
        cout << "Constructor A1 has been called" << endl;
    }

    ~A1() {
        cout << "Destructor A1 has been called" << endl;
    }
};

class A4 : virtual public A1 {
public:
    int a;
    A4() {
        a = 9;
        cout << "Constructor A has been called" << endl;
    }

    ~A4() {
        cout << "Destructor A has been called" << endl;
    }
};

class B4 : virtual public A1 {
public:
    int b;
    B4() {
        b = 3;
        cout << "Constructor B has been called" << endl;
    }

    ~B4() {
        cout << "Destructor B has been called" << endl;
    }
};

class C4 : public A4, public B4 {
public:
    int c;
    C4() {
        c = 6;
        cout << "Constructor C has been called" << endl;
    }

    ~C4() {
        cout << "Destructor C has been called" << endl;
    }

    void Test() {
        a1 = 9;
    }
};

void T4() {
    C4 c;
}
//Task4


//Task5

class base {
public:
    base() {
        cout << "Constructor base without parameters has been called" << endl;
    }

    base(int a) {
        cout << "Constructor base with parameters has been called" << endl;
    }

    ~base() {
        cout << "Destructor base has been called" << endl;
    }
};
class base2 {
public:
    base2() {
        cout << "Constructor base2 without parameters has been called" << endl;
    }

    base2(int a) {
        cout << "Constructor base2 with parameters has been called" << endl;
    }

    ~base2() {
        cout << "Destructor base2 has been called" << endl;
    }
};
class level1 : public base2, virtual public base {
public:
    level1() {
        cout << "Constructor level1 without parameters has been called" << endl;
    }

    level1(int a) {
        cout << "Constructor level1 with parameters has been called" << endl;
    }

    ~level1() {
        cout << "Destructor level1 has been called" << endl;
    }
};
class level2 : public base2, virtual public base {
public:
    level2() {
        cout << "Constructor level2 without parameters has been called" << endl;
    }

    level2(int a) {
        cout << "Constructor level2 with parameters has been called" << endl;
    }

    ~level2() {
        cout << "Destructor level2 has been called" << endl;
    }
};
class toplevel : public level1, virtual public level2 {
public:
    toplevel() {
        cout << "Constructor toplevel without parameters has been called" << endl;
    }

    toplevel(int a) {
        cout << "Constructor toplevel with parameters has been called" << endl;
    }

    ~toplevel() {
        cout << "Destructor toplevel has been called" << endl;
    }
};

void T5() {
    toplevel one(5);
}
//Task5

//Task 6
class B1 {
protected:
    int a;
public:
    static void MethodB1() {
        cout << "Method from B1 has been called" << endl;
    }
    B1() {
        cout << "Constructor B1 has been called" << endl;
    }

    ~B1() {
        cout << "Destructor B1 has been called" << endl;
    }
};

class B2 {
protected:
    int b;
public:
    static void MethodB2() {
        cout << "Method from B2 has been called" << endl;
    }

    B2() {
        cout << "Constructor B2 has been called" << endl;
    }

    ~B2() {
        cout << "Destructor B2 has been called" << endl;
    }
};

class D1 : private B1, public B2 {
public:
    D1() {
        cout << "Constructor D1 has been called" << endl;
    }

    ~D1() {
        cout << "Destructor D1 has been called" << endl;
    }

    void TestAcces() {
        a = 5;
        b = 3;
    }
};

class D2 : public B1, private B2 {
public:

    D2() {
        cout << "Constructor D2 has been called" << endl;
    }

    ~D2() {
        cout << "Destructor D2 has been called" << endl;
    }

    void TestAcces() {
        a = 5;
        b = 3;
    }
};

class D3 : private D1, public D2 {
public:

    D3() {
        cout << "Constructor D3 has been called" << endl;
    }

    ~D3() {
        cout << "Destructor D3 has been called" << endl;
    }

    void TestAcces() {
        //a = 5;
        //b = 3;
    }
};

void TestCD() {
    D3 d;
}

void T6() {
    TestCD();
    cout << "\n\n\n\n\n";
    B1 b1;
    B2 b2;
    D1 d1;
    D2 d2;
    D3 d3;

    b1.MethodB1();
    b2.MethodB2();

    d1.MethodB2();
    //d1.MethodB1();

    d2.MethodB1();
    //d2.MethodB2();

    d3.MethodB1();
    //d3.MethodB2();
}
//Task 6

int main(int argc, const char* argv[]) {
    T1();
    T2();
    T3();
    T4();
    T5();
    T6();

    return 0;
}
