// Friendly Pair Numbers are two numbers whose ratio of the sum of their
// proper divisors to the number itself is equal.
// In other words, for two numbers a and b:
// (Sum of proper divisors of a) / a  =  (Sum of proper divisors of b) / b
// Example:
// 6 and 28
// Proper divisors of 6  = 1 + 2 + 3 = 6  →  6/6 = 1
// Proper divisors of 28 = 1 + 2 + 4 + 7 + 14 = 28 → 28/28 = 1

#include <iostream>
using namespace std;
int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sumA = sumOfDivisors(a);
    int sumB = sumOfDivisors(b);

    if (sumA == b && sumB == a)
        cout << "The numbers are a Friendly Pair."; //220 and 284
    else
        cout << "The numbers are NOT a Friendly Pair.";

    return 0;
}

