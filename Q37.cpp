#include <iostream>
using namespace std;
int main() {
    long long binary;
    int decimal = 0, octal = 0, base = 1;
    cout << "Enter a binary number: ";
    cin >> binary;
    // Binary to Decimal
    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }
    // Decimal to Octal
    base = 1;
    while (decimal > 0) {
        int digit = decimal % 8;
        octal += digit * base;
        base *= 10;
        decimal /= 8;
    }
    cout << "Octal number: " << octal << endl;
    return 0;
}
