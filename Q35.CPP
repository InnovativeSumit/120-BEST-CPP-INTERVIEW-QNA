// Decimal to Octal
#include <iostream>
using namespace std;

int main() {
    int decimal, octal = 0, place = 1, remainder;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal != 0) {
        remainder = decimal % 8;
        octal = octal + remainder * place;
        decimal = decimal / 8;
        place = place * 10;
    }

    cout << "Octal equivalent: " << octal;
    return 0;
}
