// An Armstrong Number is a number that is equal to the sum of its own digits
// each raised to the power of the total number of digits.
// Example:
// 153 -> 1^3 + 5^3 + 3^3 = 153
// 370 -> 3^3 + 7^3 + 0^3 = 370

#include <iostream>
using namespace std;

int main() {
    int num, original, digit, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    // Armstrong calculation
    temp = num;
    while (temp > 0) {
        digit = temp % 10;

        int power = 1;
        for (int i = 1; i <= digits; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (original == sum) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is NOT an Armstrong number." << endl;
    }

    return 0;
}

