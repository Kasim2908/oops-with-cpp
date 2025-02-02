#include <iostream>
using namespace std;

class MyClass {
public:
    static int count; // Static member
    MyClass() {
        count++; // Increment count when an object is created
    }
    static void displayCount() { // Static member function
        cout << "Object count: " << count << endl;
    }
};
int MyClass::count = 0;

int main() {
    MyClass obj1; // Creating an object of MyClass
    MyClass obj2; // Another object of MyClass
    MyClass::displayCount(); // Accessing the static function using class name
    MyClass obj3; // Another object of MyClass
    MyClass::displayCount(); // Display count again after creating another object
    return 0;
}
