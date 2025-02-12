#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) {}

    // Return object by pointer
    MyClass* createObject(int v) {
        MyClass* newObj = new MyClass(v);  // Dynamically allocate memory
        return newObj;
    }
};

int main() {
    MyClass obj1(10);
    MyClass* obj2 = obj1.createObject(20); // Dynamically created object
    cout << "Value of obj2: " << obj2->value << endl;
    delete obj2; // Don't forget to delete dynamically allocated memory
    return 0;
}
