#include <iostream>
using namespace std;
// Function to calculate GCD
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Function to calculate LCM
long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b); // that the dirmula to calculates the lcm using gcd
}

int main()
{
    long long num1, num2;
    cout << "Enter 1st numbers: ";
    cin >> num1;
    cout << "Enter 2nf numbers: ";
    cin >> num2;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;

    return 0;
}
