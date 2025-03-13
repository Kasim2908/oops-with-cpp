#include <iostream>
using namespace std;

// Abstract class with a pure virtual function
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    void info() {
        cout << "This is a shape.\n";
    }
};

class Circle : public Shape {
public:
    void draw() override {  // Implementation of pure virtual function
        cout << "Drawing a Circle.\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() override {  // Implementation of pure virtual function
        cout << "Drawing a Rectangle.\n";
    }
};

int main() {
    // Shape obj;  // Error: Cannot instantiate abstract class

    Shape* s1;    // Base class pointer
    Circle c;
    Rectangle r;

    s1 = &c;
    s1->draw();   // Calls Circle's draw()

    s1 = &r;
    s1->draw();   // Calls Rectangle's draw()

    return 0;
}
