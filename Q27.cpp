// Definition of Abundant Number:
// An Abundant Number is a number whose sum of proper divisors
// (divisors excluding the number itself) is greater than the number.
// Example: 12 → Proper divisors = 1, 2, 3, 4, 6 → Sum = 16 > 12
// Hence, 12 is an Abundant Number.

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;  
        }
    }
    if (sum > n)
    {
        cout << n << " is an Abundant number." << endl;
    }
    else
    {
        cout << n << " is NOT an Abundant number." << endl;
    }

    return 0;
}
