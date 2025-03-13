#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show() called" << endl;
    }
    
    void display() {  // Non-virtual function
        cout << "Base class display() called" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Override virtual function
        cout << "Derived class show() called" << endl;
    }
    
    void display() {  // Redefines the non-virtual function
        cout << "Derived class display() called" << endl;
    }
};

int main() {
    Base* ptr;        // Base class pointer
    Derived obj;      // Derived class object

    ptr = &obj;

    ptr->show();      // Calls Derived's show() (Dynamic binding)
    ptr->display();   // Calls Base's display() (Static binding)

    return 0;
}
