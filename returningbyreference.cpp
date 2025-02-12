#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) {}

    // Return object by reference
    MyClass& getObject() {
        return *this;  // Returning reference to the current object
    }
};

int main() {
    MyClass obj1(10);
    MyClass& obj2 = obj1.getObject(); // Reference to obj1
    cout << "Value of obj2: " << obj2.value << endl;
    return 0;
}
