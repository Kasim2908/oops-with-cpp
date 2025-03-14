#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void show() {   // Virtual function enables late binding
        cout << "Base class show() called" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() override {  // Override the base class function
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Base* ptr;       // Base class pointer
    Derived obj;     // Derived class object

    ptr = &obj;      // Pointer points to derived class object
    ptr->show();     // Late binding happens here

    return 0;
}
