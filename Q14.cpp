#include <iostream>
using namespace std;

int sumRecursion(int n) {
    if (n == 0) 
        return 0;  
    return n + sumRecursion(n - 1);  
}

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers using for loop: " << sum << endl;

    
    int recursiveSum = sumRecursion(n);
    cout << "Sum of first " << n << " natural numbers using recursion: " << recursiveSum << endl;

    return 0;
}
