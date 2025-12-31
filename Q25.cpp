// An Automorphic Number is a number whose square ends with the same digits
// as the number itself.
// Example:
// 5  -> 5^2  = 25   (ends with 5)
// 6  -> 6^2  = 36   (ends with 6)
// 76 -> 76^2 = 5776 (ends with 76)

#include <iostream>
using namespace std;
int main() {
    long long n, square;
    cout << "Enter a number: ";
    cin >> n;
    square = n * n;
    long long temp = n;
    bool isAutomorphic = true;
    while (temp > 0) {
        if (temp % 10 != square % 10) {
            isAutomorphic = false;
            break;
        }
        temp /= 10;
        square /= 10;
    }
    if (isAutomorphic)
        cout << n << " is an Automorphic number." << endl;
    else
        cout << n << " is NOT an Automorphic number." << endl;
    return 0;
}
