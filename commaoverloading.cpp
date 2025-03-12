#include <iostream>
using namespace std;

class Demo {
public:
    int value;
    
    Demo(int v) : value(v) {}

    // Overloading the comma operator
    Demo operator,(const Demo& obj) {
        return obj; // Returns the rightmost object
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Demo a(10), b(20), c(30);
    
    // Overloaded comma operator
    (a, b, c).display(); // Displays: Value: 30
    return 0;
}
