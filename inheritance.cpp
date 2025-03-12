#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    void show() {
        cout << "This is the Parent class." << endl;
    }
};

// Derived class inheriting Parent
class Child : public Parent {
public:
    void display() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child obj;
    obj.show();    // Accessing base class method
    obj.display(); // Accessing derived class method
    return 0;
}
