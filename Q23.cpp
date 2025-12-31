// A Perfect Number is a number that is equal to the sum of its
// proper divisors (excluding the number itself).
// Example:
// 6  -> Proper divisors: 1 + 2 + 3 = 6
// 28 -> Proper divisors: 1 + 2 + 4 + 7 + 14 = 28

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n && n != 0) {
        cout << n << " is a Perfect Number";
    } else {
        cout << n << " is Not a Perfect Number";
    }

    return 0;
}

