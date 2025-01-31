#include <iostream>
using namespace std;
class B;
class A {
private:
    int dataA;
public:
    A() : dataA(10) {}
    // Declare class B as a friend class, so B can access private members of A
    friend class B;
};
class B {
public:
    void displayData(A &a) {
        // Access private member of class A
        cout << "Data from class A: " << a.dataA << endl;
    }
};
int main() {
    A a;       // Create an object of class A
    B b;       // Create an object of class B
    b.displayData(a); // Class B can access the private data of class A
    return 0;
}
