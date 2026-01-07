// replace all zeros in an integer with ones
#include <iostream>
using namespace std;

int main() {
    long long n, result = 0, place = 1;

    cout << "Enter an integer: ";
    cin >> n;

    // Special case: if number itself is 0
    if (n == 0) {
        cout << "Result: 1";
        return 0;
    }

    while (n > 0) {
        int digit = n % 10;

        if (digit == 0)
            digit = 1;

        result = digit * place + result;
        place *= 10;
        n /= 10;
    }

    cout << "Result: " << result;
    return 0;
}
