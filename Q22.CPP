// A Strong Number is a number in which the sum of the factorial
// of each digit is equal to the number itself.
// Example:
// 145 -> 1! + 4! + 5! = 1 + 24 + 120 = 145
// 2   -> 2! = 2

#include <iostream>
using namespace std;

int main() {
    int num, original, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    original = num;

    while (num > 0) {
        digit = num % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == original)
        cout << original << " is a Strong number.";
    else
        cout << original << " is NOT a Strong number.";

    return 0;
}

