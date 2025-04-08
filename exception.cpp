#include <iostream>
#include <stdexcept> 

using namespace std;
void riskyFunction(int value) { // Function that may throw an exception
    if (value < 0) {
        throw runtime_error("Negative value error!");  // No need for std::
    }
    cout << "Value is: " << value << endl;
}
int main() {
    try {
        riskyFunction(10);    // This will work fine
        riskyFunction(-5);    // This will throw an exception
    } catch (const runtime_error& e) {
        cerr << "Caught an exception: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught an unknown exception." << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}
