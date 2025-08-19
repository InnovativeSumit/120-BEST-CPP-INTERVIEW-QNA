// Check a number is Positive no or Negetive no
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num==0)
    {
        cout << num << "is  neither Positive no nor Negetive no" << endl;
    }
    else if ( num > 0)
    {
        cout << num << " is a Positive no" << endl;
    }
    else{
        cout << num << " is a  Negetive no" << endl;
    }

    return 0;
}
