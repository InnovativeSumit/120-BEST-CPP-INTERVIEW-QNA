//octal=>decimal conversions
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int octal, decimal = 0, i = 0, digit;
    cout << "Enter an octal number: ";
    cin >> octal;
    while (octal != 0) {
        digit = octal % 10;                 // extract last digit
        decimal += digit * pow(8, i);       // multiply by 8^position
        octal /= 10;                        // remove last digit
        i++;
    }
    cout << "Decimal equivalent = " << decimal << endl;
    return 0;
}
