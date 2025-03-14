#include <iostream>
using namespace std;

// Base class
class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

// Class B and C inherit virtually from class A
class B : virtual public A {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

// Class D inherits from both B and C
class D : public B, public C {
public:
    void displayD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.show();      // Resolves ambiguity caused by multiple inheritance
    obj.displayB();
    obj.displayC();
    obj.displayD();
    return 0;
}
