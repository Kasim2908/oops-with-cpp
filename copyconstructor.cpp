#include <iostream>
using namespace std;

class Car {
    string brand;
    int year;

public:
    // Parameterized constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    // Copy constructor
    Car(const Car &c) {
        brand = c.brand;
        year = c.year;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota", 2020); // Original object
    Car car2 = car1; // Copy constructor is called

    car1.display();
    car2.display();

    return 0;
}
