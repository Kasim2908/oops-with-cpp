#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    //input two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate sum of the two numbers
    double sum = num1 + num2;

    //result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
