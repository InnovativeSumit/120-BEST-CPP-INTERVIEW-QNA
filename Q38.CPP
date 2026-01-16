//OCTAL ==> BINARY
#include <iostream>
using namespace std;
int main() {
    long long octal;
    int decimal = 0, base = 1;
    long long binary = 0, place = 1;
    cout << "Enter an octal number: ";
    cin >> octal;
    // Step 1: Octal to Decimal
    while (octal > 0) {
        int digit = octal % 10;
        decimal += digit * base;
        base *= 8;
        octal /= 10;
    }
    // Step 2: Decimal to Binary
    while (decimal > 0) {
        int rem = decimal % 2;
        binary += rem * place;
        place *= 10;
        decimal /= 2;
    }
    cout << "Binary equivalent: " << binary << endl;
    return 0;
}
