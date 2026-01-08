// Binary ==> decimal conversion
#include <iostream>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, base = 1, lastDigit;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        lastDigit = binary % 10;
        decimal = decimal + lastDigit * base;
        base = base * 2;
        binary = binary / 10;
    }

    cout << "Decimal equivalent: " << decimal;
    return 0;
}
