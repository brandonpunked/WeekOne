#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, result;

    cout << "Enter three integers: ";
    cin >> n1 >> n2 >> n3;

    result = (n1 + n2) * n3;

    cout << "The result is: " << result << endl;

    return 0;
}
