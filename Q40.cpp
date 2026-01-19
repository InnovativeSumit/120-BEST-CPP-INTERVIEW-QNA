#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    long long N;
    cout << "Enter N: ";
    cin >> N;
    int count = 0;

    // Case 1: p^8
    for(long long p = 2; pow(p, 8) <= N; p++)
    {
        if(isPrime(p))
            count++;
    }
    // Case 2: p^2 * q^2
    for(long long p = 2; p * p * p * p <= N; p++)
    {
        if(isPrime(p))
        {
            for(long long q = p + 1; p * p * q * q <= N; q++)
            {
                if(isPrime(q))
                    count++;
            }
        }
    }
    cout << "Total numbers with exactly 9 divisors = " << count << endl;
    return 0;
}
