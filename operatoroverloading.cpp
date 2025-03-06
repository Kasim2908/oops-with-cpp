#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5), c2(1.5, 4.5);
    Complex c3 = c1 + c2; // Using overloaded + operator

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c3 = c1 + c2 = "; c3.display();

    return 0;
}
