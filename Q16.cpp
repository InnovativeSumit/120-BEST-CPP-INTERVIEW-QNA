#include <iostream>
using namespace std;
long long fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Factorial using for loop
    long long factorialFor = 1;
    for (int i = 1; i <= num; i++) {
        factorialFor *= i;
    }
    long long factorialRec = fact(num);

    cout << "Factorial of " << num << " using for loop: " << factorialFor << endl;
    cout << "Factorial of " << num << " using recursion: " << factorialRec << endl;

    return 0;
}
