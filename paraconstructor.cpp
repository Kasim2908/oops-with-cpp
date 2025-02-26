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

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota", 2020);  // Passing values
    Car car2("Ford", 2018);

    car1.display();
    car2.display();

    return 0;
}
