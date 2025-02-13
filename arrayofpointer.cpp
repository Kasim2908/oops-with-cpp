#include <iostream>
using namespace std;
int main() {
    int *arr[3]; // Declare an array of pointers to integers
    int num1 = 10, num2 = 20, num3 = 30; // Declare individual integer variables
    arr[0] = &num1;
    arr[1] = &num2;
    arr[2] = &num3;
    // Access the values using the array of pointers
    cout << "Value of num1: " << *arr[0] << endl;
    cout << "Value of num2: " << *arr[1] << endl;
    cout << "Value of num3: " << *arr[2] << endl;
    return 0;
}
