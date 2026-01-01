/*
Definition of Harshad Number (Niven Number):
A number is called a Harshad Number if it is divisible
by the sum of its digits.
Example:
18 → sum of digits = 1 + 8 = 9
18 is divisible by 9, so 18 is a Harshad Number.
*/
#include <iostream>
using namespace std;
int main() {
    int n, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (sum != 0 && n % sum == 0)
        cout << n << " is a Harshad Number";
    else
        cout << n << " is NOT a Harshad Number";

    return 0;
}
