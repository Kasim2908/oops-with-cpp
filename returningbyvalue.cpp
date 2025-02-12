#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) {}

    // Return object by value
    MyClass createNewObject(int v) {
        MyClass newObj(v);
        return newObj;  // Return object by value
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1.createNewObject(20); // Creates and returns a new object
    cout << "Value of obj2: " << obj2.value << endl;
    return 0;
}
