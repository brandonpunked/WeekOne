#include <iostream>
using namespace std;

int main() {
    double num1, num2, sum, product, difference;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Difference: " << difference << endl;

    return 0;
}
