#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter a character:- ";
    cin >> a;
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        cout << a << " this is a vowel " << endl;
    }
    else
    {
        cout << a << " this is a consonants " << endl;
    }
    return 0;
}