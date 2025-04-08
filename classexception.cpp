#include <iostream>
#include <string>
using namespace std;

// Custom Exception Class
class MyException {
private:
    string message;
public:
    MyException(const string& msg) : message(msg) {}
    string what() const { return message; }
};

// Function that may throw an exception
void riskyFunction(int value) {
    if (value < 0) {
        throw MyException("Negative value error!");  // Throwing a custom exception
    } else if (value == 0) {
        throw MyException("Zero value error!");
    }
    cout << "Value is: " << value << endl;
}

int main() {
    try {
        riskyFunction(10);    // This will work fine
        riskyFunction(-5);    // This will throw a custom exception
    } catch (const MyException& e) {
        cerr << "Caught a custom exception: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught an unknown exception." << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}
