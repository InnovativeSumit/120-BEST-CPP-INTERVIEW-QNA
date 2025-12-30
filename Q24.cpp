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
