#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cout << "Enter a character: ";
    cin >> a;
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        cout << a << " is an alphabet." << endl;
    }
    else
    {
        cout << a << " is NOT an alphabet." << endl;
    }

    return 0;
}
