#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    long long power = 1;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    for(int i = 1; i <= exponent; i++) {
        power = power * base;
    }
    cout << "Power = " << power;
    return 0;
}
