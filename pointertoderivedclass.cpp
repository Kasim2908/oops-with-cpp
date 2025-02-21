#include <iostream>
using namespace std;
// Base class
class Base {
public:
    virtual void show() {  // Virtual function to demonstrate polymorphism
        cout << "Base class show function" << endl;
    }
};
// Derived class
class Derived : public Base {
public:
    void show() override {  // Override the show function in the derived class
        cout << "Derived class show function" << endl;
    }
};
int main() {
    Base* basePtr; // Create a base class pointer to a derived class object
    Derived derivedObj; // Create an object of Derived class
    basePtr = &derivedObj; // Point to the Derived class object
    // Call the show function using base class pointer
    basePtr->show();  // This will call Derived class's show function because of polymorphism

    return 0;
}
